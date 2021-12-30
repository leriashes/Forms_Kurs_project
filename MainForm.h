#pragma once
#include <cctype>
#include "File_O.h"
#include "msclr\marshal_cppstd.h"
#include "AdminForm.h"
/*#include "HelloForm.h"
#include "ExitForm.h"
#include "InfoForm.h"*/

namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: File_O* file_stream;
		   Cinema* cinema;
	public:
		MainForm(void)
		{
			file_stream = new File_O();
			cinema = new Cinema();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			delete file_stream;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menustrip_main;
	private: System::Windows::Forms::ToolStripMenuItem^ FileToolStripMenuItem;

	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ EnterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel_filename;

	private: System::Windows::Forms::ToolStripMenuItem^ OpenToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAsToolStripMenuItem;



	private: System::Windows::Forms::Label^ label_center;





	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;


	private: System::Windows::Forms::ToolStripMenuItem^ CorrectToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ InfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QuitToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ CloseToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox2;






















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menustrip_main = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->CloseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->SaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CorrectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QuitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label_center = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menustrip_main->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->tableLayoutPanel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->tableLayoutPanel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->tableLayoutPanel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tableLayoutPanel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menustrip_main
			// 
			this->menustrip_main->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menustrip_main->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menustrip_main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->FileToolStripMenuItem,
					this->EnterToolStripMenuItem, this->CorrectToolStripMenuItem, this->InfoToolStripMenuItem, this->QuitToolStripMenuItem
			});
			this->menustrip_main->Location = System::Drawing::Point(0, 0);
			this->menustrip_main->Name = L"menustrip_main";
			this->menustrip_main->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menustrip_main->Size = System::Drawing::Size(984, 24);
			this->menustrip_main->TabIndex = 0;
			this->menustrip_main->Text = L"menuStrip1";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->CreateToolStripMenuItem,
					this->OpenToolStripMenuItem, this->toolStripSeparator1, this->CloseToolStripMenuItem, this->toolStripSeparator2, this->SaveToolStripMenuItem,
					this->SaveAsToolStripMenuItem, this->toolStripSeparator3, this->ExitToolStripMenuItem
			});
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(48, 22);
			this->FileToolStripMenuItem->Text = L"&Файл";
			// 
			// CreateToolStripMenuItem
			// 
			this->CreateToolStripMenuItem->Enabled = false;
			this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
			this->CreateToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->CreateToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->CreateToolStripMenuItem->Text = L"&Создать";
			this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CreateToolStripMenuItem_Click);
			// 
			// OpenToolStripMenuItem
			// 
			this->OpenToolStripMenuItem->Name = L"OpenToolStripMenuItem";
			this->OpenToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->OpenToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->OpenToolStripMenuItem->Text = L"&Открыть";
			this->OpenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::OpenToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(169, 6);
			// 
			// CloseToolStripMenuItem
			// 
			this->CloseToolStripMenuItem->Enabled = false;
			this->CloseToolStripMenuItem->Name = L"CloseToolStripMenuItem";
			this->CloseToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->CloseToolStripMenuItem->Text = L"&Закрыть";
			this->CloseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CloseToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(169, 6);
			// 
			// SaveToolStripMenuItem
			// 
			this->SaveToolStripMenuItem->Enabled = false;
			this->SaveToolStripMenuItem->Name = L"SaveToolStripMenuItem";
			this->SaveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->SaveToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->SaveToolStripMenuItem->Text = L"Со&хранить";
			this->SaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveToolStripMenuItem_Click);
			// 
			// SaveAsToolStripMenuItem
			// 
			this->SaveAsToolStripMenuItem->Enabled = false;
			this->SaveAsToolStripMenuItem->Name = L"SaveAsToolStripMenuItem";
			this->SaveAsToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->SaveAsToolStripMenuItem->Text = L"Сох&ранить как...";
			this->SaveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::SaveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(169, 6);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->ExitToolStripMenuItem->Text = L"&Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ExitToolStripMenuItem_Click);
			// 
			// EnterToolStripMenuItem
			// 
			this->EnterToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->EnterToolStripMenuItem->Name = L"EnterToolStripMenuItem";
			this->EnterToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->EnterToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->EnterToolStripMenuItem->Text = L"Вход в режим администратора";
			this->EnterToolStripMenuItem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->EnterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::EnterToolStripMenuItem_Click);
			// 
			// CorrectToolStripMenuItem
			// 
			this->CorrectToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Name = L"CorrectToolStripMenuItem";
			this->CorrectToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->CorrectToolStripMenuItem->Text = L"&Редактирование";
			// 
			// InfoToolStripMenuItem
			// 
			this->InfoToolStripMenuItem->Name = L"InfoToolStripMenuItem";
			this->InfoToolStripMenuItem->Size = System::Drawing::Size(65, 22);
			this->InfoToolStripMenuItem->Text = L"&Справка";
			this->InfoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::InfoToolStripMenuItem_Click);
			// 
			// QuitToolStripMenuItem
			// 
			this->QuitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->QuitToolStripMenuItem->Name = L"QuitToolStripMenuItem";
			this->QuitToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->QuitToolStripMenuItem->Text = L"Выход из режима администратора";
			this->QuitToolStripMenuItem->Visible = false;
			this->QuitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItem_Click);
			this->QuitToolStripMenuItem->VisibleChanged += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItem_VisibleChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel_filename });
			this->statusStrip1->Location = System::Drawing::Point(0, 640);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 8, 0);
			this->statusStrip1->Size = System::Drawing::Size(984, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel_filename
			// 
			this->toolStripStatusLabel_filename->Name = L"toolStripStatusLabel_filename";
			this->toolStripStatusLabel_filename->Size = System::Drawing::Size(53, 17);
			this->toolStripStatusLabel_filename->Text = L"filename";
			this->toolStripStatusLabel_filename->Visible = false;
			this->toolStripStatusLabel_filename->VisibleChanged += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel_filename_VisibleChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Текстовые файлы(*.txt)|*.txt";
			this->openFileDialog1->Title = L"Открыть";
			// 
			// label_center
			// 
			this->label_center->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_center->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label_center->Location = System::Drawing::Point(0, 0);
			this->label_center->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_center->Name = L"label_center";
			this->label_center->Size = System::Drawing::Size(984, 640);
			this->label_center->TabIndex = 3;
			this->label_center->Text = L"Файл не выбран";
			this->label_center->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовые файлы(*.txt)|*.txt";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel10, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel8, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(984, 616);
			this->tableLayoutPanel1->TabIndex = 5;
			this->tableLayoutPanel1->Visible = false;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				225)));
			this->tableLayoutPanel10->Controls->Add(this->pictureBox9, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->textBox9, 1, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(657, 412);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel10->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel10->Size = System::Drawing::Size(325, 202);
			this->tableLayoutPanel10->TabIndex = 11;
			this->tableLayoutPanel10->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(2, 2);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(96, 198);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox9->Location = System::Drawing::Point(103, 3);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox9->Size = System::Drawing::Size(219, 196);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = resources->GetString(L"textBox9.Text");
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				224)));
			this->tableLayoutPanel9->Controls->Add(this->pictureBox8, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox8, 1, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(329, 412);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel9->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel9->Size = System::Drawing::Size(324, 202);
			this->tableLayoutPanel9->TabIndex = 10;
			this->tableLayoutPanel9->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(2, 2);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(96, 198);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox8->Location = System::Drawing::Point(103, 3);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox8->Size = System::Drawing::Size(218, 196);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = resources->GetString(L"textBox8.Text");
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				223)));
			this->tableLayoutPanel8->Controls->Add(this->pictureBox7, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox7, 1, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(2, 412);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel8->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel8->Size = System::Drawing::Size(323, 202);
			this->tableLayoutPanel8->TabIndex = 9;
			this->tableLayoutPanel8->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(2, 2);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(96, 198);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox7->Location = System::Drawing::Point(103, 3);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox7->Size = System::Drawing::Size(217, 196);
			this->textBox7->TabIndex = 1;
			this->textBox7->Text = resources->GetString(L"textBox7.Text");
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				225)));
			this->tableLayoutPanel7->Controls->Add(this->pictureBox6, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->textBox6, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(657, 207);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel7->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel7->Size = System::Drawing::Size(325, 201);
			this->tableLayoutPanel7->TabIndex = 8;
			this->tableLayoutPanel7->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(2, 2);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 197);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox6->Location = System::Drawing::Point(103, 3);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox6->Size = System::Drawing::Size(219, 195);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = resources->GetString(L"textBox6.Text");
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				224)));
			this->tableLayoutPanel6->Controls->Add(this->pictureBox5, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox5, 1, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(329, 207);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel6->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->Size = System::Drawing::Size(324, 201);
			this->tableLayoutPanel6->TabIndex = 7;
			this->tableLayoutPanel6->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(2, 2);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(96, 197);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox5->Location = System::Drawing::Point(103, 3);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox5->Size = System::Drawing::Size(218, 195);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = resources->GetString(L"textBox5.Text");
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				223)));
			this->tableLayoutPanel5->Controls->Add(this->pictureBox4, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(2, 207);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel5->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->Size = System::Drawing::Size(323, 201);
			this->tableLayoutPanel5->TabIndex = 6;
			this->tableLayoutPanel5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(2, 2);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 197);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox4->Location = System::Drawing::Point(103, 3);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox4->Size = System::Drawing::Size(217, 195);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = resources->GetString(L"textBox4.Text");
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				225)));
			this->tableLayoutPanel4->Controls->Add(this->pictureBox3, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox3, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(657, 2);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel4->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->Size = System::Drawing::Size(325, 201);
			this->tableLayoutPanel4->TabIndex = 5;
			this->tableLayoutPanel4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(2, 2);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(96, 197);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox3->Location = System::Drawing::Point(103, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(219, 195);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				224)));
			this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(329, 2);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel3->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->Size = System::Drawing::Size(324, 201);
			this->tableLayoutPanel3->TabIndex = 4;
			this->tableLayoutPanel3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 2);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 197);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox2->Location = System::Drawing::Point(103, 3);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(218, 195);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = resources->GetString(L"textBox2.Text");
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				223)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(2, 2);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel2->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(323, 201);
			this->tableLayoutPanel2->TabIndex = 3;
			this->tableLayoutPanel2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 197);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(103, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(217, 195);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Название: Дюна\r\nПродолжительность: 1 миллион лет";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 662);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menustrip_main);
			this->Controls->Add(this->label_center);
			this->Controls->Add(this->statusStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menustrip_main;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(1000, 700);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KinoVTeatRe";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MainForm::MainForm_ResizeEnd);
			this->Resize += gcnew System::EventHandler(this, &MainForm::MainForm_Resize);
			this->menustrip_main->ResumeLayout(false);
			this->menustrip_main->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel10->ResumeLayout(false);
			this->tableLayoutPanel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Boolean changes = false;

	private: System::String^ SetFilmInfo(Film film)
	{
		System::String^ Text = "Название: " + msclr::interop::marshal_as<System::String^>(film.name);
		Text += "\r\nВозрастное ограничение: " + msclr::interop::marshal_as<System::String^>(film.age);
		Text += "\r\nПродолжительность: " + msclr::interop::marshal_as<System::String^>(film.duration) + " мин.";
		Text += "\r\nРежиссёр(-ы): " + msclr::interop::marshal_as<System::String^>(film.rejisser);
		Text += "\r\nВ главных ролях: " + msclr::interop::marshal_as<System::String^>(film.main_role);
		Text += "\r\n\r\nОписание:\r\n" + msclr::interop::marshal_as<System::String^>(film.short_description);

		return Text;
	}

		   //Проверка на наличие пустых ячеек в файле
	/*private: Boolean full_table() {
		Boolean full = true;
		for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1 && full; i++)
			for (Int16 j = 0; j < 5 && full; j++)
				if (this->dataGridView1->Rows[i]->Cells[j]->Style->BackColor == System::Drawing::Color::LightCyan)
					full = false;
		return full;
	}*/

	//Запуск программы
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//Открытие приветственной формы
		/*HelloForm^ p = gcnew HelloForm();
		p->ShowDialog();

		//Выход
		if (p->DialogResult == System::Windows::Forms::DialogResult::Cancel) {
			this->Close();
			if (this->Visible)
				MainForm_Load(sender, e);
		}
		//Открыть файл
		else if (p->DialogResult == System::Windows::Forms::DialogResult::No) {
			OpenToolStripMenuItem_Click(sender, e);
			if (!this->toolStripStatusLabel_filename->Visible)
				MainForm_Load(sender, e);
		}
		//Вход в режим администратора
		else if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
			EnterToolStripMenuItem_Click(sender, e);
			if (this->EnterToolStripMenuItem->Visible)
				MainForm_Load(sender, e);
		}
		//Запуск игры
		else if (p->DialogResult == System::Windows::Forms::DialogResult::OK)
			GameToolStripMenuItem_Click(sender, e);*/
	}

		   //Закрытие формы
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//Если выполенен вход в режим администратора и открыт файл
		if (this->toolStripStatusLabel_filename->Visible && this->QuitToolStripMenuItem->Visible && this->changes) {
			/*e->Cancel = true;
			ExitForm^ p = gcnew ExitForm();
			p->ShowDialog();
			if (p->DialogResult == System::Windows::Forms::DialogResult::No)
				e->Cancel = false;
			//Сохранение изменений
			else if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
				if (this->toolStripStatusLabel_filename->Visible) {
					if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
						SaveAsToolStripMenuItem_Click(sender, e);
					else
						SaveToolStripMenuItem_Click(sender, e);
				}
				if (!this->changes)
					e->Cancel = false;
			}*/
		}
		else {
			e->Cancel = true;
			String^ message = L"Вы уверены, что хотите выйти?";
			String^ caption = L"";
			if (MessageBox::Show(message, caption, MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
				e->Cancel = false;
		}
	}

		   //Закрытие формы через кнопку Выход
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   //Создание файла
	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Если открыт файл в режиме администратора с несохранёнными изменениями
		if (this->QuitToolStripMenuItem->Visible && this->toolStripStatusLabel_filename->Visible && this->changes && MessageBox::Show(L"Сохранить изменения?", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			//Сохранение изменений
			if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			/*if (full_table()) {
				this->toolStripStatusLabel_filename->Text = L"Новый файл";
				this->toolStripStatusLabel_filename->Visible = true;
				open_file();
			}*/
		}
		else {
			this->toolStripStatusLabel_filename->Text = L"Новый файл";
			this->toolStripStatusLabel_filename->Visible = true;
			open_file();
		}
	}

		   //Открытие файла
	private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Если открыт файл в режиме администратора с несохранёнными изменениями
		if (this->QuitToolStripMenuItem->Visible && this->toolStripStatusLabel_filename->Visible && this->changes && MessageBox::Show(L"Сохранить изменения?", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			/*if (full_table() && this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->toolStripStatusLabel_filename->Text = this->openFileDialog1->FileName;
				this->toolStripStatusLabel_filename->Visible = true;
				open_file();
			}*/
		}
		else if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->toolStripStatusLabel_filename->Text = this->openFileDialog1->FileName;
			this->toolStripStatusLabel_filename->Visible = true;
			this->tableLayoutPanel1->Visible = true;
			open_file();
		}
	}

		   //Открытие файла
	private: System::Void open_file() {
		this->changes = false;
		Boolean good = true;
		
		this->tableLayoutPanel2->Visible = false;
		this->tableLayoutPanel3->Visible = false;
		this->tableLayoutPanel4->Visible = false;
		this->tableLayoutPanel5->Visible = false;
		this->tableLayoutPanel6->Visible = false;
		this->tableLayoutPanel7->Visible = false;
		this->tableLayoutPanel8->Visible = false;
		this->tableLayoutPanel9->Visible = false;
		this->tableLayoutPanel10->Visible = false;

		if (this->toolStripStatusLabel_filename->Text != L"Новый файл") 
		{
			file_stream->path = msclr::interop::marshal_as<std::string>(this->toolStripStatusLabel_filename->Text);
			cli::array<String^>^ lines = File::ReadAllLines(this->toolStripStatusLabel_filename->Text, System::Text::Encoding::GetEncoding(1251));
			//Если файл пуст
			if (lines->Length == 0 && !this->QuitToolStripMenuItem->Visible) 
			{
				good = false;
				this->CloseToolStripMenuItem->Enabled = true;
				this->tableLayoutPanel1->Visible = false;
				this->label_center->Visible = true;
				this->label_center->Text = L"Файл пуст";
			}
			//Если файл не пустой
			else 
			{
				if (((lines->Length - 9) % 134 == 0) || ((lines->Length - 8) % 134 == 0))            //форматирование верно
				{
					
					file_stream->kol_vo_film = (lines->Length - 9) / 134;
					good = true;

					file_stream->Read(*cinema);

					if (file_stream->kol_vo_film >= 1)
					{
						this->textBox1->Text = SetFilmInfo(cinema->films[0]);
						this->tableLayoutPanel2->Visible = true;

						if (file_stream->kol_vo_film >= 2)
						{
							this->textBox2->Text = SetFilmInfo(cinema->films[1]);
							this->tableLayoutPanel3->Visible = true;

							if (file_stream->kol_vo_film >= 3)
							{
								this->textBox3->Text = SetFilmInfo(cinema->films[2]);
								this->tableLayoutPanel4->Visible = true;

								if (file_stream->kol_vo_film >= 4)
								{
									this->textBox4->Text = SetFilmInfo(cinema->films[3]);
									this->tableLayoutPanel5->Visible = true;

									if (file_stream->kol_vo_film >= 5)
									{
										this->textBox5->Text = SetFilmInfo(cinema->films[4]);
										this->tableLayoutPanel6->Visible = true;

										if (file_stream->kol_vo_film >= 6)
										{
											this->textBox6->Text = SetFilmInfo(cinema->films[5]);
											this->tableLayoutPanel7->Visible = true;

											if (file_stream->kol_vo_film >= 7)
											{
												this->textBox7->Text = SetFilmInfo(cinema->films[6]);
												this->tableLayoutPanel8->Visible = true;

												if (file_stream->kol_vo_film >= 8)
												{
													this->textBox8->Text = SetFilmInfo(cinema->films[7]);
													this->tableLayoutPanel9->Visible = true;

													if (file_stream->kol_vo_film >= 9)
													{
														this->textBox9->Text = SetFilmInfo(cinema->films[8]);
														this->tableLayoutPanel10->Visible = true;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					good = false;
				}

				//Если содержимое файла не удовлетворяет нужному формату
				if (!good) 
				{
					this->toolStripStatusLabel_filename->Visible = false;
					if (this->EnterToolStripMenuItem->Visible)
					{
						MessageBox::Show(L"Содержимое файла не удовлетворяет формату.");
					}
					else 
					{
						if (MessageBox::Show(L"Содержимое файла не удовлетворяет формату. Очистить файл?", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) 
						{
							this->toolStripStatusLabel_filename->Visible = true;
							good = true;
							StreamWriter^ sw = gcnew StreamWriter(this->toolStripStatusLabel_filename->Text, false, System::Text::Encoding::GetEncoding(1251));
							sw->Close();
						}
					}
				}
			}
		}
		else 
		{
			if (this->toolStripStatusLabel_filename->Text == L"Новый файл" && this->EnterToolStripMenuItem->Visible) 
			{
				this->toolStripStatusLabel_filename->Visible = false;
				good = false;
			}
		}


		//Если содержимое файла удовлетворяет нужному формату
		if (good) 
		{
			this->tableLayoutPanel1->Visible = true;
			this->label_center->Visible = false;
			this->CloseToolStripMenuItem->Enabled = true;
			if (this->QuitToolStripMenuItem->Visible) 
			{
				this->SaveAsToolStripMenuItem->Enabled = true;
				if (this->toolStripStatusLabel_filename->Text != L"Новый файл")
					this->SaveToolStripMenuItem->Enabled = true;
				else
					this->SaveToolStripMenuItem->Enabled = false;
				this->CorrectToolStripMenuItem->Enabled = true;
			}
		}

		System::Object^ sender;
		System::EventArgs^ e;
		MainForm_ResizeEnd(sender, e);
	}

		   //Открытие/закрытие файла
	private: System::Void toolStripStatusLabel_filename_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		//Файл не выбран
		if (!this->toolStripStatusLabel_filename->Visible) {
			this->tableLayoutPanel1->Visible = false;
			this->label_center->Visible = true;
			this->CloseToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Enabled = false;
			this->label_center->Text = L"Файл не выбран";
		}
	}

		   //Вход в режим администратора
	private: System::Void EnterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Открытие формы для ввода пароля
		AdminForm^ p = gcnew AdminForm();
		p->ShowDialog();

		//Если пароль верный
		if (p->DialogResult == System::Windows::Forms::DialogResult::OK) {
			MessageBox::Show(L"Вы вошли в режим администратора!");
			this->QuitToolStripMenuItem->Visible = true;
			this->EnterToolStripMenuItem->Visible = false;
			this->CreateToolStripMenuItem->Enabled = true;
		}
	}

		   //Выход из режима администратора
	private: System::Void QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*ExitForm^ p = gcnew ExitForm();
		if (this->toolStripStatusLabel_filename->Visible && this->changes)
			p->ShowDialog();

		if (!this->toolStripStatusLabel_filename->Visible || !this->changes || p->DialogResult == System::Windows::Forms::DialogResult::No || p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
			//Сохранение изменений
			if (p->DialogResult == System::Windows::Forms::DialogResult::Yes) {
				if (this->toolStripStatusLabel_filename->Visible) {
					if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
						SaveAsToolStripMenuItem_Click(sender, e);
					else
						SaveToolStripMenuItem_Click(sender, e);
				}
			}
			else if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
				this->dataGridView1->Visible = false;

			if (full_table() || p->DialogResult == System::Windows::Forms::DialogResult::No) {
				this->EnterToolStripMenuItem->Visible = true;
				this->QuitToolStripMenuItem->Visible = false;
				this->dataGridView1->BackgroundColor = System::Drawing::Color::Bisque;
				this->CreateToolStripMenuItem->Enabled = false;
				this->SaveToolStripMenuItem->Enabled = false;
				this->SaveAsToolStripMenuItem->Enabled = false;
				this->CorrectToolStripMenuItem->Enabled = false;
				this->dataGridView1->AllowUserToAddRows = false;
				this->dataGridView1->AllowUserToDeleteRows = false;
				this->dataGridView1->ReadOnly = true;
			}
		}*/
	}

	//Произведена смена режима - файл открывается заново
	private: System::Void QuitToolStripMenuItem_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->toolStripStatusLabel_filename->Visible)
			open_file();
	}

		   //Закрытие файла
	private: System::Void CloseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->changes && this->QuitToolStripMenuItem->Visible && MessageBox::Show(L"Сохранить изменения?", "", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			if (this->toolStripStatusLabel_filename->Text == L"Новый файл")
				SaveAsToolStripMenuItem_Click(sender, e);
			else
				SaveToolStripMenuItem_Click(sender, e);
			/*if (full_table())
				this->toolStripStatusLabel_filename->Visible = false;*/
		}
		else
			this->toolStripStatusLabel_filename->Visible = false;


	}

		   //Сохранение файла при помощи кнопки "Сохранить"
	private: System::Void SaveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (full_table()) {
			StreamWriter^ sw = gcnew StreamWriter(this->toolStripStatusLabel_filename->Text, false, System::Text::Encoding::GetEncoding(1251));
			for (Int32 i = 0; i < this->dataGridView1->Rows->Count - 1; i++) {
				String^ str = this->dataGridView1->Rows[i]->Cells[0]->Value->ToString();
				for (Int16 j = 1; j < 5; j++)
					str += ";" + this->dataGridView1->Rows[i]->Cells[j]->Value;
				sw->WriteLine(str);
			}
			sw->Close();
			this->changes = false;
			if (this->dataGridView1->Rows->Count > 1)
				this->QueryToolStripMenuItem->Enabled = true;
			else
				this->QueryToolStripMenuItem->Enabled = false;
		}
		else
			MessageBox::Show(L"Невозможно сохранить файл: в таблице есть пустые ячейки.");*/
	}

		   //Сохранение файла при помощи кнопки "Сохранить как..."
	private: System::Void SaveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (full_table()) {
			if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->toolStripStatusLabel_filename->Text = saveFileDialog1->FileName;
				this->toolStripStatusLabel_filename->Visible = true;
				SaveToolStripMenuItem_Click(sender, e);
			}
		}
		else
			MessageBox::Show(L"Невозможно сохранить файл: в таблице есть пустые ячейки.");*/
	}

		   //Изменение значения в ячейке
	private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		Boolean good = true;
		String^ value;

		/*if (e->RowIndex != -1) {
			this->changes = true;

			//Если ячейка не пустая
			if (this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr) {
				value = this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
				if (value->Length > 0) {

					if (e->ColumnIndex != 1)
						good = check_value(value, e->ColumnIndex);
					else
						good = check_value(value, this->dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString(), e->RowIndex, this->dataGridView1);

					switch (e->ColumnIndex) {

						//Ячейка столбца Название игрушки
					case 0:
						if (good) {
							Char symb = value[0];

							if (symb >= 'a' && symb <= 'z' || symb >= L'а' && symb <= L'е' || symb >= L'ж' && symb <= L'я')
								symb -= 32;
							else if (symb == L'ё')
								symb -= 80;

							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = symb + "-0001";
						}
						break;

						//Ячейка столбца Инвентарный номер
					case 1:
						if (!good) {
							String^ num = "";
							for (int i = 0; i < 4; i++)
								num += value[i + 2];
							num = Convert::ToString(Convert::ToInt64(num) + 1);
							while (num->Length < 4)
								num = "0" + num;
							num = value[0] + "-" + num;
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = Convert::ToString(num);
						}
						break;

						//Ячейка столбца Количество
					case 2:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = Convert::ToString(Convert::ToInt64(value));
						break;

						//Ячейка столбца Цена
					case 3:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = value_format(value, 3);
						break;

						//Ячейка столбца Возраст
					case 4:
						if (good)
							this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = value_format(value, 4);
						break;
					default:
						break;
					}
				}
				else
					good = false;

				if (e->ColumnIndex != 1 && this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr && value->Length > 0) {
					if (good) {
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::White;
						if (e->ColumnIndex == 0)
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Style->BackColor = System::Drawing::Color::White;
					}
					else {
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::LightCyan;
						this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "";
						if (e->ColumnIndex == 0) {
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Style->BackColor = System::Drawing::Color::LightCyan;
							this->dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = "";
						}
						MessageBox::Show(L"Введённое значение не удовлетворяет нужному формату.");
					}
				}
			}
			else
				this->dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = System::Drawing::Color::LightCyan;

		}
	*/
	}

		   //Запрос
	private: System::Void QueryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*QueryForm^ p = gcnew QueryForm(this->toolStripStatusLabel_filename->Text);
		p->Show();*/
	}

		   //Запуск игры
	private: System::Void GameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Application::OpenForms["GameStartForm"] == nullptr && Application::OpenForms["GameForm"] == nullptr) {
			GameStartForm^ p = gcnew GameStartForm();
			p->Show();
		}

		//Если игра уже запущена
		else if (Application::OpenForms["GameForm"] != nullptr)
			Application::OpenForms["GameForm"]->Select();
		else
			Application::OpenForms["GameStartForm"]->Show();*/

		this->WindowState = FormWindowState::Minimized;
	}

		   //Открытие справки
	private: System::Void InfoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (Application::OpenForms["InfoForm"] == nullptr) {
			InfoForm^ p = gcnew InfoForm();
			p->Show();
		}

		//Если окно со справкой уже открыто
		else
			Application::OpenForms["InfoForm"]->Select();*/
	}
	
	private: System::Void MainForm_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {
		
		if (this->tableLayoutPanel1->Visible)
		{
			if (this->tableLayoutPanel2->Visible)
			{
				this->tableLayoutPanel2->ColumnStyles->Clear();
				this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					this->tableLayoutPanel2->Size.Height * 0.7)));
				this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					this->tableLayoutPanel2->Size.Width - this->tableLayoutPanel2->Size.Height * 0.7)));

				if (this->tableLayoutPanel3->Visible)
				{
					this->tableLayoutPanel3->ColumnStyles->Clear();
					this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
						this->tableLayoutPanel3->Size.Height * 0.7)));
					this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
						this->tableLayoutPanel3->Size.Width - this->tableLayoutPanel3->Size.Height * 0.7)));

					if (this->tableLayoutPanel4->Visible)
					{
						this->tableLayoutPanel4->ColumnStyles->Clear();
						this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
							this->tableLayoutPanel4->Size.Height * 0.7)));
						this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
							this->tableLayoutPanel4->Size.Width - this->tableLayoutPanel4->Size.Height * 0.7)));

						if (this->tableLayoutPanel5->Visible)
						{
							this->tableLayoutPanel5->ColumnStyles->Clear();
							this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
								this->tableLayoutPanel5->Size.Height * 0.7)));
							this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
								this->tableLayoutPanel5->Size.Width - this->tableLayoutPanel5->Size.Height * 0.7)));

							if (this->tableLayoutPanel6->Visible)
							{
								this->tableLayoutPanel6->ColumnStyles->Clear();
								this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
									this->tableLayoutPanel6->Size.Height * 0.7)));
								this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
									this->tableLayoutPanel6->Size.Width - this->tableLayoutPanel6->Size.Height * 0.7)));

								if (this->tableLayoutPanel7->Visible)
								{
									this->tableLayoutPanel7->ColumnStyles->Clear();
									this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
										this->tableLayoutPanel7->Size.Height * 0.7)));
									this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
										this->tableLayoutPanel7->Size.Width - this->tableLayoutPanel7->Size.Height * 0.7)));

									if (this->tableLayoutPanel8->Visible)
									{
										this->tableLayoutPanel8->ColumnStyles->Clear();
										this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
											this->tableLayoutPanel8->Size.Height * 0.7)));
										this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
											this->tableLayoutPanel8->Size.Width - this->tableLayoutPanel8->Size.Height * 0.7)));
									
										if (this->tableLayoutPanel9->Visible)
										{
											this->tableLayoutPanel9->ColumnStyles->Clear();
											this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
												this->tableLayoutPanel9->Size.Height * 0.7)));
											this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
												this->tableLayoutPanel9->Size.Width - this->tableLayoutPanel9->Size.Height * 0.7)));
										
											if (this->tableLayoutPanel10->Visible)
											{
												this->tableLayoutPanel10->ColumnStyles->Clear();
												this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
													this->tableLayoutPanel10->Size.Height * 0.7)));
												this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
													this->tableLayoutPanel10->Size.Width - this->tableLayoutPanel10->Size.Height * 0.7)));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	private: System::Void MainForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		MainForm_ResizeEnd(sender, e);
	}

};
}