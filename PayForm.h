#pragma once
#include "Cinema.h"
#include "msclr\marshal_cppstd.h"

namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PayForm
	/// </summary>
	public ref class PayForm : public System::Windows::Forms::Form
	{
	private: int cost, num, change, sale, sum;
		   int* costp, *changep;
		   bool* way;
		   Cinema* cinema;

	public:
		PayForm(int& cost, int& num, int& change, bool& way, Cinema* cinema)
		{
			costp = &cost;
			this->cost = cost;
			this->num = num;
			changep = &change;
			this->way = &way;
			sale = this->change = sum = 0;
			this->cinema = cinema;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PayForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PayForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сумма к оплате:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(166, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"0.00";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->TextChanged += gcnew System::EventHandler(this, &PayForm::label2_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(119, 128);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Наличные";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &PayForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(266, 128);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Карта";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(115, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Выберите способ оплаты";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Наличными:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Картой:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->HidePromptOnLeave = true;
			this->maskedTextBox1->Location = System::Drawing::Point(124, 173);
			this->maskedTextBox1->Mask = L"00000.00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 26);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &PayForm::maskedTextBox1_TextChanged);
			this->maskedTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &PayForm::maskedTextBox1_KeyPress);
			this->maskedTextBox1->Leave += gcnew System::EventHandler(this, &PayForm::maskedTextBox1_Leave);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::SystemColors::Window;
			this->maskedTextBox2->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox2->Enabled = false;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maskedTextBox2->Location = System::Drawing::Point(124, 216);
			this->maskedTextBox2->Mask = L"00000.00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->ReadOnly = true;
			this->maskedTextBox2->Size = System::Drawing::Size(100, 26);
			this->maskedTextBox2->TabIndex = 8;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &PayForm::maskedTextBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(230, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"0.00";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(230, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(228, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"0.00";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Промокод";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(124, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &PayForm::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(333, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Скидка";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(404, 39);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"0%";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 270);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(154, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Сдача наличных:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(166, 270);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(292, 20);
			this->label12->TabIndex = 16;
			this->label12->Text = L"0.00";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(131, 310);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(190, 20);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Подтвердите оплату";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(124, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 35);
			this->button1->TabIndex = 18;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PayForm::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(249, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 35);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(230, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 26);
			this->button3->TabIndex = 20;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PayForm::button3_Click);
			// 
			// PayForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(470, 389);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(486, 427);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(486, 427);
			this->Name = L"PayForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Оплата";
			this->Load += gcnew System::EventHandler(this, &PayForm::PayForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CountChange(System::Object^ sender, System::EventArgs^ e) {
		change = sum - (cost - sale) * num;

		if (change >= 0)
		{
			label12->Text = change.ToString() + ".00";
		}
		else
		{
			label12->Text = "0.00";
		}
		
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked)
		{
			maskedTextBox1->Enabled = true;
			maskedTextBox1->Text = "    0.00";

			maskedTextBox2->Enabled = false;
			maskedTextBox2->Text = "    0.00";
		}
		else
		{
			maskedTextBox1->Enabled = false;
			maskedTextBox1->Text = "    0.00";

			maskedTextBox2->Enabled = true;
			maskedTextBox2->Text = label2->Text;
		}

		sum = 0;
	}

	private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (maskedTextBox1->Text->Length == 8)
		{
			label6->Text = "";

			for (int i = 0; i < 8; i++)
			{
				if (maskedTextBox1->Text[i] >= '0' && maskedTextBox1->Text[i] <= '9' || maskedTextBox1->Text[i] == '.')
				{
					label6->Text += maskedTextBox1->Text[i];
				}
				else if (i > 5)
				{
					label6->Text += "0";
				}

			}
		}
		else
			label6->Text = "    0.00";

		if (maskedTextBox1->Enabled)
		{
			sum = 0;

			for (int i = 0; i < label6->Text->Length - 2; i++)
			{
				if (label6->Text[i] >= '0' && label6->Text[i] <= '9')
				{
					sum = sum * 10 + label6->Text[i] - 48;
				}
			}
		}

		CountChange(sender, e);
	}

	private: System::Void maskedTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = maskedTextBox2->Text;

		if (maskedTextBox2->Enabled)
		{
			sum = (cost - sale) * num;
		}

		CountChange(sender, e);
	}

	private: System::Void maskedTextBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		bool first = false;
		label6->Text = "";
		for (int i = 0; i < maskedTextBox1->Text->Length; i++)
		{
			if (maskedTextBox1->Text[i] >= '1' && maskedTextBox1->Text[i] <= '9' || maskedTextBox1->Text[i] == '.' || maskedTextBox1->Text[i] == '0' && first)
			{
				label6->Text += maskedTextBox1->Text[i];
				first = true;
			}
		}

		if (label6->Text[0] == '.')
		{
			label6->Text = "0" + label6->Text;
		}

		if (label6->Text[label6->Text->Length - 1] == '.')
		{
			label6->Text += "00";
		}

		if (label6->Text[label6->Text->Length - 2] == '.')
		{
			label6->Text += "0";
		}

		String^ str = label6->Text;

		for (int i = 0; i < 8 - label6->Text->Length; i++)
		{
			str = " " + str;
		}

		maskedTextBox1->Text = str;
	}

	private: System::Void PayForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ((cost - sale) * num).ToString() + ".00";
		String^ str = label2->Text;

		for (int i = 0; i < 8 - label2->Text->Length; i++)
		{
			str = " " + str;
		}

		label2->Text = str;
	}

	private: System::Void maskedTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '\r')
		{
			maskedTextBox1_Leave(sender, e);
		}
	}

	private: System::Void label2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CountChange(sender, e);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		maskedTextBox1_Leave(sender, e);

		if (change < 0)
		{
			String^ message = L"Недостаточно средств!";
			String^ caption = L"";
			MessageBox::Show(message, caption, MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
		else
		{
			*costp = cost;
			*changep = change;
			*way = radioButton2->Checked;
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		sale = 0;
		label10->Text = "0%";
		for (int i = 0; i < cinema->promo_number; i++)
		{
			if (textBox1->Text == msclr::interop::marshal_as<System::String^>(cinema->promo[i + 1][0]))
			{
				sale = cost * stoi(cinema->promo[i + 1][1]) / 100;
				label10->Text = msclr::interop::marshal_as<System::String^>(cinema->promo[i + 1][1]) + "%";
				break;
			}
		}

		if (sale == 0)
		{
			textBox1->Text = "";
		}

		CountChange(sender, e);
		PayForm_Load(sender, e);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		sale = 0;
		label10->Text = "0%";
		CountChange(sender, e);
		PayForm_Load(sender, e);
	}
};
}
