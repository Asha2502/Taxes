#pragma once

namespace Taxes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PersonForm
	/// </summary>
	public ref class PersonForm : public System::Windows::Forms::Form
	{
	public:
		PersonForm(void)
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
		~PersonForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяНазадToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ наГлавнуюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выход;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PersonForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяНазадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->наГлавнуюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выход = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(641, 36);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяНазадToolStripMenuItem
			// 
			this->вернутьсяНазадToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вернутьсяНазадToolStripMenuItem.Image")));
			this->вернутьсяНазадToolStripMenuItem->Name = L"вернутьсяНазадToolStripMenuItem";
			this->вернутьсяНазадToolStripMenuItem->Size = System::Drawing::Size(185, 32);
			this->вернутьсяНазадToolStripMenuItem->Text = L"Вернуться назад";
			this->вернутьсяНазадToolStripMenuItem->Click += gcnew System::EventHandler(this, &PersonForm::вернутьсяНазадToolStripMenuItem_Click);
			// 
			// наГлавнуюToolStripMenuItem
			// 
			this->наГлавнуюToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"наГлавнуюToolStripMenuItem.Image")));
			this->наГлавнуюToolStripMenuItem->Name = L"наГлавнуюToolStripMenuItem";
			this->наГлавнуюToolStripMenuItem->Size = System::Drawing::Size(148, 32);
			this->наГлавнуюToolStripMenuItem->Text = L"На главную";
			this->наГлавнуюToolStripMenuItem->Click += gcnew System::EventHandler(this, &PersonForm::наГлавнуюToolStripMenuItem_Click);
			// 
			// выход
			// 
			this->выход->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->выход->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"выход.Image")));
			this->выход->Name = L"выход";
			this->выход->Size = System::Drawing::Size(104, 32);
			this->выход->Text = L"Выход";
			this->выход->Click += gcnew System::EventHandler(this, &PersonForm::выход_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(82, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Лисневская";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(82, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Мария";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(82, 220);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 26);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"10000";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(82, 287);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 26);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"0,5";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox5->Location = System::Drawing::Point(347, 97);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 26);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"2";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox6->Location = System::Drawing::Point(347, 158);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(200, 26);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"100000";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox7->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox7->Location = System::Drawing::Point(347, 220);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(200, 26);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"70,5";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox8->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox8->Location = System::Drawing::Point(347, 287);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(200, 26);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"200000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(255, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 41);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PersonForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(78, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Имя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Доход";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(78, 264);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Вес личного транспорта";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(343, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(145, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Площадь участка";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(343, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Стоимость участка";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(343, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Площадь квартиры";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(343, 264);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(170, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Стоимость квартиры";
			// 
			// PersonForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(641, 424);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PersonForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Данные о плательщике";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
