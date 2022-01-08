#pragma once
#include <algorithm>
#include "Cinema.h"
#include "Time.h"
#include <time.h>
#include "msclr\marshal_cppstd.h"

namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CheckForm
	/// </summary>
	public ref class CheckForm : public System::Windows::Forms::Form
	{
	private: int cost, num, sum, change, index;
		   bool way;
		   Cinema* cinema;
	public:
		CheckForm(int cost, int num, int change, bool way, Cinema* cinema, int film_number)
		{
			this->cost = cost;
			this->num = num;
			this->change = change;
			this->way = way;
			this->cinema = cinema;
			index = film_number;

			sum = num * cost + change;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CheckForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelDateTime;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelAddress;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelCheckNumber;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelCashier;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelSmena;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelCassa;
	private: System::Windows::Forms::Label^ labelFilm;
	private: System::Windows::Forms::Label^ labelCount;
	private: System::Windows::Forms::Label^ labelCost;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ labelNDS;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ labelWay;
	private: System::Windows::Forms::Label^ labelCash;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ labelChange;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ labelRNM;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ labelINN;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ labelDateTime1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ labelINN1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ labelNum;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ labelCashier1;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ labelAddress1;
	private: System::Windows::Forms::Label^ labelBank;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ labelSum;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckForm::typeid));
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelCheckNumber = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelCashier = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelSmena = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelCassa = (gcnew System::Windows::Forms::Label());
			this->labelFilm = (gcnew System::Windows::Forms::Label());
			this->labelCount = (gcnew System::Windows::Forms::Label());
			this->labelCost = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelNDS = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelWay = (gcnew System::Windows::Forms::Label());
			this->labelCash = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelChange = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->labelRNM = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->labelINN = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelDateTime1 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->labelINN1 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->labelNum = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->labelCashier1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->labelAddress1 = (gcnew System::Windows::Forms::Label());
			this->labelBank = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->labelSum = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// labelDateTime
			// 
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDateTime->Location = System::Drawing::Point(91, -2);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(204, 39);
			this->labelDateTime->TabIndex = 0;
			this->labelDateTime->Text = L"Дата и время";
			this->labelDateTime->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Кинотеатр";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelName->Location = System::Drawing::Point(90, 27);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(79, 16);
			this->labelName->TabIndex = 2;
			this->labelName->Text = L"\'Название\'";
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddress->Location = System::Drawing::Point(12, 43);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(47, 16);
			this->labelAddress->TabIndex = 3;
			this->labelAddress->Text = L"Адрес";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(90, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"КАССОВЫЙ ЧЕК";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Чек №:";
			// 
			// labelCheckNumber
			// 
			this->labelCheckNumber->AutoSize = true;
			this->labelCheckNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelCheckNumber->Location = System::Drawing::Point(68, 89);
			this->labelCheckNumber->Name = L"labelCheckNumber";
			this->labelCheckNumber->Size = System::Drawing::Size(50, 16);
			this->labelCheckNumber->TabIndex = 6;
			this->labelCheckNumber->Text = L"Номер";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Кассир:";
			// 
			// labelCashier
			// 
			this->labelCashier->AutoSize = true;
			this->labelCashier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCashier->Location = System::Drawing::Point(68, 105);
			this->labelCashier->Name = L"labelCashier";
			this->labelCashier->Size = System::Drawing::Size(95, 16);
			this->labelCashier->TabIndex = 8;
			this->labelCashier->Text = L"Фамилия И.О.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Смена:";
			// 
			// labelSmena
			// 
			this->labelSmena->AutoSize = true;
			this->labelSmena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSmena->Location = System::Drawing::Point(68, 121);
			this->labelSmena->Name = L"labelSmena";
			this->labelSmena->Size = System::Drawing::Size(50, 16);
			this->labelSmena->TabIndex = 10;
			this->labelSmena->Text = L"Номер";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Касса:";
			// 
			// labelCassa
			// 
			this->labelCassa->AutoSize = true;
			this->labelCassa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCassa->Location = System::Drawing::Point(68, 137);
			this->labelCassa->Name = L"labelCassa";
			this->labelCassa->Size = System::Drawing::Size(50, 16);
			this->labelCassa->TabIndex = 12;
			this->labelCassa->Text = L"Номер";
			// 
			// labelFilm
			// 
			this->labelFilm->AutoSize = true;
			this->labelFilm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelFilm->Location = System::Drawing::Point(12, 153);
			this->labelFilm->Name = L"labelFilm";
			this->labelFilm->Size = System::Drawing::Size(193, 16);
			this->labelFilm->TabIndex = 13;
			this->labelFilm->Text = L"Название фильма (Возраст)";
			// 
			// labelCount
			// 
			this->labelCount->AutoSize = true;
			this->labelCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCount->Location = System::Drawing::Point(12, 169);
			this->labelCount->Name = L"labelCount";
			this->labelCount->Size = System::Drawing::Size(121, 16);
			this->labelCount->TabIndex = 14;
			this->labelCount->Text = L"Цена X Кол-во ШТ";
			// 
			// labelCost
			// 
			this->labelCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCost->Location = System::Drawing::Point(90, 158);
			this->labelCost->Name = L"labelCost";
			this->labelCost->Size = System::Drawing::Size(204, 39);
			this->labelCost->TabIndex = 15;
			this->labelCost->Text = L"Стоимость";
			this->labelCost->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 16);
			this->label7->TabIndex = 16;
			this->label7->Text = L"ИТОГО";
			// 
			// labelResult
			// 
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->Location = System::Drawing::Point(90, 195);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(204, 21);
			this->labelResult->TabIndex = 17;
			this->labelResult->Text = L"Стоимость";
			this->labelResult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"В Т.Ч. НДС 20%";
			// 
			// labelNDS
			// 
			this->labelNDS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelNDS->Location = System::Drawing::Point(90, 210);
			this->labelNDS->Name = L"labelNDS";
			this->labelNDS->Size = System::Drawing::Size(204, 22);
			this->labelNDS->TabIndex = 19;
			this->labelNDS->Text = L"Стоимость";
			this->labelNDS->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 232);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 16);
			this->label11->TabIndex = 20;
			this->label11->Text = L"ПРИХОД";
			// 
			// labelWay
			// 
			this->labelWay->AutoSize = true;
			this->labelWay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWay->Location = System::Drawing::Point(12, 248);
			this->labelWay->Name = L"labelWay";
			this->labelWay->Size = System::Drawing::Size(89, 16);
			this->labelWay->TabIndex = 21;
			this->labelWay->Text = L"НАЛИЧНЫЕ:";
			// 
			// labelCash
			// 
			this->labelCash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCash->Location = System::Drawing::Point(90, 245);
			this->labelCash->Name = L"labelCash";
			this->labelCash->Size = System::Drawing::Size(204, 22);
			this->labelCash->TabIndex = 22;
			this->labelCash->Text = L"Стоимость";
			this->labelCash->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(12, 267);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 16);
			this->label14->TabIndex = 23;
			this->label14->Text = L"СДАЧА:";
			// 
			// labelChange
			// 
			this->labelChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChange->Location = System::Drawing::Point(90, 264);
			this->labelChange->Name = L"labelChange";
			this->labelChange->Size = System::Drawing::Size(204, 22);
			this->labelChange->TabIndex = 24;
			this->labelChange->Text = L"Стоимость";
			this->labelChange->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(12, 295);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"РНМ:";
			// 
			// labelRNM
			// 
			this->labelRNM->AutoSize = true;
			this->labelRNM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRNM->Location = System::Drawing::Point(58, 295);
			this->labelRNM->Name = L"labelRNM";
			this->labelRNM->Size = System::Drawing::Size(37, 16);
			this->labelRNM->TabIndex = 26;
			this->labelRNM->Text = L"РНМ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(12, 311);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(40, 16);
			this->label18->TabIndex = 27;
			this->label18->Text = L"ИНН:";
			// 
			// labelINN
			// 
			this->labelINN->AutoSize = true;
			this->labelINN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelINN->Location = System::Drawing::Point(58, 311);
			this->labelINN->Name = L"labelINN";
			this->labelINN->Size = System::Drawing::Size(37, 16);
			this->labelINN->TabIndex = 28;
			this->labelINN->Text = L"ИНН";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 327);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 16);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Сайт ФНС:";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(90, 324);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(204, 22);
			this->label10->TabIndex = 30;
			this->label10->Text = L"nalog.ru";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(12, 343);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 16);
			this->label12->TabIndex = 31;
			this->label12->Text = L"ОФД:";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(90, 340);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 22);
			this->label13->TabIndex = 32;
			this->label13->Text = L"ООО \"Ярус\" (\"ОФД-Я\")";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(12, 359);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 16);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Сайт ОФД:";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(90, 356);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(204, 22);
			this->label17->TabIndex = 34;
			this->label17->Text = L"ww.nfd-ya.ru";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(61, 381);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 138);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(-137, 503);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(553, 50);
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// labelDateTime1
			// 
			this->labelDateTime1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelDateTime1->Location = System::Drawing::Point(90, 543);
			this->labelDateTime1->Name = L"labelDateTime1";
			this->labelDateTime1->Size = System::Drawing::Size(204, 39);
			this->labelDateTime1->TabIndex = 37;
			this->labelDateTime1->Text = L"Дата и время";
			this->labelDateTime1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->labelDateTime1->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(12, 575);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 16);
			this->label20->TabIndex = 38;
			this->label20->Text = L"РН ККТ:";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(12, 591);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 16);
			this->label21->TabIndex = 39;
			this->label21->Text = L"ЗН ККТ:";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(68, 575);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(119, 16);
			this->label22->TabIndex = 40;
			this->label22->Text = L"0009865161651698";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(68, 591);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(119, 16);
			this->label23->TabIndex = 41;
			this->label23->Text = L"0287619841532168";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(12, 607);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(172, 16);
			this->label24->TabIndex = 42;
			this->label24->Text = L"Нефискальный документ";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(12, 623);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 16);
			this->label25->TabIndex = 43;
			this->label25->Text = L"ИНН:";
			this->label25->Visible = false;
			// 
			// labelINN1
			// 
			this->labelINN1->AutoSize = true;
			this->labelINN1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelINN1->Location = System::Drawing::Point(58, 623);
			this->labelINN1->Name = L"labelINN1";
			this->labelINN1->Size = System::Drawing::Size(37, 16);
			this->labelINN1->TabIndex = 44;
			this->labelINN1->Text = L"ИНН";
			this->labelINN1->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(12, 639);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 16);
			this->label19->TabIndex = 45;
			this->label19->Text = L"ФН:";
			this->label19->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(58, 639);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(119, 16);
			this->label26->TabIndex = 46;
			this->label26->Text = L"9285000123456782";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(12, 655);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(51, 16);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Чек №:";
			this->label27->Visible = false;
			// 
			// labelNum
			// 
			this->labelNum->AutoSize = true;
			this->labelNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelNum->Location = System::Drawing::Point(68, 655);
			this->labelNum->Name = L"labelNum";
			this->labelNum->Size = System::Drawing::Size(50, 16);
			this->labelNum->TabIndex = 48;
			this->labelNum->Text = L"Номер";
			this->labelNum->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(12, 671);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(56, 16);
			this->label28->TabIndex = 49;
			this->label28->Text = L"Кассир:";
			this->label28->Visible = false;
			// 
			// labelCashier1
			// 
			this->labelCashier1->AutoSize = true;
			this->labelCashier1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCashier1->Location = System::Drawing::Point(68, 671);
			this->labelCashier1->Name = L"labelCashier1";
			this->labelCashier1->Size = System::Drawing::Size(95, 16);
			this->labelCashier1->TabIndex = 50;
			this->labelCashier1->Text = L"Фамилия И.О.";
			this->labelCashier1->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(12, 719);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 16);
			this->label29->TabIndex = 57;
			this->label29->Text = L"Сайт ОФД:";
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(90, 684);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(204, 22);
			this->label30->TabIndex = 54;
			this->label30->Text = L"nalog.ru";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label30->Visible = false;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(90, 700);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(204, 22);
			this->label31->TabIndex = 56;
			this->label31->Text = L"ООО \"Ярус\" (\"ОФД-Я\")";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label31->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(12, 703);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(40, 16);
			this->label32->TabIndex = 55;
			this->label32->Text = L"ОФД:";
			this->label32->Visible = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(12, 687);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(75, 16);
			this->label33->TabIndex = 53;
			this->label33->Text = L"Сайт ФНС:";
			this->label33->Visible = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(90, 716);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(204, 22);
			this->label36->TabIndex = 58;
			this->label36->Text = L"ww.nfd-ya.ru";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label36->Visible = false;
			// 
			// labelAddress1
			// 
			this->labelAddress1->AutoSize = true;
			this->labelAddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAddress1->Location = System::Drawing::Point(12, 735);
			this->labelAddress1->Name = L"labelAddress1";
			this->labelAddress1->Size = System::Drawing::Size(47, 16);
			this->labelAddress1->TabIndex = 59;
			this->labelAddress1->Text = L"Адрес";
			this->labelAddress1->Visible = false;
			// 
			// labelBank
			// 
			this->labelBank->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBank->Location = System::Drawing::Point(77, 757);
			this->labelBank->Name = L"labelBank";
			this->labelBank->Size = System::Drawing::Size(128, 16);
			this->labelBank->TabIndex = 60;
			this->labelBank->Text = L"БАНК";
			this->labelBank->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelBank->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(113, 773);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(56, 16);
			this->label34->TabIndex = 61;
			this->label34->Text = L"Оплата";
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(99, 789);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(85, 16);
			this->label35->TabIndex = 62;
			this->label35->Text = L"ОДОБРЕНО";
			this->label35->Visible = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(12, 812);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(59, 16);
			this->label37->TabIndex = 63;
			this->label37->Text = L"СУММА:";
			this->label37->Visible = false;
			// 
			// labelSum
			// 
			this->labelSum->AutoSize = true;
			this->labelSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSum->Location = System::Drawing::Point(77, 812);
			this->labelSum->Name = L"labelSum";
			this->labelSum->Size = System::Drawing::Size(56, 16);
			this->labelSum->TabIndex = 64;
			this->labelSum->Text = L"СУММА";
			this->labelSum->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(12, 828);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(217, 16);
			this->label38->TabIndex = 65;
			this->label38->Text = L"Комиссия с держателя карты 0%";
			this->label38->Visible = false;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(12, 844);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(79, 16);
			this->label39->TabIndex = 66;
			this->label39->Text = L"Карта: Visa";
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(12, 860);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(162, 16);
			this->label40->TabIndex = 67;
			this->label40->Text = L"Код авторизации: 26345";
			this->label40->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(58, 908);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(191, 16);
			this->label41->TabIndex = 68;
			this->label41->Text = L"----------------------------------------------";
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(84, 924);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(119, 16);
			this->label42->TabIndex = 69;
			this->label42->Text = L"Подпись кассира";
			this->label42->Visible = false;
			// 
			// CheckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(298, 962);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->labelSum);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->labelBank);
			this->Controls->Add(this->labelAddress1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->labelCashier1);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->labelNum);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->labelINN1);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labelINN);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->labelRNM);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->labelChange);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->labelWay);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->labelNDS);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->labelCount);
			this->Controls->Add(this->labelFilm);
			this->Controls->Add(this->labelCassa);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelSmena);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelCashier);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelCheckNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelCost);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelCash);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->labelDateTime1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(314, 1000);
			this->MinimizeBox = false;
			this->Name = L"CheckForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Чек";
			this->Load += gcnew System::EventHandler(this, &CheckForm::CheckForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CheckForm_Load(System::Object^ sender, System::EventArgs^ e) {
		labelDateTime->Text = msclr::interop::marshal_as<System::String^>(Time::RetDate(0, 1)) + " " + msclr::interop::marshal_as<System::String^>(Time::RetTime(1));
		labelDateTime1->Text = labelDateTime->Text;

		labelName->Text = "'" + msclr::interop::marshal_as<System::String^>(cinema->name) + "'";

		labelAddress->Text = msclr::interop::marshal_as<System::String^>(cinema->address);
		labelAddress1->Text = labelAddress->Text;

		string bank[3] = { "СБЕРБАНК", "ПРОМСВЯЗЬБАНК", "ВТБ" };
		random_shuffle(begin(bank), end(bank));
		labelBank->Text = "ПАО \"" + msclr::interop::marshal_as<System::String^>(bank[0]) + "\"";

		labelCash->Text = "=" + sum.ToString() + ".00 РУБ";

		labelCashier->Text = msclr::interop::marshal_as<System::String^>(cinema->cashiers[rand() % cinema->cashiers_number + 1]);
		labelCashier1->Text = labelCashier->Text;

		labelCassa->Text = ((rand() % 5) + 1).ToString();
		labelChange->Text = "=" + change.ToString() + ".00 РУБ";
		labelCost->Text = "=" + (cost * num).ToString() + ".00 РУБ";
		labelResult->Text = labelCost->Text;
		labelNDS->Text = "=" + (cost * num * 20 / 100).ToString() + ".00 РУБ";
		labelCount->Text = cost.ToString() + ".00 X " + num.ToString() + " ШТ";

		labelINN->Text = msclr::interop::marshal_as<System::String^>(cinema->inn);
		labelINN1->Text = labelINN->Text;

		labelRNM->Text = msclr::interop::marshal_as<System::String^>(cinema->rnm);

		labelCheckNumber->Text = "";
		for (int i = 0; i < 5; ++i)
		{
			labelCheckNumber->Text += (rand() % 10).ToString();
		}

		labelNum->Text = "";
		for (int i = 0; i < 5; ++i)
		{
			labelNum->Text += (rand() % 10).ToString();
		}

		string kard[3] = { "Visa", "МИР", "MasterCard" };
		srand(std::time(NULL));
		random_shuffle(begin(kard), end(kard));
		label39->Text = "Карта: " + msclr::interop::marshal_as<System::String^>(kard[0]);

		label40->Text = "Код авторизации: ";
		for (int i = 0; i < 5; ++i)
		{
			label40->Text += (rand() % 10).ToString();
		}

		labelFilm->Text = msclr::interop::marshal_as<System::String^>(cinema->films[index].name) + " (" + msclr::interop::marshal_as<System::String^>(cinema->films[index].age) + ")";
		struct tm *u;
		const time_t timer = time(NULL);
		u = localtime(&timer);
		labelSmena->Text = (u->tm_yday + 1).ToString();
		if (way)
		{
			label14->Visible = false;
			labelChange->Visible = false;
			labelWay->Text = "БЕЗНАЛИЧНЫЕ:";
			pictureBox2->Visible = true;
			labelDateTime1->Visible = true;
			labelINN1->Visible = true;
			labelCashier1->Visible = true;
			labelNum->Visible = true;
			labelAddress1->Visible = true;
			labelBank->Visible = true;
			labelSum->Visible = true;
			label19->Visible = true;
			label20->Visible = true;
			label21->Visible = true;
			label22->Visible = true;
			label23->Visible = true;
			label24->Visible = true;
			label25->Visible = true;
			label26->Visible = true;
			label27->Visible = true;
			label28->Visible = true;
			label29->Visible = true; 
			label30->Visible = true;
			label31->Visible = true;
			label32->Visible = true;
			label33->Visible = true;
			label34->Visible = true; 
			label35->Visible = true;
			label36->Visible = true;
			label37->Visible = true;
			label38->Visible = true;
			label39->Visible = true;
			label40->Visible = true;
			label41->Visible = true;
			label42->Visible = true;
		}
	}
};
}
