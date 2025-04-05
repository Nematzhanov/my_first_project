#pragma once
#include <Windows.h>
#include <mmsystem.h>
#include "dz2.h"
#include "formulas.h"
#include <chrono>
#pragma comment(lib, "winmm.lib")

using namespace System::Media;  



namespace блякакойжеразяпеределоваю {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
			this->MaximizeBox = true;
			// Разрешаем изменение размера элементов
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right;
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right;
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;  // Автоматическое изменение размера для текста
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panelTask1;
	private: System::Windows::Forms::TextBox^ txtInputN;

	private: System::Windows::Forms::Label^ labelResult;





	private: System::Windows::Forms::Button^ btnRecursion;
	private: System::Windows::Forms::Button^ buttonhome;
	private: System::Windows::Forms::Button^ buttonаf;
	private: System::Windows::Forms::Button^ button3;

















	private: System::Windows::Forms::Button^ button4;




	protected:
	private:
		int F9_loop(int n) { return Formulas::F9_loop(n); }
		int F2_loop(int n) { return Formulas::F2_loop(n); }

		int F9_recursion(int n) {
			static int counter = 0;
			counter = 0;
			return Formulas::F9_recursion(counter, n);
		}

		int F2_recursion(int n) {
			static int counter = 0;
			counter = 0;
			return Formulas::F2_recursion(counter, n);
		}



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelTask1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->buttonаf = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->buttonhome = (gcnew System::Windows::Forms::Button());
			this->btnRecursion = (gcnew System::Windows::Forms::Button());
			this->txtInputN = (gcnew System::Windows::Forms::TextBox());
			this->panelTask1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите задание";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Задание №1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Задание №2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(120, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L" ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// panelTask1
			// 
			this->panelTask1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelTask1->Controls->Add(this->button3);
			this->panelTask1->Controls->Add(this->labelResult);
			this->panelTask1->Controls->Add(this->buttonаf);
			this->panelTask1->Controls->Add(this->button4);
			this->panelTask1->Controls->Add(this->buttonhome);
			this->panelTask1->Controls->Add(this->btnRecursion);
			this->panelTask1->Controls->Add(this->txtInputN);
			this->panelTask1->Location = System::Drawing::Point(2, 0);
			this->panelTask1->Name = L"panelTask1";
			this->panelTask1->Size = System::Drawing::Size(379, 351);
			this->panelTask1->TabIndex = 3;
			this->panelTask1->Visible = false;
			this->panelTask1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelTask1_Paint);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(130, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Цикл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// labelResult
			// 
			this->labelResult->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelResult->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->Location = System::Drawing::Point(14, 194);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(346, 142);
			this->labelResult->TabIndex = 3;
			this->labelResult->Text = L" ";
			this->labelResult->Click += gcnew System::EventHandler(this, &MyForm::labelResult_Click);
			// 
			// buttonаf
			// 
			this->buttonаf->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonаf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonаf->Location = System::Drawing::Point(188, 136);
			this->buttonаf->Name = L"buttonаf";
			this->buttonаf->Size = System::Drawing::Size(168, 40);
			this->buttonаf->TabIndex = 1;
			this->buttonаf->Text = L"Формула";
			this->buttonаf->UseVisualStyleBackColor = true;
			this->buttonаf->Click += gcnew System::EventHandler(this, &MyForm::buttonаf_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(14, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 40);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Задание №2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// buttonhome
			// 
			this->buttonhome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonhome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonhome->Location = System::Drawing::Point(246, 90);
			this->buttonhome->Name = L"buttonhome";
			this->buttonhome->Size = System::Drawing::Size(110, 40);
			this->buttonhome->TabIndex = 1;
			this->buttonhome->Text = L"Домой";
			this->buttonhome->UseVisualStyleBackColor = true;
			this->buttonhome->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnRecursion
			// 
			this->btnRecursion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRecursion->Location = System::Drawing::Point(14, 90);
			this->btnRecursion->Name = L"btnRecursion";
			this->btnRecursion->Size = System::Drawing::Size(110, 40);
			this->btnRecursion->TabIndex = 1;
			this->btnRecursion->Text = L"Рекурсия";
			this->btnRecursion->UseVisualStyleBackColor = true;
			this->btnRecursion->Click += gcnew System::EventHandler(this, &MyForm::btnRecursion_Click);
			// 
			// txtInputN
			// 
			this->txtInputN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtInputN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInputN->Location = System::Drawing::Point(14, 27);
			this->txtInputN->Multiline = true;
			this->txtInputN->Name = L"txtInputN";
			this->txtInputN->Size = System::Drawing::Size(350, 40);
			this->txtInputN->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(382, 353);
			this->Controls->Add(this->panelTask1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panelTask1->ResumeLayout(false);
			this->panelTask1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
		//is->label2->Text = L"Загрузка...";
		panelTask1->Visible = true;

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
		dz2^ form2 = gcnew dz2();
		form2->Show();
		//his->label2->Text = L"Загрузка...";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panelTask1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void labelResult_Click(System::Object^ sender, System::EventArgs^ e) { //leble для задания 1 вывод
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
		panelTask1->Visible = false;
		//panelTask2->Visible = false;


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);

		dz2^ form2 = gcnew dz2();
		form2->Show();


	}
	private: System::Void btnRecursion_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
		try {

			int n = Convert::ToInt32(txtInputN->Text);
			if (n > 20000) {
				labelResult->Text = "Ошибка! Введите число меньше или равное 20000.";
				return;
			}

		
			int counterV9 = 0;
			int counterV2 = 0;

			String^ result = "";

			// === Формула 9 ===
			auto startV9 = std::chrono::high_resolution_clock::now();
			int resV9 = Formulas::F9_recursion(counterV9, n);  
			auto endV9 = std::chrono::high_resolution_clock::now();
			auto timeV9 = std::chrono::duration_cast<std::chrono::microseconds>(endV9 - startV9);

			// === Формула 2 ===
			auto startV2 = std::chrono::high_resolution_clock::now();
			int resV2 = Formulas::F2_recursion(counterV2, n); 
			auto endV2 = std::chrono::high_resolution_clock::now();
			auto timeV2 = std::chrono::duration_cast<std::chrono::microseconds>(endV2 - startV2);

			result += "=== Формула 9 ===\n";
			result += "Результат: " + resV9.ToString() + "\n";
			result += "Вызовов рекурсии: " + counterV9.ToString() + "\n"; 
			result += "Время: " + timeV9.count().ToString() + " мкс\n\n";

			result += "=== Формула 2 ===\n";
			result += "Результат: " + resV2.ToString() + "\n";
			result += "Вызовов рекурсии: " + counterV2.ToString() + "\n"; 
			result += "Время: " + timeV2.count().ToString() + " мкс";

			labelResult->Text = result;
		}
		catch (...) {
			labelResult->Text = "Ошибка! Введите целое число.";
		}
	}




	private: System::Void buttonаf_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);

		labelResult->Text =
			"Формула 9:\n"
			"F(n) = 1, при n = 1\n"
			"F(n) = n + 2*F(n-1), если n чётное\n"
			"F(n) = 1 + 3*F(n-2), если n > 1 и нечётное\n\n"

			"Формула 2:\n"
			"F(n) = n, при n < 3\n"
			"F(n) = 3*(n-1) + F(n-1) + 5, если n больше или равно 3 и чётное\n"
			"F(n) = 3*(n+1) + F(n-2) - 2, если n больше или равно 3 и нечётное";

	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(L"C:\\Users\\adida\\Downloads\\sound.wav", NULL, SND_FILENAME | SND_ASYNC);
			try {
				int n = Convert::ToInt32(txtInputN->Text);

				// Проверка лимита
				if (n < 0 || n > 10000000) {
					labelResult->Text = "Ошибка! Число должно быть от 0 до 10,000,000.";
					return; // Прерываем выполнение
				}

				String^ result = "";

				auto startV9 = std::chrono::high_resolution_clock::now();
				int resV9_loop = F9_loop(n);
				auto endV9 = std::chrono::high_resolution_clock::now();
				auto timeV9 = std::chrono::duration_cast<std::chrono::microseconds>(endV9 - startV9);

				auto startV2 = std::chrono::high_resolution_clock::now();
				int resV2_loop = F2_loop(n);
				auto endV2 = std::chrono::high_resolution_clock::now();
				auto timeV2 = std::chrono::duration_cast<std::chrono::microseconds>(endV2 - startV2);

				result += "=== Формула 9 ===\n";
				result += "Цикл: " + resV9_loop.ToString() + "\n";
				result += "Время: " + timeV9.count().ToString() + " мкс\n\n";

				result += "=== Формула 2 ===\n";
				result += "Цикл: " + resV2_loop.ToString() + "\n";
				result += "Время: " + timeV2.count().ToString() + " мкс";

				labelResult->Text = result;
			}
			catch (...) {
				labelResult->Text = "Ошибка! Введите целое число от 0 до 10,000,000.";
			}

	}


	private: System::Void panelTask2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}