#pragma once
#include "Set.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;


	protected:

















	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 36);
			this->button1->TabIndex = 33;
			this->button1->Text = L"Calc";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 276);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Âûâîä:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(13, 299);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(247, 129);
			this->textBox4->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Ôîðìóëà:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(192, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"C";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(110, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 17);
			this->label6->TabIndex = 25;
			this->label6->Text = L"B";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 17);
			this->label5->TabIndex = 24;
			this->label5->Text = L"A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(202, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(359, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Ââåäèòå ýëåìåíòû êàæäîãî ìíîæåñòâà ÷åðåç ïðîáåë";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(491, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"C:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(253, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 21;
			this->label2->Text = L"B:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"A:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(518, 44);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(210, 80);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(280, 42);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 83);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 39);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 85);
			this->textBox1->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(288, 166);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(439, 262);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"*", L"-", L"/" });
			this->comboBox1->Location = System::Drawing::Point(51, 179);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(50, 24);
			this->comboBox1->TabIndex = 35;
			this->comboBox1->Text = L"+";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"*", L"-", L"/" });
			this->comboBox2->Location = System::Drawing::Point(133, 179);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(50, 24);
			this->comboBox2->TabIndex = 35;
			this->comboBox2->Text = L"+";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 445);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Operations on Sets";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Set ^A, ^B, ^C, ^D;
		A = gcnew Set();
		B = gcnew Set();
		C = gcnew Set();
		D = gcnew Set();
		String^ filename = "";

		A->poolFromString(this->textBox1->Text);
		B->poolFromString(this->textBox2->Text);
		C->poolFromString(this->textBox3->Text);

		switch (this->comboBox1->SelectedIndex) {
			case 0:
				D = A + B;
				filename += "+";
				break;
			case 1:
				D = A * B;
				filename += "&";
				break;
			case 2:
				D = A - B;
				filename += "-";
				break;
			case 3:
				D = A / B;
				filename += "7";
				break;
		}

		switch (this->comboBox2->SelectedIndex) {
			case 0:
				D = D + C;
				filename += "+";
				break;
			case 1:
				D = D * C;
				filename += "&";
				break;
			case 2:
				D = D - C;
				filename += "-";
				break;
			case 3:
				D = D / C;
				filename += "7";
				break;
		}

		this->textBox4->Text = D->getItemsString();
		filename = "Data\\Images\\" + filename + ".jpg";
		pictureBox1->Image = Image::FromFile(filename);
	}

};
}
