
using FireSharp;
using FireSharp.Config;
using FireSharp.Interfaces;
using FireSharp.Response;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Drawing;
using System.Dynamic;
using System.Linq.Expressions;
using System.Runtime.InteropServices;
using System.Threading;

internal class Program
{
    static int ID;
    static string upid = "";

    static IFirebaseConfig config = new FirebaseConfig
    {
        AuthSecret = "FLjI5V6UQEz7s9JBdizIfBJ0cSLcbQT6o6hoCxD6",
        BasePath = "https://practica-eb746-default-rtdb.firebaseio.com/"
    };
    public static async Task idG() 
    {
        int min = 1000;
        int max = 9999;

        Random rnd = new Random();
        int id = rnd.Next(min, max + 1);
        ID = id;
        verificarID().Wait();
    }
    static IFirebaseClient client;
    public static async Task verificarID()
    {
        FirebaseResponse responses = await client.GetTaskAsync("/Partidas");
        string Body = responses.Body;
        int size = Body.Length;
        int id = ID;
        char[] IDV;
        IDV = new char[4];
        int v = 0;
        for (int i = 0; i < size; i++)
        {
            if (Body[i] == '*')
            {
                int s = 0;
                for (int A = i+1; A < size; A++)
                {
                    if(Body[A] == '*') 
                    {
                        string D = new string(IDV);
                        int numVal = Int32.Parse(D);
                        if (numVal == id) 
                        {
                            i =size;
                            A = size;
                            v++;
                        }
                        else 
                        {
                            i = A + 1;
                            A = size;
                        }
                       
                        
                    }
                    else 
                    { 
                        IDV[s] = Body[A];  
                        s++;
                    }

                }
            }
        }
        if (v != 0) 
        {
            idG().Wait();
        }
        else 
        {
            CrearPartida().Wait();
        }

    }
    public  static async  Task  verificarIDup(int d)
    {
        FirebaseResponse responses = await client.GetTaskAsync("/Partidas");
        string Body = responses.Body;
        int size = Body.Length;
        int id = d;
        char[] IDV;
        IDV = new char[4];
        int v = 0;
        for (int i = 0; i < size; i++)
        {
            if (Body[i] == '*')
            {
                int s = 0;
                for (int A = i + 1; A < size; A++)
                {
                    if (Body[A] == '*')
                    {
                        string D = new string(IDV);
                        int numVal = Int32.Parse(D);
                        if (numVal == id)
                        {
                            i = size;
                            A = size;
                            upid = D;
                        }
                        else
                        {
                            i = A + 1;
                            A = size;
                        }


                    }
                    else
                    {
                        IDV[s] = Body[A];
                        s++;
                    }

                }
            }
        }

    }

    public static async Task CrearPartida()
    {
        var DatosPartida = new Datos
        {
            Jugadores = 1,
            Tablero = "000000000"
        };
        string IDPARTIDA = "*"+ID.ToString()+"*";
        SetResponse response = await client.SetTaskAsync("Partidas/"+ IDPARTIDA, DatosPartida);
        configtxt(ID.ToString(), DatosPartida.Jugadores.ToString(), DatosPartida.Tablero,1).Wait();

    }

