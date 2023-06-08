#pragma once

namespace diplom3 {

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
	private: System::Windows::Forms::CheckBox^ MPBCheckbox;
	private: System::Windows::Forms::CheckBox^ GissCheckbox;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ servingsTextbox;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::CheckBox^ lacktoseCheckbox;

	private: System::Windows::Forms::CheckBox^ MPAbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ SalmcheckBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;





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
			this->MPBCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->GissCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->servingsTextbox = (gcnew System::Windows::Forms::TextBox());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->lacktoseCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->MPAbox = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SalmcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MPBCheckbox
			// 
			this->MPBCheckbox->AutoSize = true;
			this->MPBCheckbox->Location = System::Drawing::Point(15, 77);
			this->MPBCheckbox->Name = L"MPBCheckbox";
			this->MPBCheckbox->Size = System::Drawing::Size(50, 17);
			this->MPBCheckbox->TabIndex = 0;
			this->MPBCheckbox->Text = L"МПБ";
			this->MPBCheckbox->UseVisualStyleBackColor = true;
			// 
			// GissCheckbox
			// 
			this->GissCheckbox->AutoSize = true;
			this->GissCheckbox->Location = System::Drawing::Point(172, 77);
			this->GissCheckbox->Name = L"GissCheckbox";
			this->GissCheckbox->Size = System::Drawing::Size(90, 17);
			this->GissCheckbox->TabIndex = 1;
			this->GissCheckbox->Text = L"Среда Гисса";
			this->GissCheckbox->UseVisualStyleBackColor = true;
			// 
			// servingsTextbox
			// 
			this->servingsTextbox->Location = System::Drawing::Point(15, 142);
			this->servingsTextbox->Name = L"servingsTextbox";
			this->servingsTextbox->Size = System::Drawing::Size(149, 20);
			this->servingsTextbox->TabIndex = 3;
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(15, 239);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(146, 52);
			this->calculateButton->TabIndex = 4;
			this->calculateButton->Text = L"Расчет";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLabel->Location = System::Drawing::Point(6, 16);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(273, 16);
			this->resultLabel->TabIndex = 5;
			this->resultLabel->Text = L"______________________________________";
			// 
			// lacktoseCheckbox
			// 
			this->lacktoseCheckbox->AutoSize = true;
			this->lacktoseCheckbox->Location = System::Drawing::Point(283, 77);
			this->lacktoseCheckbox->Name = L"lacktoseCheckbox";
			this->lacktoseCheckbox->Size = System::Drawing::Size(155, 17);
			this->lacktoseCheckbox->TabIndex = 6;
			this->lacktoseCheckbox->Text = L"Лактозопептонная среда";
			this->lacktoseCheckbox->UseVisualStyleBackColor = true;
			// 
			// MPAbox
			// 
			this->MPAbox->AutoSize = true;
			this->MPAbox->Location = System::Drawing::Point(95, 77);
			this->MPAbox->Name = L"MPAbox";
			this->MPAbox->Size = System::Drawing::Size(50, 17);
			this->MPAbox->TabIndex = 7;
			this->MPAbox->Text = L"МПА";
			this->MPAbox->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(4, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"1. Выберите вид питательной среды";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"2. Введите необходимое количество итоговых порций";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"3. Нажмите \"расчет\"";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->resultLabel);
			this->groupBox1->Location = System::Drawing::Point(334, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(288, 405);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат";
			// 
			// SalmcheckBox
			// 
			this->SalmcheckBox->AutoSize = true;
			this->SalmcheckBox->Location = System::Drawing::Point(446, 77);
			this->SalmcheckBox->Name = L"SalmcheckBox";
			this->SalmcheckBox->Size = System::Drawing::Size(167, 17);
			this->SalmcheckBox->TabIndex = 12;
			this->SalmcheckBox->Text = L"Сальмонелла-шигелла агар";
			this->SalmcheckBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 323);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 189);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(169, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Программа расчета реактивов для питательных сред";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 524);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SalmcheckBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MPAbox);
			this->Controls->Add(this->lacktoseCheckbox);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->servingsTextbox);
			this->Controls->Add(this->GissCheckbox);
			this->Controls->Add(this->MPBCheckbox);
			this->Name = L"MyForm";
			this->Text = L"Питательные среды 4  группа";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ввести количество порций
		int numServings = Int32::Parse(servingsTextbox->Text);

		// Рассчёт ингредиентов на основе установленных чекбоксов и количества порций
		String^ result = "";
		if (MPBCheckbox->Checked) {
			int pepton = 10 * numServings;
			int water = 1000 * numServings;
			int beef = 500 * numServings;
			int salt = 5 * numServings;
			result += "Мясо-пептонный бульон:\n";
			result += "- Пептон: " + pepton + " г.\n";
			result += "- Вода водопроводная: " + water + " мл.\n";
			result += "- Говядина/телятина: " + beef + " г.\n";
			result += "- Поваренная соль: " + salt + " г.\n\n";
		}
		if (MPAbox->Checked) {
			int agar = 20 * numServings;
			int salt = 5 * numServings;
			int pepton = 10 * numServings;
			int water = 1000 * numServings;
			int beef = 500 * numServings;
			result += "Мясо-пептонный агар:\n";
			result += "- Агар-агар: " + agar + " г.\n";
			result += "- Пептон: " + pepton + " г.\n";
			result += "- Вода водопроводная: " + water + " мл.\n";
			result += "- Говядина/телятина: " + beef + " г.\n";
			result += "- Поваренная соль: " + salt + " г.\n\n";
		}
		if (GissCheckbox->Checked) {
			int Manit = 10 * numServings;
			int salt = 5 * numServings;
			int pepton = 10 * numServings;
			int water = 1000 * numServings;
			int andrede = 1 * numServings;
			result += "Среда Гисса:\n";
			result += "- Манит " + Manit + " г.\n";
			result += "- Хлорид натрия: " + salt + " г.\n";
			result += "- Пептон: " + pepton + " г.\n";
			result += "- Дистилированная вода: " + water + " мл.\n";
			result += "- Индикатор Андреде(1,6%): " + andrede + " мл.\n\n";
		}
		if (lacktoseCheckbox->Checked) {
			int lacktose = 5 * numServings;
			int salt = 5 * numServings;
			int pepton = 10 * numServings;
			int water = 1000 * numServings;
			int brom = 1 * numServings;
			result += "Лактозопептонная среда:\n";
			result += "- Лактоза " + lacktose + " г.\n";
			result += "- Хлорид натрия: " + salt + " г.\n";
			result += "- Пептон: " + pepton + " г.\n";
			result += "- Дистилированная вода: " + water + " г.\n";
			result += "- Спирт.р-р Бромтиол. голуб.(1,6%): " + brom + " мл.\n\n";
		}
		if (SalmcheckBox->Checked) {
			int beef = 5 * numServings;
			int agar = 15 * numServings;
			int lacktose = 10 * numServings;
			int salt = 8.5 * numServings;
			int pepton = 5 * numServings;
			int water = 1000 * numServings;
			double crasitel = 0.025 * numServings;
			double crasitelzel = 0.00033 * numServings;
			int citratzel = 1 * numServings;
			int sulfit = 8.5 * numServings;
			result += "_ Сальмонелла-шигелла агар:\n";
			result += "- Говяжий экстракт: " + beef + " г.\n";
			result += "- Агар-агар: " + agar + " г.\n";
			result += "- Цитрат железа: " + citratzel + " г.\n";
			result += "- Лактоза " + lacktose + " г.\n";
			result += "- Соли желчи: " + salt + " г.\n";
			result += "- Тиосульфат натрия: " + sulfit + " г.\n";
			result += "- Пептон: " + pepton + " г.\n";
			result += "- Дистилированная вода: " + water + " мл.\n";
			result += "- Бриллиантовый зеленый: " + crasitelzel + " г.\n";
			result += "- Нейтральный красный: " + crasitel + " г.\n\n";	
		}

		// Вывод результат
		resultLabel->Text = result;
	}
};
}
