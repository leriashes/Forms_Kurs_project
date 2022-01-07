#pragma once
#include <cctype>
#include "File_O.h"
#include "msclr\marshal_cppstd.h"
#include "AdminForm.h"
#include "ExitForm.h"
#include "FilmForm.h"
#include "ChangeForm.h"
#include "ChooseForm.h"
#include "resource.h"


#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "resource.h"
#include <tchar.h>


using namespace msclr::interop;
/*#include "HelloForm.h"
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
	private: cli::array<System::Windows::Forms::Panel^>^ seats;
	private: System::Windows::Forms::Label^ label_center;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;


























































































































































private: System::Windows::Forms::ToolStripMenuItem^ ReportToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ TodayReportToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ AllTimeReportToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ MovieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ PromoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ CinemaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ NewMovieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ CorrectMovieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ DelMovieToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ NewPromoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ CorrectPromoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ DelPromoToolStripMenuItem;





private: System::Windows::Forms::Panel^ panelPlus;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::Panel^ panel37;
private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::Panel^ panel40;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::Panel^ panel42;
private: System::Windows::Forms::Panel^ panel43;
private: System::Windows::Forms::Panel^ panel44;
private: System::Windows::Forms::Panel^ panel45;
private: System::Windows::Forms::Panel^ panel46;
private: System::Windows::Forms::Panel^ panel47;
private: System::Windows::Forms::Panel^ panel48;
private: System::Windows::Forms::Panel^ panel49;
private: System::Windows::Forms::Panel^ panel50;
private: System::Windows::Forms::Panel^ panel51;
private: System::Windows::Forms::Panel^ panel52;
private: System::Windows::Forms::Panel^ panel53;
private: System::Windows::Forms::Panel^ panel54;
private: System::Windows::Forms::Panel^ panel55;
private: System::Windows::Forms::Panel^ panel56;
private: System::Windows::Forms::Panel^ panel57;
private: System::Windows::Forms::Panel^ panel58;
private: System::Windows::Forms::Panel^ panel59;
private: System::Windows::Forms::Panel^ panel60;
private: System::Windows::Forms::Panel^ panel61;
private: System::Windows::Forms::Panel^ panel62;
private: System::Windows::Forms::Panel^ panel63;
private: System::Windows::Forms::Panel^ panel64;
private: System::Windows::Forms::Panel^ panel65;
private: System::Windows::Forms::Panel^ panel66;
private: System::Windows::Forms::Panel^ panel67;
private: System::Windows::Forms::Panel^ panel70;
private: System::Windows::Forms::Panel^ panel69;
private: System::Windows::Forms::Panel^ panel68;
private: System::Windows::Forms::Panel^ panel71;
private: System::Windows::Forms::Panel^ panel72;
private: System::Windows::Forms::Panel^ panel73;
private: System::Windows::Forms::Panel^ panel74;
private: System::Windows::Forms::Panel^ panel75;
private: System::Windows::Forms::Panel^ panel76;
private: System::Windows::Forms::Panel^ panel77;
private: System::Windows::Forms::Panel^ panel78;
private: System::Windows::Forms::Panel^ panel79;
private: System::Windows::Forms::Panel^ panel80;
private: System::Windows::Forms::Panel^ panel81;
private: System::Windows::Forms::Panel^ panel82;
private: System::Windows::Forms::Panel^ panel83;
private: System::Windows::Forms::Panel^ panel84;
private: System::Windows::Forms::Panel^ panel85;
private: System::Windows::Forms::Panel^ panel86;
private: System::Windows::Forms::Panel^ panel87;
private: System::Windows::Forms::Panel^ panel88;
private: System::Windows::Forms::Panel^ panel89;
private: System::Windows::Forms::Panel^ panel90;
private: System::Windows::Forms::Panel^ panel91;
private: System::Windows::Forms::Panel^ panel92;
private: System::Windows::Forms::Panel^ panel93;
private: System::Windows::Forms::Panel^ panel94;
private: System::Windows::Forms::Panel^ panel95;
private: System::Windows::Forms::Panel^ panel96;
private: System::Windows::Forms::Panel^ panel97;
private: System::Windows::Forms::Panel^ panel98;
private: System::Windows::Forms::Panel^ panel99;
private: System::Windows::Forms::Panel^ panel100;
private: System::Windows::Forms::Panel^ panel101;
private: System::Windows::Forms::Panel^ panel102;
private: System::Windows::Forms::Panel^ panel103;
private: System::Windows::Forms::Panel^ panel104;
private: System::Windows::Forms::Panel^ panel105;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::ToolStrip^ toolStrip1;
private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;




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


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^ CorrectToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ InfoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ QuitToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ CloseToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


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
			this->MovieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NewMovieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CorrectMovieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DelMovieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PromoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NewPromoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CorrectPromoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DelPromoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CinemaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TodayReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AllTimeReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InfoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->QuitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel_filename = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label_center = (gcnew System::Windows::Forms::Label());
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
			this->panelPlus = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->panel76 = (gcnew System::Windows::Forms::Panel());
			this->panel77 = (gcnew System::Windows::Forms::Panel());
			this->panel78 = (gcnew System::Windows::Forms::Panel());
			this->panel79 = (gcnew System::Windows::Forms::Panel());
			this->panel80 = (gcnew System::Windows::Forms::Panel());
			this->panel81 = (gcnew System::Windows::Forms::Panel());
			this->panel82 = (gcnew System::Windows::Forms::Panel());
			this->panel83 = (gcnew System::Windows::Forms::Panel());
			this->panel84 = (gcnew System::Windows::Forms::Panel());
			this->panel85 = (gcnew System::Windows::Forms::Panel());
			this->panel86 = (gcnew System::Windows::Forms::Panel());
			this->panel87 = (gcnew System::Windows::Forms::Panel());
			this->panel88 = (gcnew System::Windows::Forms::Panel());
			this->panel89 = (gcnew System::Windows::Forms::Panel());
			this->panel90 = (gcnew System::Windows::Forms::Panel());
			this->panel91 = (gcnew System::Windows::Forms::Panel());
			this->panel92 = (gcnew System::Windows::Forms::Panel());
			this->panel93 = (gcnew System::Windows::Forms::Panel());
			this->panel94 = (gcnew System::Windows::Forms::Panel());
			this->panel95 = (gcnew System::Windows::Forms::Panel());
			this->panel96 = (gcnew System::Windows::Forms::Panel());
			this->panel97 = (gcnew System::Windows::Forms::Panel());
			this->panel98 = (gcnew System::Windows::Forms::Panel());
			this->panel99 = (gcnew System::Windows::Forms::Panel());
			this->panel100 = (gcnew System::Windows::Forms::Panel());
			this->panel101 = (gcnew System::Windows::Forms::Panel());
			this->panel102 = (gcnew System::Windows::Forms::Panel());
			this->panel103 = (gcnew System::Windows::Forms::Panel());
			this->panel104 = (gcnew System::Windows::Forms::Panel());
			this->panel105 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->tableLayoutPanel13->SuspendLayout();
			this->tableLayoutPanel14->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// menustrip_main
			// 
			this->menustrip_main->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menustrip_main->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menustrip_main->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->FileToolStripMenuItem,
					this->EnterToolStripMenuItem, this->CorrectToolStripMenuItem, this->ReportToolStripMenuItem, this->InfoToolStripMenuItem, this->QuitToolStripMenuItem
			});
			this->menustrip_main->Location = System::Drawing::Point(0, 0);
			this->menustrip_main->Name = L"menustrip_main";
			this->menustrip_main->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menustrip_main->Size = System::Drawing::Size(1018, 24);
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
			this->CorrectToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->MovieToolStripMenuItem,
					this->PromoToolStripMenuItem, this->CinemaToolStripMenuItem
			});
			this->CorrectToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Name = L"CorrectToolStripMenuItem";
			this->CorrectToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->CorrectToolStripMenuItem->Text = L"&Редактирование";
			// 
			// MovieToolStripMenuItem
			// 
			this->MovieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->NewMovieToolStripMenuItem,
					this->CorrectMovieToolStripMenuItem, this->DelMovieToolStripMenuItem
			});
			this->MovieToolStripMenuItem->Name = L"MovieToolStripMenuItem";
			this->MovieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->MovieToolStripMenuItem->Text = L"&Фильм";
			// 
			// NewMovieToolStripMenuItem
			// 
			this->NewMovieToolStripMenuItem->Name = L"NewMovieToolStripMenuItem";
			this->NewMovieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->NewMovieToolStripMenuItem->Text = L"&Добавить новый";
			this->NewMovieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::NewMovieToolStripMenuItem_Click);
			// 
			// CorrectMovieToolStripMenuItem
			// 
			this->CorrectMovieToolStripMenuItem->Name = L"CorrectMovieToolStripMenuItem";
			this->CorrectMovieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->CorrectMovieToolStripMenuItem->Text = L"&Изменить";
			this->CorrectMovieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CorrectMovieToolStripMenuItem_Click);
			// 
			// DelMovieToolStripMenuItem
			// 
			this->DelMovieToolStripMenuItem->Name = L"DelMovieToolStripMenuItem";
			this->DelMovieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->DelMovieToolStripMenuItem->Text = L"&Удалить";
			// 
			// PromoToolStripMenuItem
			// 
			this->PromoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->NewPromoToolStripMenuItem,
					this->CorrectPromoToolStripMenuItem, this->DelPromoToolStripMenuItem
			});
			this->PromoToolStripMenuItem->Name = L"PromoToolStripMenuItem";
			this->PromoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->PromoToolStripMenuItem->Text = L"&Промокод";
			// 
			// NewPromoToolStripMenuItem
			// 
			this->NewPromoToolStripMenuItem->Name = L"NewPromoToolStripMenuItem";
			this->NewPromoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->NewPromoToolStripMenuItem->Text = L"&Добавить новый";
			// 
			// CorrectPromoToolStripMenuItem
			// 
			this->CorrectPromoToolStripMenuItem->Name = L"CorrectPromoToolStripMenuItem";
			this->CorrectPromoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->CorrectPromoToolStripMenuItem->Text = L"&Изменить";
			// 
			// DelPromoToolStripMenuItem
			// 
			this->DelPromoToolStripMenuItem->Name = L"DelPromoToolStripMenuItem";
			this->DelPromoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->DelPromoToolStripMenuItem->Text = L"&Удалить";
			// 
			// CinemaToolStripMenuItem
			// 
			this->CinemaToolStripMenuItem->Name = L"CinemaToolStripMenuItem";
			this->CinemaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->CinemaToolStripMenuItem->Text = L"&Кинотеатр";
			this->CinemaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::CinemaToolStripMenuItem_Click);
			// 
			// ReportToolStripMenuItem
			// 
			this->ReportToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->TodayReportToolStripMenuItem,
					this->AllTimeReportToolStripMenuItem
			});
			this->ReportToolStripMenuItem->Enabled = false;
			this->ReportToolStripMenuItem->Name = L"ReportToolStripMenuItem";
			this->ReportToolStripMenuItem->Size = System::Drawing::Size(51, 22);
			this->ReportToolStripMenuItem->Text = L"&Отчёт";
			// 
			// TodayReportToolStripMenuItem
			// 
			this->TodayReportToolStripMenuItem->Name = L"TodayReportToolStripMenuItem";
			this->TodayReportToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->TodayReportToolStripMenuItem->Text = L"&Отчёт за день";
			// 
			// AllTimeReportToolStripMenuItem
			// 
			this->AllTimeReportToolStripMenuItem->Name = L"AllTimeReportToolStripMenuItem";
			this->AllTimeReportToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->AllTimeReportToolStripMenuItem->Text = L"О&тчёт за всё время";
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
			this->statusStrip1->Size = System::Drawing::Size(1018, 22);
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
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Текстовые файлы(*.txt)|*.txt";
			// 
			// label_center
			// 
			this->label_center->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_center->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label_center->Location = System::Drawing::Point(0, 24);
			this->label_center->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_center->Name = L"label_center";
			this->label_center->Size = System::Drawing::Size(1018, 638);
			this->label_center->TabIndex = 3;
			this->label_center->Text = L"Файл не выбран";
			this->label_center->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(1018, 616);
			this->tableLayoutPanel1->TabIndex = 6;
			this->tableLayoutPanel1->Visible = false;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				236)));
			this->tableLayoutPanel10->Controls->Add(this->pictureBox9, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->textBox9, 1, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel10->Location = System::Drawing::Point(680, 412);
			this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel10->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel10->Size = System::Drawing::Size(336, 202);
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
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MainForm::pictureBox9_Click);
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
			this->textBox9->Size = System::Drawing::Size(230, 196);
			this->textBox9->TabIndex = 1;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel9->ColumnCount = 2;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel9->Controls->Add(this->pictureBox8, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox8, 1, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(341, 412);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel9->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel9->Size = System::Drawing::Size(335, 202);
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
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MainForm::pictureBox8_Click);
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
			this->textBox8->Size = System::Drawing::Size(229, 196);
			this->textBox8->TabIndex = 1;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel8->ColumnCount = 2;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel8->Controls->Add(this->pictureBox7, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox7, 1, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(2, 412);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel8->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel8->Size = System::Drawing::Size(335, 202);
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
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MainForm::pictureBox7_Click);
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
			this->textBox7->Size = System::Drawing::Size(229, 196);
			this->textBox7->TabIndex = 1;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				236)));
			this->tableLayoutPanel7->Controls->Add(this->pictureBox6, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->textBox6, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel7->Location = System::Drawing::Point(680, 207);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel7->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel7->Size = System::Drawing::Size(336, 201);
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
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::pictureBox6_Click);
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
			this->textBox6->Size = System::Drawing::Size(230, 195);
			this->textBox6->TabIndex = 1;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel6->Controls->Add(this->pictureBox5, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox5, 1, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(341, 207);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel6->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->Size = System::Drawing::Size(335, 201);
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
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MainForm::pictureBox5_Click);
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
			this->textBox5->Size = System::Drawing::Size(229, 195);
			this->textBox5->TabIndex = 1;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel5->Controls->Add(this->pictureBox4, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(2, 207);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel5->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->Size = System::Drawing::Size(335, 201);
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
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MainForm::pictureBox4_Click);
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
			this->textBox4->Size = System::Drawing::Size(229, 195);
			this->textBox4->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				236)));
			this->tableLayoutPanel4->Controls->Add(this->pictureBox3, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox3, 1, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(680, 2);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel4->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->Size = System::Drawing::Size(336, 201);
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
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
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
			this->textBox3->Size = System::Drawing::Size(230, 195);
			this->textBox3->TabIndex = 1;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(341, 2);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel3->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->Size = System::Drawing::Size(335, 201);
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
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
			this->textBox2->Size = System::Drawing::Size(229, 195);
			this->textBox2->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				235)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(2, 2);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel2->MinimumSize = System::Drawing::Size(269, 155);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(335, 201);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
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
			this->textBox1->Size = System::Drawing::Size(229, 195);
			this->textBox1->TabIndex = 1;
			// 
			// panelPlus
			// 
			this->panelPlus->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelPlus.BackgroundImage")));
			this->panelPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelPlus->Location = System::Drawing::Point(95, 66);
			this->panelPlus->Name = L"panelPlus";
			this->panelPlus->Size = System::Drawing::Size(335, 201);
			this->panelPlus->TabIndex = 7;
			this->panelPlus->Click += gcnew System::EventHandler(this, &MainForm::panelPlus_Click);
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->ColumnCount = 1;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel13->Controls->Add(this->label5, 0, 1);
			this->tableLayoutPanel13->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->tableLayoutPanel14, 0, 2);
			this->tableLayoutPanel13->Controls->Add(this->label31, 0, 3);
			this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel13->Location = System::Drawing::Point(254, 0);
			this->tableLayoutPanel13->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 4;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(764, 619);
			this->tableLayoutPanel13->TabIndex = 1;
			this->tableLayoutPanel13->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(758, 30);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Дата и время, Кинотеатр, Зал";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(758, 50);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Название фильма";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel14
			// 
			this->tableLayoutPanel14->ColumnCount = 14;
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel14->Controls->Add(this->label30, 2, 1);
			this->tableLayoutPanel14->Controls->Add(this->label29, 1, 3);
			this->tableLayoutPanel14->Controls->Add(this->label28, 1, 6);
			this->tableLayoutPanel14->Controls->Add(this->label27, 1, 4);
			this->tableLayoutPanel14->Controls->Add(this->label26, 1, 5);
			this->tableLayoutPanel14->Controls->Add(this->label25, 1, 10);
			this->tableLayoutPanel14->Controls->Add(this->label24, 1, 9);
			this->tableLayoutPanel14->Controls->Add(this->label23, 1, 12);
			this->tableLayoutPanel14->Controls->Add(this->label22, 1, 11);
			this->tableLayoutPanel14->Controls->Add(this->label21, 1, 8);
			this->tableLayoutPanel14->Controls->Add(this->label20, 1, 7);
			this->tableLayoutPanel14->Controls->Add(this->label19, 5, 2);
			this->tableLayoutPanel14->Controls->Add(this->label18, 10, 2);
			this->tableLayoutPanel14->Controls->Add(this->label17, 8, 2);
			this->tableLayoutPanel14->Controls->Add(this->label16, 7, 2);
			this->tableLayoutPanel14->Controls->Add(this->label15, 6, 2);
			this->tableLayoutPanel14->Controls->Add(this->label14, 9, 2);
			this->tableLayoutPanel14->Controls->Add(this->label13, 4, 2);
			this->tableLayoutPanel14->Controls->Add(this->label11, 6, 2);
			this->tableLayoutPanel14->Controls->Add(this->label9, 3, 2);
			this->tableLayoutPanel14->Controls->Add(this->label7, 2, 2);
			this->tableLayoutPanel14->Controls->Add(this->panel7, 3, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel8, 4, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel6, 2, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel9, 5, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel10, 6, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel11, 7, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel12, 8, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel13, 9, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel14, 10, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel15, 11, 12);
			this->tableLayoutPanel14->Controls->Add(this->panel16, 2, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel17, 3, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel18, 4, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel19, 5, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel20, 6, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel21, 7, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel22, 8, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel23, 9, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel24, 10, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel25, 11, 3);
			this->tableLayoutPanel14->Controls->Add(this->panel26, 2, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel27, 3, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel28, 4, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel29, 5, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel30, 6, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel32, 8, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel31, 7, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel33, 9, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel34, 10, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel35, 11, 4);
			this->tableLayoutPanel14->Controls->Add(this->panel36, 2, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel37, 3, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel38, 4, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel39, 5, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel40, 6, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel41, 7, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel42, 8, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel43, 9, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel44, 10, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel45, 11, 5);
			this->tableLayoutPanel14->Controls->Add(this->panel46, 2, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel47, 3, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel48, 4, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel49, 5, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel50, 6, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel51, 7, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel52, 8, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel53, 9, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel54, 10, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel55, 11, 6);
			this->tableLayoutPanel14->Controls->Add(this->panel56, 2, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel57, 3, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel58, 4, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel59, 5, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel60, 6, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel61, 7, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel62, 8, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel63, 9, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel64, 10, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel65, 11, 7);
			this->tableLayoutPanel14->Controls->Add(this->panel66, 2, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel67, 3, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel70, 6, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel69, 5, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel68, 4, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel71, 7, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel72, 8, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel73, 9, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel74, 10, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel75, 11, 8);
			this->tableLayoutPanel14->Controls->Add(this->panel76, 2, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel77, 3, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel78, 4, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel79, 5, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel80, 6, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel81, 7, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel82, 8, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel83, 9, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel84, 10, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel85, 11, 9);
			this->tableLayoutPanel14->Controls->Add(this->panel86, 2, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel87, 3, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel88, 4, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel89, 5, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel90, 6, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel91, 7, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel92, 8, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel93, 9, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel94, 10, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel95, 11, 10);
			this->tableLayoutPanel14->Controls->Add(this->panel96, 2, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel97, 3, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel98, 4, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel99, 5, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel100, 6, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel101, 7, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel102, 8, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel103, 9, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel104, 10, 11);
			this->tableLayoutPanel14->Controls->Add(this->panel105, 11, 11);
			this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel14->Location = System::Drawing::Point(0, 80);
			this->tableLayoutPanel14->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
			this->tableLayoutPanel14->RowCount = 14;
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel14->Size = System::Drawing::Size(764, 499);
			this->tableLayoutPanel14->TabIndex = 2;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel14->SetColumnSpan(this->label30, 10);
			this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(185, 19);
			this->label30->Margin = System::Windows::Forms::Padding(3);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(394, 21);
			this->label30->TabIndex = 129;
			this->label30->Text = L"Экран";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(145, 86);
			this->label29->Margin = System::Windows::Forms::Padding(3);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(34, 34);
			this->label29->TabIndex = 28;
			this->label29->Text = L"1";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(145, 206);
			this->label28->Margin = System::Windows::Forms::Padding(3);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 34);
			this->label28->TabIndex = 27;
			this->label28->Text = L"4";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(145, 126);
			this->label27->Margin = System::Windows::Forms::Padding(3);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(34, 34);
			this->label27->TabIndex = 26;
			this->label27->Text = L"2";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(145, 166);
			this->label26->Margin = System::Windows::Forms::Padding(3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(34, 34);
			this->label26->TabIndex = 25;
			this->label26->Text = L"3";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(145, 366);
			this->label25->Margin = System::Windows::Forms::Padding(3);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 34);
			this->label25->TabIndex = 24;
			this->label25->Text = L"8";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(145, 326);
			this->label24->Margin = System::Windows::Forms::Padding(3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 34);
			this->label24->TabIndex = 23;
			this->label24->Text = L"7";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(145, 446);
			this->label23->Margin = System::Windows::Forms::Padding(3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(34, 34);
			this->label23->TabIndex = 22;
			this->label23->Text = L"10";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(145, 406);
			this->label22->Margin = System::Windows::Forms::Padding(3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 34);
			this->label22->TabIndex = 21;
			this->label22->Text = L"9";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(145, 286);
			this->label21->Margin = System::Windows::Forms::Padding(3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(34, 34);
			this->label21->TabIndex = 20;
			this->label21->Text = L"6";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(145, 246);
			this->label20->Margin = System::Windows::Forms::Padding(3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 34);
			this->label20->TabIndex = 19;
			this->label20->Text = L"5";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(305, 46);
			this->label19->Margin = System::Windows::Forms::Padding(3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(34, 34);
			this->label19->TabIndex = 18;
			this->label19->Text = L"D";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(545, 46);
			this->label18->Margin = System::Windows::Forms::Padding(3);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 34);
			this->label18->TabIndex = 17;
			this->label18->Text = L"J";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(465, 46);
			this->label17->Margin = System::Windows::Forms::Padding(3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 34);
			this->label17->TabIndex = 16;
			this->label17->Text = L"H";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(425, 46);
			this->label16->Margin = System::Windows::Forms::Padding(3);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(34, 34);
			this->label16->TabIndex = 15;
			this->label16->Text = L"G";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(345, 46);
			this->label15->Margin = System::Windows::Forms::Padding(3);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 34);
			this->label15->TabIndex = 14;
			this->label15->Text = L"E";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(505, 46);
			this->label14->Margin = System::Windows::Forms::Padding(3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(34, 34);
			this->label14->TabIndex = 13;
			this->label14->Text = L"I";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(265, 46);
			this->label13->Margin = System::Windows::Forms::Padding(3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 34);
			this->label13->TabIndex = 12;
			this->label13->Text = L"C";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(385, 46);
			this->label11->Margin = System::Windows::Forms::Padding(3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 34);
			this->label11->TabIndex = 11;
			this->label11->Text = L"F";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(225, 46);
			this->label9->Margin = System::Windows::Forms::Padding(3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 34);
			this->label9->TabIndex = 10;
			this->label9->Text = L"B";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(185, 46);
			this->label7->Margin = System::Windows::Forms::Padding(3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 34);
			this->label7->TabIndex = 9;
			this->label7->Text = L"A";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(229, 448);
			this->panel7->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel7->MaximumSize = System::Drawing::Size(30, 30);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(30, 30);
			this->panel7->TabIndex = 30;
			this->panel7->Click += gcnew System::EventHandler(this, &MainForm::panel7_Click);
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Location = System::Drawing::Point(269, 448);
			this->panel8->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel8->MaximumSize = System::Drawing::Size(30, 30);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(30, 30);
			this->panel8->TabIndex = 31;
			this->panel8->Click += gcnew System::EventHandler(this, &MainForm::panel8_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel6->Location = System::Drawing::Point(187, 448);
			this->panel6->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel6->MaximumSize = System::Drawing::Size(30, 30);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(30, 30);
			this->panel6->TabIndex = 29;
			this->panel6->Click += gcnew System::EventHandler(this, &MainForm::panel6_Click);
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel9->Location = System::Drawing::Point(309, 448);
			this->panel9->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel9->MaximumSize = System::Drawing::Size(30, 30);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(30, 30);
			this->panel9->TabIndex = 32;
			this->panel9->Click += gcnew System::EventHandler(this, &MainForm::panel9_Click);
			// 
			// panel10
			// 
			this->panel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel10->Location = System::Drawing::Point(349, 448);
			this->panel10->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel10->MaximumSize = System::Drawing::Size(30, 30);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(30, 30);
			this->panel10->TabIndex = 33;
			this->panel10->Click += gcnew System::EventHandler(this, &MainForm::panel10_Click);
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel11->Location = System::Drawing::Point(389, 448);
			this->panel11->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel11->MaximumSize = System::Drawing::Size(30, 30);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(30, 30);
			this->panel11->TabIndex = 34;
			this->panel11->Click += gcnew System::EventHandler(this, &MainForm::panel11_Click);
			// 
			// panel12
			// 
			this->panel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel12->Location = System::Drawing::Point(429, 448);
			this->panel12->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel12->MaximumSize = System::Drawing::Size(30, 30);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(30, 30);
			this->panel12->TabIndex = 35;
			this->panel12->Click += gcnew System::EventHandler(this, &MainForm::panel12_Click);
			// 
			// panel13
			// 
			this->panel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel13->Location = System::Drawing::Point(469, 448);
			this->panel13->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel13->MaximumSize = System::Drawing::Size(30, 30);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(30, 30);
			this->panel13->TabIndex = 36;
			this->panel13->Click += gcnew System::EventHandler(this, &MainForm::panel13_Click);
			// 
			// panel14
			// 
			this->panel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel14->Location = System::Drawing::Point(509, 448);
			this->panel14->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel14->MaximumSize = System::Drawing::Size(30, 30);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(30, 30);
			this->panel14->TabIndex = 37;
			this->panel14->Click += gcnew System::EventHandler(this, &MainForm::panel14_Click);
			// 
			// panel15
			// 
			this->panel15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel15->Location = System::Drawing::Point(549, 448);
			this->panel15->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel15->MaximumSize = System::Drawing::Size(30, 30);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(30, 30);
			this->panel15->TabIndex = 38;
			this->panel15->Click += gcnew System::EventHandler(this, &MainForm::panel15_Click);
			// 
			// panel16
			// 
			this->panel16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel16->Location = System::Drawing::Point(189, 88);
			this->panel16->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel16->MaximumSize = System::Drawing::Size(30, 30);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(30, 30);
			this->panel16->TabIndex = 39;
			this->panel16->Click += gcnew System::EventHandler(this, &MainForm::panel16_Click);
			// 
			// panel17
			// 
			this->panel17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel17->Location = System::Drawing::Point(229, 88);
			this->panel17->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel17->MaximumSize = System::Drawing::Size(30, 30);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(30, 30);
			this->panel17->TabIndex = 40;
			this->panel17->Click += gcnew System::EventHandler(this, &MainForm::panel17_Click);
			// 
			// panel18
			// 
			this->panel18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel18->Location = System::Drawing::Point(269, 88);
			this->panel18->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel18->MaximumSize = System::Drawing::Size(30, 30);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(30, 30);
			this->panel18->TabIndex = 41;
			this->panel18->Click += gcnew System::EventHandler(this, &MainForm::panel18_Click);
			// 
			// panel19
			// 
			this->panel19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel19->Location = System::Drawing::Point(309, 88);
			this->panel19->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel19->MaximumSize = System::Drawing::Size(30, 30);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(30, 30);
			this->panel19->TabIndex = 42;
			this->panel19->Click += gcnew System::EventHandler(this, &MainForm::panel19_Click);
			// 
			// panel20
			// 
			this->panel20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel20->Location = System::Drawing::Point(349, 88);
			this->panel20->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel20->MaximumSize = System::Drawing::Size(30, 30);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(30, 30);
			this->panel20->TabIndex = 43;
			this->panel20->Click += gcnew System::EventHandler(this, &MainForm::panel20_Click);
			// 
			// panel21
			// 
			this->panel21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel21->Location = System::Drawing::Point(389, 88);
			this->panel21->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel21->MaximumSize = System::Drawing::Size(30, 30);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(30, 30);
			this->panel21->TabIndex = 44;
			this->panel21->Click += gcnew System::EventHandler(this, &MainForm::panel21_Click);
			// 
			// panel22
			// 
			this->panel22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel22->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel22->Location = System::Drawing::Point(429, 88);
			this->panel22->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel22->MaximumSize = System::Drawing::Size(30, 30);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(30, 30);
			this->panel22->TabIndex = 45;
			this->panel22->Click += gcnew System::EventHandler(this, &MainForm::panel22_Click);
			// 
			// panel23
			// 
			this->panel23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel23->Location = System::Drawing::Point(469, 88);
			this->panel23->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel23->MaximumSize = System::Drawing::Size(30, 30);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(30, 30);
			this->panel23->TabIndex = 46;
			this->panel23->Click += gcnew System::EventHandler(this, &MainForm::panel23_Click);
			// 
			// panel24
			// 
			this->panel24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel24->Location = System::Drawing::Point(509, 88);
			this->panel24->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel24->MaximumSize = System::Drawing::Size(30, 30);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(30, 30);
			this->panel24->TabIndex = 47;
			this->panel24->Click += gcnew System::EventHandler(this, &MainForm::panel24_Click);
			// 
			// panel25
			// 
			this->panel25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel25->Location = System::Drawing::Point(549, 88);
			this->panel25->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel25->MaximumSize = System::Drawing::Size(30, 30);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(30, 30);
			this->panel25->TabIndex = 48;
			this->panel25->Click += gcnew System::EventHandler(this, &MainForm::panel25_Click);
			// 
			// panel26
			// 
			this->panel26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel26->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel26->Location = System::Drawing::Point(189, 128);
			this->panel26->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel26->MaximumSize = System::Drawing::Size(30, 30);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(30, 30);
			this->panel26->TabIndex = 49;
			this->panel26->Click += gcnew System::EventHandler(this, &MainForm::panel26_Click);
			// 
			// panel27
			// 
			this->panel27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel27->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel27->Location = System::Drawing::Point(229, 128);
			this->panel27->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel27->MaximumSize = System::Drawing::Size(30, 30);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(30, 30);
			this->panel27->TabIndex = 50;
			this->panel27->Click += gcnew System::EventHandler(this, &MainForm::panel27_Click);
			// 
			// panel28
			// 
			this->panel28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel28->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel28->Location = System::Drawing::Point(269, 128);
			this->panel28->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel28->MaximumSize = System::Drawing::Size(30, 30);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(30, 30);
			this->panel28->TabIndex = 51;
			this->panel28->Click += gcnew System::EventHandler(this, &MainForm::panel28_Click);
			// 
			// panel29
			// 
			this->panel29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel29->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel29->Location = System::Drawing::Point(309, 128);
			this->panel29->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel29->MaximumSize = System::Drawing::Size(30, 30);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(30, 30);
			this->panel29->TabIndex = 52;
			this->panel29->Click += gcnew System::EventHandler(this, &MainForm::panel29_Click);
			// 
			// panel30
			// 
			this->panel30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel30->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel30->Location = System::Drawing::Point(349, 128);
			this->panel30->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel30->MaximumSize = System::Drawing::Size(30, 30);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(30, 30);
			this->panel30->TabIndex = 53;
			this->panel30->Click += gcnew System::EventHandler(this, &MainForm::panel30_Click);
			// 
			// panel32
			// 
			this->panel32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel32->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel32->Location = System::Drawing::Point(429, 128);
			this->panel32->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel32->MaximumSize = System::Drawing::Size(30, 30);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(30, 30);
			this->panel32->TabIndex = 55;
			this->panel32->Click += gcnew System::EventHandler(this, &MainForm::panel32_Click);
			// 
			// panel31
			// 
			this->panel31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel31->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel31->Location = System::Drawing::Point(389, 128);
			this->panel31->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel31->MaximumSize = System::Drawing::Size(30, 30);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(30, 30);
			this->panel31->TabIndex = 54;
			this->panel31->Click += gcnew System::EventHandler(this, &MainForm::panel31_Click);
			// 
			// panel33
			// 
			this->panel33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel33->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel33->Location = System::Drawing::Point(469, 128);
			this->panel33->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel33->MaximumSize = System::Drawing::Size(30, 30);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(30, 30);
			this->panel33->TabIndex = 56;
			this->panel33->Click += gcnew System::EventHandler(this, &MainForm::panel33_Click);
			// 
			// panel34
			// 
			this->panel34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel34->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel34->Location = System::Drawing::Point(509, 128);
			this->panel34->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel34->MaximumSize = System::Drawing::Size(30, 30);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(30, 30);
			this->panel34->TabIndex = 57;
			this->panel34->Click += gcnew System::EventHandler(this, &MainForm::panel34_Click);
			// 
			// panel35
			// 
			this->panel35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel35->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel35->Location = System::Drawing::Point(549, 128);
			this->panel35->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel35->MaximumSize = System::Drawing::Size(30, 30);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(30, 30);
			this->panel35->TabIndex = 58;
			this->panel35->Click += gcnew System::EventHandler(this, &MainForm::panel35_Click);
			// 
			// panel36
			// 
			this->panel36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel36->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel36->Location = System::Drawing::Point(189, 168);
			this->panel36->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel36->MaximumSize = System::Drawing::Size(30, 30);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(30, 30);
			this->panel36->TabIndex = 59;
			this->panel36->Click += gcnew System::EventHandler(this, &MainForm::panel36_Click);
			// 
			// panel37
			// 
			this->panel37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel37->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel37->Location = System::Drawing::Point(229, 168);
			this->panel37->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel37->MaximumSize = System::Drawing::Size(30, 30);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(30, 30);
			this->panel37->TabIndex = 60;
			this->panel37->Click += gcnew System::EventHandler(this, &MainForm::panel37_Click);
			// 
			// panel38
			// 
			this->panel38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel38->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel38->Location = System::Drawing::Point(269, 168);
			this->panel38->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel38->MaximumSize = System::Drawing::Size(30, 30);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(30, 30);
			this->panel38->TabIndex = 61;
			this->panel38->Click += gcnew System::EventHandler(this, &MainForm::panel38_Click);
			// 
			// panel39
			// 
			this->panel39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel39->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel39->Location = System::Drawing::Point(309, 168);
			this->panel39->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel39->MaximumSize = System::Drawing::Size(30, 30);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(30, 30);
			this->panel39->TabIndex = 62;
			this->panel39->Click += gcnew System::EventHandler(this, &MainForm::panel39_Click);
			// 
			// panel40
			// 
			this->panel40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel40->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel40->Location = System::Drawing::Point(349, 168);
			this->panel40->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel40->MaximumSize = System::Drawing::Size(30, 30);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(30, 30);
			this->panel40->TabIndex = 63;
			this->panel40->Click += gcnew System::EventHandler(this, &MainForm::panel40_Click);
			// 
			// panel41
			// 
			this->panel41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel41->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel41->Location = System::Drawing::Point(389, 168);
			this->panel41->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel41->MaximumSize = System::Drawing::Size(30, 30);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(30, 30);
			this->panel41->TabIndex = 64;
			this->panel41->Click += gcnew System::EventHandler(this, &MainForm::panel41_Click);
			// 
			// panel42
			// 
			this->panel42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel42->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel42->Location = System::Drawing::Point(429, 168);
			this->panel42->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel42->MaximumSize = System::Drawing::Size(30, 30);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(30, 30);
			this->panel42->TabIndex = 65;
			this->panel42->Click += gcnew System::EventHandler(this, &MainForm::panel42_Click);
			// 
			// panel43
			// 
			this->panel43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel43->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel43->Location = System::Drawing::Point(469, 168);
			this->panel43->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel43->MaximumSize = System::Drawing::Size(30, 30);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(30, 30);
			this->panel43->TabIndex = 66;
			this->panel43->Click += gcnew System::EventHandler(this, &MainForm::panel43_Click);
			// 
			// panel44
			// 
			this->panel44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel44->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel44->Location = System::Drawing::Point(509, 168);
			this->panel44->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel44->MaximumSize = System::Drawing::Size(30, 30);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(30, 30);
			this->panel44->TabIndex = 67;
			this->panel44->Click += gcnew System::EventHandler(this, &MainForm::panel44_Click);
			// 
			// panel45
			// 
			this->panel45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel45->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel45->Location = System::Drawing::Point(549, 168);
			this->panel45->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel45->MaximumSize = System::Drawing::Size(30, 30);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(30, 30);
			this->panel45->TabIndex = 68;
			this->panel45->Click += gcnew System::EventHandler(this, &MainForm::panel45_Click);
			// 
			// panel46
			// 
			this->panel46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel46->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel46->Location = System::Drawing::Point(189, 208);
			this->panel46->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel46->MaximumSize = System::Drawing::Size(30, 30);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(30, 30);
			this->panel46->TabIndex = 69;
			this->panel46->Click += gcnew System::EventHandler(this, &MainForm::panel46_Click);
			// 
			// panel47
			// 
			this->panel47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel47->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel47->Location = System::Drawing::Point(229, 208);
			this->panel47->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel47->MaximumSize = System::Drawing::Size(30, 30);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(30, 30);
			this->panel47->TabIndex = 70;
			this->panel47->Click += gcnew System::EventHandler(this, &MainForm::panel47_Click);
			// 
			// panel48
			// 
			this->panel48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel48->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel48->Location = System::Drawing::Point(269, 208);
			this->panel48->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel48->MaximumSize = System::Drawing::Size(30, 30);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(30, 30);
			this->panel48->TabIndex = 71;
			this->panel48->Click += gcnew System::EventHandler(this, &MainForm::panel48_Click);
			// 
			// panel49
			// 
			this->panel49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel49->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel49->Location = System::Drawing::Point(309, 208);
			this->panel49->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel49->MaximumSize = System::Drawing::Size(30, 30);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(30, 30);
			this->panel49->TabIndex = 72;
			this->panel49->Click += gcnew System::EventHandler(this, &MainForm::panel49_Click);
			// 
			// panel50
			// 
			this->panel50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel50->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel50->Location = System::Drawing::Point(349, 208);
			this->panel50->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel50->MaximumSize = System::Drawing::Size(30, 30);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(30, 30);
			this->panel50->TabIndex = 73;
			this->panel50->Click += gcnew System::EventHandler(this, &MainForm::panel50_Click);
			// 
			// panel51
			// 
			this->panel51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel51->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel51->Location = System::Drawing::Point(389, 208);
			this->panel51->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel51->MaximumSize = System::Drawing::Size(30, 30);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(30, 30);
			this->panel51->TabIndex = 74;
			this->panel51->Click += gcnew System::EventHandler(this, &MainForm::panel51_Click);
			// 
			// panel52
			// 
			this->panel52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel52->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel52->Location = System::Drawing::Point(429, 208);
			this->panel52->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel52->MaximumSize = System::Drawing::Size(30, 30);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(30, 30);
			this->panel52->TabIndex = 75;
			this->panel52->Click += gcnew System::EventHandler(this, &MainForm::panel52_Click);
			// 
			// panel53
			// 
			this->panel53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel53->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel53->Location = System::Drawing::Point(469, 208);
			this->panel53->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel53->MaximumSize = System::Drawing::Size(30, 30);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(30, 30);
			this->panel53->TabIndex = 76;
			this->panel53->Click += gcnew System::EventHandler(this, &MainForm::panel53_Click);
			// 
			// panel54
			// 
			this->panel54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel54->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel54->Location = System::Drawing::Point(509, 208);
			this->panel54->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel54->MaximumSize = System::Drawing::Size(30, 30);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(30, 30);
			this->panel54->TabIndex = 77;
			this->panel54->Click += gcnew System::EventHandler(this, &MainForm::panel54_Click);
			// 
			// panel55
			// 
			this->panel55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel55->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel55->Location = System::Drawing::Point(549, 208);
			this->panel55->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel55->MaximumSize = System::Drawing::Size(30, 30);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(30, 30);
			this->panel55->TabIndex = 78;
			this->panel55->Click += gcnew System::EventHandler(this, &MainForm::panel55_Click);
			// 
			// panel56
			// 
			this->panel56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel56->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel56->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel56->Location = System::Drawing::Point(189, 248);
			this->panel56->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel56->MaximumSize = System::Drawing::Size(30, 30);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(30, 30);
			this->panel56->TabIndex = 79;
			this->panel56->Click += gcnew System::EventHandler(this, &MainForm::panel56_Click);
			// 
			// panel57
			// 
			this->panel57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel57->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel57->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel57->Location = System::Drawing::Point(229, 248);
			this->panel57->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel57->MaximumSize = System::Drawing::Size(30, 30);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(30, 30);
			this->panel57->TabIndex = 80;
			this->panel57->Click += gcnew System::EventHandler(this, &MainForm::panel57_Click);
			// 
			// panel58
			// 
			this->panel58->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel58->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel58->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel58->Location = System::Drawing::Point(269, 248);
			this->panel58->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel58->MaximumSize = System::Drawing::Size(30, 30);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(30, 30);
			this->panel58->TabIndex = 81;
			this->panel58->Click += gcnew System::EventHandler(this, &MainForm::panel58_Click);
			// 
			// panel59
			// 
			this->panel59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel59->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel59->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel59->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel59->Location = System::Drawing::Point(309, 248);
			this->panel59->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel59->MaximumSize = System::Drawing::Size(30, 30);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(30, 30);
			this->panel59->TabIndex = 82;
			this->panel59->Click += gcnew System::EventHandler(this, &MainForm::panel59_Click);
			// 
			// panel60
			// 
			this->panel60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel60->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel60->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel60->Location = System::Drawing::Point(349, 248);
			this->panel60->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel60->MaximumSize = System::Drawing::Size(30, 30);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(30, 30);
			this->panel60->TabIndex = 83;
			this->panel60->Click += gcnew System::EventHandler(this, &MainForm::panel60_Click);
			// 
			// panel61
			// 
			this->panel61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel61->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel61->Location = System::Drawing::Point(389, 248);
			this->panel61->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel61->MaximumSize = System::Drawing::Size(30, 30);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(30, 30);
			this->panel61->TabIndex = 84;
			this->panel61->Click += gcnew System::EventHandler(this, &MainForm::panel61_Click);
			// 
			// panel62
			// 
			this->panel62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel62->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel62->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel62->Location = System::Drawing::Point(429, 248);
			this->panel62->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel62->MaximumSize = System::Drawing::Size(30, 30);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(30, 30);
			this->panel62->TabIndex = 85;
			this->panel62->Click += gcnew System::EventHandler(this, &MainForm::panel62_Click);
			// 
			// panel63
			// 
			this->panel63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel63->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel63->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel63->Location = System::Drawing::Point(469, 248);
			this->panel63->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel63->MaximumSize = System::Drawing::Size(30, 30);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(30, 30);
			this->panel63->TabIndex = 86;
			this->panel63->Click += gcnew System::EventHandler(this, &MainForm::panel63_Click);
			// 
			// panel64
			// 
			this->panel64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel64->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel64->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel64->Location = System::Drawing::Point(509, 248);
			this->panel64->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel64->MaximumSize = System::Drawing::Size(30, 30);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(30, 30);
			this->panel64->TabIndex = 87;
			this->panel64->Click += gcnew System::EventHandler(this, &MainForm::panel64_Click);
			// 
			// panel65
			// 
			this->panel65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel65->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel65->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel65->Location = System::Drawing::Point(549, 248);
			this->panel65->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel65->MaximumSize = System::Drawing::Size(30, 30);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(30, 30);
			this->panel65->TabIndex = 88;
			this->panel65->Click += gcnew System::EventHandler(this, &MainForm::panel65_Click);
			// 
			// panel66
			// 
			this->panel66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel66->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel66->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel66->Location = System::Drawing::Point(189, 288);
			this->panel66->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel66->MaximumSize = System::Drawing::Size(30, 30);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(30, 30);
			this->panel66->TabIndex = 89;
			this->panel66->Click += gcnew System::EventHandler(this, &MainForm::panel66_Click);
			// 
			// panel67
			// 
			this->panel67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel67->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel67->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel67->Location = System::Drawing::Point(229, 288);
			this->panel67->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel67->MaximumSize = System::Drawing::Size(30, 30);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(30, 30);
			this->panel67->TabIndex = 90;
			this->panel67->Click += gcnew System::EventHandler(this, &MainForm::panel67_Click);
			// 
			// panel70
			// 
			this->panel70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel70->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel70->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel70->Location = System::Drawing::Point(349, 288);
			this->panel70->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel70->MaximumSize = System::Drawing::Size(30, 30);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(30, 30);
			this->panel70->TabIndex = 93;
			this->panel70->Click += gcnew System::EventHandler(this, &MainForm::panel70_Click);
			// 
			// panel69
			// 
			this->panel69->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel69->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel69->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel69->Location = System::Drawing::Point(309, 288);
			this->panel69->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel69->MaximumSize = System::Drawing::Size(30, 30);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(30, 30);
			this->panel69->TabIndex = 92;
			this->panel69->Click += gcnew System::EventHandler(this, &MainForm::panel69_Click);
			// 
			// panel68
			// 
			this->panel68->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel68->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel68->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel68->Location = System::Drawing::Point(269, 288);
			this->panel68->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel68->MaximumSize = System::Drawing::Size(30, 30);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(30, 30);
			this->panel68->TabIndex = 91;
			this->panel68->Click += gcnew System::EventHandler(this, &MainForm::panel68_Click);
			// 
			// panel71
			// 
			this->panel71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel71->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel71->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel71->Location = System::Drawing::Point(389, 288);
			this->panel71->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel71->MaximumSize = System::Drawing::Size(30, 30);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(30, 30);
			this->panel71->TabIndex = 94;
			this->panel71->Click += gcnew System::EventHandler(this, &MainForm::panel71_Click);
			// 
			// panel72
			// 
			this->panel72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel72->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel72->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel72->Location = System::Drawing::Point(429, 288);
			this->panel72->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel72->MaximumSize = System::Drawing::Size(30, 30);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(30, 30);
			this->panel72->TabIndex = 95;
			this->panel72->Click += gcnew System::EventHandler(this, &MainForm::panel72_Click);
			// 
			// panel73
			// 
			this->panel73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel73->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel73->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel73->Location = System::Drawing::Point(469, 288);
			this->panel73->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel73->MaximumSize = System::Drawing::Size(30, 30);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(30, 30);
			this->panel73->TabIndex = 96;
			this->panel73->Click += gcnew System::EventHandler(this, &MainForm::panel73_Click);
			// 
			// panel74
			// 
			this->panel74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel74->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel74->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel74->Location = System::Drawing::Point(509, 288);
			this->panel74->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel74->MaximumSize = System::Drawing::Size(30, 30);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(30, 30);
			this->panel74->TabIndex = 97;
			this->panel74->Click += gcnew System::EventHandler(this, &MainForm::panel74_Click);
			// 
			// panel75
			// 
			this->panel75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel75->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel75->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel75->Location = System::Drawing::Point(549, 288);
			this->panel75->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel75->MaximumSize = System::Drawing::Size(30, 30);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(30, 30);
			this->panel75->TabIndex = 98;
			this->panel75->Click += gcnew System::EventHandler(this, &MainForm::panel75_Click);
			// 
			// panel76
			// 
			this->panel76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel76->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel76->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel76->Location = System::Drawing::Point(189, 328);
			this->panel76->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel76->MaximumSize = System::Drawing::Size(30, 30);
			this->panel76->Name = L"panel76";
			this->panel76->Size = System::Drawing::Size(30, 30);
			this->panel76->TabIndex = 99;
			this->panel76->Click += gcnew System::EventHandler(this, &MainForm::panel76_Click);
			// 
			// panel77
			// 
			this->panel77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel77->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel77->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel77->Location = System::Drawing::Point(229, 328);
			this->panel77->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel77->MaximumSize = System::Drawing::Size(30, 30);
			this->panel77->Name = L"panel77";
			this->panel77->Size = System::Drawing::Size(30, 30);
			this->panel77->TabIndex = 100;
			this->panel77->Click += gcnew System::EventHandler(this, &MainForm::panel77_Click);
			// 
			// panel78
			// 
			this->panel78->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel78->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel78->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel78->Location = System::Drawing::Point(269, 328);
			this->panel78->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel78->MaximumSize = System::Drawing::Size(30, 30);
			this->panel78->Name = L"panel78";
			this->panel78->Size = System::Drawing::Size(30, 30);
			this->panel78->TabIndex = 101;
			this->panel78->Click += gcnew System::EventHandler(this, &MainForm::panel78_Click);
			// 
			// panel79
			// 
			this->panel79->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel79->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel79->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel79->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel79->Location = System::Drawing::Point(309, 328);
			this->panel79->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel79->MaximumSize = System::Drawing::Size(30, 30);
			this->panel79->Name = L"panel79";
			this->panel79->Size = System::Drawing::Size(30, 30);
			this->panel79->TabIndex = 102;
			this->panel79->Click += gcnew System::EventHandler(this, &MainForm::panel79_Click);
			// 
			// panel80
			// 
			this->panel80->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel80->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel80->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel80->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel80->Location = System::Drawing::Point(349, 328);
			this->panel80->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel80->MaximumSize = System::Drawing::Size(30, 30);
			this->panel80->Name = L"panel80";
			this->panel80->Size = System::Drawing::Size(30, 30);
			this->panel80->TabIndex = 103;
			this->panel80->Click += gcnew System::EventHandler(this, &MainForm::panel80_Click);
			// 
			// panel81
			// 
			this->panel81->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel81->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel81->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel81->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel81->Location = System::Drawing::Point(389, 328);
			this->panel81->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel81->MaximumSize = System::Drawing::Size(30, 30);
			this->panel81->Name = L"panel81";
			this->panel81->Size = System::Drawing::Size(30, 30);
			this->panel81->TabIndex = 104;
			this->panel81->Click += gcnew System::EventHandler(this, &MainForm::panel81_Click);
			// 
			// panel82
			// 
			this->panel82->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel82->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel82->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel82->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel82->Location = System::Drawing::Point(429, 328);
			this->panel82->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel82->MaximumSize = System::Drawing::Size(30, 30);
			this->panel82->Name = L"panel82";
			this->panel82->Size = System::Drawing::Size(30, 30);
			this->panel82->TabIndex = 105;
			this->panel82->Click += gcnew System::EventHandler(this, &MainForm::panel82_Click);
			// 
			// panel83
			// 
			this->panel83->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel83->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel83->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel83->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel83->Location = System::Drawing::Point(469, 328);
			this->panel83->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel83->MaximumSize = System::Drawing::Size(30, 30);
			this->panel83->Name = L"panel83";
			this->panel83->Size = System::Drawing::Size(30, 30);
			this->panel83->TabIndex = 106;
			this->panel83->Click += gcnew System::EventHandler(this, &MainForm::panel83_Click);
			// 
			// panel84
			// 
			this->panel84->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel84->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel84->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel84->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel84->Location = System::Drawing::Point(509, 328);
			this->panel84->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel84->MaximumSize = System::Drawing::Size(30, 30);
			this->panel84->Name = L"panel84";
			this->panel84->Size = System::Drawing::Size(30, 30);
			this->panel84->TabIndex = 107;
			this->panel84->Click += gcnew System::EventHandler(this, &MainForm::panel84_Click);
			// 
			// panel85
			// 
			this->panel85->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel85->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel85->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel85->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel85->Location = System::Drawing::Point(549, 328);
			this->panel85->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel85->MaximumSize = System::Drawing::Size(30, 30);
			this->panel85->Name = L"panel85";
			this->panel85->Size = System::Drawing::Size(30, 30);
			this->panel85->TabIndex = 108;
			this->panel85->Click += gcnew System::EventHandler(this, &MainForm::panel85_Click);
			// 
			// panel86
			// 
			this->panel86->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel86->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel86->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel86->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel86->Location = System::Drawing::Point(189, 368);
			this->panel86->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel86->MaximumSize = System::Drawing::Size(30, 30);
			this->panel86->Name = L"panel86";
			this->panel86->Size = System::Drawing::Size(30, 30);
			this->panel86->TabIndex = 109;
			this->panel86->Click += gcnew System::EventHandler(this, &MainForm::panel86_Click);
			// 
			// panel87
			// 
			this->panel87->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel87->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel87->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel87->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel87->Location = System::Drawing::Point(229, 368);
			this->panel87->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel87->MaximumSize = System::Drawing::Size(30, 30);
			this->panel87->Name = L"panel87";
			this->panel87->Size = System::Drawing::Size(30, 30);
			this->panel87->TabIndex = 110;
			this->panel87->Click += gcnew System::EventHandler(this, &MainForm::panel87_Click);
			// 
			// panel88
			// 
			this->panel88->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel88->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel88->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel88->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel88->Location = System::Drawing::Point(269, 368);
			this->panel88->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel88->MaximumSize = System::Drawing::Size(30, 30);
			this->panel88->Name = L"panel88";
			this->panel88->Size = System::Drawing::Size(30, 30);
			this->panel88->TabIndex = 111;
			this->panel88->Click += gcnew System::EventHandler(this, &MainForm::panel88_Click);
			// 
			// panel89
			// 
			this->panel89->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel89->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel89->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel89->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel89->Location = System::Drawing::Point(309, 368);
			this->panel89->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel89->MaximumSize = System::Drawing::Size(30, 30);
			this->panel89->Name = L"panel89";
			this->panel89->Size = System::Drawing::Size(30, 30);
			this->panel89->TabIndex = 112;
			this->panel89->Click += gcnew System::EventHandler(this, &MainForm::panel89_Click);
			// 
			// panel90
			// 
			this->panel90->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel90->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel90->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel90->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel90->Location = System::Drawing::Point(349, 368);
			this->panel90->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel90->MaximumSize = System::Drawing::Size(30, 30);
			this->panel90->Name = L"panel90";
			this->panel90->Size = System::Drawing::Size(30, 30);
			this->panel90->TabIndex = 113;
			this->panel90->Click += gcnew System::EventHandler(this, &MainForm::panel90_Click);
			// 
			// panel91
			// 
			this->panel91->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel91->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel91->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel91->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel91->Location = System::Drawing::Point(389, 368);
			this->panel91->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel91->MaximumSize = System::Drawing::Size(30, 30);
			this->panel91->Name = L"panel91";
			this->panel91->Size = System::Drawing::Size(30, 30);
			this->panel91->TabIndex = 114;
			this->panel91->Click += gcnew System::EventHandler(this, &MainForm::panel91_Click);
			// 
			// panel92
			// 
			this->panel92->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel92->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel92->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel92->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel92->Location = System::Drawing::Point(429, 368);
			this->panel92->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel92->MaximumSize = System::Drawing::Size(30, 30);
			this->panel92->Name = L"panel92";
			this->panel92->Size = System::Drawing::Size(30, 30);
			this->panel92->TabIndex = 115;
			this->panel92->Click += gcnew System::EventHandler(this, &MainForm::panel92_Click);
			// 
			// panel93
			// 
			this->panel93->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel93->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel93->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel93->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel93->Location = System::Drawing::Point(469, 368);
			this->panel93->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel93->MaximumSize = System::Drawing::Size(30, 30);
			this->panel93->Name = L"panel93";
			this->panel93->Size = System::Drawing::Size(30, 30);
			this->panel93->TabIndex = 116;
			this->panel93->Click += gcnew System::EventHandler(this, &MainForm::panel93_Click);
			// 
			// panel94
			// 
			this->panel94->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel94->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel94->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel94->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel94->Location = System::Drawing::Point(509, 368);
			this->panel94->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel94->MaximumSize = System::Drawing::Size(30, 30);
			this->panel94->Name = L"panel94";
			this->panel94->Size = System::Drawing::Size(30, 30);
			this->panel94->TabIndex = 117;
			this->panel94->Click += gcnew System::EventHandler(this, &MainForm::panel94_Click);
			// 
			// panel95
			// 
			this->panel95->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel95->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel95->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel95->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel95->Location = System::Drawing::Point(549, 368);
			this->panel95->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel95->MaximumSize = System::Drawing::Size(30, 30);
			this->panel95->Name = L"panel95";
			this->panel95->Size = System::Drawing::Size(30, 30);
			this->panel95->TabIndex = 118;
			this->panel95->Click += gcnew System::EventHandler(this, &MainForm::panel95_Click);
			// 
			// panel96
			// 
			this->panel96->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel96->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel96->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel96->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel96->Location = System::Drawing::Point(189, 408);
			this->panel96->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel96->MaximumSize = System::Drawing::Size(30, 30);
			this->panel96->Name = L"panel96";
			this->panel96->Size = System::Drawing::Size(30, 30);
			this->panel96->TabIndex = 119;
			this->panel96->Click += gcnew System::EventHandler(this, &MainForm::panel96_Click);
			// 
			// panel97
			// 
			this->panel97->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel97->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel97->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel97->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel97->Location = System::Drawing::Point(229, 408);
			this->panel97->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel97->MaximumSize = System::Drawing::Size(30, 30);
			this->panel97->Name = L"panel97";
			this->panel97->Size = System::Drawing::Size(30, 30);
			this->panel97->TabIndex = 120;
			this->panel97->Click += gcnew System::EventHandler(this, &MainForm::panel97_Click);
			// 
			// panel98
			// 
			this->panel98->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel98->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel98->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel98->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel98->Location = System::Drawing::Point(269, 408);
			this->panel98->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel98->MaximumSize = System::Drawing::Size(30, 30);
			this->panel98->Name = L"panel98";
			this->panel98->Size = System::Drawing::Size(30, 30);
			this->panel98->TabIndex = 121;
			this->panel98->Click += gcnew System::EventHandler(this, &MainForm::panel98_Click);
			// 
			// panel99
			// 
			this->panel99->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel99->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel99->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel99->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel99->Location = System::Drawing::Point(309, 408);
			this->panel99->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel99->MaximumSize = System::Drawing::Size(30, 30);
			this->panel99->Name = L"panel99";
			this->panel99->Size = System::Drawing::Size(30, 30);
			this->panel99->TabIndex = 122;
			this->panel99->Click += gcnew System::EventHandler(this, &MainForm::panel99_Click);
			// 
			// panel100
			// 
			this->panel100->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel100->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel100->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel100->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel100->Location = System::Drawing::Point(349, 408);
			this->panel100->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel100->MaximumSize = System::Drawing::Size(30, 30);
			this->panel100->Name = L"panel100";
			this->panel100->Size = System::Drawing::Size(30, 30);
			this->panel100->TabIndex = 123;
			this->panel100->Click += gcnew System::EventHandler(this, &MainForm::panel100_Click);
			// 
			// panel101
			// 
			this->panel101->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel101->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel101->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel101->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel101->Location = System::Drawing::Point(389, 408);
			this->panel101->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel101->MaximumSize = System::Drawing::Size(30, 30);
			this->panel101->Name = L"panel101";
			this->panel101->Size = System::Drawing::Size(30, 30);
			this->panel101->TabIndex = 124;
			this->panel101->Click += gcnew System::EventHandler(this, &MainForm::panel101_Click);
			// 
			// panel102
			// 
			this->panel102->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel102->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel102->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel102->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel102->Location = System::Drawing::Point(429, 408);
			this->panel102->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel102->MaximumSize = System::Drawing::Size(30, 30);
			this->panel102->Name = L"panel102";
			this->panel102->Size = System::Drawing::Size(30, 30);
			this->panel102->TabIndex = 125;
			this->panel102->Click += gcnew System::EventHandler(this, &MainForm::panel102_Click);
			// 
			// panel103
			// 
			this->panel103->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel103->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel103->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel103->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel103->Location = System::Drawing::Point(469, 408);
			this->panel103->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel103->MaximumSize = System::Drawing::Size(30, 30);
			this->panel103->Name = L"panel103";
			this->panel103->Size = System::Drawing::Size(30, 30);
			this->panel103->TabIndex = 126;
			this->panel103->Click += gcnew System::EventHandler(this, &MainForm::panel103_Click);
			// 
			// panel104
			// 
			this->panel104->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel104->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel104->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel104->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel104->Location = System::Drawing::Point(509, 408);
			this->panel104->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel104->MaximumSize = System::Drawing::Size(30, 30);
			this->panel104->Name = L"panel104";
			this->panel104->Size = System::Drawing::Size(30, 30);
			this->panel104->TabIndex = 127;
			this->panel104->Click += gcnew System::EventHandler(this, &MainForm::panel104_Click);
			// 
			// panel105
			// 
			this->panel105->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel105->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel105->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel105->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel105->Location = System::Drawing::Point(549, 408);
			this->panel105->Margin = System::Windows::Forms::Padding(5, 5, 3, 3);
			this->panel105->MaximumSize = System::Drawing::Size(30, 30);
			this->panel105->Name = L"panel105";
			this->panel105->Size = System::Drawing::Size(30, 30);
			this->panel105->TabIndex = 128;
			this->panel105->Click += gcnew System::EventHandler(this, &MainForm::panel105_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(3, 579);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(758, 40);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Кол-во билетов на сумму";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->tableLayoutPanel12);
			this->panel1->Controls->Add(this->toolStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(254, 619);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel12->ColumnCount = 2;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				53)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				201)));
			this->tableLayoutPanel12->Controls->Add(this->label32, 0, 7);
			this->tableLayoutPanel12->Controls->Add(this->label3, 0, 9);
			this->tableLayoutPanel12->Controls->Add(this->panel5, 0, 6);
			this->tableLayoutPanel12->Controls->Add(this->panel4, 0, 5);
			this->tableLayoutPanel12->Controls->Add(this->panel3, 0, 4);
			this->tableLayoutPanel12->Controls->Add(this->label12, 1, 6);
			this->tableLayoutPanel12->Controls->Add(this->label10, 1, 5);
			this->tableLayoutPanel12->Controls->Add(this->label8, 1, 4);
			this->tableLayoutPanel12->Controls->Add(this->label6, 1, 3);
			this->tableLayoutPanel12->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel12->Controls->Add(this->comboBox2, 1, 1);
			this->tableLayoutPanel12->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->comboBox1, 1, 0);
			this->tableLayoutPanel12->Controls->Add(this->panel2, 0, 3);
			this->tableLayoutPanel12->Controls->Add(this->textBox10, 1, 9);
			this->tableLayoutPanel12->Controls->Add(this->button1, 1, 12);
			this->tableLayoutPanel12->Controls->Add(this->button2, 1, 11);
			this->tableLayoutPanel12->Controls->Add(this->button3, 1, 10);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(0, 25);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 13;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				25)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				25)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				40)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(254, 594);
			this->tableLayoutPanel12->TabIndex = 2;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->tableLayoutPanel12->SetColumnSpan(this->label32, 2);
			this->label32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label32->Location = System::Drawing::Point(3, 305);
			this->label32->Margin = System::Windows::Forms::Padding(3);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(248, 34);
			this->label32->TabIndex = 30;
			this->label32->Text = L"Цена билета: 0 руб.";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Location = System::Drawing::Point(3, 441);
			this->label3->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 26);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Код заказа:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::Color::Brown;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(20, 267);
			this->panel5->Margin = System::Windows::Forms::Padding(10, 5, 3, 3);
			this->panel5->MaximumSize = System::Drawing::Size(30, 30);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(30, 30);
			this->panel5->TabIndex = 24;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(20, 227);
			this->panel4->Margin = System::Windows::Forms::Padding(10, 5, 3, 3);
			this->panel4->MaximumSize = System::Drawing::Size(30, 30);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(30, 30);
			this->panel4->TabIndex = 23;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::LightGreen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(20, 187);
			this->panel3->Margin = System::Windows::Forms::Padding(10, 5, 3, 3);
			this->panel3->MaximumSize = System::Drawing::Size(30, 30);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(30, 30);
			this->panel3->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(56, 265);
			this->label12->Margin = System::Windows::Forms::Padding(3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(195, 34);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Выбрано";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(56, 225);
			this->label10->Margin = System::Windows::Forms::Padding(3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(195, 34);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Свободно";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(56, 185);
			this->label8->Margin = System::Windows::Forms::Padding(3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(195, 34);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Забронировано";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(56, 145);
			this->label6->Margin = System::Windows::Forms::Padding(3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 34);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Занято";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Location = System::Drawing::Point(3, 32);
			this->label2->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Время: ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox2
			// 
			this->comboBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(56, 28);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(185, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Margin = System::Windows::Forms::Padding(3, 7, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дата: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Сегодня", L"Завтра", L"Послезавтра" });
			this->comboBox1->Location = System::Drawing::Point(56, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(185, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Location = System::Drawing::Point(20, 147);
			this->panel2->Margin = System::Windows::Forms::Padding(10, 5, 3, 3);
			this->panel2->MaximumSize = System::Drawing::Size(30, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(30, 30);
			this->panel2->TabIndex = 21;
			// 
			// textBox10
			// 
			this->textBox10->Dock = System::Windows::Forms::DockStyle::Left;
			this->textBox10->Location = System::Drawing::Point(56, 444);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(185, 20);
			this->textBox10->TabIndex = 29;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox10_TextChanged);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(56, 557);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Аннулировать";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(56, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Забронировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(56, 477);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 23);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Оплатить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->toolStrip1->GripMargin = System::Windows::Forms::Padding(0);
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton2,
					this->toolStripSeparator4, this->toolStripComboBox1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(254, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Назад";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton2_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Фильм 1" });
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(180, 25);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::toolStripComboBox1_SelectedIndexChanged);
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->BackColor = System::Drawing::Color::Silver;
			this->tableLayoutPanel11->ColumnCount = 2;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				254)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel11->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->tableLayoutPanel13, 1, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel11->Size = System::Drawing::Size(1018, 616);
			this->tableLayoutPanel11->TabIndex = 4;
			this->tableLayoutPanel11->Visible = false;
			this->tableLayoutPanel11->VisibleChanged += gcnew System::EventHandler(this, &MainForm::tableLayoutPanel11_VisibleChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1018, 662);
			this->Controls->Add(this->panelPlus);
			this->Controls->Add(this->tableLayoutPanel11);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->label_center);
			this->Controls->Add(this->menustrip_main);
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
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			this->tableLayoutPanel14->ResumeLayout(false);
			this->tableLayoutPanel14->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Boolean changes = false;

		   //Ряд 1
	private: System::Void panel16_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(0);
	}
	private: System::Void panel17_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(1);
	}
	private: System::Void panel18_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(2);
	}
	private: System::Void panel19_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(3);
	}
	private: System::Void panel20_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(4);
	}
	private: System::Void panel21_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(5);
	}
	private: System::Void panel22_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(6);
	}
	private: System::Void panel23_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(7);
	}
	private: System::Void panel24_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(8);
	}
	private: System::Void panel25_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(9);
	}

		   //Ряд 2
	private: System::Void panel26_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(10);
	}
	private: System::Void panel27_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(11);
	}
	private: System::Void panel28_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(12);
	}
	private: System::Void panel29_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(13);
	}
	private: System::Void panel30_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(14);
	}
	private: System::Void panel31_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(15);
	}
	private: System::Void panel32_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(16);
	}
	private: System::Void panel33_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(17);
	}
	private: System::Void panel34_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(18);
	}
	private: System::Void panel35_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(19);
	}

		   //Ряд3
	private: System::Void panel36_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(20);
	}
	private: System::Void panel37_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(21);
	}
	private: System::Void panel38_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(22);
	}
	private: System::Void panel39_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(23);
	}
	private: System::Void panel40_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(24);
	}
	private: System::Void panel41_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(25);
	}
	private: System::Void panel42_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(26);
	}
	private: System::Void panel43_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(27);
	}
	private: System::Void panel44_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(28);
	}
	private: System::Void panel45_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(29);
	}

		   //Ряд 4
	private: System::Void panel46_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(30);
	}
	private: System::Void panel47_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(31);
	}
	private: System::Void panel48_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(32);
	}
	private: System::Void panel49_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(33);
	}
	private: System::Void panel50_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(34);
	}
	private: System::Void panel51_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(35);
	}
	private: System::Void panel52_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(36);
	}
	private: System::Void panel53_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(37);
	}
	private: System::Void panel54_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(38);
	}
	private: System::Void panel55_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(39);
	}

		   //Ряд 5
	private: System::Void panel56_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(40);
	}
	private: System::Void panel57_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(41);
	}
	private: System::Void panel58_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(42);
	}
	private: System::Void panel59_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(43);
	}
	private: System::Void panel60_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(44);
	}
	private: System::Void panel61_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(45);
	}
	private: System::Void panel62_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(46);
	}
	private: System::Void panel63_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(47);
	}
	private: System::Void panel64_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(48);
	}
	private: System::Void panel65_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(49);
	}

		   //Ряд 6
	private: System::Void panel66_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(50);
	}
	private: System::Void panel67_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(51);
	}
	private: System::Void panel68_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(52);
	}
	private: System::Void panel69_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(53);
	}
	private: System::Void panel70_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(54);
	}
	private: System::Void panel71_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(55);
	}
	private: System::Void panel72_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(56);
	}
	private: System::Void panel73_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(57);
	}
	private: System::Void panel74_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(58);
	}
	private: System::Void panel75_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(59);
	}

		   //Ряд 7
	private: System::Void panel76_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(60);
	}
	private: System::Void panel77_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(61);
	}
	private: System::Void panel78_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(62);
	}
	private: System::Void panel79_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(63);
	}
	private: System::Void panel80_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(64);
	}
	private: System::Void panel81_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(65);
	}
	private: System::Void panel82_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(66);
	}
	private: System::Void panel83_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(67);
	}
	private: System::Void panel84_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(68);
	}
	private: System::Void panel85_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(69);
	}

		   //Ряд 8
	private: System::Void panel86_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(70);
	}
	private: System::Void panel87_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(71);
	}
	private: System::Void panel88_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(72);
	}
	private: System::Void panel89_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(73);
	}
	private: System::Void panel90_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(74);
	}
	private: System::Void panel91_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(75);
	}
	private: System::Void panel92_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(76);
	}
	private: System::Void panel93_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(77);
	}
	private: System::Void panel94_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(78);
	}
	private: System::Void panel95_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(79);
	}

		   //Ряд 9
	private: System::Void panel96_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(80);
	}
	private: System::Void panel97_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(81);
	}
	private: System::Void panel98_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(82);
	}
	private: System::Void panel99_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(83);
	}
	private: System::Void panel100_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(84);
	}
	private: System::Void panel101_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(85);
	}
	private: System::Void panel102_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(86);
	}
	private: System::Void panel103_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(87);
	}
	private: System::Void panel104_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(88);
	}
	private: System::Void panel105_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(89);
	}

		   //Ряд 10
	private: System::Void panel6_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(90);
	}
	private: System::Void panel7_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(91);
	}
	private: System::Void panel8_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(92);
	}
	private: System::Void panel9_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(93);
	}
	private: System::Void panel10_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(94);
	}
	private: System::Void panel11_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(95);
	}
	private: System::Void panel12_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(96);
	}
	private: System::Void panel13_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(97);
	}
	private: System::Void panel14_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(98);
	}
	private: System::Void panel15_Click(System::Object^ sender, System::EventArgs^ e) {
		SeatClick(99);
	}


	private: System::Void SeatClick(int number)
	{
		if (this->EnterToolStripMenuItem->Visible)
		{
			if (seats[number]->BackColor == panel4->BackColor)
			{
				seats[number]->BackColor = panel5->BackColor;
			}
			else if (seats[number]->BackColor == panel5->BackColor)
			{
				seats[number]->BackColor = panel4->BackColor;
			}
		}
		else
		{
			;
		}

		int k = 0;

		for (int i = 0; i < 100; i++)
		{
			if (seats[i]->BackColor == panel5->BackColor)
			{
				k++;
			}
		}

		label31->Text = k + " билет";

		if (k % 10 >= 2 && k % 10 <= 4 && (k < 12 || k > 21))
		{
			label31->Text += "a";
		}
		else if (k % 10 != 1 || k == 11)
		{
			label31->Text += "ов";
		}
		
		label31->Text += " на сумму " + k * stoi(cinema->films[this->toolStripComboBox1->SelectedIndex].price[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3]) + " руб.";

		if (k > 0)
		{
			if (this->EnterToolStripMenuItem->Visible)
			{
				button3->Enabled = true;
				button2->Enabled = true;
			}
			else
			{
				button1->Enabled = true;
			}
		}
		else
		{
			button3->Enabled = false;
			button2->Enabled = false;
			button1->Enabled = false;
		}

		return;
	}

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

	private: System::Void OpenHall(int film_number)
	{
		this->tableLayoutPanel11->Visible = true;
		this->tableLayoutPanel1->Visible = false;
		this->toolStripComboBox1->SelectedIndex = -1;
		this->toolStripComboBox1->SelectedIndex = film_number;

		return;
	}

	private: System::Void CheckIndex()
	{
		if (this->comboBox1->SelectedIndex != -1 && this->comboBox2->SelectedIndex != -1 && this->toolStripComboBox1->SelectedIndex != -1)
		{
			for (int i = 0; i < 100; i++)
			{
				if (cinema->films[this->toolStripComboBox1->SelectedIndex].mesta[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3][i] == '0')
				{
					seats[i]->BackColor = this->panel4->BackColor;
					seats[i]->Cursor = System::Windows::Forms::Cursors::Hand;
				}
				else if (cinema->films[this->toolStripComboBox1->SelectedIndex].mesta[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3][i] == '1')
				{
					seats[i]->BackColor = this->panel3->BackColor;

					if (this->EnterToolStripMenuItem->Visible)
					{
						seats[i]->Cursor = System::Windows::Forms::Cursors::Default;
					}
					else
					{
						seats[i]->Cursor = System::Windows::Forms::Cursors::Hand;
					}
				}
				else if (cinema->films[this->toolStripComboBox1->SelectedIndex].mesta[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3][i] == '2')
				{
					seats[i]->BackColor = this->panel2->BackColor;

					if (this->EnterToolStripMenuItem->Visible)
					{
						seats[i]->Cursor = System::Windows::Forms::Cursors::Default;
					}
					else
					{
						seats[i]->Cursor = System::Windows::Forms::Cursors::Hand;
					}
				}
				else
				{
					seats[i]->BackColor = this->panel5->BackColor;
					seats[i]->Cursor = System::Windows::Forms::Cursors::Hand;
				}
			}
			this->tableLayoutPanel13->Visible = true;
			this->label4->Text = this->toolStripComboBox1->Text;
			this->label5->Text = msclr::interop::marshal_as<System::String^>(cinema->films[this->toolStripComboBox1->SelectedIndex].date[this->comboBox1->SelectedIndex]) + ", " + msclr::interop::marshal_as<System::String^>(cinema->films[this->toolStripComboBox1->SelectedIndex].time[this->comboBox2->SelectedIndex]) + ", Кинотеатр " + msclr::interop::marshal_as<System::String^>(cinema->name) + ", " + msclr::interop::marshal_as<System::String^>(cinema->films[this->toolStripComboBox1->SelectedIndex].number_zal) + " зал";
			this->label32->Text = "Цена билета: " + msclr::interop::marshal_as<System::String^>(cinema->films[this->toolStripComboBox1->SelectedIndex].price[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3]) + " руб.";
			this->label31->Text = "0 билетов на сумму 0 руб.";
		}
		else
		{
			this->tableLayoutPanel13->Visible = false;
			this->label32->Text = "Цена билета: 0 руб.";
		}

		button3->Enabled = false;
		button2->Enabled = false;
		button1->Enabled = false;

		return;
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
		panelPlus->Visible = false;
		seats = gcnew cli::array<System::Windows::Forms::Panel^>(100);
		for (int i = 0; i < 100; i++) 
		{
			seats[i] = gcnew System::Windows::Forms::Panel;
		}

		seats[0] = this->panel16;
		seats[1] = this->panel17;
		seats[2] = this->panel18;
		seats[3] = this->panel19;
		seats[4] = this->panel20;
		seats[5] = this->panel21;
		seats[6] = this->panel22;
		seats[7] = this->panel23;
		seats[8] = this->panel24;
		seats[9] = this->panel25;

		seats[10] = this->panel26;
		seats[11] = this->panel27;
		seats[12] = this->panel28;
		seats[13] = this->panel29;
		seats[14] = this->panel30;
		seats[15] = this->panel31;
		seats[16] = this->panel32;
		seats[17] = this->panel33;
		seats[18] = this->panel34;
		seats[19] = this->panel35;

		seats[20] = this->panel36;
		seats[21] = this->panel37;
		seats[22] = this->panel38;
		seats[23] = this->panel39;
		seats[24] = this->panel40;
		seats[25] = this->panel41;
		seats[26] = this->panel42;
		seats[27] = this->panel43;
		seats[28] = this->panel44;
		seats[29] = this->panel45;

		seats[30] = this->panel46;
		seats[31] = this->panel47;
		seats[32] = this->panel48;
		seats[33] = this->panel49;
		seats[34] = this->panel50;
		seats[35] = this->panel51;
		seats[36] = this->panel52;
		seats[37] = this->panel53;
		seats[38] = this->panel54;
		seats[39] = this->panel55;

		seats[40] = this->panel56;
		seats[41] = this->panel57;
		seats[42] = this->panel58;
		seats[43] = this->panel59;
		seats[44] = this->panel60;
		seats[45] = this->panel61;
		seats[46] = this->panel62;
		seats[47] = this->panel63;
		seats[48] = this->panel64;
		seats[49] = this->panel65;

		seats[50] = this->panel66;
		seats[51] = this->panel67;
		seats[52] = this->panel68;
		seats[53] = this->panel69;
		seats[54] = this->panel70;
		seats[55] = this->panel71;
		seats[56] = this->panel72;
		seats[57] = this->panel73;
		seats[58] = this->panel74;
		seats[59] = this->panel75;

		seats[60] = this->panel76;
		seats[61] = this->panel77;
		seats[62] = this->panel78;
		seats[63] = this->panel79;
		seats[64] = this->panel80;
		seats[65] = this->panel81;
		seats[66] = this->panel82;
		seats[67] = this->panel83;
		seats[68] = this->panel84;
		seats[69] = this->panel85;

		seats[70] = this->panel86;
		seats[71] = this->panel87;
		seats[72] = this->panel88;
		seats[73] = this->panel89;
		seats[74] = this->panel90;
		seats[75] = this->panel91;
		seats[76] = this->panel92;
		seats[77] = this->panel93;
		seats[78] = this->panel94;
		seats[79] = this->panel95;

		seats[80] = this->panel96;
		seats[81] = this->panel97;
		seats[82] = this->panel98;
		seats[83] = this->panel99;
		seats[84] = this->panel100;
		seats[85] = this->panel101;
		seats[86] = this->panel102;
		seats[87] = this->panel103;
		seats[88] = this->panel104;
		seats[89] = this->panel105;

		seats[90] = this->panel6;
		seats[91] = this->panel7;
		seats[92] = this->panel8;
		seats[93] = this->panel9;
		seats[94] = this->panel10;
		seats[95] = this->panel11;
		seats[96] = this->panel12;
		seats[97] = this->panel13;
		seats[98] = this->panel14;
		seats[99] = this->panel15;


		//seats[0]->BackColor = System::Drawing::SystemColors::ControlDarkDark;
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
		srand(time(0));
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
				this->tableLayoutPanel11->Visible = false;
				this->label_center->Visible = true;
				this->label_center->Text = L"Файл пуст";
			}
			//Если файл не пустой
			else 
			{
				//чтение ресурсов
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
				HRSRC   hRes = FindResource(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_PNG1), TEXT("PNG"));		//поиск ресурса в исполняемом файле
				

				DWORD dwSize = SizeofResource(NULL, hRes);	//получение размера ресурса
				HGLOBAL hResMem = LoadResource(GetModuleHandle(NULL), hRes);	//загрузка ресурса
				LPVOID pData;
				/*
				pData = LockResource(hResMem);	//фиксация ресурса в памяти
				HANDLE File = CreateFile("data.jpg", GENERIC_WRITE, FILE_SHARE_WRITE, 0, OPEN_ALWAYS, 0, 0);	//создание файла, в который будет производиться запись ресурса
				DWORD Written = 0;	//переменная для записи в файл


				HBITMAP hBmp = LoadBitmap(NULL, MAKEINTRESOURCE(IDB_PNG1));
				BITMAP   bmp;
				GetObject(hBmp, sizeof(BITMAP), (LPSTR)&bmp);

				Bitmap^ bmp = gcnew Bitmap(450, 350);
				Graphics^ g = Graphics::FromImage(bmp); // холст для рисования
				this->pictureBox1->Image = bmp; // закрепление к pictureBox

				Bitmap^ image1; // фото загрузки в pictureBox

				image1 = gcnew Bitmap("logo.bmp"); // инициализация файл с фото

				pictureBox1->Image = image1;
				*/
				/*
				Image1->Picture->LoadFromFile("b.bmp");
				delete ptRes;
				*/
				//char* data = (char*)LockResource(hResMem);

				if ((lines->Length - 10) % 129 == 0)            //форматирование верно
				{
					file_stream->kol_vo_film = (lines->Length - 10) / 129;
					good = true;

					file_stream->Read(*cinema);

					this->toolStripComboBox1->Items->Clear();
					file_stream->ReadBron(*cinema);
					for (int i = 0; i < file_stream->kol_vo_film; i++)
					{
						this->toolStripComboBox1->Items->Add((System::Object^)msclr::interop::marshal_as<System::String^>(cinema->films[i].name));
					}
					
					if (file_stream->kol_vo_film >= 1)
					{
						this->textBox1->Text = SetFilmInfo(cinema->films[0]);
						this->tableLayoutPanel2->Visible = true;
						this->pictureBox1->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[0].path));


						/*
						FileName = msclr::interop::marshal_as<System::String^>(cinema->films[0].path);
						this->pictureBox1->Image = Image::FromFile(FileName);
						*/


						//this->pictureBox1->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[0].path));	//стандартное изображение
						//this->pictureBox1->Image = ("kino.png", 0, 1);
						/*
						System::Drawing::Image^ image = getImageFromRes(IDB_PNG1);
						if (image != nullptr) button1->BackgroundImage = image;
						*/

						if (file_stream->kol_vo_film >= 2)
						{
							this->textBox2->Text = SetFilmInfo(cinema->films[1]);
							this->tableLayoutPanel3->Visible = true;
							this->pictureBox2->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[1].path));
							if (file_stream->kol_vo_film >= 3)
							{
								this->textBox3->Text = SetFilmInfo(cinema->films[2]);
								this->tableLayoutPanel4->Visible = true;

								this->pictureBox3->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[2].path));
								if (file_stream->kol_vo_film >= 4)
								{
									this->textBox4->Text = SetFilmInfo(cinema->films[3]);
									this->tableLayoutPanel5->Visible = true;
									this->pictureBox4->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[3].path));
									if (file_stream->kol_vo_film >= 5)
									{
										this->textBox5->Text = SetFilmInfo(cinema->films[4]);
										this->tableLayoutPanel6->Visible = true;
										this->pictureBox5->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[4].path));
										if (file_stream->kol_vo_film >= 6)
										{
											this->textBox6->Text = SetFilmInfo(cinema->films[5]);
											this->tableLayoutPanel7->Visible = true;

											this->pictureBox6->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[5].path));
											if (file_stream->kol_vo_film >= 7)
											{
												this->textBox7->Text = SetFilmInfo(cinema->films[6]);
												this->tableLayoutPanel8->Visible = true;
												this->pictureBox7->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[6].path));
												if (file_stream->kol_vo_film >= 8)
												{
													this->textBox8->Text = SetFilmInfo(cinema->films[7]);
													this->tableLayoutPanel9->Visible = true;
													this->pictureBox8->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[7].path));
													if (file_stream->kol_vo_film >= 9)
													{
														this->textBox9->Text = SetFilmInfo(cinema->films[8]);
														this->tableLayoutPanel10->Visible = true;
														this->pictureBox9->Image = Image::FromFile(msclr::interop::marshal_as<System::String^>(cinema->films[8].path));
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
				this->ReportToolStripMenuItem->Enabled = true;
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
			this->tableLayoutPanel11->Visible = false;
			this->label_center->Visible = true;
			this->CloseToolStripMenuItem->Enabled = false;
			this->CorrectToolStripMenuItem->Enabled = false;
			this->ReportToolStripMenuItem->Enabled = false;
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
			this->EnterToolStripMenuItem->Visible = false;
			this->QuitToolStripMenuItem->Visible = true;
			this->CreateToolStripMenuItem->Enabled = true;
			this->button1->Enabled = true;
		}
	}

		   //Выход из режима администратора
	private: System::Void QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ExitForm^ p = gcnew ExitForm();
		if (this->toolStripStatusLabel_filename->Visible && this->changes)
		{
			p->ShowDialog();
		}

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
			{
				this->tableLayoutPanel1->Visible = false;
				this->tableLayoutPanel11->Visible = false;
			}

			if (true/*full_table()*/ || p->DialogResult == System::Windows::Forms::DialogResult::No) {
				this->EnterToolStripMenuItem->Visible = true;
				this->QuitToolStripMenuItem->Visible = false;
				this->CreateToolStripMenuItem->Enabled = false;
				this->SaveToolStripMenuItem->Enabled = false;
				this->SaveAsToolStripMenuItem->Enabled = false;
				this->CorrectToolStripMenuItem->Enabled = false;
				this->ReportToolStripMenuItem->Enabled = false;
				this->button1->Enabled = false;
			}
		}
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

		PlusChangeLocation();
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
		if (this->panelPlus)
		{
			this->panelPlus->Size = this->tableLayoutPanel2->Size;
		}

		PlusChangeLocation();

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

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(0);
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(1);
	}

	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(2);
	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(3);
	}

	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(4);
	}

	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(5);
	}

	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(6);
	}

	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(7);
	}

	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenHall(8);
	}

	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tableLayoutPanel1->Visible = true;
		this->tableLayoutPanel11->Visible = false;
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckIndex();
	}

	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int number = this->toolStripComboBox1->SelectedIndex;

		if (number == -1)
		{
			this->comboBox1->Enabled = false;
			this->comboBox2->Enabled = false;
		}
		else
		{
			this->comboBox1->Enabled = true;
			this->comboBox2->Enabled = true;

			this->comboBox1->SelectedIndex = -1;
			this->comboBox2->SelectedIndex = -1;

			this->comboBox2->Items->Clear();

			for (int i = 0; i < 3; i++)
			{
				this->comboBox2->Items->Add((System::Object^)msclr::interop::marshal_as<System::String^>(cinema->films[number].time[i]));
			}
		}
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckIndex();
	}
			
		   //Бронирование
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ message = L"Выбранные места забронированы. За 30 минут до начала сеанса бронь аннулируется. \n\nПри оплате заказа назовите код: ";
		String^ caption = L"";

		int str = 0;
		for (int i = 0; i < 5; ++i)
		{
			str = str * 10 + (rand() % 10);
		}
		message = message + str.ToString();

		if (MessageBox::Show(message, caption, MessageBoxButtons::OK) == System::Windows::Forms::DialogResult::OK)
		{
			toolStripButton2_Click(sender, e);
			cinema->bron[cinema->broni_number][7] = "";
			for (int i = 0; i < 100; i++)
			{
				if (seats[i]->BackColor == panel5->BackColor)
				{
					seats[i]->BackColor = panel3->BackColor;
					cinema->films[this->toolStripComboBox1->SelectedIndex].mesta[this->comboBox2->SelectedIndex + this->comboBox1->SelectedIndex * 3][i] = '1';
					cinema->bron[cinema->broni_number][7] = cinema->bron[cinema->broni_number][7] + to_string(i) + " ";

				}
			}
			cinema->bron[cinema->broni_number][1] = cinema->id_cinema;
			cinema->bron[cinema->broni_number][2] = to_string(str);
			cinema->bron[cinema->broni_number][3] = msclr::interop::marshal_as< std::string >(this->label4->Text);;
			cinema->bron[cinema->broni_number][4] = Time::RetDate(0, 1);
			cinema->bron[cinema->broni_number][5] = cinema->films[this->toolStripComboBox1->SelectedIndex].time[this->comboBox1->SelectedIndex];
			cinema->bron[cinema->broni_number][6] = cinema->films[this->toolStripComboBox1->SelectedIndex].date[this->comboBox1->SelectedIndex];
			cinema->broni_number = cinema->broni_number + 1;
			cinema->broni_zapis = cinema->broni_zapis + 1;
			file_stream->WriteBron(*cinema);
			file_stream->Write(*cinema);
			

		}
	}

	private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox10->Text->Length == 5)
		{
			//поиск по коду брони
			textBox10->Text = "";
		}
	}

	private: System::Void NewMovieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FilmForm^ p = gcnew FilmForm(cinema, &cinema->films_number);
		p->ShowDialog();
		
		if (p->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			cinema->films[cinema->films_number] = p->Result();
			cinema->NewHallCinema(cinema->films_number);
			cinema->films_number += 1;
			file_stream->Write(*cinema);
			open_file();
		}
	}

	private: System::Void PlusChangeLocation()
	{
		if (EnterToolStripMenuItem->Visible || tableLayoutPanel11->Visible || label_center->Visible)
		{
			panelPlus->Visible = false;
		}
		else
		{
			if (tableLayoutPanel1->Visible)
			{
				if (cinema->films_number == 9)
				{
					panelPlus->Visible = false;
					NewMovieToolStripMenuItem->Enabled = false;
				}
				else
				{
					if (toolStripStatusLabel_filename->Text == "Новый файл")
					{
						cinema->films_number = 0;
					}

					panelPlus->Left = (cinema->films_number % 3) * (panelPlus->Width + 5);
					panelPlus->Top = menustrip_main->Height + (cinema->films_number / 3) * (panelPlus->Height + 5);
					panelPlus->Visible = true;
					NewMovieToolStripMenuItem->Enabled = true;
				}
			}
		}
	}

	private: System::Void panelPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		NewMovieToolStripMenuItem_Click(sender, e);
	}

	private: System::Void CinemaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeForm^ p = gcnew ChangeForm(*cinema);
		p->ShowDialog();
		file_stream->Write(*cinema);
	}

	private: System::Void tableLayoutPanel11_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		PlusChangeLocation();
	}

	private: System::Void CorrectMovieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ChooseForm^ p = gcnew ChooseForm(cinema);
		p->ShowDialog();
		int index = p->Result();

		if (p->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			FilmForm^ p1 = gcnew FilmForm(cinema, &index);
			p1->ShowDialog();

			if (p1->DialogResult == System::Windows::Forms::DialogResult::OK)
			{
				cinema->films[index] = p1->Result();
				file_stream->Write(*cinema);
				open_file();
			}
		}
	}
};
}