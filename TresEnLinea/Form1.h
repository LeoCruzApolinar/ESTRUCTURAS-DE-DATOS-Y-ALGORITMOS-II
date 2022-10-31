#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include <vcruntime_string.h>

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;


    // variable 
    int Matriz[3][3];
    int X = -1;
    int O = 1;
    bool DosJugadore;
    int Turno = 1;
    bool IA;
    int IATurno;
    int Vx = 0;
    int Vo = 0;
    // hola gitd

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
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    protected:
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Button^ JugadorVsjugador;
    private: System::Windows::Forms::Button^ JVSC;
    private: System::Windows::Forms::Label^ label1;


    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;

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
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->JugadorVsjugador = (gcnew System::Windows::Forms::Button());
            this->JVSC = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::Black;
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->Controls->Add(this->button9, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->button8, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->button7, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->button6, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->button4, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->button5, 1, 1);
            this->tableLayoutPanel1->Location = System::Drawing::Point(202, 129);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 3;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(600, 600);
            this->tableLayoutPanel1->TabIndex = 0;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::White;
            this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button9->FlatAppearance->BorderSize = 5;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(401, 401);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(194, 194);
            this->button9->TabIndex = 8;
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::White;
            this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button8->FlatAppearance->BorderSize = 5;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(202, 401);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(193, 194);
            this->button8->TabIndex = 7;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::White;
            this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button7->FlatAppearance->BorderSize = 5;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(3, 401);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(193, 194);
            this->button7->TabIndex = 6;
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::White;
            this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button6->FlatAppearance->BorderSize = 5;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(401, 202);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(194, 193);
            this->button6->TabIndex = 5;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::White;
            this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button4->FlatAppearance->BorderSize = 5;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(3, 202);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(193, 193);
            this->button4->TabIndex = 3;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::White;
            this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button3->FlatAppearance->BorderSize = 5;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(401, 3);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(194, 193);
            this->button3->TabIndex = 2;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::White;
            this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button2->FlatAppearance->BorderSize = 5;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(202, 3);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(193, 193);
            this->button2->TabIndex = 1;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::White;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button1->FlatAppearance->BorderSize = 5;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(3, 3);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(193, 193);
            this->button1->TabIndex = 0;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::White;
            this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
            this->button5->FlatAppearance->BorderSize = 5;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(202, 202);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(193, 193);
            this->button5->TabIndex = 4;
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2->Controls->Add(this->JugadorVsjugador, 2, 0);
            this->tableLayoutPanel2->Controls->Add(this->JVSC, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->button10, 0, 0);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 1;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1008, 100);
            this->tableLayoutPanel2->TabIndex = 1;
            // 
            // JugadorVsjugador
            // 
            this->JugadorVsjugador->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->JugadorVsjugador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->JugadorVsjugador->ForeColor = System::Drawing::Color::White;
            this->JugadorVsjugador->Location = System::Drawing::Point(675, 3);
            this->JugadorVsjugador->Name = L"JugadorVsjugador";
            this->JugadorVsjugador->Size = System::Drawing::Size(326, 94);
            this->JugadorVsjugador->TabIndex = 2;
            this->JugadorVsjugador->Text = L"Jugador vs jugador";
            this->JugadorVsjugador->UseVisualStyleBackColor = false;
            this->JugadorVsjugador->Click += gcnew System::EventHandler(this, &Form1::JugadorVsjugador_Click);
            // 
            // JVSC
            // 
            this->JVSC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->JVSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->JVSC->ForeColor = System::Drawing::Color::White;
            this->JVSC->Location = System::Drawing::Point(339, 3);
            this->JVSC->Name = L"JVSC";
            this->JVSC->Size = System::Drawing::Size(330, 94);
            this->JVSC->TabIndex = 1;
            this->JVSC->Text = L"Jugador vs computador";
            this->JVSC->UseVisualStyleBackColor = false;
            this->JVSC->Click += gcnew System::EventHandler(this, &Form1::JVSC_Click);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::White;
            this->button10->Location = System::Drawing::Point(3, 3);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(326, 94);
            this->button10->TabIndex = 0;
            this->button10->Text = L"Reiniciar";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Green;
            this->label1->Location = System::Drawing::Point(198, 800);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(118, 42);
            this->label1->TabIndex = 2;
            this->label1->Text = L"label1";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Green;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(12, 132);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(36, 36);
            this->label2->TabIndex = 4;
            this->label2->Text = L"X";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(957, 123);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(37, 36);
            this->label3->TabIndex = 5;
            this->label3->Text = L"O";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(54, 145);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(111, 25);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Jugador #1";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(820, 132);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(120, 25);
            this->label5->TabIndex = 7;
            this->label5->Text = L"Computador";
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::DarkRed;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::White;
            this->button11->Location = System::Drawing::Point(202, 754);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(600, 43);
            this->button11->TabIndex = 8;
            this->button11->Text = L"Limpiar tablero";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Black;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(51, 187);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(42, 46);
            this->label6->TabIndex = 9;
            this->label6->Text = L"0";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Black;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(909, 178);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(42, 46);
            this->label7->TabIndex = 10;
            this->label7->Text = L"0";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(1008, 863);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->tableLayoutPanel2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion
        int TurnoJugador(int N)
        {
            if (N == 1)
            {
                return X;
            }
            else
            {
                return O;
            }
        }
        void AgregarAlTablero(int A, int B, int C)
        {
            if (Verificar(A, B))
            {

                Matriz[A][B] = TurnoJugador(C);
                if (IATurno == 2)
                {
                    verificarvictoria(Matriz);
                }
                else
                {
                    convertir(Matriz);
                }


            }
        }
        bool Verificar(int Z, int Y)
        {
            if (Matriz[Z][Y] == 0)
            {
                return true;
            }
            else
            {
                MessageBox::Show("Esta casilla esta ocupada");
                return false;

            }
        }
        void convertir(int Cuadricula[3][3])
        {
            int E = 0;
            int b;
            int tablero[9];

            for (int f = 0; f < 3; f++)
            {
                for (int c = 0; c < 3; c++)
                {

                    if (c < E && c != E)
                    {
                        E++;
                    }
                    else
                    {
                        E = c;
                    }
                    tablero[E] = Cuadricula[f][c];

                }
            }

            if (IA == true && IATurno == 1)
            {
                maquinamovimiento(tablero);
            }
            else
            {
                verificarvictoria(Matriz);
            }

        }
        int Ganar(int tablero[9])
        {

            unsigned gana[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
            for (int i = 0; i < 8; ++i) {
                if (tablero[gana[i][0]] != 0 &&
                    tablero[gana[i][0]] == tablero[gana[i][1]] &&
                    tablero[gana[i][0]] == tablero[gana[i][2]])
                {

                    return tablero[gana[i][2]];
                }

            }
            return 0;


        }
        int minimax(int tablero[9], int jugador) {

            // ¿Cómo es la posición del jugador (su turno) a bordo?
            int ganador = Ganar(tablero);
            if (ganador != 0) return ganador * jugador;

            int movimiento = -1;
            int puntuacion = -2; // Perder los movimientos son preferibles a ningún movimiento
            int i;
            for (i = 0; i < 9; ++i) {// Para todos los movimientos,
                if (tablero[i] == 0) {// Si es legal,
                    tablero[i] = jugador;// Prueba el movimiento
                    int thispuntuacion = -minimax(tablero, jugador * -1);
                    if (thispuntuacion > puntuacion) {
                        puntuacion = thispuntuacion;
                        movimiento = i;
                    }// Escoge el que es peor para el oponente
                    tablero[i] = 0;// Restablecer el tablero después de probar
                }
            }
            if (movimiento == -1) return 0;
            return puntuacion;
        }
        void maquinamovimiento(int tablero[9]) {
            int movimiento = -1;
            int puntuacion = -2;
            int i;
            for (i = 0; i < 9; ++i) {
                if (tablero[i] == 0) {
                    tablero[i] = 1;
                    int temppuntuacion = -minimax(tablero, -1);
                    tablero[i] = 0;
                    if (temppuntuacion > puntuacion) {
                        puntuacion = temppuntuacion;
                        movimiento = i;
                    }
                }
            }

            // devuelve una puntuación basada en el árbol de minimax en un nodo determinado.
            Ubicar(movimiento, 1);
            tablero[movimiento] = 1;
        }
        void Ubicar(int n, int j)
        {
            int F;
            int C;

            if (n == -1)
            {
                verificarvictoria(Matriz);
            }

            switch (n)
            {
            case 0:
                F = 0;
                C = 0;
                button1->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);


                break;
            case 1:
                F = 0;
                C = 1;
                button2->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 2:
                F = 0;
                C = 2;
                button3->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 3:
                F = 1;
                C = 0;
                button4->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 4:
                F = 1;
                C = 1;
                button5->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 5:
                F = 1;
                C = 2;
                button6->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 6:
                F = 2;
                C = 0;
                button7->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 7:
                F = 2;
                C = 1;
                button8->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);

                break;
            case 8:
                F = 2;
                C = 2;
                button9->Text = "O";
                IATurno = 2;
                AgregarAlTablero(F, C, 2);


                break;
            }
        }
        void deshabilitarBTN(bool l) {
            button1->Enabled = l;
            button2->Enabled = l;
            button3->Enabled = l;
            button4->Enabled = l;
            button5->Enabled = l;
            button6->Enabled = l;
            button7->Enabled = l;
            button8->Enabled = l;
            button9->Enabled = l;



        }
        void limpiar()
        {

            X = -1;
            O = 1;
            DosJugadore = false;
            Turno = 1;
            IA = false;
            IATurno = 0;
            label1->Text = "";
            label1->Enabled = false;
            button1->Text = "";
            button2->Text = "";
            button3->Text = "";
            button4->Text = "";
            button5->Text = "";
            button6->Text = "";
            button7->Text = "";
            button8->Text = "";
            button9->Text = "";
            memset(Matriz, 0, sizeof(Matriz));
            Vx = 0;
            Vo = 0;
            label6->Text = "0";
            label7->Text = "0";
            tableLayoutPanel1->Visible = true;
        }
        void verificarvictoria(int Cuadricula[3][3])
        {
            int E = 0;
            int b;
            int tablero[9];
            int empate =0;
            int ocupacion =0;

            for (int f = 0; f < 3; f++)
            {
                for (int c = 0; c < 3; c++)
                {

                    if (c < E && c != E)
                    {
                        E++;
                    }
                    else
                    {
                        E = c;
                    }
                    tablero[E] = Cuadricula[f][c];

                }
            }
            unsigned gana[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
            for (int i = 0; i < 8; ++i) {
                if (tablero[gana[i][0]] != 0 &&
                    tablero[gana[i][0]] == tablero[gana[i][1]] &&
                    tablero[gana[i][0]] == tablero[gana[i][2]])
                {
                    if (tablero[gana[i][0]] == -1)
                    {
                        label1->Text = "Ha ganado la X";
                        label1->Enabled = true;
                        Vx++;
                        label6->Text = Vx.ToString();
                        deshabilitarBTN(false);
                       
                        empate++;
                    }
                    else
                    {
                        label1->Text = "Ha ganado el O";
                        label1->Enabled = true;
                        Vo++;
                        label7->Text = Vo.ToString();
                        deshabilitarBTN(false);
                    
                        empate++;
                    }

                    
                }
                empate++;
            }

            for (int i = 0; i < 9; i++)
            {
                if(tablero[i] != 0)
                {
                    ocupacion++;
                }
            }
            if (ocupacion == 9)
            {
                if (empate == 8)
                {
                    label1->Text = "El juego ha terminado en empate";
                    label1->Enabled = true;
                }
            }
            

        }

    private: System::Void JugadorVsjugador_Click(System::Object^ sender, System::EventArgs^ e)
    {
        limpiar();
        deshabilitarBTN(true);
        DosJugadore = true;
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 0;
        int C = 0;
        int N;
        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button1->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button1->Text = "O";
                }

            }
            else
            {
                N = 1;
                button1->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }

    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 0;
        int C = 1;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button2->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button2->Text = "O";
                }

            }
            else
            {
                N = 1;
                button2->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 0;
        int C = 2;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button3->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button3->Text = "O";
                }

            }
            else
            {
                N = 1;
                button3->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 1;
        int C = 0;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button4->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button4->Text = "O";
                }

            }
            else
            {
                N = 1;
                button4->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 1;
        int C = 1;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button5->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button5->Text = "O";
                }

            }
            else
            {
                N = 1;
                button5->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 1;
        int C = 2;
        int N;
        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button6->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button6->Text = "O";
                }

            }
            else
            {
                N = 1;
                button6->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 2;
        int C = 0;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button7->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button7->Text = "O";
                }

            }
            else
            {
                N = 1;
                button7->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 2;
        int C = 1;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button8->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button8->Text = "O";
                }

            }
            else
            {
                N = 1;
                button8->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        int F = 2;
        int C = 2;
        int N;

        if (Verificar(F, C))
        {
            if (DosJugadore == true)
            {
                if (Turno == 1)
                {
                    N = Turno;
                    Turno = 2;
                    button9->Text = "X";
                }
                else
                {
                    N = Turno;
                    Turno = 1;
                    button9->Text = "O";
                }

            }
            else
            {
                N = 1;
                button9->Text = "X";
                IATurno = 1;
            }
            AgregarAlTablero(F, C, N);
        }
    }
    private: System::Void JVSC_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar();
        deshabilitarBTN(true);
        IA = true;
    }
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
        deshabilitarBTN(false);
        limpiar();
        tableLayoutPanel1->Visible = false;
        label1->Enabled = true;
        label1->Text = "Sin modo de juego seleccionado";
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        deshabilitarBTN(false);
        limpiar();
        tableLayoutPanel1->Visible = false;
        label1->Enabled = true;
        label1->Text = "Sin modo de juego seleccionado";
;    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        X = -1;
        O = 1;
        Turno = 1;
        IATurno = 0;
        label1->Text = "";
        label1->Enabled = false;
        button1->Text = "";
        button2->Text = "";
        button3->Text = "";
        button4->Text = "";
        button5->Text = "";
        button6->Text = "";
        button7->Text = "";
        button8->Text = "";
        button9->Text = "";
        memset(Matriz, 0, sizeof(Matriz));
        deshabilitarBTN(true);
    }
};
}

