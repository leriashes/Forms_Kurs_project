#pragma once
#include "Cinema.h"
#include "msclr\marshal_cppstd.h"
#include "Time.h"

namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FilmForm
	/// </summary>
	public ref class FilmForm : public System::Windows::Forms::Form
	{
	public:
		Film* film;
		Cinema* cinema;
		int index;

		FilmForm(Cinema* cinema, int* index)
		{
			InitializeComponent();
			film = new Film(cinema->films[*index]);
			this->cinema = cinema;
			this->index = *index;
		}

		Film Result()
		{
			return *film;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FilmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FilmForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(654, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FilmForm::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(752, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Название фильма";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(414, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Краткое описание";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(520, 23);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 97);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Продолжительность";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox1->Location = System::Drawing::Point(129, 65);
			this->maskedTextBox1->Mask = L"000 мин.";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(68, 20);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &FilmForm::maskedTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->maskedTextBox4);
			this->groupBox1->Controls->Add(this->maskedTextBox3);
			this->groupBox1->Controls->Add(this->maskedTextBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 91);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(373, 152);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Расписание сеансов";
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Enabled = false;
			this->maskedTextBox4->Location = System::Drawing::Point(87, 113);
			this->maskedTextBox4->Mask = L"00:00";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(50, 20);
			this->maskedTextBox4->TabIndex = 5;
			this->maskedTextBox4->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox4->TextChanged += gcnew System::EventHandler(this, &FilmForm::maskedTextBox4_TextChanged);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Enabled = false;
			this->maskedTextBox3->Location = System::Drawing::Point(87, 81);
			this->maskedTextBox3->Mask = L"00:00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(50, 20);
			this->maskedTextBox3->TabIndex = 4;
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox3->TextChanged += gcnew System::EventHandler(this, &FilmForm::maskedTextBox3_TextChanged);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Enabled = false;
			this->maskedTextBox2->Location = System::Drawing::Point(87, 49);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(50, 20);
			this->maskedTextBox2->TabIndex = 3;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox2->TextChanged += gcnew System::EventHandler(this, &FilmForm::maskedTextBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"3 сеанс";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"2 сеанс";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Location = System::Drawing::Point(187, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(180, 133);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Предлагаемое время";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox8->Location = System::Drawing::Point(94, 103);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(50, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"00:00";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox7->Location = System::Drawing::Point(9, 103);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(50, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"00:00";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->Location = System::Drawing::Point(94, 71);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(50, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"00:00";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->Location = System::Drawing::Point(9, 71);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(50, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"00:00";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Location = System::Drawing::Point(94, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(50, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"00:00";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(9, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"08:00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(91, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Самое позднее";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Самое раннее";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"1 сеанс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(209, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Возрастное ограничение";
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(349, 65);
			this->maskedTextBox5->Mask = L"00+";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(36, 20);
			this->maskedTextBox5->TabIndex = 10;
			this->maskedTextBox5->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(414, 149);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"В главных ролях";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(520, 146);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(309, 45);
			this->textBox9->TabIndex = 13;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(447, 214);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Режиссёр";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(520, 211);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(309, 20);
			this->textBox10->TabIndex = 15;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->maskedTextBox7);
			this->groupBox3->Controls->Add(this->maskedTextBox6);
			this->groupBox3->Controls->Add(this->maskedTextBox8);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(12, 249);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(185, 126);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Цена билета";
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox7->Location = System::Drawing::Point(82, 89);
			this->maskedTextBox7->Mask = L"0000 руб.";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(94, 20);
			this->maskedTextBox7->TabIndex = 5;
			this->maskedTextBox7->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox7->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox6->Location = System::Drawing::Point(82, 57);
			this->maskedTextBox6->Mask = L"0000 руб.";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(94, 20);
			this->maskedTextBox6->TabIndex = 4;
			this->maskedTextBox6->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox6->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox8->Location = System::Drawing::Point(82, 25);
			this->maskedTextBox8->Mask = L"0000 руб.";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(94, 20);
			this->maskedTextBox8->TabIndex = 3;
			this->maskedTextBox8->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox8->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"3 сеанс";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"2 сеанс";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"1 сеанс";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(479, 249);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(26, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Зал";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Номер зала" });
			this->comboBox1->Location = System::Drawing::Point(517, 246);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(127, 21);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(461, 285);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Постер";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Изображения|*.jpg|Изображения|*.jpeg";
			this->openFileDialog1->Title = L"Постер";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(517, 282);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(127, 20);
			this->textBox11->TabIndex = 19;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &FilmForm::Check);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(654, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Загрузить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FilmForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(754, 246);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// FilmForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(839, 391);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(855, 429);
			this->MinimumSize = System::Drawing::Size(855, 429);
			this->Name = L"FilmForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Фильм";
			this->Load += gcnew System::EventHandler(this, &FilmForm::FilmForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		   //Проверка всех полей
	private: System::Void Check(System::Object^ sender, System::EventArgs^ e)
	{
		this->button1->Enabled = (textBox1->Text != "" && textBox2->Text != "" && textBox9->Text != "" && textBox10->Text != "" && maskedTextBox1->Text != "    мин." && maskedTextBox2->Text->Length == 5 && maskedTextBox3->Text->Length == 5 && maskedTextBox4->Text->Length == 5 && maskedTextBox4->Text[0] != ' ' && maskedTextBox4->Text[1] != ' ' && maskedTextBox4->Text[3] != ' ' && maskedTextBox5->Text != "  +" && maskedTextBox6->Text != "     руб." && maskedTextBox7->Text != "     руб." && maskedTextBox8->Text != "     руб." && comboBox1->SelectedIndex != -1);
	}

		   //Загрузка изображения (постера)
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) 
		{
			this->textBox11->Text = this->openFileDialog1->FileName;
			
			this->pictureBox1->ImageLocation = this->openFileDialog1->FileName;
		}
	}

		   //Ввод продолжительности фильма
	private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->maskedTextBox1->Text != "")
		{
			int min = 0;
			for (int i = 0; i < this->maskedTextBox1->Text->Length; i++)
			{
				if (this->maskedTextBox1->Text[i] >= '0' && this->maskedTextBox1->Text[i] <= '9')
				{
					min = min * 10 + this->maskedTextBox1->Text[i] - 48;
				}
			}
			int h, m;

			if (min != 0 && 3 * min + 2 * 15 <= 13 * 60)
			{
				h = (21 * 60 - 2 * 15 - 3 * (min)) / 60;
				m = (21 * 60 - 2 * 15 - 3 * (min)) % 60;

				this->textBox4->Text = "";
				if (h < 10)
				{
					this->textBox4->Text += "0";
				}
				this->textBox4->Text += h + ":";
				if (m < 10)
				{
					this->textBox4->Text += "0";
				}
				this->textBox4->Text += m;
				this->maskedTextBox2->Enabled = true;
			}
			else
			{
				this->maskedTextBox2->Enabled = false;
				this->maskedTextBox3->Enabled = false;
				this->maskedTextBox4->Enabled = false;

				this->maskedTextBox1->Text = "";
				this->maskedTextBox2->Text = "";
				this->maskedTextBox3->Text = "";
				this->maskedTextBox4->Text = "";

				this->textBox4->Text = "00:00";
			}

			maskedTextBox2_TextChanged(sender, e);
		}

		Check(sender, e);
	}

		   //Ввод времени начала певрого сеанса
	private: System::Void maskedTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		bool ready = true;
		int first_time = 0, min = 0;
		int h = 0, m = 0;

		for (int i = 0; i < this->maskedTextBox1->Text->Length; i++)
		{
			if (this->maskedTextBox1->Text[i] >= '0' && this->maskedTextBox1->Text[i] <= '9')
			{
				min = min * 10 + this->maskedTextBox1->Text[i] - 48;
			}
		}

		for (int i = 0; i < this->maskedTextBox2->Text->Length && ready; i++)
		{
			if (this->maskedTextBox2->Text[i] == ' ' || this->maskedTextBox2->Text->Length < 5)
			{
				ready = false;
			}
		}

		if (ready)
		{
			for (int i = 0; i < 2; i++)
			{
				h = h * 10 + this->maskedTextBox2->Text[i] - 48;
				m = m * 10 + this->maskedTextBox2->Text[i + 3] - 48;
			}
			first_time = h * 60 + m;
			int h1 = 0, m1 = 0;

			for (int i = 0; i < 2; i++)
			{
				h1 = h1 * 10 + this->textBox3->Text[i] - 48;
				m1 = m1 * 10 + this->textBox3->Text[i + 3] - 48;
			}

			ready = false;

			if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
			{
				if (h > h1 || h == h1 && m >= m1)
				{
					h1 = m1 = 0;
					for (int i = 0; i < 2; i++)
					{
						h1 = h1 * 10 + this->textBox4->Text[i] - 48;
						m1 = m1 * 10 + this->textBox4->Text[i + 3] - 48;
					}

					if (h < h1 || h == h1 && m <= m1)
					{
						ready = true;
					}
				}
			}

			if (ready)
			{
				this->maskedTextBox3->Enabled = true;

				h = (first_time + 15 + min) / 60;
				m = (first_time + 15 + min) % 60;

				this->textBox5->Text = "";
				if (h < 10)
				{
					this->textBox5->Text += "0";
				}
				this->textBox5->Text += h + ":";
				if (m < 10)
				{
					this->textBox5->Text += "0";
				}
				this->textBox5->Text += m;


				h = (21 * 60 - 15 - 2 * min) / 60;
				m = (21 * 60 - 15 - 2 * min) % 60;

				this->textBox6->Text = "";
				if (h < 10)
				{
					this->textBox6->Text += "0";
				}
				this->textBox6->Text += h + ":";
				if (m < 10)
				{
					this->textBox6->Text += "0";
				}
				this->textBox6->Text += m;
			}
			else
			{
				this->maskedTextBox3->Enabled = false;
				this->maskedTextBox4->Enabled = false;

				this->maskedTextBox2->Text = "";
				this->maskedTextBox3->Text = "";
				this->maskedTextBox4->Text = "";

				this->textBox5->Text = "00:00";
				this->textBox6->Text = "00:00";
			}
		}
		else
		{
			this->maskedTextBox3->Enabled = false;
			this->maskedTextBox4->Enabled = false;

			this->maskedTextBox3->Text = "";
			this->maskedTextBox4->Text = "";

			this->textBox5->Text = "00:00";
			this->textBox6->Text = "00:00";
		}
		maskedTextBox3_TextChanged(sender, e);
	}

		   //Ввод времени начала второго сеанса
	private: System::Void maskedTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		bool ready = true;
		int second_time = 0, min = 0;
		int h = 0, m = 0;

		for (int i = 0; i < this->maskedTextBox1->Text->Length; i++)
		{
			if (this->maskedTextBox1->Text[i] >= '0' && this->maskedTextBox1->Text[i] <= '9')
			{
				min = min * 10 + this->maskedTextBox1->Text[i] - 48;
			}
		}

		for (int i = 0; i < this->maskedTextBox3->Text->Length && ready; i++)
		{
			if (this->maskedTextBox3->Text[i] == ' ' || this->maskedTextBox3->Text->Length < 5)
			{
				ready = false;
			}
		}

		if (ready)
		{
			for (int i = 0; i < 2; i++)
			{
				h = h * 10 + this->maskedTextBox3->Text[i] - 48;
				m = m * 10 + this->maskedTextBox3->Text[i + 3] - 48;
			}
			second_time = h * 60 + m;
			int h1 = 0, m1 = 0;

			for (int i = 0; i < 2; i++)
			{
				h1 = h1 * 10 + this->textBox5->Text[i] - 48;
				m1 = m1 * 10 + this->textBox5->Text[i + 3] - 48;
			}

			ready = false;

			if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
			{
				if (h > h1 || h == h1 && m >= m1)
				{
					h1 = m1 = 0;
					for (int i = 0; i < 2; i++)
					{
						h1 = h1 * 10 + this->textBox6->Text[i] - 48;
						m1 = m1 * 10 + this->textBox6->Text[i + 3] - 48;
					}

					if (h < h1 || h == h1 && m <= m1)
					{
						ready = true;
					}
				}
			}

			if (ready)
			{
				this->maskedTextBox4->Enabled = true;

				h = (second_time + 15 + min) / 60;
				m = (second_time + 15 + min) % 60;

				this->textBox7->Text = "";
				if (h < 10)
				{
					this->textBox7->Text += "0";
				}
				this->textBox7->Text += h + ":";
				if (m < 10)
				{
					this->textBox7->Text += "0";
				}
				this->textBox7->Text += m;


				h = (21 * 60 - min) / 60;
				m = (21 * 60 - min) % 60;

				this->textBox8->Text = "";
				if (h < 10)
				{
					this->textBox8->Text += "0";
				}
				this->textBox8->Text += h + ":";
				if (m < 10)
				{
					this->textBox8->Text += "0";
				}
				this->textBox8->Text += m;
			}
			else
			{
				this->maskedTextBox4->Enabled = false;

				this->maskedTextBox3->Text = "";
				this->maskedTextBox4->Text = "";

				this->textBox7->Text = "00:00";
				this->textBox8->Text = "00:00";
			}
		}
		else
		{
			this->maskedTextBox4->Enabled = false;

			this->maskedTextBox4->Text = "";

			this->textBox7->Text = "00:00";
			this->textBox8->Text = "00:00";
		}
		Check(sender, e);
	}

		   //Ввод времени начала третьего сеанса
	private: System::Void maskedTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		bool ready = true;
		int h = 0, m = 0;

		for (int i = 0; i < this->maskedTextBox4->Text->Length && ready; i++)
		{
			if (this->maskedTextBox4->Text[i] == ' ' || this->maskedTextBox4->Text->Length < 5)
			{
				ready = false;
			}
		}

		if (ready)
		{
			for (int i = 0; i < 2; i++)
			{
				h = h * 10 + this->maskedTextBox4->Text[i] - 48;
				m = m * 10 + this->maskedTextBox4->Text[i + 3] - 48;
			}
			int h1 = 0, m1 = 0;

			for (int i = 0; i < 2; i++)
			{
				h1 = h1 * 10 + this->textBox7->Text[i] - 48;
				m1 = m1 * 10 + this->textBox7->Text[i + 3] - 48;
			}

			ready = false;

			if (h >= 0 && h <= 23 && m >= 0 && m <= 59)
			{
				if (h > h1 || h == h1 && m >= m1)
				{
					h1 = m1 = 0;
					for (int i = 0; i < 2; i++)
					{
						h1 = h1 * 10 + this->textBox8->Text[i] - 48;
						m1 = m1 * 10 + this->textBox8->Text[i + 3] - 48;
					}

					if (h < h1 || h == h1 && m <= m1)
					{
						ready = true;
					}
				}
			}

			if (!ready)
			{
				this->maskedTextBox4->Text = "";
			}
		}
		Check(sender, e);
	}

		   //Нажата кнопка сохранить
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		film->age = "";
		for (int i = 0; i < maskedTextBox5->Text->Length; i++)
		{
			if (maskedTextBox5->Text[i] >= '0' && maskedTextBox5->Text[i] <= '9' || maskedTextBox5->Text[i] == '+')
			{
				film->age += maskedTextBox5->Text[i];
			}
		}

		for (int i = 0; i < 3; i++)
		{
			film->date[i] = Time::RetDate(i, 1);
		}
		
		film->duration = "";
		for (int i = 0; i < maskedTextBox1->Text->Length; i++)
		{
			if (maskedTextBox1->Text[i] >= '0' && maskedTextBox1->Text[i] <= '9')
			{
				film->duration += maskedTextBox1->Text[i];
			}
		}

		film->main_role = msclr::interop::marshal_as<std::string>(textBox9->Text);
		film->name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		film->number_zal = msclr::interop::marshal_as<std::string>(comboBox1->Text);

		film->price[0] = "";
		for (int i = 0; i < maskedTextBox8->Text->Length; i++)
		{
			if (maskedTextBox8->Text[i] >= '0' && maskedTextBox8->Text[i] <= '9')
			{
				film->price[0] += maskedTextBox8->Text[i];
			}
		}

		film->price[1] = "";
		for (int i = 0; i < maskedTextBox6->Text->Length; i++)
		{
			if (maskedTextBox6->Text[i] >= '0' && maskedTextBox6->Text[i] <= '9')
			{
				film->price[1] += maskedTextBox6->Text[i];
			}
		}
		
		film->price[2] = "";
		for (int i = 0; i < maskedTextBox7->Text->Length; i++)
		{
			if (maskedTextBox7->Text[i] >= '0' && maskedTextBox7->Text[i] <= '9')
			{
				film->price[2] += maskedTextBox7->Text[i];
			}
		}

		for (int i = 0; i < 3; i++)
		{
			film->price[3 + i] = film->price[6 + i] = film->price[i];
		}

		film->rejisser = msclr::interop::marshal_as<std::string>(textBox10->Text);
		film->short_description = msclr::interop::marshal_as<std::string>(textBox2->Text);

		film->time[0] = film->time[3] = film->time[6] = msclr::interop::marshal_as<std::string>(maskedTextBox2->Text);
		film->time[1] = film->time[4] = film->time[7] = msclr::interop::marshal_as<std::string>(maskedTextBox3->Text);
		film->time[2] = film->time[5] = film->time[8] = msclr::interop::marshal_as<std::string>(maskedTextBox4->Text);
		film->path = msclr::interop::marshal_as<std::string>(textBox11->Text);
	}

	private: System::Void FilmForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (index < cinema->films_number)
		{
			maskedTextBox5->Text = msclr::interop::marshal_as<System::String^>(film->age);
			maskedTextBox1->Text = msclr::interop::marshal_as<System::String^>(film->duration);

			textBox9->Text = msclr::interop::marshal_as<System::String^>(film->main_role);
			textBox1->Text = msclr::interop::marshal_as<System::String^>(film->name);

			maskedTextBox8->Text = msclr::interop::marshal_as<System::String^>(film->price[0]);
			maskedTextBox6->Text = msclr::interop::marshal_as<System::String^>(film->price[1]);
			maskedTextBox7->Text = msclr::interop::marshal_as<System::String^>(film->price[2]);

			textBox10->Text = msclr::interop::marshal_as<System::String^>(film->rejisser);
			textBox2->Text = msclr::interop::marshal_as<System::String^>(film->short_description);

			maskedTextBox2->Text = msclr::interop::marshal_as<System::String^>(film->time[0]);
			maskedTextBox3->Text = msclr::interop::marshal_as<System::String^>(film->time[1]);
			maskedTextBox4->Text = msclr::interop::marshal_as<System::String^>(film->time[2]);

			textBox11->Text = msclr::interop::marshal_as<System::String^>(film->path); 
			this->pictureBox1->ImageLocation = textBox11->Text;
		}

		this->comboBox1->Items->Clear();

		bool empty;
		int k = 0, m = 0;

		for (int i = 1; i < 10; i++)
		{
			empty = true;
			for (int j = 0; j < cinema->films_number && empty; j++)
			{
				if (index != j && cinema->films[j].number_zal[0] == i + 48)
				{
					empty = false;
				}
			}

			if (empty)
			{
				this->comboBox1->Items->Add((System::Object^)i.ToString());
				m++;

				if (index < cinema->films_number && cinema->films[index].number_zal[0] == i + 48)
				{
					k = m - 1;
				}
			}
		}

		if (index < cinema->films_number)
		{
			this->comboBox1->SelectedIndex = k;
		}
	}
};
}
