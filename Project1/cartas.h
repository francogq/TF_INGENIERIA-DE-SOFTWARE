#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <vector>



using namespace System::Runtime::InteropServices;
using namespace std;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de cartas
	/// </summary>
	public ref class cartas : public System::Windows::Forms::Form
	{

		int contador = 0;
		int vidas = 5;
	public:
		cartas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~cartas()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  UNO;
	private: System::Windows::Forms::Button^  DOS;
	private: System::Windows::Forms::Button^  TRES;
	private: System::Windows::Forms::Button^  CUATRO;
	private: System::Windows::Forms::Button^  OCHO;





	private: System::Windows::Forms::Button^  SIETE;

	private: System::Windows::Forms::Button^  SEIS;

	private: System::Windows::Forms::Button^  CINCO;
	private: System::Windows::Forms::Button^  DOCE;


	private: System::Windows::Forms::Button^  ONCE;

	private: System::Windows::Forms::Button^  DIEZ;

	private: System::Windows::Forms::Button^  NUEVE;

	private: System::Windows::Forms::Timer^  caso1;
	private: System::Windows::Forms::Timer^  caso2;
	private: System::Windows::Forms::Timer^  caso3;
	private: System::Windows::Forms::Timer^  caso4;
	private: System::Windows::Forms::Timer^  caso5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  score;
	private: System::Windows::Forms::Button^  button1;


	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(cartas::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UNO = (gcnew System::Windows::Forms::Button());
			this->DOS = (gcnew System::Windows::Forms::Button());
			this->TRES = (gcnew System::Windows::Forms::Button());
			this->CUATRO = (gcnew System::Windows::Forms::Button());
			this->OCHO = (gcnew System::Windows::Forms::Button());
			this->SIETE = (gcnew System::Windows::Forms::Button());
			this->SEIS = (gcnew System::Windows::Forms::Button());
			this->CINCO = (gcnew System::Windows::Forms::Button());
			this->DOCE = (gcnew System::Windows::Forms::Button());
			this->ONCE = (gcnew System::Windows::Forms::Button());
			this->DIEZ = (gcnew System::Windows::Forms::Button());
			this->NUEVE = (gcnew System::Windows::Forms::Button());
			this->caso1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->caso2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->caso3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->caso4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->caso5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->score = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(159, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(500, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(815, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// UNO
			// 
			this->UNO->Location = System::Drawing::Point(186, 389);
			this->UNO->Name = L"UNO";
			this->UNO->Size = System::Drawing::Size(133, 46);
			this->UNO->TabIndex = 3;
			this->UNO->Text = L"button1";
			this->UNO->UseVisualStyleBackColor = true;
			this->UNO->Click += gcnew System::EventHandler(this, &cartas::UNO_Click);
			// 
			// DOS
			// 
			this->DOS->Location = System::Drawing::Point(186, 451);
			this->DOS->Name = L"DOS";
			this->DOS->Size = System::Drawing::Size(133, 46);
			this->DOS->TabIndex = 4;
			this->DOS->Text = L"button2";
			this->DOS->UseVisualStyleBackColor = true;
			this->DOS->Click += gcnew System::EventHandler(this, &cartas::DOS_Click);

			///
	

			//
			// 
			// TRES
			// 
			this->TRES->Location = System::Drawing::Point(186, 515);
			this->TRES->Name = L"TRES";
			this->TRES->Size = System::Drawing::Size(133, 46);
			this->TRES->TabIndex = 5;
			this->TRES->Text = L"button4";
			this->TRES->UseVisualStyleBackColor = true;
			this->TRES->Click += gcnew System::EventHandler(this, &cartas::TRES_Click);
			// 
			// CUATRO
			// 
			this->CUATRO->Location = System::Drawing::Point(186, 582);
			this->CUATRO->Name = L"CUATRO";
			this->CUATRO->Size = System::Drawing::Size(133, 46);
			this->CUATRO->TabIndex = 5;
			this->CUATRO->Text = L"button4";
			this->CUATRO->UseVisualStyleBackColor = true;
			this->CUATRO->Click += gcnew System::EventHandler(this, &cartas::CUATRO_Click);
			// 
			// OCHO
			// 
			this->OCHO->Location = System::Drawing::Point(538, 582);
			this->OCHO->Name = L"OCHO";
			this->OCHO->Size = System::Drawing::Size(133, 46);
			this->OCHO->TabIndex = 8;
			this->OCHO->Text = L"button4";
			this->OCHO->UseVisualStyleBackColor = true;
			this->OCHO->Click += gcnew System::EventHandler(this, &cartas::OCHO_Click);
			// 
			// SIETE
			// 
			this->SIETE->Location = System::Drawing::Point(538, 451);
			this->SIETE->Name = L"SIETE";
			this->SIETE->Size = System::Drawing::Size(133, 46);
			this->SIETE->TabIndex = 9;
			this->SIETE->Text = L"button6";
			this->SIETE->UseVisualStyleBackColor = true;
			this->SIETE->Click += gcnew System::EventHandler(this, &cartas::SIETE_Click);
			// 
			// SEIS
			// 
			this->SEIS->Location = System::Drawing::Point(538, 515);
			this->SEIS->Name = L"SEIS";
			this->SEIS->Size = System::Drawing::Size(133, 46);
			this->SEIS->TabIndex = 7;
			this->SEIS->Text = L"button2";
			this->SEIS->UseVisualStyleBackColor = true;
			this->SEIS->Click += gcnew System::EventHandler(this, &cartas::SEIS_Click);
			// 
			// CINCO
			// 
			this->CINCO->Location = System::Drawing::Point(538, 389);
			this->CINCO->Name = L"CINCO";
			this->CINCO->Size = System::Drawing::Size(133, 46);
			this->CINCO->TabIndex = 6;
			this->CINCO->Text = L"button8";
			this->CINCO->UseVisualStyleBackColor = true;
			this->CINCO->Click += gcnew System::EventHandler(this, &cartas::CINCO_Click);
			// 
			// DOCE
			// 
			this->DOCE->Location = System::Drawing::Point(868, 389);
			this->DOCE->Name = L"DOCE";
			this->DOCE->Size = System::Drawing::Size(133, 46);
			this->DOCE->TabIndex = 12;
			this->DOCE->Text = L"button4";
			this->DOCE->UseVisualStyleBackColor = true;
			this->DOCE->Click += gcnew System::EventHandler(this, &cartas::DOCE_Click);
			// 
			// ONCE
			// 
			this->ONCE->Location = System::Drawing::Point(868, 515);
			this->ONCE->Name = L"ONCE";
			this->ONCE->Size = System::Drawing::Size(133, 46);
			this->ONCE->TabIndex = 13;
			this->ONCE->Text = L"button10";
			this->ONCE->UseVisualStyleBackColor = true;
			this->ONCE->Click += gcnew System::EventHandler(this, &cartas::ONCE_Click);
			// 
			// DIEZ
			// 
			this->DIEZ->Location = System::Drawing::Point(868, 451);
			this->DIEZ->Name = L"DIEZ";
			this->DIEZ->Size = System::Drawing::Size(133, 46);
			this->DIEZ->TabIndex = 11;
			this->DIEZ->Text = L"button2";
			this->DIEZ->UseVisualStyleBackColor = true;
			this->DIEZ->Click += gcnew System::EventHandler(this, &cartas::DIEZ_Click);
			// 
			// NUEVE
			// 
			this->NUEVE->Location = System::Drawing::Point(868, 582);
			this->NUEVE->Name = L"NUEVE";
			this->NUEVE->Size = System::Drawing::Size(133, 46);
			this->NUEVE->TabIndex = 10;
			this->NUEVE->Text = L"button12";
			this->NUEVE->UseVisualStyleBackColor = true;
			this->NUEVE->Click += gcnew System::EventHandler(this, &cartas::NUEVE_Click);
			// 
			// caso1
			// 
			this->caso1->Tick += gcnew System::EventHandler(this, &cartas::caso1_Tick);
			// 
			// caso2
			// 
			this->caso2->Tick += gcnew System::EventHandler(this, &cartas::caso2_Tick);
			// 
			// caso3
			// 
			this->caso3->Tick += gcnew System::EventHandler(this, &cartas::caso3_Tick);
			// 
			// caso4
			// 
			this->caso4->Tick += gcnew System::EventHandler(this, &cartas::caso4_Tick);
			// 
			// caso5
			// 
			this->caso5->Tick += gcnew System::EventHandler(this, &cartas::caso5_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(872, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"label4";
			// 
			// score
			// 
			this->score->Enabled = true;
			this->score->Tick += gcnew System::EventHandler(this, &cartas::score_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(523, 690);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cartas::button1_Click);
			// 
			// cartas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1143, 743);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DOCE);
			this->Controls->Add(this->ONCE);
			this->Controls->Add(this->DIEZ);
			this->Controls->Add(this->NUEVE);
			this->Controls->Add(this->OCHO);
			this->Controls->Add(this->SIETE);
			this->Controls->Add(this->SEIS);
			this->Controls->Add(this->CINCO);
			this->Controls->Add(this->CUATRO);
			this->Controls->Add(this->TRES);
			this->Controls->Add(this->DOS);
			this->Controls->Add(this->UNO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"cartas";
			this->Text = L"cartas";
			this->Load += gcnew System::EventHandler(this, &cartas::cartas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cartas_Load(System::Object^  sender, System::EventArgs^  e) {
		
		
		Random aleatorio;
		int n;

		n = aleatorio.Next(1, 5);

		switch (n)
		{
		case 1: caso1->Enabled = true;
			break;
		case 2: caso2->Enabled = true;
			break;
		case 3: caso3->Enabled = true;
			break;
		case 4: caso4->Enabled = true;
			break;
		case 5: caso5->Enabled = true;
			break;
		}
	}

	
	
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
private: System::Void caso1_Tick(System::Object^  sender, System::EventArgs^  e) {

	label1->Text = " ¿Cuál es un sintoma por \n contraer el Sars?";
	label2->Text = " ¿Cuál es un sintoma por \n contraer el Ébola?";
	label3->Text = " ¿Cuál es un sintoma por \n contraer el Nipah?";

	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));

	
	


	ifstream infile("respuestasUNO.csv");
	int cambio;
	string line = "";
	String ^ uno;
	String ^ dos;
	String ^ tres;
	String ^ cuatro;
	String ^ cinco;
	String ^ seis;
	String ^ siete;
	String ^ ocho;
	String ^ nueve;
	String ^ diez;
	String ^ once;
	String ^ doce;




	vector<string> datos;
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ',')) {
			datos.push_back(word);
		}
	}

	//Sars case1
	uno = gcnew String(datos.at(0).c_str());
	dos = gcnew String(datos.at(1).c_str());
	tres = gcnew String(datos.at(2).c_str());
	cuatro = gcnew String(datos.at(3).c_str());

	//Ebola case1
	cinco = gcnew String(datos.at(4).c_str());
	seis = gcnew String(datos.at(5).c_str());
	siete = gcnew String(datos.at(6).c_str());
	ocho = gcnew String(datos.at(7).c_str());

	// Nipah case1
	nueve = gcnew String(datos.at(8).c_str());
	diez = gcnew String(datos.at(9).c_str());
	once = gcnew String(datos.at(10).c_str());
	doce = gcnew String(datos.at(11).c_str());
	

	
	UNO->Text = uno;
	DOS->Text = dos;
	TRES->Text = tres;
	CUATRO->Text = cuatro;
	CINCO->Text = cinco;
	SEIS->Text = seis;
	SIETE->Text = siete;
	OCHO->Text = ocho;
	NUEVE->Text = nueve;
	DIEZ->Text = diez;
	ONCE->Text = once;
	DOCE->Text = doce;

	







	


}
private: System::Void caso2_Tick(System::Object^  sender, System::EventArgs^  e) {

	label1->Text = " ¿Cuál es un sintoma por \n contraer el Ébola?";
	label2->Text = " ¿Cuál es un sintoma por \n contraer el Nipah?";
	label3->Text = " ¿Cuál es un sintoma por \n contraer el Papiloma Humano?";

	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));




	this->UNO->Location = System::Drawing::Point(186, 389);
	this->DOS->Location = System::Drawing::Point(186, 515);
	this->TRES->Location = System::Drawing::Point(186, 451);
	this->CUATRO->Location = System::Drawing::Point(186, 582);
	this->CINCO->Location = System::Drawing::Point(538, 515);
	this->SEIS->Location = System::Drawing::Point(538, 389);
	this->SIETE->Location = System::Drawing::Point(538, 451);
	this->OCHO->Location = System::Drawing::Point(538, 582);
	this->NUEVE->Location = System::Drawing::Point(868, 582);
	this->DIEZ->Location = System::Drawing::Point(868, 451);
	this->ONCE->Location = System::Drawing::Point(868, 515);
	this->DOCE->Location = System::Drawing::Point(868, 389);







	ifstream infile("respuestasDOS.csv");
	
	string line = "";
	String ^ uno;
	String ^ dos;
	String ^ tres;
	String ^ cuatro;
	String ^ cinco;
	String ^ seis;
	String ^ siete;
	String ^ ocho;
	String ^ nueve;
	String ^ diez;
	String ^ once;
	String ^ doce;




	vector<string> datos;
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ',')) {
			datos.push_back(word);
		}
	}

	//Sars case1
	uno = gcnew String(datos.at(0).c_str());
	dos = gcnew String(datos.at(1).c_str());
	tres = gcnew String(datos.at(2).c_str());
	cuatro = gcnew String(datos.at(3).c_str());

	//Ebola case1
	cinco = gcnew String(datos.at(4).c_str());
	seis = gcnew String(datos.at(5).c_str());
	siete = gcnew String(datos.at(6).c_str());
	ocho = gcnew String(datos.at(7).c_str());

	// Nipah case1
	nueve = gcnew String(datos.at(8).c_str());
	diez = gcnew String(datos.at(9).c_str());
	once = gcnew String(datos.at(10).c_str());
	doce = gcnew String(datos.at(11).c_str());



	UNO->Text = uno;
	DOS->Text = dos;
	TRES->Text = tres;
	CUATRO->Text = cuatro;
	CINCO->Text = cinco;
	SEIS->Text = seis;
	SIETE->Text = siete;
	OCHO->Text = ocho;
	NUEVE->Text = nueve;
	DIEZ->Text = diez;
	ONCE->Text = once;
	DOCE->Text = doce;



}
private: System::Void caso3_Tick(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = " ¿Cuál es un sintoma por \n contraer el Nipah?";
	label2->Text = " ¿Cuál es un sintoma por \n contraer el Papiloma Humano?";
	label3->Text = " ¿Cuál es un sintoma por \n contraer el Gripe Aviar?";

	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));



	ifstream infile("respuestasTRES.csv");

	string line = "";
	String ^ uno;
	String ^ dos;
	String ^ tres;
	String ^ cuatro;
	String ^ cinco;
	String ^ seis;
	String ^ siete;
	String ^ ocho;
	String ^ nueve;
	String ^ diez;
	String ^ once;
	String ^ doce;

	
	this->UNO->Location = System::Drawing::Point(186, 389); 
	this->DOS->Location = System::Drawing::Point(186, 582);
	this->TRES->Location = System::Drawing::Point(186, 515);
	this->CUATRO->Location = System::Drawing::Point(186, 451);
	this->CINCO->Location = System::Drawing::Point(538, 389);
	this->SEIS->Location = System::Drawing::Point(538, 515);
	this->SIETE->Location = System::Drawing::Point(538, 582);
	this->OCHO->Location = System::Drawing::Point(538, 451);
	this->NUEVE->Location = System::Drawing::Point(868, 582);
	this->DIEZ->Location = System::Drawing::Point(868, 515);
	this->ONCE->Location = System::Drawing::Point(868, 451);
	this->DOCE->Location = System::Drawing::Point(868, 389);
	

	vector<string> datos;
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ',')) {
			datos.push_back(word);
		}
	}

	//Sars case1
	uno = gcnew String(datos.at(0).c_str());
	dos = gcnew String(datos.at(1).c_str());
	tres = gcnew String(datos.at(2).c_str());
	cuatro = gcnew String(datos.at(3).c_str());

	//Ebola case1
	cinco = gcnew String(datos.at(4).c_str());
	seis = gcnew String(datos.at(5).c_str());
	siete = gcnew String(datos.at(6).c_str());
	ocho = gcnew String(datos.at(7).c_str());

	// Nipah case1
	nueve = gcnew String(datos.at(8).c_str());
	diez = gcnew String(datos.at(9).c_str());
	once = gcnew String(datos.at(10).c_str());
	doce = gcnew String(datos.at(11).c_str());



	UNO->Text = uno;
	DOS->Text = dos;
	TRES->Text = tres;
	CUATRO->Text = cuatro;
	CINCO->Text = cinco;
	SEIS->Text = seis;
	SIETE->Text = siete;
	OCHO->Text = ocho;
	NUEVE->Text = nueve;
	DIEZ->Text = diez;
	ONCE->Text = once;
	DOCE->Text = doce;
}
private: System::Void caso4_Tick(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = " ¿Cuál es un sintoma por \n contraer el Nipah?";
	label2->Text = " ¿Cuál es un sintoma por \n contraer el Gripe Aviar?";
	label3->Text = " ¿Cuál es un sintoma por \n contraer el Covid?";

	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));



	
	this->UNO->Location = System::Drawing::Point(186, 389);
	this->DOS->Location = System::Drawing::Point(186, 515); 
	this->TRES->Location = System::Drawing::Point(186, 451);
	this->CUATRO->Location = System::Drawing::Point(186, 582);
	this->CINCO->Location = System::Drawing::Point(538, 515);
	this->SEIS->Location = System::Drawing::Point(538, 389);
	this->SIETE->Location = System::Drawing::Point(538, 451);
	this->OCHO->Location = System::Drawing::Point(538, 582);
	this->NUEVE->Location = System::Drawing::Point(868, 515);
	this->DIEZ->Location = System::Drawing::Point(868, 451);
	this->ONCE->Location = System::Drawing::Point(868, 582);
	this->DOCE->Location = System::Drawing::Point(868, 389);
	

	ifstream infile("respuestasCUATRO.csv");
	
	string line = "";
	String ^ uno;
	String ^ dos;
	String ^ tres;
	String ^ cuatro;
	String ^ cinco;
	String ^ seis;
	String ^ siete;
	String ^ ocho;
	String ^ nueve;
	String ^ diez;
	String ^ once;
	String ^ doce;




	vector<string> datos;
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ',')) {
			datos.push_back(word);
		}
	}

	//Sars case1
	uno = gcnew String(datos.at(0).c_str());
	dos = gcnew String(datos.at(1).c_str());
	tres = gcnew String(datos.at(2).c_str());
	cuatro = gcnew String(datos.at(3).c_str());

	//Ebola case1
	cinco = gcnew String(datos.at(4).c_str());
	seis = gcnew String(datos.at(5).c_str());
	siete = gcnew String(datos.at(6).c_str());
	ocho = gcnew String(datos.at(7).c_str());

	// Nipah case1
	nueve = gcnew String(datos.at(8).c_str());
	diez = gcnew String(datos.at(9).c_str());
	once = gcnew String(datos.at(10).c_str());
	doce = gcnew String(datos.at(11).c_str());



	UNO->Text = uno;
	DOS->Text = dos;
	TRES->Text = tres;
	CUATRO->Text = cuatro;
	CINCO->Text = cinco;
	SEIS->Text = seis;
	SIETE->Text = siete;
	OCHO->Text = ocho;
	NUEVE->Text = nueve;
	DIEZ->Text = diez;
	ONCE->Text = once;
	DOCE->Text = doce;

}
private: System::Void caso5_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->UNO->Location = System::Drawing::Point(186, 451 );
	this->DOS->Location = System::Drawing::Point(186, 389);
	

	label1->Text = " ¿Cuál es un sintoma por \n contraer el Gripe Aviar?";
	label2->Text = " ¿Cuál es un sintoma por \n contraer el Gripe Aviar?";
	label3->Text = " ¿Cuál es un sintoma por \n contraer el Covid?";

	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));



	ifstream infile("respuestasCINCO.csv");

	string line = "";
	String ^ uno;
	String ^ dos;
	String ^ tres;
	String ^ cuatro;
	String ^ cinco;
	String ^ seis;
	String ^ siete;
	String ^ ocho;
	String ^ nueve;
	String ^ diez;
	String ^ once;
	String ^ doce;




	vector<string> datos;
	while (getline(infile, line)) {
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ',')) {
			datos.push_back(word);
		}
	}

	//Sars case1
	uno = gcnew String(datos.at(0).c_str());
	dos = gcnew String(datos.at(1).c_str());
	tres = gcnew String(datos.at(2).c_str());
	cuatro = gcnew String(datos.at(3).c_str());

	//Ebola case1
	cinco = gcnew String(datos.at(4).c_str());
	seis = gcnew String(datos.at(5).c_str());
	siete = gcnew String(datos.at(6).c_str());
	ocho = gcnew String(datos.at(7).c_str());

	// Nipah case1
	nueve = gcnew String(datos.at(8).c_str());
	diez = gcnew String(datos.at(9).c_str());
	once = gcnew String(datos.at(10).c_str());
	doce = gcnew String(datos.at(11).c_str());



	UNO->Text = uno;
	DOS->Text = dos;
	TRES->Text = tres;
	CUATRO->Text = cuatro;
	CINCO->Text = cinco;
	SEIS->Text = seis;
	SIETE->Text = siete;
	OCHO->Text = ocho;
	NUEVE->Text = nueve;
	DIEZ->Text = diez;
	ONCE->Text = once;
	DOCE->Text = doce;
}
private: System::Void DOS_Click(System::Object^  sender, System::EventArgs^  e) {
	contador++;
	DOS->Hide();
}


private: System::Void SEIS_Click(System::Object^  sender, System::EventArgs^  e) {
	contador++;
	SEIS->Hide();
}
private: System::Void DIEZ_Click(System::Object^  sender, System::EventArgs^  e) {
	contador++;
	DIEZ->Hide();
}



private: System::Void score_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	label4->Text = "Vidas: " + vidas;
	if (vidas == 0) {
		this->Close();

	}
	

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (contador == 3)
		MessageBox::Show("GANASTE! 3 de 3");
	else if (contador == 2)
		MessageBox::Show("CASI.. 2 DE 3");
	
	else
		MessageBox::Show("intentalo de nuevo");




}
private: System::Void UNO_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void TRES_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void CUATRO_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void CINCO_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void SIETE_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void OCHO_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void DOCE_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void ONCE_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
private: System::Void NUEVE_Click(System::Object^  sender, System::EventArgs^  e) {
	vidas--;
}
};
}
