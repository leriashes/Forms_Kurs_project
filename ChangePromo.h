#pragma once
#include "Cinema.h"
#include <msclr\marshal.h>
#include "msclr\marshal_cppstd.h"
#include <thread>

using namespace System;
using namespace System::Threading;
namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangePromo
	/// </summary>
	public ref class ChangePromo : public System::Windows::Forms::Form
	{
	private:
		Cinema* cinema;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ procent;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
		   bool change;
	public:
		ChangePromo(Cinema& cinema1)
		{
			this->cinema = &cinema1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChangePromo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->procent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(655, 469);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangePromo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(931, 469);
			this->button2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChangePromo::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(266, 162);
			this->comboBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(219, 32);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ChangePromo::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(765, 164);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 29);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ChangePromo::textBox1_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(765, 257);
			this->maskedTextBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->maskedTextBox1->Mask = L"000%";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(180, 29);
			this->maskedTextBox1->TabIndex = 4;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &ChangePromo::maskedTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(631, 175);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(636, 268);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Номинал";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(931, 388);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 25);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(649, 388);
			this->linkLabel2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(100, 25);
			this->linkLabel2->TabIndex = 8;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"linkLabel2";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(266, 486);
			this->linkLabel3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(100, 25);
			this->linkLabel3->TabIndex = 9;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"linkLabel3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(968, 170);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"label3";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->number,
					this->Name, this->procent
			});
			this->dataGridView1->Location = System::Drawing::Point(1382, 103);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->Size = System::Drawing::Size(1221, 487);
			this->dataGridView1->TabIndex = 11;
			// 
			// number
			// 
			this->number->HeaderText = L"№";
			this->number->MinimumWidth = 9;
			this->number->Name = L"number";
			this->number->ReadOnly = true;
			this->number->Width = 175;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Название";
			this->Name->MinimumWidth = 9;
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 175;
			// 
			// procent
			// 
			this->procent->HeaderText = L"%";
			this->procent->MinimumWidth = 9;
			this->procent->Name = L"procent";
			this->procent->ReadOnly = true;
			this->procent->Width = 175;
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->linkLabel4->Location = System::Drawing::Point(1544, 642);
			this->linkLabel4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(147, 33);
			this->linkLabel4->TabIndex = 12;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"linkLabel4";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ChangePromo::linkLabel4_LinkClicked);
			// 
			// ChangePromo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2564, 864);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->ShowIcon = false;
			this->Text = L"Редактирование информации о промокодах";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ChangePromo::ChangePromo_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ChangePromo::ChangePromo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void LoadPromo()	//загрузка всех промокодов в список
		{
			//заполнение таблицы с промокодами
			if (this->dataGridView1->Rows->Count != 1)
			{
				for (int j = 0; j < this->dataGridView1->Rows->Count; j++)
				{
					this->dataGridView1->Rows->Remove(this->dataGridView1->Rows[0]);
				}
			}

			this->comboBox1->Items->Clear();
			for (int k = 1; k <= cinema->promo_number; k++)
			{
				this->comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>((cinema->promo[k][0]).c_str()) + " (" + msclr::interop::marshal_as<System::String^>((cinema->promo[k][1]).c_str()) + "%)");
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[k - 1]->Cells[0]->Value = k.ToString();
				this->dataGridView1->Rows[k - 1]->Cells[1]->Value = msclr::interop::marshal_as<System::String^>(cinema->promo[k][0].c_str());
				this->dataGridView1->Rows[k - 1]->Cells[2]->Value = msclr::interop::marshal_as<System::String^>(cinema->promo[k][1]);

			}
			this->comboBox1->Items->Add("Создать новый");
			this->change = false;
			this->linkLabel3->Text = "Всего промокодов: " + cinema->promo_number;
			
			

			
		}
			   
	private: System::Void ChangePromo_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->linkLabel1->Visible = false;
		this->linkLabel2->Visible = false;
		this->label3->ForeColor = Color::Red;
		this->label3->Visible = false;
		this->linkLabel4->Text = "Скрыть";
		LoadPromo();
	}
	

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->SelectedIndex < cinema->promo_number)
		{
			this->textBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->promo[this->comboBox1->SelectedIndex + 1][0]);
			this->maskedTextBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->promo[this->comboBox1->SelectedIndex + 1][1]);
		}
		else
		{
			this->textBox1->Text = "";
			this->maskedTextBox1->Text = "";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox1->SelectedIndex != -1)
		{
			if (this->comboBox1->SelectedIndex < cinema->promo_number)
			{
				for (int y = this->comboBox1->SelectedIndex + 1; y < cinema->promo_number + 1; y++)
				{
					cinema->promo[y][0] = cinema->promo[y + 1][0];
					cinema->promo[y][1] = cinema->promo[y + 1][1];
				}
				cinema->promo_number = cinema->promo_number - 1;
				this->textBox1->Text = "";
				this->maskedTextBox1->Text = "";
				this->comboBox1->Text = "";
				this->linkLabel1->ForeColor = Color::Red;
				this->linkLabel1->Visible = true;
				this->linkLabel1->Text = "Успешно удалено";
				Thread^ Thread1 = gcnew Thread(gcnew ThreadStart(this, &ChangePromo::VisibleChange));
				Thread1->Name = "Thread1";
				Thread1->Start();
				LoadPromo();
			}
			else
			{

			}
		}
	}

	private: void VisibleChange()
	{
		Sleep(3500);
		Thread^ current = Thread::CurrentThread;
		if (current->Name == "Thread1")
		{
			this->linkLabel1->Visible = false;
		}
		else if (current->Name == "Thread2")
		{
			this->linkLabel2->Visible = false;
		}
		else if (current->Name == "Thread3")
		{
			this->label3->Visible = false;
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox1->SelectedIndex != -1)
	{
		bool bad = false;
		if (this->textBox1->Text->Length == 0)
		{
			this->textBox1->BackColor = Color::Red;
			bad = true;
		}
		if (this->maskedTextBox1->Text == "   %")
		{
			this->maskedTextBox1->BackColor = Color::Red;
			bad = true;
		}
		else
		{

			string tr = msclr::interop::marshal_as < std::string >(this->maskedTextBox1->Text);
			tr.erase(3, 4);
			string itog = "";
			for (int y = 0; y < 3; y++)
			{
				if (tr[y] != ' ')
				{
					itog = itog + tr[y];
				}
			}
			if (stoi(itog) > 100)
			{
				this->maskedTextBox1->BackColor = Color::Red;
				bad = true;
			}
		}

		if (bad == true)
		{

		}
		else
		{
			
			//убрать все пробелы в номинале промокода
			string tr = msclr::interop::marshal_as < std::string >(this->maskedTextBox1->Text);
			tr.erase(3, 4);
			string itog = "";
			for (int y = 0; y < 3; y++)
			{
				if (tr[y] != ' ')
				{
					itog = itog + tr[y];
				}
			}
			if (this->comboBox1->SelectedIndex == cinema->promo_number)
			{
				for (int h = 1; h <= cinema->promo_number; h++)	//проверка одинаковых названий промокдов, если создается новый промокод
				{
					if (cinema->promo[h][0] == msclr::interop::marshal_as< std::string >(this->textBox1->Text))
					{
						this->textBox1->BackColor = Color::Red;
						this->label3->Visible = true;
						this->label3->Text = "Промокод с таким именем уже существует";
						Thread^ Thread3 = gcnew Thread(gcnew ThreadStart(this, &ChangePromo::VisibleChange));
						Thread3->Name = "Thread3";
						Thread3->Start();
						return;
					}

				}
				cinema->promo_number = cinema->promo_number + 1;
				cinema->promo[cinema->promo_number][0] = msclr::interop::marshal_as< std::string >(this->textBox1->Text);
				cinema->promo[cinema->promo_number][1] = itog;
			}
			else
			{
				cinema->promo[this->comboBox1->SelectedIndex + 1][0] = msclr::interop::marshal_as< std::string >(this->textBox1->Text);
				cinema->promo[this->comboBox1->SelectedIndex + 1][1] = itog;
			}
			this->change = false;
			this->textBox1->Text = "";
			this->maskedTextBox1->Text = "";
			this->comboBox1->Text = "";

			this->linkLabel2->Visible = true;
			this->linkLabel2->ForeColor = Color::Green;
			this->linkLabel2->Text = "Изменения успешно сохранены";
			Thread^ Thread2 = gcnew Thread(gcnew ThreadStart(this, &ChangePromo::VisibleChange));
			Thread2->Name = "Thread2";
			Thread2->Start();
			LoadPromo();
		}
	}
}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->maskedTextBox1->BackColor = DefaultBackColor;
		this->change = true;
	}

private: System::Void ChangePromo_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	e->Cancel = true;
	if (this->change == true)
	{
		String^ message = L"Вы уверены, что хотите выйти без сохранения изменений?";
		String^ caption = L"Вы уверены?";
		if (MessageBox::Show(message, caption, MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			e->Cancel = false;
		}
		else
		{

		}
	}
	else
	{
		e->Cancel = false;
	}

}
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	if (this->linkLabel4->Text == "Скрыть")
	{
		this->dataGridView1->Visible = false;
		this->linkLabel4->Text = "Раскрыть";
	}
	else
	{
		this->dataGridView1->Visible = true;
		this->linkLabel4->Text = "Скрыть";
	}
}
};
}
