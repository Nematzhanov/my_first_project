#pragma once
#include "formulas.h"
#include <Windows.h>
#include <mmsystem.h>
#include <chrono>
#pragma comment(lib, "winmm.lib")

namespace блякакойжеразяпеределоваю {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для dz2
	/// </summary>
	public ref class dz2 : public System::Windows::Forms::Form
	{
	public:
		dz2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
			
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~dz2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox11;
	protected:

	private: System::Windows::Forms::Button^ buttonres;
	private: System::Windows::Forms::Button^ buttonFormul;
	private: System::Windows::Forms::Label^ labelresalt;
	private: System::Windows::Forms::Button^ Home1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dz2::typeid));
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->buttonres = (gcnew System::Windows::Forms::Button());
			this->buttonFormul = (gcnew System::Windows::Forms::Button());
			this->labelresalt = (gcnew System::Windows::Forms::Label());
			this->Home1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(14, 27);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(350, 40);
			this->textBox11->TabIndex = 0;
			// 
			// buttonres
			// 
			this->buttonres->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonres->Location = System::Drawing::Point(14, 89);
			this->buttonres->Name = L"buttonres";
			this->buttonres->Size = System::Drawing::Size(349, 40);
			this->buttonres->TabIndex = 1;
			this->buttonres->Text = L"Расчитать";
			this->buttonres->UseVisualStyleBackColor = true;
			this->buttonres->Click += gcnew System::EventHandler(this, &dz2::buttonres_Click);
			// 
			// buttonFormul
			// 
			this->buttonFormul->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonFormul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFormul->Location = System::Drawing::Point(14, 135);
			this->buttonFormul->Name = L"buttonFormul";
			this->buttonFormul->Size = System::Drawing::Size(170, 40);
			this->buttonFormul->TabIndex = 1;
			this->buttonFormul->Text = L"Формула";
			this->buttonFormul->UseVisualStyleBackColor = true;
			this->buttonFormul->Click += gcnew System::EventHandler(this, &dz2::buttonFormul_Click);
			// 
			// labelresalt
			// 
			this->labelresalt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelresalt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelresalt->Location = System::Drawing::Point(11, 178);
			this->labelresalt->Name = L"labelresalt";
			this->labelresalt->Size = System::Drawing::Size(352, 166);
			this->labelresalt->TabIndex = 2;
			// 
			// Home1
			// 
			this->Home1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Home1->Location = System::Drawing::Point(193, 135);
			this->Home1->Name = L"Home1";
			this->Home1->Size = System::Drawing::Size(170, 40);
			this->Home1->TabIndex = 3;
			this->Home1->Text = L"Домой";
			this->Home1->UseVisualStyleBackColor = true;
			this->Home1->Click += gcnew System::EventHandler(this, &dz2::Home1_Click);
			// 
			// dz2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(382, 353);
			this->Controls->Add(this->Home1);
			this->Controls->Add(this->labelresalt);
			this->Controls->Add(this->buttonFormul);
			this->Controls->Add(this->buttonres);
			this->Controls->Add(this->textBox11);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"dz2";
			this->Text = L"dz2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonres_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
		try {
			int number = Convert::ToInt32(textBox11->Text);
			int sum = Formulas::SumDigits(number); 
			labelresalt->Text = "Сумма цифр: " + sum.ToString();
		}
		catch (...) {
			labelresalt->Text = "Ошибка! Введите число.";
		}
	}
private: System::Void buttonFormul_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
	labelresalt->Text =
		"Формула задания 2:\n"
		"F(n) = n % 10 + F(n / 10)\n"
		"Базовый случай: F(0) = 0\n\n"
		"Пример для 2024:\n"
		"2 + 0 + 2 + 4 = 8\n"
		"Глубина рекурсии: 5 вызовов";
}
private: System::Void Home1_Click(System::Object^ sender, System::EventArgs^ e) {
	PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);

	this->Close();
}
};
}
