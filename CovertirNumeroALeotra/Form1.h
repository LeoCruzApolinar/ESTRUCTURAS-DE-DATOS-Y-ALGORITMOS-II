#pragma once
/*
Enunciado    :    De numeros a letras 
Equipo       :
Participantes:    Victor Santos	         ID:  1105977
                  Alexa  Guzmán          ID:  1101488
                  José L. Cruz           ID:  1106529
                  Eros Bencosme          ID:  1104510
                  Manuel Mancebo		 ID:  1105614
Fecha        :    17/11/2022
Materia      :    Laboratorio Estructura de Datos y Algoritmos II
Profesor     :    Casimiro Gilberto Cordero Ramirez
*/



#include "Header1.h"
#include "Header2.h"
#include <string>
#include <iostream>
#include <fstream>
#include <streambuf>
#include<sstream>
#include <regex>
#include <iomanip>
#include <math.h>
namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace std;
  bool Decimas;
  stringstream DArchivo;
  string DArchivoTxT;
  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::RichTextBox^ richTextBox1;
  protected:
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label1;





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->SuspendLayout();
        // 
        // richTextBox1
        // 
        this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->richTextBox1->Location = System::Drawing::Point(12, 58);
        this->richTextBox1->Name = L"richTextBox1";
        this->richTextBox1->ReadOnly = true;
        this->richTextBox1->Size = System::Drawing::Size(398, 195);
        this->richTextBox1->TabIndex = 0;
        this->richTextBox1->Text = L"";
        // 
        // textBox1
        // 
        this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->textBox1->Location = System::Drawing::Point(12, 259);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(398, 30);
        this->textBox1->TabIndex = 1;
        this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Green;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->ForeColor = System::Drawing::Color::White;
        this->button1->Location = System::Drawing::Point(12, 295);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(398, 54);
        this->button1->TabIndex = 2;
        this->button1->Text = L"Convertir";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(47, 9);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(338, 46);
        this->label1->TabIndex = 3;
        this->label1->Text = L"De numero a letra";
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(422, 361);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->button1);
        this->Controls->Add(this->textBox1);
        this->Controls->Add(this->richTextBox1);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
        this->Margin = System::Windows::Forms::Padding(4);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion
     
void Conexion()//Conexion co n el ocumento diccionario
{
    ifstream Diccionario; // Nombre de la conexion
    Diccionario.open("Diccionario/Diccionario.txt"); // Abre la conexion con el archivo de texto
    DArchivo << Diccionario.rdbuf(); // Retorna un puntero, normaliza el texto
    DArchivoTxT = DArchivo.str(); // Se guarda en la variable string
    /*  richTextBox1->Text = TooSystemString(DArchivoTxT);*/
}
 private: static String^ TooSystemString(string str)//Normalizar el texto que se ingresa en los texbox
 {
     return  gcnew String(str.c_str());

 }
public: static string toStandardString(System::String^ string)//Normaliza los string para que los txtbox sean capaz de leerlo
{
       using System::Runtime::InteropServices::Marshal;
       System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
       char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
       std::string returnString(charPointer, string->Length);
       Marshal::FreeHGlobal(pointer);
       return returnString;

}

