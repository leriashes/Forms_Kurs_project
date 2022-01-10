#pragma once
#include <msclr\marshal.h>
#include "msclr\marshal_cppstd.h"
#include "Time.h"
#include "Cinema.h"
#include "resource.h"
#include "FilmForm.h"
namespace FormsKursproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Ticket
	/// </summary>
	public ref class Ticket : public System::Windows::Forms::Form
	{
	public:
		int index1;
		Cinema* cinema;
		int* mesta = new int[100];
		int num;
		int index12;

	public:
		int cost;
		Ticket(Cinema* cinema1, int number, int index, int index2, int cos, string seat)
		{
			int f = 0;
			string mesto;
			cinema = cinema1;
			num = number;
			for (int y = 0; y < seat.length(); y++)
			{
				if (seat[y] == ' ')
				{
					mesta[f] = atoi(mesto.c_str());
					f++;
					mesto = "";
				}
				else
				{
					mesto = mesto + seat[y];
				}
			}
			index1 = index;
			index12 = index2;
			cost = cos;

			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Ticket()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// Ticket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2564, 923);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"Ticket";
			this->ShowIcon = false;
			this->Text = L"Билеты";
			this->Load += gcnew System::EventHandler(this, &Ticket::Ticket_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Ticket_Load(System::Object^ sender, System::EventArgs^ e) {
		Label^ Lines1 = (gcnew System::Windows::Forms::Label());
		Lines1->Location = System::Drawing::Point(14, 10);
		Lines1->Size = System::Drawing::Size(383, 10);
		this->Controls->Add(Lines1);
		Lines1->Text = " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
		int shag = 200;

		string alf[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", };
		for (int i = 0; i < num; i++)
		{
			Label^ Label10 = (gcnew System::Windows::Forms::Label());
			Label10->Location = System::Drawing::Point(300, 30 + i * shag);
			Label10->Size = System::Drawing::Size(90, 30);
			this->Controls->Add(Label10);
			Label10->Text = L"Кинобилет";

			Label^ Label11 = (gcnew System::Windows::Forms::Label());
			Label11->Location = System::Drawing::Point(47, 30 + i * shag);
			Label11->Size = System::Drawing::Size(200, 30);
			this->Controls->Add(Label11);
			Label11->Text = "Кинотеатр   " + msclr::interop::marshal_as<System::String^>(cinema->name);
			Label11->Font = (gcnew System::Drawing::Font(L"Mistral", 15.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));

			Label^ Label12 = (gcnew System::Windows::Forms::Label());
			Label12->Location = System::Drawing::Point(47, 70 + i * shag);
			Label12->Size = System::Drawing::Size(300, 23);
			this->Controls->Add(Label12);
			Label12->Text = msclr::interop::marshal_as<System::String^>(cinema->films[index1].name);

			Label^ Label13 = (gcnew System::Windows::Forms::Label());
			Label13->Location = System::Drawing::Point(47, 110 + i * shag);
			Label13->Size = System::Drawing::Size(50, 23);
			this->Controls->Add(Label13);
			Label13->Text = L"Зал " + msclr::interop::marshal_as<System::String^>(cinema->films[index1].number_zal);

			Label^ Label14 = (gcnew System::Windows::Forms::Label());
			Label14->Location = System::Drawing::Point(150, 110 + i * shag);
			Label14->Size = System::Drawing::Size(80, 23);
			this->Controls->Add(Label14);
			Label14->Text = L"Место " + msclr::interop::marshal_as<System::String^>(alf[mesta[i] / 10]);

			Label^ Label15 = (gcnew System::Windows::Forms::Label());
			Label15->Location = System::Drawing::Point(250, 110 + i * shag);
			Label15->Size = System::Drawing::Size(50, 23);
			this->Controls->Add(Label15);
			char t = ((mesta[i] / 10) + 65);
			Label15->Text = L"Ряд " + ((mesta[i] % 10) + 1).ToString();

			Label^ Label16 = (gcnew System::Windows::Forms::Label());
			Label16->Location = System::Drawing::Point(47, 150 + i * shag);
			Label16->Size = System::Drawing::Size(150, 23);
			this->Controls->Add(Label16);
			Label16->Text = L"Дата: " + msclr::interop::marshal_as<System::String^>(Time::RetDate(index12 / 3, 1));

			Label^ Label17 = (gcnew System::Windows::Forms::Label());
			Label17->Location = System::Drawing::Point(250, 150 + i * shag);
			Label17->Size = System::Drawing::Size(100, 23);
			this->Controls->Add(Label17);
			Label17->Text = L"Начало: " + msclr::interop::marshal_as<System::String^>(cinema->films[index1].time[index12 % 3]);

			Label^ Label18 = (gcnew System::Windows::Forms::Label());
			Label18->Location = System::Drawing::Point(47, 190 + i * shag);
			Label18->Size = System::Drawing::Size(200, 23);
			this->Controls->Add(Label18);
			Label18->Text = L"Цена билета: " + cost.ToString() + " рублей";

			Label^ Lines2 = (gcnew System::Windows::Forms::Label());
			Lines2->Location = System::Drawing::Point(14, 220 + i * shag);
			Lines2->Size = System::Drawing::Size(383, 10);
			this->Controls->Add(Lines2);
			Lines2->Text = " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
			
			Label^ Lines3 = (gcnew System::Windows::Forms::Label());
			Lines3->Location = System::Drawing::Point(390, 15 + i * shag);
			Lines3->Size = System::Drawing::Size(400, 215);
			this->Controls->Add(Lines3);
			Lines3->Text = "|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n";

			Label^ Lines4 = (gcnew System::Windows::Forms::Label());
			Lines4->Location = System::Drawing::Point(10, 15 + i * shag);
			Lines4->Size = System::Drawing::Size(10, 215);
			this->Controls->Add(Lines4);
			Lines4->Text = "|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n";

		}
		this->Height = 290 + 200 * (num - 1);
		this->Width = 426;
	}
	};
}
