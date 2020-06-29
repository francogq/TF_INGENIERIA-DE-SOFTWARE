#pragma once

#include "Texto.h"
#include "text2.h"
#include "text3.h"
#include "Juego1.h"
#include "Juego2.h"
#include "Juego3.h"
#include <fstream>
#include "cartas.h"
#include "combate1.h"
#include "Parejas.h"

using namespace System::Runtime::InteropServices;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer ^ variable = gcnew SoundPlayer("cancion.wav");
		MyForm1(void)
		{
			InitializeComponent();
		
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}













	private: System::Windows::Forms::Button^  Aviar;
	private: System::Windows::Forms::Button^  cov;

















	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Button^  Ebola;
	private: System::Windows::Forms::Button^  Sers;
	private: System::Windows::Forms::Button^  Gripe;
	private: System::Windows::Forms::PictureBox^  corona;
	private: System::Windows::Forms::TextBox^  Causas;
	private: System::Windows::Forms::TextBox^  Sintomas;
	private: System::Windows::Forms::PictureBox^  IGripe;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  aviaaarrr;
	private: System::Windows::Forms::PictureBox^  coviddd;
	private: System::Windows::Forms::PictureBox^  grrrripe;

	private: System::Windows::Forms::PictureBox^  papilo;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;










	private: System::ComponentModel::IContainer^  components;




	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->Aviar = (gcnew System::Windows::Forms::Button());
			this->cov = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Ebola = (gcnew System::Windows::Forms::Button());
			this->Sers = (gcnew System::Windows::Forms::Button());
			this->Gripe = (gcnew System::Windows::Forms::Button());
			this->corona = (gcnew System::Windows::Forms::PictureBox());
			this->Causas = (gcnew System::Windows::Forms::TextBox());
			this->Sintomas = (gcnew System::Windows::Forms::TextBox());
			this->IGripe = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->aviaaarrr = (gcnew System::Windows::Forms::PictureBox());
			this->coviddd = (gcnew System::Windows::Forms::PictureBox());
			this->grrrripe = (gcnew System::Windows::Forms::PictureBox());
			this->papilo = (gcnew System::Windows::Forms::PictureBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->corona))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IGripe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aviaaarrr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coviddd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grrrripe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->papilo))->BeginInit();
			this->SuspendLayout();
			// 
			// Aviar
			// 
			this->Aviar->BackColor = System::Drawing::Color::Purple;
			this->Aviar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Aviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Aviar->ForeColor = System::Drawing::Color::White;
			this->Aviar->Location = System::Drawing::Point(112, 423);
			this->Aviar->Name = L"Aviar";
			this->Aviar->Size = System::Drawing::Size(138, 38);
			this->Aviar->TabIndex = 13;
			this->Aviar->Text = L"Gripe Aviar";
			this->Aviar->UseVisualStyleBackColor = false;
			this->Aviar->Click += gcnew System::EventHandler(this, &MyForm1::Aviar_Click);
			// 
			// cov
			// 
			this->cov->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->cov->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cov->ForeColor = System::Drawing::Color::White;
			this->cov->Location = System::Drawing::Point(112, 296);
			this->cov->Name = L"cov";
			this->cov->Size = System::Drawing::Size(138, 38);
			this->cov->TabIndex = 14;
			this->cov->Text = L"Mers-Cov";
			this->cov->UseVisualStyleBackColor = false;
			this->cov->Click += gcnew System::EventHandler(this, &MyForm1::cov_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DimGray;
			this->textBox1->Location = System::Drawing::Point(45, 247);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(439, 249);
			this->textBox1->TabIndex = 29;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(942, 22);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(60, 51);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox6_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(32, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(57, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(112, 21);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(57, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm1::Atras);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(191, 21);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(56, 48);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(269, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(866, 455);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 120);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 33;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(866, 591);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 120);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 34;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox9_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(866, 308);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 120);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm1::JuegoC);
			// 
			// Ebola
			// 
			this->Ebola->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Ebola->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ebola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ebola->ForeColor = System::Drawing::Color::White;
			this->Ebola->Location = System::Drawing::Point(112, 356);
			this->Ebola->Name = L"Ebola";
			this->Ebola->Size = System::Drawing::Size(138, 38);
			this->Ebola->TabIndex = 12;
			this->Ebola->Text = L"Ébola";
			this->Ebola->UseVisualStyleBackColor = false;
			this->Ebola->Click += gcnew System::EventHandler(this, &MyForm1::Ebola_Click);
			// 
			// Sers
			// 
			this->Sers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Sers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sers->ForeColor = System::Drawing::Color::White;
			this->Sers->Location = System::Drawing::Point(112, 492);
			this->Sers->Name = L"Sers";
			this->Sers->Size = System::Drawing::Size(138, 38);
			this->Sers->TabIndex = 15;
			this->Sers->Text = L"Sers";
			this->Sers->UseVisualStyleBackColor = false;
			this->Sers->Click += gcnew System::EventHandler(this, &MyForm1::Sers_Click);
			// 
			// Gripe
			// 
			this->Gripe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Gripe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Gripe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gripe->ForeColor = System::Drawing::Color::White;
			this->Gripe->Location = System::Drawing::Point(112, 562);
			this->Gripe->Name = L"Gripe";
			this->Gripe->Size = System::Drawing::Size(138, 38);
			this->Gripe->TabIndex = 17;
			this->Gripe->Text = L"Gripe";
			this->Gripe->UseVisualStyleBackColor = false;
			this->Gripe->Click += gcnew System::EventHandler(this, &MyForm1::Gripe_Click);
			// 
			// corona
			// 
			this->corona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"corona.Image")));
			this->corona->Location = System::Drawing::Point(1, 79);
			this->corona->Name = L"corona";
			this->corona->Size = System::Drawing::Size(1148, 721);
			this->corona->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->corona->TabIndex = 35;
			this->corona->TabStop = false;
			this->corona->Visible = false;
			// 
			// Causas
			// 
			this->Causas->BackColor = System::Drawing::Color::White;
			this->Causas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Causas->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Causas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Causas->Location = System::Drawing::Point(55, 579);
			this->Causas->Multiline = true;
			this->Causas->Name = L"Causas";
			this->Causas->ReadOnly = true;
			this->Causas->Size = System::Drawing::Size(385, 176);
			this->Causas->TabIndex = 36;
			this->Causas->Visible = false;
			this->Causas->TextChanged += gcnew System::EventHandler(this, &MyForm1::Causas_TextChanged);
			// 
			// Sintomas
			// 
			this->Sintomas->BackColor = System::Drawing::Color::White;
			this->Sintomas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Sintomas->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sintomas->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Sintomas->Location = System::Drawing::Point(606, 514);
			this->Sintomas->Multiline = true;
			this->Sintomas->Name = L"Sintomas";
			this->Sintomas->ReadOnly = true;
			this->Sintomas->Size = System::Drawing::Size(385, 131);
			this->Sintomas->TabIndex = 37;
			// 
			// IGripe
			// 
			this->IGripe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IGripe.Image")));
			this->IGripe->Location = System::Drawing::Point(1, 79);
			this->IGripe->Name = L"IGripe";
			this->IGripe->Size = System::Drawing::Size(1148, 721);
			this->IGripe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->IGripe->TabIndex = 38;
			this->IGripe->TabStop = false;
			this->IGripe->Visible = false;
			this->IGripe->Click += gcnew System::EventHandler(this, &MyForm1::IGripe_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(704, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 39;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm1::timer2_Tick);
			// 
			// aviaaarrr
			// 
			this->aviaaarrr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aviaaarrr.Image")));
			this->aviaaarrr->Location = System::Drawing::Point(1, 79);
			this->aviaaarrr->Name = L"aviaaarrr";
			this->aviaaarrr->Size = System::Drawing::Size(1148, 721);
			this->aviaaarrr->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->aviaaarrr->TabIndex = 40;
			this->aviaaarrr->TabStop = false;
			this->aviaaarrr->Visible = false;
			// 
			// coviddd
			// 
			this->coviddd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"coviddd.Image")));
			this->coviddd->Location = System::Drawing::Point(1, 79);
			this->coviddd->Name = L"coviddd";
			this->coviddd->Size = System::Drawing::Size(1148, 721);
			this->coviddd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->coviddd->TabIndex = 41;
			this->coviddd->TabStop = false;
			this->coviddd->Visible = false;
			// 
			// grrrripe
			// 
			this->grrrripe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"grrrripe.Image")));
			this->grrrripe->Location = System::Drawing::Point(1, 79);
			this->grrrripe->Name = L"grrrripe";
			this->grrrripe->Size = System::Drawing::Size(1148, 721);
			this->grrrripe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->grrrripe->TabIndex = 42;
			this->grrrripe->TabStop = false;
			this->grrrripe->Visible = false;
			// 
			// papilo
			// 
			this->papilo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"papilo.Image")));
			this->papilo->Location = System::Drawing::Point(1, 79);
			this->papilo->Name = L"papilo";
			this->papilo->Size = System::Drawing::Size(1148, 721);
			this->papilo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->papilo->TabIndex = 43;
			this->papilo->TabStop = false;
			this->papilo->Visible = false;
			this->papilo->Click += gcnew System::EventHandler(this, &MyForm1::papilo_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(446, 615);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 24);
			this->label2->TabIndex = 44;
			this->label2->Text = L"Notas:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(433, 651);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 71);
			this->textBox2->TabIndex = 45;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1088, 749);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Sintomas);
			this->Controls->Add(this->Causas);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->cov);
			this->Controls->Add(this->Aviar);
			this->Controls->Add(this->Ebola);
			this->Controls->Add(this->papilo);
			this->Controls->Add(this->grrrripe);
			this->Controls->Add(this->coviddd);
			this->Controls->Add(this->aviaaarrr);
			this->Controls->Add(this->IGripe);
			this->Controls->Add(this->corona);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->Sers);
			this->Controls->Add(this->Gripe);
			this->Controls->Add(this->pictureBox9);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->corona))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IGripe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->aviaaarrr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coviddd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grrrripe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->papilo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	textBox1->Hide();
	Causas->Hide();
	Sintomas->Hide();
}

