#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(128, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 29);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(128, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(104, 29);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(487, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(104, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(487, 126);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(104, 29);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(601, 47);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(128, 26);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(16, 100);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(104, 29);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(375, 100);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(104, 29);
			this->textBox7->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"��������", L"���������", L"���������", L"�������" });
			this->comboBox1->Location = System::Drawing::Point(243, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(112, 28);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"��������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"������ �����:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(390, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"������ �����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(124, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"���������:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(124, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"�����������:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(597, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"���������:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(238, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"��������";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"����� �����:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(615, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 32);
			this->button1->TabIndex = 15;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(615, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 33);
			this->button2->TabIndex = 16;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(824, 24);
			this->menu->TabIndex = 17;
			this->menu->Text = L"menu";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->����ToolStripMenuItem->Text = L"�������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(215, 22);
			this->�����ToolStripMenuItem->Text = L"�������������� ������";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->CheckOnClick = true;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(371, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"����� �����:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(483, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"���������:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(483, 103);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"�����������:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(824, 211);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menu);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(840, 250);
			this->MinimumSize = System::Drawing::Size(840, 250);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //�������� �� ���� ������ �������� ����� ���� � ������
		   bool flag = true;
		   bool Protect() {
			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0) ||
				   (textBox4->Text->Length == 0) || (textBox6->Text->Length == 0) || (textBox7->Text->Length == 0)) {
				   return false;
			   }
			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   for (int i = 0; i < textBox2->Text->Length; i++) {
				   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   for (int i = 0; i < textBox3->Text->Length; i++) {
				   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   for (int i = 0; i < textBox4->Text->Length; i++) {
				   if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9') || (textBox4->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   for (int i = 0; i < textBox6->Text->Length; i++) {
				   if ((textBox6->Text[i] >= '0') && (textBox6->Text[i] <= '9') || (textBox6->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   for (int i = 0; i < textBox7->Text->Length; i++) {
				   if ((textBox7->Text[i] >= '0') && (textBox7->Text[i] <= '9') || (textBox7->Text[i] == '-')) {
				   }
				   else { MessageBox::Show("������ �����!", "������!"); flag = false; return false; }
			   }
			   return true;
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//������ ���������-��������� �������� ����� ������� � ������� ���������, �� ���� ������� ������� �� ���� ������� ��������������� ��������� �� ������
		if (Protect()) {
			double Num1, Num2, Num3, Num4, x1, x2, Otvet;
			Num1 = System::Convert::ToDouble(textBox1->Text);
			Num2 = System::Convert::ToDouble(textBox2->Text);
			Num3 = System::Convert::ToDouble(textBox3->Text);
			Num4 = System::Convert::ToDouble(textBox4->Text);
			x1 = System::Convert::ToDouble(textBox6->Text);
			x2 = System::Convert::ToDouble(textBox7->Text);
			if (comboBox1->SelectedItem == "��������") {
				label6->Text = L"��������";
				if (x1 == 0 && x2 == 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						Num1 = Num1 * Num4;
						Num3 = Num3 * Num2;
						Num2 = Num2 * Num4;
						Num4 = Num2;
						Otvet = (Num1 / Num2) + (Num3 / Num4);
					}
				}
				else if (x1 != 0 && x2 != 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x1 < 0 && x2 > 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) - Num1) / Num2;
							Num3 = ((x2 * Num4) + Num3) / Num4;
							Otvet = (Num1 + Num3);
						}
						if (x1 > 0 && x2 < 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
						if (x1 < 0 && x2 < 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (x1 > 0 && x2 > 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
					}
				}
				else if (x1 == 0 && x2 != 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x2 < 0) {
							label6->Text = L"��������";
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (x2 > 0) {
							label6->Text = L"��������";
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
					}
				}
				else if (x1 != 0 && x2 == 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x1 < 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
						else if (x1 > 0) {
							label6->Text = L"��������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) + (Num3 / Num4);
						}
					}
				}
			}
			else if (comboBox1->SelectedItem == "���������") {
				label6->Text = L"���������";
				if (x1 == 0 && x2 == 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						Num1 = Num1 * Num4;
						Num3 = Num3 * Num2;
						Num2 = Num2 * Num4;
						Num4 = Num2;
						Otvet = (Num1 / Num2) - (Num3 / Num4);
					}
				}
				else if (x1 != 0 && x2 != 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x1 < 0 && x2 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
						if (x1 > 0 && x2 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
						if (x1 < 0 && x2 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (x1 > 0 && x2 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
					}
				}
				else if (x1 == 0 && x2 != 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x2 < 0) {
							label6->Text = L"���������";
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (x2 > 0) {
							label6->Text = L"���������";
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
					}
				}
				else if (x1 != 0 && x2 == 0) {
					if (Num2 == 0 || Num4 == 0) {
						MessageBox::Show("�� ���� ������ ������!", "������!"); return;
					}
					else {
						if (x1 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
						else if (x1 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = Num3 * Num2;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2) - (Num3 / Num4);
						}
					}
				}
			}
			else if (comboBox1->SelectedItem == "���������") {
				if (x1 == 0 && x2 == 0) {
					Num1 = Num1 * Num3;
					Num2 = Num2 * Num4;
					if (Num2 != 0) {
						label6->Text = L"���������";
						Otvet = (Num1 / Num2);
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 != 0 && x2 != 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x1 < 0 && x2 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1);
							Num3 = ((x2 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
						else if (x1 > 0 && x2 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1);
							Num3 = ((x2 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
						else if (x1 < 0 && x2 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1);
							Num3 = ((x2 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
						else if (x1 > 0 && x2 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1);
							Num3 = ((x2 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 == 0 && x2 != 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x2 < 0) {
							label6->Text = L"���������";
							Num3 = ((x2 * Num4) - Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
						else if (x2 > 0) {
							label6->Text = L"���������";
							Num3 = ((x2 * Num4) + Num3) * Num1;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num3 / Num2);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 != 0 && x2 == 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x1 < 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) - Num1) * Num3;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2);
						}
						else if (x1 > 0) {
							label6->Text = L"���������";
							Num1 = ((x1 * Num2) + Num1) * Num3;
							Num2 = Num2 * Num4;
							Num4 = Num2;
							Otvet = (Num1 / Num2);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
			}
			else if (comboBox1->SelectedItem == "�������") {
				if (x1 == 0 && x2 == 0) {
					if (Num2 != 0 && Num4 != 0) {
						label6->Text = L"�������";
						Num1 = Num1 * Num4;
						Num2 = Num2 * Num3;
						Otvet = (Num1 / Num2);
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 != 0 && x2 != 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x1 < 0 && x2 > 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Otvet = (Num1 / Num3);
						}
						else if (x2 < 0 && x1 > 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Otvet = (Num1 / Num3);
						}
						else if (x1 < 0 && x2 < 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Otvet = (Num1 / Num3);
						}
						else if (x1 > 0 && x2 > 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Otvet = (Num1 / Num3);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 != 0 && x2 == 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x1 < 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) - Num1) * Num4;
							Num2 = Num2 * Num3;
							Otvet = (Num1 / Num2);
						}
						else if (x1 > 0) {
							label6->Text = L"�������";
							Num1 = ((x1 * Num2) + Num1) * Num4;
							Num2 = Num2 * Num3;
							Otvet = (Num1 / Num2);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
				else if (x1 == 0 && x2 != 0) {
					if (Num2 != 0 && Num4 != 0) {
						if (x2 < 0) {
							label6->Text = L"�������";
							Num3 = ((x2 * Num4) - Num3) * Num2;
							Num1 = Num1 * Num4;
							Otvet = (Num1 / Num3);
						}
						else if (x2 > 0) {
							label6->Text = L"�������";
							Num3 = ((x2 * Num4) + Num3) * Num2;
							Num1 = Num1 * Num4;
							Otvet = (Num1 / Num3);
						}
					}
					else { MessageBox::Show("�� ���� ������ ������!", "������!"); return; }
				}
			}
			textBox5->Text = System::Convert::ToString(Otvet);
		}
		else if (flag == false) { flag = true; return; }
		else { MessageBox::Show("��������� ����!", "������!"); }	//��������� � ������� �����
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//������ ������ �������
		textBox1->Text = L"";
		textBox2->Text = L"";
		textBox3->Text = L"";
		textBox4->Text = L"";
		textBox5->Text = L"";
		textBox6->Text = L"";
		textBox7->Text = L"";
		label6->Text = L"";
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("���������� ������-�����������\n" "������� �.�.\n" "��� - 21 - 2�\n" "�����\n ", "�������������� ������");	//����� � ������ ���������� � ���������� ������
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("����������� ������� ������ � ������ �������", "� ���������");	//����� � ������ � ������������
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//���������� ���� ������ �� ���������
		if (MessageBox::Show("�����", "����� �� ���������", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
			e->Cancel = true;
		}
		else { e->Cancel = false; }
	}
	};
}