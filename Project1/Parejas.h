#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Parejas
	/// </summary>
	public ref class Parejas : public System::Windows::Forms::Form
	{
		int tiempo = 120;
		int vidas = 5;
		int clicks = 0;
		int parejas = 0;
		bool presionado1 = false;
		bool presionado2 = false;
		bool presionado3 = false;
		bool presionado4 = false;
		bool presionado5 = false;
		bool presionado6 = false;
		bool presionado7 = false;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  Mov;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
			 bool presionado8 = false;
	public:
		Parejas(void)
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
		~Parejas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Parejas::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mov = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(510, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 126);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Parejas::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(742, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 126);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Parejas::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Location = System::Drawing::Point(977, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 126);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Parejas::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Location = System::Drawing::Point(621, 406);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 126);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Parejas::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Location = System::Drawing::Point(859, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 126);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Parejas::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Location = System::Drawing::Point(510, 572);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(162, 126);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Parejas::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Location = System::Drawing::Point(742, 572);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(162, 126);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Parejas::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Location = System::Drawing::Point(977, 572);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(162, 126);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Parejas::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 629);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			// 
			// Mov
			// 
			this->Mov->Enabled = true;
			this->Mov->Interval = 10;
			this->Mov->Tick += gcnew System::EventHandler(this, &Parejas::Mov_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 416);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"label2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Parejas::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(510, 239);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(742, 239);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(162, 126);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(977, 239);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(162, 126);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(621, 406);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(162, 126);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(859, 406);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(162, 126);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(510, 572);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(162, 126);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(742, 572);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(162, 126);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 16;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(977, 572);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(162, 126);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			// 
			// Parejas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1196, 743);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox7);
			this->Name = L"Parejas";
			this->Text = L"Parejas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado1 == false) {
		presionado1 = true;
		this->button1->Enabled = false;
		this->button1->Visible = false;
	}
	else presionado1 = false;
	if (presionado1 == true && presionado7 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado1 = false;
		this->button1->Enabled = true;
		this->button1->Visible = true;
		vidas--;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado2 == false) {
		presionado2 = true;
		this->button2->Enabled = false;
		this->button2->Visible = false;
	}
	else presionado2 = false;
	if (presionado2 == true && presionado5 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado2 = false;
		this->button2->Enabled = true;
		this->button2->Visible = true;
		vidas--;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado3 == false) {
		presionado3 = true;
		this->button3->Enabled = false;
		this->button3->Visible = false;
	}
	else presionado3 = false;
	if (presionado3 == true && presionado6 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado3 = false;
		this->button3->Enabled = true;
		this->button3->Visible = true;
		vidas--;
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado4 == false) {
		presionado4 = true;
		this->button4->Enabled = false;
		this->button4->Visible = false;
	}
	else presionado4 = false;
	if (presionado4 == true && presionado8 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		presionado4 = false;
		this->button4->Enabled = true;
		this->button4->Visible = true;
		vidas--;
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado5 == false) {
		presionado5 = true;
		this->button5->Enabled = false;
		this->button5->Visible = false;
	}
	else presionado5 = false;
	if (presionado2 == true && presionado5 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado5 = false;
		this->button5->Enabled = true;
		this->button5->Visible = true;
		vidas--;
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado6 == false) {
		presionado6 = true;
		this->button6->Enabled = false;
		this->button6->Visible = false;
	}
	else presionado6 = false;
	if (presionado3 == true && presionado6 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado6 = false;
		this->button6->Enabled = true;
		this->button6->Visible = true;
		vidas--;
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado7 == false) {
		presionado7 = true;
		this->button7->Enabled = false;
		this->button7->Visible = false;
	}
	else presionado1 = false;
	if (presionado1 == true && presionado7 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado4 == true && presionado8 == true)) {
			presionado4 = false;
			this->button4->Enabled = true;
			this->button4->Visible = true;
			presionado8 = false;
			this->button8->Enabled = true;
			this->button8->Visible = true;
		}
		presionado7 = false;
		this->button7->Enabled = true;
		this->button7->Visible = true;
		vidas--;
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	clicks++;
	if (presionado8 == false) {
		presionado8 = true;
		this->button8->Enabled = false;
		this->button8->Visible = false;
	}
	else presionado8 = false;
	if (presionado4 == true && presionado8 == true) {
		parejas++;
	}
	else if (clicks % 2 == 0) {
		if (!(presionado2 == true && presionado5 == true)) {
			presionado2 = false;
			this->button2->Enabled = true;
			this->button2->Visible = true;
			presionado5 = false;
			this->button5->Enabled = true;
			this->button5->Visible = true;
		}
		if (!(presionado3 == true && presionado6 == true)) {
			presionado3 = false;
			this->button3->Enabled = true;
			this->button3->Visible = true;
			presionado6 = false;
			this->button6->Enabled = true;
			this->button6->Visible = true;
		}
		if (!(presionado1 == true && presionado7 == true)) {
			presionado1 = false;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			presionado7 = false;
			this->button7->Enabled = true;
			this->button7->Visible = true;
		}
		presionado8 = false;
		this->button8->Enabled = true;
		this->button8->Visible = true;
		vidas--;
	}
}
private: System::Void Mov_Tick(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = "Movimientos Restantes: " + vidas;
	if (vidas == 0) {
		this->Close();
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	tiempo--;
	label2->Text = "Segundos Restantes: " + tiempo;
	if (parejas == 4) {
		label2->Text = "Felicidades: Usted ha ganado :D";
		timer1->Enabled = false;
	}
}
};
}
