#pragma once
#include "juego.h"
using namespace Juego;

namespace Juego2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		BufferedGraphicsContext^ contexto;
		BufferedGraphics^ buffer;

		CJuego^ juego;
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->contexto = BufferedGraphicsManager::Current;
			this->buffer = contexto->Allocate(this->CreateGraphics(), this->ClientRectangle);
			this->juego = gcnew CJuego(this->ClientRectangle);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete this->contexto;
			delete this->buffer;
			delete this->juego;
		}
	private: System::Windows::Forms::Timer^  timEjecutor;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timEjecutor = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timEjecutor
			// 
			this->timEjecutor->Enabled = true;
			this->timEjecutor->Tick += gcnew System::EventHandler(this, &MyForm::ejecutar);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 465);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::interactuar);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ejecutar(System::Object^  sender, System::EventArgs^  e) {

		timEjecutor->Enabled = juego->jugar(buffer->Graphics);
		buffer->Render();
	}
	private: System::Void interactuar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->Control && e->KeyCode == Keys::A) {
			this->juego->lanzarBoomerang(this->ClientSize.Width);
		}
		else {
			switch (e->KeyCode)
			{
			case Keys::Up: this->juego->moverPersonaje(-10, 0); break;
			case Keys::Down: this->juego->moverPersonaje(10, 0); break;
			case Keys::Left: this->juego->moverPersonaje(0, -10); break;
			case Keys::Right: this->juego->moverPersonaje(0, 10); break;
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		this->Text = "Vidas: " + this->juego->vidasL();

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		this->juego->lanzarBoomerang(this->ClientSize.Width);
	}
	};
}