private: System::Void Ebola_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	corona->Show();
	
	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Ebola.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
	///////////////// causas

	ifstream archivo2;
	string datos2;
	String^ causas;
	archivo2.open("CEbola.txt", ios::in);

	if (archivo2.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo2.eof()) {

		getline(archivo2, datos2);
		causas= gcnew String(datos2.c_str());
	}
	archivo2.close();
	this->Causas->Text = causas;
	Causas->Show();


	//sintomas

	ifstream archivo3;
	string datos3;
	String^ sintomas;
	archivo3.open("SEbola.txt", ios::in);

	if (archivo3.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo3.eof()) {

		getline(archivo3, datos3);
		sintomas = gcnew String(datos3.c_str());
	}
	archivo3.close();
	this->Sintomas->Text = sintomas;
	Sintomas->Show();



}

private: System::Void Aviar_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	aviaaarrr->Show();

	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Ebola.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
	///////////////// causas

	ifstream archivo2;
	string datos2;
	String^ causas;
	archivo2.open("CEbola.txt", ios::in);

	if (archivo2.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo2.eof()) {

		getline(archivo2, datos2);
		causas = gcnew String(datos2.c_str());
	}
	archivo2.close();
	this->Causas->Text = causas;
	Causas->Show();


	//sintomas

	ifstream archivo3;
	string datos3;
	String^ sintomas;
	archivo3.open("SEbola.txt", ios::in);

	if (archivo3.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo3.eof()) {

		getline(archivo3, datos3);
		sintomas = gcnew String(datos3.c_str());
	}
	archivo3.close();
	this->Sintomas->Text = sintomas;
	Sintomas->Show();

}
private: System::Void cov_Click(System::Object^  sender, System::EventArgs^  e) {


	

	timer1->Enabled = false;
	coviddd->Show();

	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Ebola.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
	///////////////// causas

	ifstream archivo2;
	string datos2;
	String^ causas;
	archivo2.open("CEbola.txt", ios::in);

	if (archivo2.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo2.eof()) {

		getline(archivo2, datos2);
		causas = gcnew String(datos2.c_str());
	}
	archivo2.close();
	this->Causas->Text = causas;
	Causas->Show();


	//sintomas

	ifstream archivo3;
	string datos3;
	String^ sintomas;
	archivo3.open("SEbola.txt", ios::in);

	if (archivo3.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo3.eof()) {

		getline(archivo3, datos3);
		sintomas = gcnew String(datos3.c_str());
	}
	archivo3.close();
	this->Sintomas->Text = sintomas;
	Sintomas->Show();

}
private: System::Void Sers_Click(System::Object^  sender, System::EventArgs^  e) {


	timer1->Enabled = false;
	papilo->Show();

	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Ebola.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
	///////////////// causas

	ifstream archivo2;
	string datos2;
	String^ causas;
	archivo2.open("CEbola.txt", ios::in);

	if (archivo2.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo2.eof()) {

		getline(archivo2, datos2);
		causas = gcnew String(datos2.c_str());
	}
	archivo2.close();
	this->Causas->Text = causas;
	Causas->Show();


	//sintomas

	ifstream archivo3;
	string datos3;
	String^ sintomas;
	archivo3.open("SEbola.txt", ios::in);

	if (archivo3.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo3.eof()) {

		getline(archivo3, datos3);
		sintomas = gcnew String(datos3.c_str());
	}
	archivo3.close();
	this->Sintomas->Text = sintomas;
	Sintomas->Show();
}

