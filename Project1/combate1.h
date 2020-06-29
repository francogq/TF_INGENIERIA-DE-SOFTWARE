#pragma once
#include "juego.h"
using namespace Juego;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de combate
	/// </summary>
	public ref class combate : public System::Windows::Forms::Form
	{
		BufferedGraphicsContext^ contexto;
		BufferedGraphics^ buffer;

		CJuego^ juego;
	public:
		combate(void)
		{
			InitializeComponent();
			this->contexto = BufferedGraphicsManager::Current;
			this->buffer = contexto->Allocate(this->CreateGraphics(), this->ClientRectangle);
			this->juego = gcnew CJuego(this->ClientRectangle);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~combate()
		{
			if (components)
			{
				delete components;
			}

			delete this->contexto;
			delete this->buffer;
			delete this->juego;
		}
	private: System::Windows::Forms::Timer^  timer1;
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &combate::timer1_Tick);
			// 
			// combate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 474);
			this->Name = L"combate";
			this->Text = L"combate";
			this->Load += gcnew System::EventHandler(this, &combate::combate_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &combate::inter);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void interactuar(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Vidas: " + this->juego->vidasL() + "    Puntos: " + this->juego->puntosL() + "   Tiempo:   " + this->juego->tiempo;
	 
		timer1->Enabled = juego->jugar(buffer->Graphics);
		buffer->Render();
	}
	private: System::Void inter(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
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
	private: System::Void combate_Load(System::Object^  sender, System::EventArgs^  e) {
	
	}
	};
}