string Cletra(char* Nu) //limpia las cadenas de char que contienen letras
{
    char abc[53] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',' '};
    string palabra(Nu);
    int l;
    for (int i = 0; i < palabra.size(); i++)
    {
        l = 0;
        for (int k = 0; k < 53; k++)
        {

            if (palabra[i] == abc[k])
            {
                l = 0;
            }
            else
            {
                l++;
            }
            if (l == 53)
            {
                palabra.erase(i);
            }
        }
    }
    return palabra;
}
string Cnumero(char* Nu)//limpia las cadenas de char que contienen numeros
{
    char numero[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9','0'};
    string palabra(Nu);
    int l;
    for (int i = 0; i < palabra.size(); i++)
    {
        l = 0;
        for (int k = 0; k < 10; k++)
        {

            if (palabra[i] == numero[k])
            {
                l = 0;
            }
            else
            {
                l++;
            }
            if (l == 10)
            {
                palabra.erase(i);
            }
        }
    }
    return palabra;
}
string Ltxtbox(bool V)//Divide la parte decimal de la parte entera
{
    string texbox = toStandardString(textBox1->Text);
    texbox.erase(std::remove(texbox.begin(), texbox.end(), ','), texbox.end());//Elimia las comas para el sistema
    char* enteroCH;
    char* decimalCH;
    int c = 0;
    int d = 0;
    int e = 0;
    string decimal;
    string entero;
    enteroCH = new char[texbox.size()];
    decimalCH = new char[texbox.size()];
    for (int i = 0; i < texbox.size(); i++)//Verifica si tiene un punto y por ende tiene un decimal
    {
        if(texbox[i]=='.')
        {
            for (int a = i+1; a < texbox.size(); a++)
            {
                decimalCH[c] = texbox[a];
                c++;
            }
            i = texbox.size();
        }
        else
        {
            enteroCH[e] = texbox[i];
            e++;
        }

    }
    decimal = Cnumero(decimalCH);
    entero = Cnumero(enteroCH);
    delete[]enteroCH;
    delete[]decimalCH;
    if (V == true)
    {
        return entero;
    }
    else
    {
        return decimal;
    }

}
string LeerEntreLlaves(int Nvalidador)// verifica si el numero ingresado por el usuario ya esta ingresado en el sistema en caso de no  estarlo, lo genera.
{
     char* NumeroV;
     int Ubicacion;
     bool Compuesto = true;
 
    for (int i = 0; i < DArchivoTxT.size(); i++)
    {
        if (DArchivoTxT[i]=='{')// bucasca {
        {
            for(int A = i+1; A < DArchivoTxT.size(); A++)
            {
                if (DArchivoTxT[A]=='}')//busca }
                {
                    NumeroV = new char[(A)-(i+1)];
                    int C = 0;
                    for (int B = i+1; B < (A); B++)
                    {
                        NumeroV[C] = DArchivoTxT[B];
                        C++;
                    }
                    string n(NumeroV);
                    int Numero = stoi(n);
                    if (Numero == Nvalidador)//valida si el numero que el usuario ingreso esa en diccionario
                    {
                        Compuesto = false;
                        Ubicacion = A+1;

                        i = DArchivoTxT.size();
                    }
                    A = DArchivoTxT.size();
                }
            }
        }
    }
    delete[]NumeroV;
    if (Compuesto == false)//si el numero que ingreso el usuario es encontrado en diccionario pues solo queda imprimir.
    {
        return LeerEntreCorchetes(Ubicacion, false);
    }
    else//si no el numero se va dividiendo y con esto se generan los numero faltantes.
    {
       return Unidades(Nvalidador);
    }
   
}
string Unidades(int x)
{
    int b = 10;
    int c = 100;
    int y = 0;
    int l = 0;
    string n;
    for (int i = 10; i < x; i = i + b)
    {
        y = i;
        if (i == 100)
        {
            b = 100;
        }
        else if (i ==1000)
        {
            b = 1000;
        }
        else if (i == 1000000)
        {
            b = 1000000;
        }
        

        //{2000}[Dos mil],{3000}[Tres mil],{4000}[Cuatro mil],{5000}[Cinco mil],{6000}[Seis mil],{7000}[Siete mil],
    }


    l = x - y;
    if (x > 999999)
    {
        int k = x / 1000000;
        l = x - (k * 1000000);
        if (l == 0)
        {
            n = LeerEntreLlaves(k) + " millones ";
        }
        else
        {
            n = LeerEntreLlaves(k) + " millones " + LeerEntreLlaves(l);
        }
    }
    else if (x > 1999)
    {
        int k = x / 1000;
        l = x - (k * 1000);
        if (l==0)
        {
            n = LeerEntreLlaves(k) + " mil ";
        }
        else
        {
            n = LeerEntreLlaves(k) + " mil " + LeerEntreLlaves(l);
        }
        
    }
    else if (y >= 100 && y < 200)
    {
        n = "Ciento " + LeerEntreLlaves(l);
    }
    else if(y >=30 && y < 100)
    {
        n = LeerEntreLlaves(y) + " Y " + LeerEntreLlaves(l);
    }
    else
    {
        n = LeerEntreLlaves(y) + " " + LeerEntreLlaves(l);
    }
 
    return n;

    
}
string LeerEntreCorchetes(int ubicacion, bool compuesto)// lee la parte de texto  del diccionario
{
    string palabara;
    char* P;
    for (int i = ubicacion; i < DArchivoTxT.size(); i++)
    {
        if(DArchivoTxT[i] == ']')
        {
            P = new char[i-ubicacion];
            int C = 0;
            for (int A = ubicacion + 1; A < i; A++)
            {
                P[C] = DArchivoTxT[A];
                C++;
            }
            palabara = Cletra(P);
            i = DArchivoTxT.size();
        }
    }
    if (compuesto == false)
    {
        return palabara;
    }
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (e->KeyChar == '.') {
        if (this->textBox1->Text->Contains(".") && !this->textBox1->SelectedText->Contains("."))
            e->Handled = true;
    }
    else if (e->KeyChar == ',') {
        if (this->textBox1->Text->Contains(",") && !this->textBox1->SelectedText->Contains(","))
            e->Handled = false;
    }
    else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
        e->Handled = true;

    }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    string texbox = toStandardString(textBox1->Text);
    texbox.erase(std::remove(texbox.begin(), texbox.end(), ','), texbox.end());
    double numero = stod(texbox);
    if (textBox1->Text == "" || numero > 999999999.99)
    {
        MessageBox::Show("Error");
        textBox1->Text = "";
    }
    else
    {
        double ns = stod(texbox);
        int ds = stoi(texbox);
        //richTextBox1->Text = TooSystemString(LeerEntreLlaves(stoi(Ltxtbox(true))));
        string entero = LeerEntreLlaves(stoi(Ltxtbox(true)));
        if (ns - ds)
        {
            string l = Ltxtbox(false);
            int m = stoi(l);
            if (m <= 999999999)
            {
               
                
                string decimal = entero + " Con " + LeerEntreLlaves(stoi(Ltxtbox(false)))/*Ltxtbox(false) */+ " Centavos ";
                richTextBox1->Text = TooSystemString(decimal);
            }
            else
            {
                MessageBox::Show("Error");
                textBox1->Text = "";
            }
           
  
        }
        else
        {
            richTextBox1->Text = TooSystemString(entero);
        }
        textBox1->Text = "";
    }
  
   
   

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    Conexion();
}
};
}