private: System::Void Gripe_Click(System::Object^  sender, System::EventArgs^  e) {
	//////


	timer1->Enabled = false;
	grrrripe->Show();

	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Ebola.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
	///////////////// causas

	ifstream archivo2;
	string datos2;
	String^ causas;
	archivo2.open("CEbola.txt", ios::in);

	if (archivo2.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo2.eof()) {

		getline(archivo2, datos2);
		causas = gcnew String(datos2.c_str());
	}
	archivo2.close();
	this->Causas->Text = causas;
	Causas->Show();


	//sintomas

	ifstream archivo3;
	string datos3;
	String^ sintomas;
	archivo3.open("SEbola.txt", ios::in);

	if (archivo3.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo3.eof()) {

		getline(archivo3, datos3);
		sintomas = gcnew String(datos3.c_str());
	}
	archivo3.close();
	this->Sintomas->Text = sintomas;
	Sintomas->Show();



}
private: System::Void papiloma(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	pictureBox1->Hide();

	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("Papiloma.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->textBox1->Text = str2;
	textBox1->Show();
}
private: System::Void JuegoC(System::Object^  sender, System::EventArgs^  e) {



	cartas^ preguntas = gcnew cartas();

	preguntas->Show();




}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Atras(System::Object^  sender, System::EventArgs^  e) {


	timer1->Enabled = true;
	corona->Hide();
	IGripe->Hide();
	aviaaarrr->Hide();
	coviddd->Hide();
	papilo->Hide();
	grrrripe->Hide();


}
private: System::Void Causas_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void IGripe_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	





}

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	ifstream archivo;
	string datos;
	String^ str2;
	archivo.open("nombre.txt", ios::in);

	if (archivo.fail()) {
		MessageBox::Show("No se leyo");

	}

	while (!archivo.eof()) {

		getline(archivo, datos);
		str2 = gcnew String(datos.c_str());
	}
	archivo.close();
	this->label1->Text = str2;
	label1->Show();
	this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void papilo_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	variable->Stop();
	


}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	combate ^ lucha = gcnew combate();

	lucha->Show();
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	

}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {


	fstream entradas;

	entradas.open("comentarios.txt", ios::out);

	std::string datos = (const char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();


	entradas << "Notas:  " << datos;
	MessageBox::Show("Se creo el txt :D");


}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	variable->PlayLooping();

}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
	Parejas ^ par = gcnew Parejas();

	par->Show();
}
};
}
