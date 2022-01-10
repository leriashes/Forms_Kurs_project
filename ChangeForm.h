#pragma once
#include "Cinema.h"
#include <msclr\marshal.h>
#include "msclr\marshal_cppstd.h"
#include <thread>

using namespace System;
using namespace System::Threading;

using namespace msclr::interop;

namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangeForm
	/// </summary>
	public ref class ChangeForm : public System::Windows::Forms::Form
	{
	private:
		Cinema* cinema;
		bool change;

	public:
		ChangeForm(Cinema& cinema1)
		{
			change = false;
			this->cinema = &cinema1;
			InitializeComponent();
		}
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	public:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Button^ Button_Save;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
		   

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChangeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: cli::array<System::Windows::Forms::Button^>^ but_del;
	private: cli::array<System::Windows::Forms::Button^>^ but_new;
	private: cli::array<System::Windows::Forms::TextBox^>^ Text_cash;
	private: System::Windows::Forms::Label^ label_Name;
	protected:
	private: System::Windows::Forms::Label^ label_Adress;
	private: System::Windows::Forms::Label^ label_Inn;
	private: System::Windows::Forms::Label^ label_Rnm;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_5New;
	private: System::Windows::Forms::Button^ button_4New;
	private: System::Windows::Forms::Button^ button_3New;
	private: System::Windows::Forms::Button^ button_2New;
	private: System::Windows::Forms::Button^ button_1New;
	private: System::Windows::Forms::Button^ button_5Del;
	private: System::Windows::Forms::Button^ button_4Del;
	private: System::Windows::Forms::Button^ button_3Del;
	private: System::Windows::Forms::Button^ button_2Del;
	private: System::Windows::Forms::Button^ button_1Del;
	private: System::Windows::Forms::TextBox^ textBox_5;

	private: System::Windows::Forms::TextBox^ textBox_4;

	private: System::Windows::Forms::TextBox^ textBox_3;

	private: System::Windows::Forms::TextBox^ textBox_2;

	private: System::Windows::Forms::TextBox^ textBox_1;


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
			this->label_Name = (gcnew System::Windows::Forms::Label());
			this->label_Adress = (gcnew System::Windows::Forms::Label());
			this->label_Inn = (gcnew System::Windows::Forms::Label());
			this->label_Rnm = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button_5New = (gcnew System::Windows::Forms::Button());
			this->button_4New = (gcnew System::Windows::Forms::Button());
			this->button_3New = (gcnew System::Windows::Forms::Button());
			this->button_2New = (gcnew System::Windows::Forms::Button());
			this->button_1New = (gcnew System::Windows::Forms::Button());
			this->button_5Del = (gcnew System::Windows::Forms::Button());
			this->button_4Del = (gcnew System::Windows::Forms::Button());
			this->button_3Del = (gcnew System::Windows::Forms::Button());
			this->button_2Del = (gcnew System::Windows::Forms::Button());
			this->button_1Del = (gcnew System::Windows::Forms::Button());
			this->textBox_5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Button_Save = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_Name
			// 
			this->label_Name->AutoSize = true;
			this->label_Name->Location = System::Drawing::Point(50, 107);
			this->label_Name->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Name->Name = L"label_Name";
			this->label_Name->Size = System::Drawing::Size(99, 25);
			this->label_Name->TabIndex = 0;
			this->label_Name->Text = L"Название";
			// 
			// label_Adress
			// 
			this->label_Adress->AutoSize = true;
			this->label_Adress->Location = System::Drawing::Point(84, 186);
			this->label_Adress->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Adress->Name = L"label_Adress";
			this->label_Adress->Size = System::Drawing::Size(69, 25);
			this->label_Adress->TabIndex = 1;
			this->label_Adress->Text = L"Адрес";
			// 
			// label_Inn
			// 
			this->label_Inn->AutoSize = true;
			this->label_Inn->Location = System::Drawing::Point(97, 266);
			this->label_Inn->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Inn->Name = L"label_Inn";
			this->label_Inn->Size = System::Drawing::Size(52, 25);
			this->label_Inn->TabIndex = 2;
			this->label_Inn->Text = L"ИНН";
			// 
			// label_Rnm
			// 
			this->label_Rnm->AutoSize = true;
			this->label_Rnm->Location = System::Drawing::Point(97, 354);
			this->label_Rnm->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Rnm->Name = L"label_Rnm";
			this->label_Rnm->Size = System::Drawing::Size(53, 25);
			this->label_Rnm->TabIndex = 3;
			this->label_Rnm->Text = L"РНМ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(233, 102);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 29);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(233, 181);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(330, 29);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Controls->Add(this->button_5New);
			this->groupBox1->Controls->Add(this->button_4New);
			this->groupBox1->Controls->Add(this->button_3New);
			this->groupBox1->Controls->Add(this->button_2New);
			this->groupBox1->Controls->Add(this->button_1New);
			this->groupBox1->Controls->Add(this->button_5Del);
			this->groupBox1->Controls->Add(this->button_4Del);
			this->groupBox1->Controls->Add(this->button_3Del);
			this->groupBox1->Controls->Add(this->button_2Del);
			this->groupBox1->Controls->Add(this->button_1Del);
			this->groupBox1->Controls->Add(this->textBox_5);
			this->groupBox1->Controls->Add(this->textBox_4);
			this->groupBox1->Controls->Add(this->textBox_3);
			this->groupBox1->Controls->Add(this->textBox_2);
			this->groupBox1->Controls->Add(this->textBox_1);
			this->groupBox1->Location = System::Drawing::Point(640, 57);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Size = System::Drawing::Size(721, 463);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Кассиры";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(332, 131);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 25);
			this->linkLabel1->TabIndex = 15;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// button_5New
			// 
			this->button_5New->Location = System::Drawing::Point(95, 358);
			this->button_5New->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_5New->Name = L"button_5New";
			this->button_5New->Size = System::Drawing::Size(138, 42);
			this->button_5New->TabIndex = 14;
			this->button_5New->Text = L"Добавить";
			this->button_5New->UseVisualStyleBackColor = true;
			this->button_5New->Click += gcnew System::EventHandler(this, &ChangeForm::button_5New_Click);
			// 
			// button_4New
			// 
			this->button_4New->Location = System::Drawing::Point(95, 279);
			this->button_4New->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_4New->Name = L"button_4New";
			this->button_4New->Size = System::Drawing::Size(138, 42);
			this->button_4New->TabIndex = 13;
			this->button_4New->Text = L"Добавить";
			this->button_4New->UseVisualStyleBackColor = true;
			this->button_4New->Click += gcnew System::EventHandler(this, &ChangeForm::button_4New_Click);
			// 
			// button_3New
			// 
			this->button_3New->Location = System::Drawing::Point(95, 209);
			this->button_3New->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_3New->Name = L"button_3New";
			this->button_3New->Size = System::Drawing::Size(138, 42);
			this->button_3New->TabIndex = 12;
			this->button_3New->Text = L"Добавить";
			this->button_3New->UseVisualStyleBackColor = true;
			this->button_3New->Click += gcnew System::EventHandler(this, &ChangeForm::button_3New_Click);
			// 
			// button_2New
			// 
			this->button_2New->Location = System::Drawing::Point(95, 129);
			this->button_2New->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_2New->Name = L"button_2New";
			this->button_2New->Size = System::Drawing::Size(138, 42);
			this->button_2New->TabIndex = 11;
			this->button_2New->Text = L"Добавить";
			this->button_2New->UseVisualStyleBackColor = true;
			this->button_2New->Click += gcnew System::EventHandler(this, &ChangeForm::button_2New_Click);
			// 
			// button_1New
			// 
			this->button_1New->Location = System::Drawing::Point(95, 50);
			this->button_1New->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_1New->Name = L"button_1New";
			this->button_1New->Size = System::Drawing::Size(138, 42);
			this->button_1New->TabIndex = 10;
			this->button_1New->Text = L"Добавить";
			this->button_1New->UseVisualStyleBackColor = true;
			this->button_1New->Click += gcnew System::EventHandler(this, &ChangeForm::button_1New_Click);
			// 
			// button_5Del
			// 
			this->button_5Del->Location = System::Drawing::Point(383, 354);
			this->button_5Del->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_5Del->Name = L"button_5Del";
			this->button_5Del->Size = System::Drawing::Size(138, 42);
			this->button_5Del->TabIndex = 9;
			this->button_5Del->Text = L"Удалить";
			this->button_5Del->UseVisualStyleBackColor = true;
			this->button_5Del->Click += gcnew System::EventHandler(this, &ChangeForm::button_5Del_Click);
			// 
			// button_4Del
			// 
			this->button_4Del->Location = System::Drawing::Point(383, 277);
			this->button_4Del->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_4Del->Name = L"button_4Del";
			this->button_4Del->Size = System::Drawing::Size(138, 42);
			this->button_4Del->TabIndex = 8;
			this->button_4Del->Text = L"Удалить";
			this->button_4Del->UseVisualStyleBackColor = true;
			this->button_4Del->Click += gcnew System::EventHandler(this, &ChangeForm::button_4Del_Click);
			// 
			// button_3Del
			// 
			this->button_3Del->Location = System::Drawing::Point(383, 201);
			this->button_3Del->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_3Del->Name = L"button_3Del";
			this->button_3Del->Size = System::Drawing::Size(138, 42);
			this->button_3Del->TabIndex = 7;
			this->button_3Del->Text = L"Удалить";
			this->button_3Del->UseVisualStyleBackColor = true;
			this->button_3Del->Click += gcnew System::EventHandler(this, &ChangeForm::button_3Del_Click);
			// 
			// button_2Del
			// 
			this->button_2Del->Location = System::Drawing::Point(383, 122);
			this->button_2Del->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_2Del->Name = L"button_2Del";
			this->button_2Del->Size = System::Drawing::Size(138, 42);
			this->button_2Del->TabIndex = 6;
			this->button_2Del->Text = L"Удалить";
			this->button_2Del->UseVisualStyleBackColor = true;
			this->button_2Del->Click += gcnew System::EventHandler(this, &ChangeForm::button_2Del_Click);
			// 
			// button_1Del
			// 
			this->button_1Del->Location = System::Drawing::Point(383, 42);
			this->button_1Del->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_1Del->Name = L"button_1Del";
			this->button_1Del->Size = System::Drawing::Size(138, 42);
			this->button_1Del->TabIndex = 5;
			this->button_1Del->Text = L"Удалить";
			this->button_1Del->UseVisualStyleBackColor = true;
			this->button_1Del->Click += gcnew System::EventHandler(this, &ChangeForm::button_1Del_Click);
			// 
			// textBox_5
			// 
			this->textBox_5->Location = System::Drawing::Point(95, 362);
			this->textBox_5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_5->Name = L"textBox_5";
			this->textBox_5->Size = System::Drawing::Size(180, 29);
			this->textBox_5->TabIndex = 4;
			this->textBox_5->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox_5_TextChanged);
			// 
			// textBox_4
			// 
			this->textBox_4->Location = System::Drawing::Point(95, 282);
			this->textBox_4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_4->Name = L"textBox_4";
			this->textBox_4->Size = System::Drawing::Size(180, 29);
			this->textBox_4->TabIndex = 3;
			this->textBox_4->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox_4_TextChanged);
			// 
			// textBox_3
			// 
			this->textBox_3->Location = System::Drawing::Point(95, 209);
			this->textBox_3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_3->Name = L"textBox_3";
			this->textBox_3->Size = System::Drawing::Size(180, 29);
			this->textBox_3->TabIndex = 2;
			this->textBox_3->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox_3_TextChanged);
			// 
			// textBox_2
			// 
			this->textBox_2->Location = System::Drawing::Point(95, 129);
			this->textBox_2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_2->Name = L"textBox_2";
			this->textBox_2->Size = System::Drawing::Size(180, 29);
			this->textBox_2->TabIndex = 1;
			this->textBox_2->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox_2_TextChanged);
			// 
			// textBox_1
			// 
			this->textBox_1->Location = System::Drawing::Point(95, 50);
			this->textBox_1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_1->Name = L"textBox_1";
			this->textBox_1->Size = System::Drawing::Size(180, 29);
			this->textBox_1->TabIndex = 0;
			this->textBox_1->TextChanged += gcnew System::EventHandler(this, &ChangeForm::textBox_1_TextChanged);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(233, 260);
			this->maskedTextBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->maskedTextBox1->Mask = L"000000000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(330, 29);
			this->maskedTextBox1->TabIndex = 10;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ChangeForm::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(233, 349);
			this->maskedTextBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->maskedTextBox2->Mask = L"0000000000000000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(330, 29);
			this->maskedTextBox2->TabIndex = 11;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &ChangeForm::maskedTextBox2_MaskInputRejected);
			// 
			// Button_Save
			// 
			this->Button_Save->Location = System::Drawing::Point(233, 548);
			this->Button_Save->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_Save->Name = L"Button_Save";
			this->Button_Save->Size = System::Drawing::Size(253, 68);
			this->Button_Save->TabIndex = 12;
			this->Button_Save->Text = L"Сохранить";
			this->Button_Save->UseVisualStyleBackColor = true;
			this->Button_Save->Click += gcnew System::EventHandler(this, &ChangeForm::Button_Save_Click);
			// 
			// ChangeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1472, 727);
			this->Controls->Add(this->Button_Save);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_Rnm);
			this->Controls->Add(this->label_Inn);
			this->Controls->Add(this->label_Adress);
			this->Controls->Add(this->label_Name);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ChangeForm";
			this->ShowIcon = false;
			this->Text = L"Данные о кинотеатре";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ChangeForm::ChangeForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ChangeForm::ChangeForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		but_del = gcnew cli::array<System::Windows::Forms::Button^>(5);
		but_new = gcnew cli::array<System::Windows::Forms::Button^>(5);
		Text_cash = gcnew cli::array<System::Windows::Forms::TextBox^>(5);
		for (int i = 0; i < 5; i++)
		{
			but_del[i] = gcnew System::Windows::Forms::Button;
			but_new[i] = gcnew System::Windows::Forms::Button;
			Text_cash[i] = gcnew System::Windows::Forms::TextBox;
		}
		but_del[0] = this->button_1Del;
		but_del[1] = this->button_2Del;
		but_del[2] = this->button_3Del;
		but_del[3] = this->button_4Del;
		but_del[4] = this->button_5Del;

		but_new[0] = this->button_1New;
		but_new[1] = this->button_2New;
		but_new[2] = this->button_3New;
		but_new[3] = this->button_4New;
		but_new[4] = this->button_5New;

		Text_cash[0] = this->textBox_1;
		Text_cash[1] = this->textBox_2;
		Text_cash[2] = this->textBox_3;
		Text_cash[3] = this->textBox_4;
		Text_cash[4] = this->textBox_5;

		for (int u = 0; u < 5; u++)
		{
			but_del[u]->Visible = false;
			but_new[u]->Visible = false;
			Text_cash[u]->Visible = false;
		}

		cinema->temp_inf[0] = cinema->name;
		cinema->temp_inf[1] = cinema->address;
		cinema->temp_inf[2] = cinema->inn;
		cinema->temp_inf[3] = cinema->rnm;
		cinema->inf_temp = cinema->cashiers_number;
		for (int h = 0; h < cinema->inf_temp; h++)
		{
			cinema->temp_inf[h + 4] = cinema->cashiers[h + 1];
		}

		this->linkLabel1->Visible = false;

		this->textBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->temp_inf[0]);
		this->textBox2->Text = msclr::interop::marshal_as<System::String^>(cinema->temp_inf[1]);
		this->maskedTextBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->temp_inf[2]);
		this->maskedTextBox2->Text = msclr::interop::marshal_as<System::String^>(cinema->temp_inf[3]);
		
		this->textBox_1->BackColor = DefaultBackColor;
		this->textBox_2->BackColor = DefaultBackColor;
		this->maskedTextBox1->BackColor = DefaultBackColor;
		this->maskedTextBox2->BackColor = DefaultBackColor;

		for (int y = 0; y < cinema->inf_temp; y++)
		{
			but_del[y]->Visible = true;
			but_new[y]->Visible = false;
			Text_cash[y]->Visible = true;
			Text_cash[y]->Text = msclr::interop::marshal_as<System::String^>(cinema->temp_inf[y + 4]);
			Text_cash[y]->BackColor = DefaultBackColor;
		}
		but_new[cinema->cashiers_number]->Visible = true;

	}
		   private: System::Void new_cashiers(int num_but)
		   {
			   if ((num_but == 0) || (Text_cash[num_but - 1]->Text != "" && num_but != 0))
			   {
					but_new[num_but]->Visible = false;
					but_new[num_but + 1]->Visible = true;
					but_del[num_but]->Visible = true;
					Text_cash[num_but]->Visible = true;
					Text_cash[num_but]->Text = "";
					cinema->inf_temp = cinema->inf_temp + 1;
					Text_cash[num_but]->BackColor = DefaultBackColor;
			   }
		   }

		   private: System::Void Sdvig(int num_but)
		   {
				but_new[cinema->inf_temp]->Visible = false;
				
				int h = num_but;
				do
				{
					Text_cash[h]->Text = Text_cash[h + 1]->Text;
					cinema->temp_inf[h + 1] = cinema->temp_inf[h + 2];
					h++;
				} while (h < cinema->inf_temp - 1);
				but_del[cinema->inf_temp - 1]->Visible = false;
				but_new[cinema->inf_temp - 1]->Visible = true;
				Text_cash[cinema->inf_temp - 1]->Visible = false;
				cinema->inf_temp = cinema->inf_temp - 1;
		   }

	private: System::Void button_1Del_Click(System::Object^ sender, System::EventArgs^ e) {
		Sdvig(0);
	}

	private: System::Void button_2Del_Click(System::Object^ sender, System::EventArgs^ e) {
		Sdvig(1);
	}

	private: System::Void button_3Del_Click(System::Object^ sender, System::EventArgs^ e) {
		Sdvig(2);
	}

	private: System::Void button_4Del_Click(System::Object^ sender, System::EventArgs^ e) {
		Sdvig(3);
	}

	private: System::Void button_5Del_Click(System::Object^ sender, System::EventArgs^ e) {
		Sdvig(4);
	}

	private: System::Void button_1New_Click(System::Object^ sender, System::EventArgs^ e) {
		new_cashiers(0);
	}
	private: System::Void button_2New_Click(System::Object^ sender, System::EventArgs^ e) {
		new_cashiers(1);
	}
	private: System::Void button_3New_Click(System::Object^ sender, System::EventArgs^ e) {
		new_cashiers(2);
	}
	private: System::Void button_4New_Click(System::Object^ sender, System::EventArgs^ e) {
		new_cashiers(3);
	}
	private: System::Void button_5New_Click(System::Object^ sender, System::EventArgs^ e) {
		new_cashiers(4);
	}
		   private: System::Boolean CheckTable()
		   {
			   bool bad = false;
			   this->textBox1->BackColor = Color::White;
			   if (this->textBox1->Text->Length == 0)
			   {
				   bad = true;
				   this->textBox1->BackColor = Color::Red;
			   }
			   else
			   {
				   cinema->temp_inf[0] = msclr::interop::marshal_as< std::string >(this->textBox1->Text);
			   }

			   if (this->textBox2->Text->Length == 0)
			   {
				   bad = true;
				   this->textBox2->BackColor = Color::Red;
			   }
			   else
			   {
				   cinema->temp_inf[1] = msclr::interop::marshal_as< std::string >(this->textBox2->Text);
			   }

			   if (!(this->maskedTextBox1->MaskCompleted))
			   {
				   bad = true;
				   this->maskedTextBox1->BackColor = Color::Red;
			   }
			   else
			   {
				   cinema->temp_inf[2] = msclr::interop::marshal_as< std::string >(this->maskedTextBox1->Text);
			   }

			   if (!(this->maskedTextBox2->MaskCompleted))
			   {
				   bad = true;
				   this->maskedTextBox2->BackColor = Color::Red;
			   }
			   else
			   {
				   cinema->temp_inf[3] = msclr::interop::marshal_as< std::string >(this->maskedTextBox2->Text);
			   }
			   
			   if (cinema->inf_temp == 0)
			   {
				   this->Text_cash[0]->Visible = true;
				   this->but_new[0]->Visible = false;
				   this->but_new[1]->Visible = true;
				   this->but_del[0]->Visible = true;
				   this->linkLabel1->Visible = true;
				   this->linkLabel1->Text = "Заполните данные как минимум \nоб одном кассире";
				   this->linkLabel1->LinkColor = Color::Red;
				   this->linkLabel1->ForeColor = Color::Orange;
				   cinema->inf_temp = cinema->inf_temp + 1;
				   bad = true;
			   }
			   else
			   {
				   for (int y = 1; y <= cinema->inf_temp; y++)
				   {
					   if (this->Text_cash[y - 1]->TextLength != 0)
					   {
						   cinema->temp_inf[y + 3] = msclr::interop::marshal_as< std::string >(this->Text_cash[y - 1]->Text);
					   }
					   else
					   {
						   this->Text_cash[y - 1]->BackColor = Color::Red;
						   bad = true;
					   }
				   }
			   }
			   return bad;
		   }
	private: System::Void Button_Save_Click(System::Object^ sender, System::EventArgs^ e) {
		bool bad = false;
		this->textBox1->BackColor = Color::White;
		if (this->textBox1->TextLength == 0)
			//if (this->textBox1->Text == "")
		{
			bad = true;
			this->textBox1->BackColor = Color::Red;
		}

		if (this->textBox2->TextLength == 0)
		{
			bad = true;
			this->textBox2->BackColor = Color::Red;
		}
		if (!(this->maskedTextBox1->MaskCompleted))
		{
			bad = true;
			this->maskedTextBox1->BackColor = Color::Red;
		}
		if (!(this->maskedTextBox2->MaskCompleted))
		{
			bad = true;
			this->maskedTextBox2->BackColor = Color::Red;
		}
		cinema->temp_inf[0] = msclr::interop::marshal_as< std::string >(this->textBox1->Text);
		cinema->temp_inf[1] = msclr::interop::marshal_as< std::string >(this->textBox2->Text);
		cinema->temp_inf[2] = msclr::interop::marshal_as< std::string >(this->maskedTextBox1->Text);
		cinema->temp_inf[3] = msclr::interop::marshal_as< std::string >(this->maskedTextBox2->Text);
		if (cinema->inf_temp == 0)
		{
			this->Text_cash[0]->Visible = true;
			this->but_new[0]->Visible = false;
			this->but_new[1]->Visible = true;
			this->but_del[0]->Visible = true;
			this->linkLabel1->Visible = true;
			this->linkLabel1->Text = "Заполните данные как минимум \nоб одном кассире";
			this->linkLabel1->LinkColor = Color::Red;
			this->linkLabel1->ForeColor = Color::Orange;
			cinema->inf_temp = cinema->inf_temp + 1;
			bad = true;
		}
		else
		{
			for (int y = 1; y <= cinema->inf_temp; y++)
			{
				if (this->Text_cash[y - 1]->TextLength != 0)
				{
					cinema->temp_inf[y + 3] = msclr::interop::marshal_as< std::string >(this->Text_cash[y - 1]->Text);
				}
				else
				{
					this->Text_cash[y - 1]->BackColor = Color::Red;
					bad = true;
				}
			}
		}
		if (bad == true)
		{
			change = true;
		}
		else if (bad == false) 
		{
			change = false;
			cinema->name = cinema->temp_inf[0];
			cinema->address = cinema->temp_inf[1];
			cinema->inn = cinema->temp_inf[2];
			cinema->rnm = cinema->temp_inf[3];
			cinema->cashiers_number = cinema->inf_temp;
			for (int h = 0; h < cinema->inf_temp; h++)
			{
				 cinema->cashiers[h + 1] = cinema->temp_inf[h + 4];
			}
		}
	}

	private: System::Void textBox_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_1->BackColor = DefaultBackColor;
		this->linkLabel1->Visible = false;
		this->change = true;
	}

	private: System::Void textBox_2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_2->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void textBox_3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_3->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void textBox_4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_4->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void textBox_5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_5->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->BackColor = DefaultBackColor;
		this->change = true;
	}

	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
		this->maskedTextBox1->BackColor = DefaultBackColor;
		this->change = true;
	}
	private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
		this->maskedTextBox2->BackColor = DefaultBackColor;
		this->change = true;
	}
	private: System::Void ChangeForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
};
}
