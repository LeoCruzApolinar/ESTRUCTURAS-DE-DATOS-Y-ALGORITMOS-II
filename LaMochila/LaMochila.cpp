#include <iostream>
#include <algorithm>

using namespace std;
/*


    Enunciado:

    Una mochila puede soportar un peso máximo de 100Kgs. Acepte los paquetes posibles y que
    forman parte de la restricción del problema de forma que obtenga un beneficio máximo.

    PESO PAQUETE | 10 20 30 40 50
    BENEFICIO    | 20 30 65 40 60


    NOTA:   A. No se debe sobrepasar el umbral del soporte de la mochila (100Kgr).
            B. Si puede fraccionar el espacio que queda en la mochila realícelo.



       dynamic programming

    i: el índice del paquete actual
    j: el peso máximo de la mochila
    peso[]: la matriz de pesos de los paquetes
    beneficio[]: la matriz de beneficios de los paquetes
    n: el número de paquetes
    m: el peso máximo que puede soportar la mochila




*/



// Función para calcular el beneficio máximo que podemos obtener
// utilizando los primeros paquetes "i" y una mochila con un peso máximo de "j"
int maxBenefit(int i, int j, int peso[], int beneficio[], int n, int m)
{
    // si hemos llegado al final de la lista de paquetes o
    // el peso maximo de la mochila es 0, devuelve 0
    if (i == n || j == 0)
        return 0;

    // si el peso del paquete actual es mayor que el peso máximo de la mochila
    // no podemos recoger este paquete, por lo tanto, devuelva el máximo beneficio sin recoger este paquete
    if (j < peso[i])
        return maxBenefit(i + 1, j, peso, beneficio, n, m);

    // retorna el maximo de dos opciones:
    // 1. toma el paquete actual y agregue su beneficio al beneficio máximo que podemos obtener 
    //    al usar los paquetes restantes y el peso restante en la mochila
    // 2. no toma el paquete actual y usa los paquetes restantes y el mismo
    //    peso máximo para la mochila

    return max(beneficio[i] + maxBenefit(i + 1, j - peso[i], peso, beneficio, n, m),
        maxBenefit(i + 1, j, peso, beneficio, n, m));
}



int main()
{
    // numero de paquetes
    int n = 5;

    // array de pesos de los paquetes
    int peso[] = { 10, 20, 30, 40, 50 };

    // array de beneficios de de los paquetes
    int beneficio[] = { 20, 30, 65, 40, 60 };

    // peso máximo que puede soportar la mochila
    int m = 100;

    // cout del beneficio máximo que podemos obtener usando los primeros "n" paquetes
    // y una mochila con un peso máximo "m"
    cout << "Beneficio maximo: " << maxBenefit(0, m, peso, beneficio, n, m);

    return 0;
}