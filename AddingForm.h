#pragma once

namespace Taxes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddingForm
	/// </summary>
	public ref class AddingForm : public System::Windows::Forms::Form
	{
	public:
		AddingForm(void)
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
		~AddingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ наГлавнуюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выход;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяНазадToolStripMenuItem;

























	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox2;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddingForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяНазадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->наГлавнуюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выход = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox0 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->вернутьсяНазадToolStripMenuItem,
					this->наГлавнуюToolStripMenuItem, this->выход
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(628, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяНазадToolStripMenuItem
			// 
			this->вернутьсяНазадToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вернутьсяНазадToolStripMenuItem.Image")));
			this->вернутьсяНазадToolStripMenuItem->Name = L"вернутьсяНазадToolStripMenuItem";
			this->вернутьсяНазадToolStripMenuItem->Size = System::Drawing::Size(185, 32);
			this->вернутьсяНазадToolStripMenuItem->Text = L"Вернуться назад";
			this->вернутьсяНазадToolStripMenuItem->Click += gcnew System::EventHandler(this, &AddingForm::вернутьсяНазадToolStripMenuItem_Click);
			// 
			// наГлавнуюToolStripMenuItem
			// 
			this->наГлавнуюToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"наГлавнуюToolStripMenuItem.Image")));
			this->наГлавнуюToolStripMenuItem->Name = L"наГлавнуюToolStripMenuItem";
			this->наГлавнуюToolStripMenuItem->Size = System::Drawing::Size(148, 32);
			this->наГлавнуюToolStripMenuItem->Text = L"На главную";
			this->наГлавнуюToolStripMenuItem->Click += gcnew System::EventHandler(this, &AddingForm::наГлавнуюToolStripMenuItem_Click);
			// 
			// выход
			// 
			this->выход->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->выход->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"выход.Image")));
			this->выход->Name = L"выход";
			this->выход->Size = System::Drawing::Size(104, 32);
			this->выход->Text = L"Выход";
			this->выход->Click += gcnew System::EventHandler(this, &AddingForm::выход_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(111, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 71);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры поиска";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ниже", L"Выше" });
			this->comboBox2->Location = System::Drawing::Point(244, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(139, 28);
			this->comboBox2->TabIndex = 30;
			this->comboBox2->Text = L"Ниже/Выше";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Подоходный налог", L"Транспортный налог", L"Земельный налог",
					L"Налог на недвижимость"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(232, 28);
			this->comboBox1->TabIndex = 29;
			this->comboBox1->Text = L"Выберите налог";
			// 
			// textBox0
			// 
			this->textBox0->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox0->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox0->Location = System::Drawing::Point(117, 155);
			this->textBox0->Name = L"textBox0";
			this->textBox0->Size = System::Drawing::Size(240, 26);
			this->textBox0->TabIndex = 27;
			this->textBox0->Text = L"Введите число";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(369, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 37);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddingForm::button1_Click);
			// 
			// AddingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(628, 233);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox0);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(650, 300);
			this->MinimumSize = System::Drawing::Size(650, 200);
			this->Name = L"AddingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск плательщиков";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void выход_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void наГлавнуюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
