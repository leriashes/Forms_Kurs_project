#pragma once
#include "Cinema.h"
#include <msclr\marshal.h>
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
	public:
		//ChangeForm(void)
		ChangeForm(Cinema& cinema1)
		{
			
			this->cinema = &cinema1;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Cinema* cinema;

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
	private: System::Windows::Forms::Label^ label_Name;
	protected:
	private: System::Windows::Forms::Label^ label_Adress;
	private: System::Windows::Forms::Label^ label_Inn;
	private: System::Windows::Forms::Label^ label_Rnm;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_Name
			// 
			this->label_Name->AutoSize = true;
			this->label_Name->Location = System::Drawing::Point(27, 58);
			this->label_Name->Name = L"label_Name";
			this->label_Name->Size = System::Drawing::Size(57, 13);
			this->label_Name->TabIndex = 0;
			this->label_Name->Text = L"Название";
			// 
			// label_Adress
			// 
			this->label_Adress->AutoSize = true;
			this->label_Adress->Location = System::Drawing::Point(46, 101);
			this->label_Adress->Name = L"label_Adress";
			this->label_Adress->Size = System::Drawing::Size(38, 13);
			this->label_Adress->TabIndex = 1;
			this->label_Adress->Text = L"Адрес";
			// 
			// label_Inn
			// 
			this->label_Inn->AutoSize = true;
			this->label_Inn->Location = System::Drawing::Point(53, 144);
			this->label_Inn->Name = L"label_Inn";
			this->label_Inn->Size = System::Drawing::Size(31, 13);
			this->label_Inn->TabIndex = 2;
			this->label_Inn->Text = L"ИНН";
			// 
			// label_Rnm
			// 
			this->label_Rnm->AutoSize = true;
			this->label_Rnm->Location = System::Drawing::Point(53, 192);
			this->label_Rnm->Name = L"label_Rnm";
			this->label_Rnm->Size = System::Drawing::Size(31, 13);
			this->label_Rnm->TabIndex = 3;
			this->label_Rnm->Text = L"РНМ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(127, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(349, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(393, 251);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Кассиры";
			// 
			// button_5New
			// 
			this->button_5New->Location = System::Drawing::Point(52, 210);
			this->button_5New->Name = L"button_5New";
			this->button_5New->Size = System::Drawing::Size(75, 23);
			this->button_5New->TabIndex = 14;
			this->button_5New->Text = L"Добавить";
			this->button_5New->UseVisualStyleBackColor = true;
			// 
			// button_4New
			// 
			this->button_4New->Location = System::Drawing::Point(52, 180);
			this->button_4New->Name = L"button_4New";
			this->button_4New->Size = System::Drawing::Size(75, 23);
			this->button_4New->TabIndex = 13;
			this->button_4New->Text = L"Добавить";
			this->button_4New->UseVisualStyleBackColor = true;
			// 
			// button_3New
			// 
			this->button_3New->Location = System::Drawing::Point(52, 140);
			this->button_3New->Name = L"button_3New";
			this->button_3New->Size = System::Drawing::Size(75, 23);
			this->button_3New->TabIndex = 12;
			this->button_3New->Text = L"Добавить";
			this->button_3New->UseVisualStyleBackColor = true;
			// 
			// button_2New
			// 
			this->button_2New->Location = System::Drawing::Point(52, 97);
			this->button_2New->Name = L"button_2New";
			this->button_2New->Size = System::Drawing::Size(75, 23);
			this->button_2New->TabIndex = 11;
			this->button_2New->Text = L"Добавить";
			this->button_2New->UseVisualStyleBackColor = true;
			// 
			// button_1New
			// 
			this->button_1New->Location = System::Drawing::Point(52, 41);
			this->button_1New->Name = L"button_1New";
			this->button_1New->Size = System::Drawing::Size(75, 23);
			this->button_1New->TabIndex = 10;
			this->button_1New->Text = L"Добавить";
			this->button_1New->UseVisualStyleBackColor = true;
			// 
			// button_5Del
			// 
			this->button_5Del->Location = System::Drawing::Point(209, 192);
			this->button_5Del->Name = L"button_5Del";
			this->button_5Del->Size = System::Drawing::Size(75, 23);
			this->button_5Del->TabIndex = 9;
			this->button_5Del->Text = L"Удалить";
			this->button_5Del->UseVisualStyleBackColor = true;
			// 
			// button_4Del
			// 
			this->button_4Del->Location = System::Drawing::Point(209, 150);
			this->button_4Del->Name = L"button_4Del";
			this->button_4Del->Size = System::Drawing::Size(75, 23);
			this->button_4Del->TabIndex = 8;
			this->button_4Del->Text = L"Удалить";
			this->button_4Del->UseVisualStyleBackColor = true;
			// 
			// button_3Del
			// 
			this->button_3Del->Location = System::Drawing::Point(209, 109);
			this->button_3Del->Name = L"button_3Del";
			this->button_3Del->Size = System::Drawing::Size(75, 23);
			this->button_3Del->TabIndex = 7;
			this->button_3Del->Text = L"Удалить";
			this->button_3Del->UseVisualStyleBackColor = true;
			// 
			// button_2Del
			// 
			this->button_2Del->Location = System::Drawing::Point(209, 66);
			this->button_2Del->Name = L"button_2Del";
			this->button_2Del->Size = System::Drawing::Size(75, 23);
			this->button_2Del->TabIndex = 6;
			this->button_2Del->Text = L"Удалить";
			this->button_2Del->UseVisualStyleBackColor = true;
			// 
			// button_1Del
			// 
			this->button_1Del->Location = System::Drawing::Point(209, 23);
			this->button_1Del->Name = L"button_1Del";
			this->button_1Del->Size = System::Drawing::Size(75, 23);
			this->button_1Del->TabIndex = 5;
			this->button_1Del->Text = L"Удалить";
			this->button_1Del->UseVisualStyleBackColor = true;
			// 
			// textBox_5
			// 
			this->textBox_5->Location = System::Drawing::Point(52, 196);
			this->textBox_5->Name = L"textBox_5";
			this->textBox_5->Size = System::Drawing::Size(100, 20);
			this->textBox_5->TabIndex = 4;
			// 
			// textBox_4
			// 
			this->textBox_4->Location = System::Drawing::Point(52, 153);
			this->textBox_4->Name = L"textBox_4";
			this->textBox_4->Size = System::Drawing::Size(100, 20);
			this->textBox_4->TabIndex = 3;
			// 
			// textBox_3
			// 
			this->textBox_3->Location = System::Drawing::Point(52, 113);
			this->textBox_3->Name = L"textBox_3";
			this->textBox_3->Size = System::Drawing::Size(100, 20);
			this->textBox_3->TabIndex = 2;
			// 
			// textBox_2
			// 
			this->textBox_2->Location = System::Drawing::Point(52, 70);
			this->textBox_2->Name = L"textBox_2";
			this->textBox_2->Size = System::Drawing::Size(100, 20);
			this->textBox_2->TabIndex = 1;
			// 
			// textBox_1
			// 
			this->textBox_1->Location = System::Drawing::Point(52, 27);
			this->textBox_1->Name = L"textBox_1";
			this->textBox_1->Size = System::Drawing::Size(100, 20);
			this->textBox_1->TabIndex = 0;
			// 
			// ChangeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 394);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_Rnm);
			this->Controls->Add(this->label_Inn);
			this->Controls->Add(this->label_Adress);
			this->Controls->Add(this->label_Name);
			this->Name = L"ChangeForm";
			this->Text = L"Данные о кинотеатре";
			this->Load += gcnew System::EventHandler(this, &ChangeForm::ChangeForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		

		this->button_1Del->Visible = false;
		this->button_2Del->Visible = false;
		this->button_3Del->Visible = false;
		this->button_4Del->Visible = false;
		this->button_5Del->Visible = false;

		this->button_1New->Visible = false;
		this->button_2New->Visible = false;
		this->button_3New->Visible = false;
		this->button_4New->Visible = false;
		this->button_5New->Visible = false;
		
		this->textBox_1->Visible = false;
		this->textBox_2->Visible = false;
		this->textBox_3->Visible = false;
		this->textBox_4->Visible = false;
		this->textBox_5->Visible = false;
//		this->textBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->name.c_str());

	}
};
}
