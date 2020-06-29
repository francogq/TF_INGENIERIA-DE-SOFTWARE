#pragma once
#include "MyForm1.h"
#include <fstream>
#include <string>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace System::Runtime::InteropServices;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(242, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"INICIAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(212, 345);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(252, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));




		
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1148, 799);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
	
		
		
	}
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		MyForm1^ formulario = gcnew MyForm1();

		formulario->Show();
		timer1->Enabled = true;
	
		fstream entradas;

		entradas.open("nombre.txt", ios::out);

		std::string datos = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
		
	
		entradas << "Usuario:  " << datos;

		Hide();


		


		
		
	




	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	
	

}
};
}
