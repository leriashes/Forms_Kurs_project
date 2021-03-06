#pragma once
#include "Cinema.h"
#include "Time.h"
#include <msclr\marshal.h>
#include "msclr\marshal_cppstd.h"
namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ?????? ??? ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	private:
		Cinema* cinema;
	public:
		ReportForm(Cinema& cinema1)
		{
			this->cinema = &cinema1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ?????????? ??? ???????????? ???????.
		/// </summary>
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// ???????????? ?????????? ????????????.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ????????? ????? ??? ????????? ???????????? ? ?? ????????? 
		/// ?????????? ????? ?????? ? ??????? ????????? ????.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(77, 116);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox1->Size = System::Drawing::Size(1276, 175);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"????? ?? ???????";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(864, 92);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"??????";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(422, 92);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"??????? ?? ?????";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 92);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"?????";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(205, 87);
			this->textBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(180, 29);
			this->textBox3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(640, 87);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(180, 29);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1041, 81);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"????????";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ReportForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->linkLabel1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(77, 415);
			this->groupBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->groupBox2->Size = System::Drawing::Size(1276, 185);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"????? ?? ??????";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(864, 92);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"??????";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(200, 30);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 25);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(422, 92);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"??????? ?? ?????";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(88, 92);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"?????";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(205, 87);
			this->textBox4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(180, 29);
			this->textBox4->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(640, 87);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(180, 29);
			this->textBox2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1041, 81);
			this->button2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 42);
			this->button2->TabIndex = 0;
			this->button2->Text = L"????????";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ReportForm::button2_Click);
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1615, 698);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"ReportForm";
			this->ShowIcon = false;
			this->Text = L"?????";
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->otchet_today);
		this->textBox3->Text = cinema->kolvo_biletov[1].ToString();
		
		this->linkLabel1->Text = msclr::interop::marshal_as<System::String^>(cinema->start_day) + " - " + msclr::interop::marshal_as<System::String^>(Time::RetDate(0, 1));
		this->textBox2->Text = msclr::interop::marshal_as<System::String^>(cinema->otchet_vsego);
		this->textBox4->Text = cinema->kolvo_biletov[0].ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		cinema->otchet_today = "0";
		cinema->kolvo_biletov[1] = 0;
		this->textBox1->Text = msclr::interop::marshal_as<System::String^>(cinema->otchet_today);
		this->textBox3->Text = cinema->kolvo_biletov[1].ToString();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		cinema->start_day = Time::RetDate(0, 1);
		cinema->otchet_vsego = "0";
		cinema->kolvo_biletov[0] = 0;
		this->linkLabel1->Text = msclr::interop::marshal_as<System::String^>(cinema->start_day) + " - " + msclr::interop::marshal_as<System::String^>(Time::RetDate(0, 1));
		this->textBox2->Text = msclr::interop::marshal_as<System::String^>(cinema->otchet_vsego);
		this->textBox4->Text = cinema->kolvo_biletov[0].ToString();
	}
};
}
