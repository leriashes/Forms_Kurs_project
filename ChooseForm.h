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
	/// Сводка для ChooseForm
	/// </summary>
	public ref class ChooseForm : public System::Windows::Forms::Form
	{
	private: Cinema* cinema;
	public:
		ChooseForm(Cinema* cinema)
		{
			this->cinema = cinema;
			InitializeComponent();
		}

		int Result()
		{
			return this->comboBox1->SelectedIndex;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChooseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Фильм 1" });
			this->comboBox1->Location = System::Drawing::Point(12, 17);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &ChooseForm::comboBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(212, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ChooseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(299, 57);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(315, 95);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(315, 95);
			this->Name = L"ChooseForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Выбор фильма";
			this->Load += gcnew System::EventHandler(this, &ChooseForm::ChooseForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ChooseForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Items->Clear();
		for (int i = 0; i < cinema->films_number; i++)
		{
			this->comboBox1->Items->Add((System::Object^)msclr::interop::marshal_as<System::String^>(cinema->films[i].name));
		}
	}
	private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Enabled = this->comboBox1->SelectedIndex != -1;
	}
};
}
