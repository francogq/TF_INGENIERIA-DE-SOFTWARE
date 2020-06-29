#pragma once
#include <string>


using namespace std;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de Juego1
	/// </summary>
	public ref class Juego1 : public System::Windows::Forms::Form
	{
	public:
		Juego1(void)
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
		~Juego1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	protected:
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Fiebre mayor a 39°", L"Dolor de cabeza intenso",
					L"Escalofrios", L"Tos menos intensa"
			});
			this->checkedListBox1->Location = System::Drawing::Point(38, 92);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(160, 60);
			this->checkedListBox1->TabIndex = 0;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->checkedListBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Tos", L"Diarrea", L"Dolores musculares",
					L"Picazon"
			});
			this->checkedListBox2->Location = System::Drawing::Point(41, 244);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(120, 60);
			this->checkedListBox2->TabIndex = 1;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->checkedListBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Fiebre menor a 38°", L"Escalofrios", L"Dificultad para respirar",
					L"Tos"
			});
			this->checkedListBox3->Location = System::Drawing::Point(38, 406);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(160, 60);
			this->checkedListBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"¿H1N1 presenta sintomas similares a\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"¿Gripe aviar  presenta sintomas similares a\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 375);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(342, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"¿Mers-Cov presenta sintomas similares a\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(120, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 33);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Pregunta 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(120, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 33);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Pregunta 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Location = System::Drawing::Point(120, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 33);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Pregunta 3";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(141, 472);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 50);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Validar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Juego1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(321, 516);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 24);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Atrás";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Juego1::button2_Click);
			// 
			// Juego1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(428, 552);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"Juego1";
			this->Text = L"Juego1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		
		if (checkedListBox1->CheckedItems->Contains("Escalofrios") && checkedListBox1->CheckedItems->Contains("Fiebre mayor a 39°")&& checkedListBox1->CheckedItems->Contains("Dolor de cabeza intenso")&&
			checkedListBox2->CheckedItems->Contains("Tos") && checkedListBox2->CheckedItems->Contains("Diarrea") && checkedListBox2->CheckedItems->Contains("Dolores musculares") && 
			checkedListBox3->CheckedItems->Contains("Escalofrios") && checkedListBox3->CheckedItems->Contains("Dificultad para respirar") && checkedListBox3->CheckedItems->Contains("Tos")
			
			
			
			
			){
			MessageBox::Show("Correcto");
		}
		else 
			MessageBox::Show("Vuelve a intentarlo");
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();

}
};
}