    public static async Task configtxt(string C ,string Jugadores,string tablero,int V) 
    {
        string direccion = "C:\\Users\\leona\\OneDrive\\Documentos\\ProyectosVisual\\ESTRUCTURAS DE DATOS Y ALGORITMOS II\\config.txt";
        var configred = new StreamReader(direccion);
        string config = configred.ReadToEnd();
        int size = config.Length;
        char[] charconfig = config.ToCharArray();
        char[] charJ = Jugadores.ToCharArray();
        char[] charArr = C.ToCharArray();
        char[] charT = tablero.ToCharArray();
        configred.Close();
        switch (V)
        {
            case 1:
                for (int i = 0; i < size; i++)
                {
                    if (config[i] == 'C')
                    {

                        for (int A = i + 1; A < size; A++)
                        {
                            if (config[A] == '[')
                            {
                                int s = 0;

                                for (int B = A + 1; B < size; B++)
                                {
                                    if (config[B] == ']')
                                    {

                                        B = size;
                                        A = size;
                                        i = size;

                                    }
                                    else
                                    {

                                        charconfig[B] = charArr[s];
                                        s++;


                                    }

                                }

                            }

                        }
                    }
                }
                charconfig[12] = charJ[0];
                string texto = new string(charconfig);
                var writer = new StreamWriter(File.OpenWrite(direccion));
                writer.Write(texto);
                writer.Close();

                break;

            case 2:
                charconfig[12] = charJ[0];
                string textoj = new string(charconfig);
                var writerj = new StreamWriter(File.OpenWrite(direccion));
                writerj.Write(textoj);
                writerj.Close();
                break;

            case 3:
                for (int i = 0; i < size; i++)
                {
                    if (config[i] == 'T')
                    {

                        for (int A = i + 1; A < size; A++)
                        {
                            if (config[A] == '[')
                            {
                                int s = 0;

                                for (int B = A + 1; B < size; B++)
                                {
                                    if (config[B] == ']')
                                    {

                                        B = size;
                                        A = size;
                                        i = size;

                                    }
                                    else
                                    {

                                        charconfig[B] = charT[s];
                                        s++;


                                    }

                                }

                            }

                        }
                    }
                }
                string charsStrr = new string(charconfig);
                string textot = new string(charconfig);
                var writert = new StreamWriter(File.OpenWrite(direccion));
                writert.Write(textot);
                writert.Close();
                break;

        }
       
    }
    public static async Task UPData()
    {
        string direccion = "C:\\Users\\leona\\OneDrive\\Documentos\\ProyectosVisual\\ESTRUCTURAS DE DATOS Y ALGORITMOS II\\config.txt";
        var configred = new StreamReader(direccion);
        string config = configred.ReadToEnd();
        int size = config.Length;
        char[] charconfig = config.ToCharArray();
        configred.Close();
        char [] idc = new char[4];
        for (int i = 0; i < size; i++)
        {
            if (config[i] == 'C')
            {

                for (int A = i + 1; A < size; A++)
                {
                    if (config[A] == '[')
                    {
                        int s = 0;

                        for (int B = A + 1; B < size; B++)
                        {
                            if (config[B] == ']')
                            {

                                B = size;
                                A = size;
                                i = size;

                            }
                            else
                            {

                                idc[s] = charconfig[B];
                                s++;


                            }

                        }

                    }

                }
            }
        }
        string D = new string(idc);
        int numVal = Int32.Parse(D);
        verificarIDup(numVal).Wait();
        if(upid != "")
        {
            var DatosPartida = new Datos
            {
                Jugadores = 2,
                Tablero = "000000000"

            };
            string id = "*" + upid + "*";
            FirebaseResponse responsed = await client.UpdateTaskAsync("Partidas/"+id, DatosPartida);
            configtxt("0","2","0",2).Wait(); 

        }
        else 
        {
         
        }

    }
    public static async Task uptableoro() 
    {
        string direccion = "C:\\Users\\leona\\OneDrive\\Documentos\\ProyectosVisual\\ESTRUCTURAS DE DATOS Y ALGORITMOS II\\config.txt";
        var configred = new StreamReader(direccion);
        string config = configred.ReadToEnd();
        int size = config.Length;
        char[] charconfig = config.ToCharArray();
        configred.Close();
        char[] idc = new char[4];
        for (int i = 0; i < size; i++)
        {
            if (config[i] == 'C')
            {

                for (int A = i + 1; A < size; A++)
                {
                    if (config[A] == '[')
                    {
                        int s = 0;

                        for (int B = A + 1; B < size; B++)
                        {
                            if (config[B] == ']')
                            {

                                B = size;
                                A = size;
                                i = size;

                            }
                            else
                            {

                                idc[s] = charconfig[B];
                                s++;


                            }

                        }

                    }

                }
            }
        }
        string IDPARTIDA = "*" + new string(idc) + "*";
        string url = "/Partidas"+"/"+IDPARTIDA+"/Tablero";
        FirebaseResponse responses = await client.GetTaskAsync(url);
        string tablerof = responses.Body;
        Console.WriteLine(tablerof);
        string url2 = "/Partidas" + "/" + IDPARTIDA + "/Jugadores";
        FirebaseResponse responsess = await client.GetTaskAsync(url2);
        string j = responsess.Body;
        string e = limpiar(tablerof);
        string nj = limpiar(j);
        Console.WriteLine(nj);


        configtxt("0", "0",e, 3).Wait();
        configtxt("0", nj, "0", 2).Wait();



        //SetResponse response = await client.SetTaskAsync("Partidas/" + IDPARTIDA, DatosPartida);

    }
    public static string limpiar(string a) 
    {
        string txt;
        int ww;
        ww = a.Length;
        char []c = new char[ww];
        int s = 0;
        for (int i =0; i < ww; i++)  
        {
            if (a[i] == '0' || a[i] == '1' || a[i] == '2') 
            {
                c[s] = a[i];
                s++;
            }
        }
        txt = new string(c);
        return txt;
    
    }

    private static void TimerCallback(Object o)
    {
        uptableoro().Wait();
    }
    static void Main(string[] args)
    {
      
        client = new FireSharp.FirebaseClient(config);
        string direccion = "C:\\Users\\leona\\OneDrive\\Documentos\\ProyectosVisual\\ESTRUCTURAS DE DATOS Y ALGORITMOS II\\config.txt";
        var configred = new StreamReader(direccion);
        string configtxt = configred.ReadToEnd();
        char i = configtxt[0];
        int V = (int)Char.GetNumericValue(i);
        configred.Close();
        switch (V)
        {
            case 1:
                idG().Wait();
                break;
            case 2:
                UPData().Wait();
                break;
            case 3:
                Timer t = new Timer(TimerCallback, null, 0, 9000);
                Console.ReadLine();
                break;
        }
        //Timer t = new Timer(TimerCallback, null, 0, 1000);
        System.Environment.Exit(0);


    }


   
}

internal class Datos
{
    public int Jugadores { get; set; }
    public string Tablero { get; set; }
}