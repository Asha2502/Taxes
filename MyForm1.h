#pragma once
namespace Taxes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;















	private: System::Windows::Forms::ToolStripMenuItem^ сервисToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ содержаниеToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ опрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;














	private: System::Windows::Forms::ToolStripMenuItem^ расчетНалоговToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьПлательщика;
	private: System::Windows::Forms::ToolStripMenuItem^ удалить;










	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьДанныеОПлательщиковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьТаблицуНалоговToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортировкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поПодоходномуНалогуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поТранспортномуНалогуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поЗеменльномуНалогуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поНалогуНаНедвижимостьToolStripMenuItem;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surame;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nam;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Income;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarWeight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DistrictSquare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DistrictCost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FlatSquare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FlatCost;
private: System::Windows::Forms::ToolStripMenuItem^ поискToolStripMenuItem1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nam1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PodohodniyNalog;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TransportniyNalog;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ZemelniyNalog;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NalogNaNedvizhimost;




































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьДанныеОПлательщиковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьТаблицуНалоговToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьПлательщика = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалить = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сервисToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расчетНалоговToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортировкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поПодоходномуНалогуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поТранспортномуНалогуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поЗеменльномуНалогуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поНалогуНаНедвижимостьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->содержаниеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->опрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Surame = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nam = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Income = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarWeight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DistrictSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DistrictCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FlatSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FlatCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Surname1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nam1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PodohodniyNalog = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TransportniyNalog = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ZemelniyNalog = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NalogNaNedvizhimost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->сервисToolStripMenuItem, this->справкаToolStripMenuItem, this->toolStripMenuItem2, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1211, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->файлToolStripMenuItem->Text = L"&Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьToolStripMenuItem.Image")));
			this->открытьToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьДанныеОПлательщиковToolStripMenuItem,
					this->сохранитьТаблицуНалоговToolStripMenuItem
			});
			this->сохранитьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->сохранитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem.Image")));
			this->сохранитьToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(261, 34);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			// 
			// сохранитьДанныеОПлательщиковToolStripMenuItem
			// 
			this->сохранитьДанныеОПлательщиковToolStripMenuItem->Name = L"сохранитьДанныеОПлательщиковToolStripMenuItem";
			this->сохранитьДанныеОПлательщиковToolStripMenuItem->Size = System::Drawing::Size(400, 34);
			this->сохранитьДанныеОПлательщиковToolStripMenuItem->Text = L"Сохранить данные о плательщиках";
			this->сохранитьДанныеОПлательщиковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::сохранитьДанныеОПлательщиковToolStripMenuItem_Click);
			// 
			// сохранитьТаблицуНалоговToolStripMenuItem
			// 
			this->сохранитьТаблицуНалоговToolStripMenuItem->Name = L"сохранитьТаблицуНалоговToolStripMenuItem";
			this->сохранитьТаблицуНалоговToolStripMenuItem->Size = System::Drawing::Size(400, 34);
			this->сохранитьТаблицуНалоговToolStripMenuItem->Text = L"Сохранить таблицу налогов";
			this->сохранитьТаблицуНалоговToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::сохранитьТаблицуНалоговToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->добавитьПлательщика,
					this->удалить
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(89, 29);
			this->правкаToolStripMenuItem->Text = L"&Правка";
			// 
			// добавитьПлательщика
			// 
			this->добавитьПлательщика->Name = L"добавитьПлательщика";
			this->добавитьПлательщика->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Oemplus));
			this->добавитьПлательщика->Size = System::Drawing::Size(425, 34);
			this->добавитьПлательщика->Text = L"Добавить плательщика";
			this->добавитьПлательщика->Click += gcnew System::EventHandler(this, &MyForm1::добавитьПлательщика_Click);
			// 
			// удалить
			// 
			this->удалить->Name = L"удалить";
			this->удалить->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->удалить->Size = System::Drawing::Size(425, 34);
			this->удалить->Text = L"Удалить плательщика";
			this->удалить->Click += gcnew System::EventHandler(this, &MyForm1::удалить_Click);
			// 
			// сервисToolStripMenuItem
			// 
			this->сервисToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->расчетНалоговToolStripMenuItem,
					this->сортировкаToolStripMenuItem, this->поискToolStripMenuItem1
			});
			this->сервисToolStripMenuItem->Name = L"сервисToolStripMenuItem";
			this->сервисToolStripMenuItem->Size = System::Drawing::Size(87, 29);
			this->сервисToolStripMenuItem->Text = L"&Сервис";
			// 
			// расчетНалоговToolStripMenuItem
			// 
			this->расчетНалоговToolStripMenuItem->Name = L"расчетНалоговToolStripMenuItem";
			this->расчетНалоговToolStripMenuItem->Size = System::Drawing::Size(287, 34);
			this->расчетНалоговToolStripMenuItem->Text = L"Расчет налогов";
			this->расчетНалоговToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::расчетНалоговToolStripMenuItem_Click);
			// 
			// сортировкаToolStripMenuItem
			// 
			this->сортировкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->поПодоходномуНалогуToolStripMenuItem,
					this->поТранспортномуНалогуToolStripMenuItem, this->поЗеменльномуНалогуToolStripMenuItem, this->поНалогуНаНедвижимостьToolStripMenuItem
			});
			this->сортировкаToolStripMenuItem->Name = L"сортировкаToolStripMenuItem";
			this->сортировкаToolStripMenuItem->Size = System::Drawing::Size(287, 34);
			this->сортировкаToolStripMenuItem->Text = L"Сортировать";
			// 
			// поПодоходномуНалогуToolStripMenuItem
			// 
			this->поПодоходномуНалогуToolStripMenuItem->Name = L"поПодоходномуНалогуToolStripMenuItem";
			this->поПодоходномуНалогуToolStripMenuItem->Size = System::Drawing::Size(347, 34);
			this->поПодоходномуНалогуToolStripMenuItem->Text = L"По подоходному налогу";
			this->поПодоходномуНалогуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::поПодоходномуНалогуToolStripMenuItem_Click);
			// 
			// поТранспортномуНалогуToolStripMenuItem
			// 
			this->поТранспортномуНалогуToolStripMenuItem->Name = L"поТранспортномуНалогуToolStripMenuItem";
			this->поТранспортномуНалогуToolStripMenuItem->Size = System::Drawing::Size(347, 34);
			this->поТранспортномуНалогуToolStripMenuItem->Text = L"По транспортному налогу";
			this->поТранспортномуНалогуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::поТранспортномуНалогуToolStripMenuItem_Click);
			// 
			// поЗеменльномуНалогуToolStripMenuItem
			// 
			this->поЗеменльномуНалогуToolStripMenuItem->Name = L"поЗеменльномуНалогуToolStripMenuItem";
			this->поЗеменльномуНалогуToolStripMenuItem->Size = System::Drawing::Size(347, 34);
			this->поЗеменльномуНалогуToolStripMenuItem->Text = L"По земельному налогу";
			this->поЗеменльномуНалогуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::поЗеменльномуНалогуToolStripMenuItem_Click);
			// 
			// поНалогуНаНедвижимостьToolStripMenuItem
			// 
			this->поНалогуНаНедвижимостьToolStripMenuItem->Name = L"поНалогуНаНедвижимостьToolStripMenuItem";
			this->поНалогуНаНедвижимостьToolStripMenuItem->Size = System::Drawing::Size(347, 34);
			this->поНалогуНаНедвижимостьToolStripMenuItem->Text = L"По налогу на недвижимость";
			this->поНалогуНаНедвижимостьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::поНалогуНаНедвижимостьToolStripMenuItem_Click);
			// 
			// поискToolStripMenuItem1
			// 
			this->поискToolStripMenuItem1->Name = L"поискToolStripMenuItem1";
			this->поискToolStripMenuItem1->Size = System::Drawing::Size(287, 34);
			this->поискToolStripMenuItem1->Text = L"Поиск плательщиков";
			this->поискToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::поискToolStripMenuItem1_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->содержаниеToolStripMenuItem,
					this->опрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(97, 29);
			this->справкаToolStripMenuItem->Text = L"Спра&вка";
			// 
			// содержаниеToolStripMenuItem
			// 
			this->содержаниеToolStripMenuItem->Name = L"содержаниеToolStripMenuItem";
			this->содержаниеToolStripMenuItem->Size = System::Drawing::Size(327, 34);
			this->содержаниеToolStripMenuItem->Text = L"Руководство пользовтеля";
			// 
			// опрограммеToolStripMenuItem
			// 
			this->опрограммеToolStripMenuItem->Name = L"опрограммеToolStripMenuItem";
			this->опрограммеToolStripMenuItem->Size = System::Drawing::Size(327, 34);
			this->опрограммеToolStripMenuItem->Text = L"О программе...";
			this->опрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::опрограммеToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(148, 29);
			this->toolStripMenuItem2->Text = L"На главную";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm1::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(104, 29);
			this->toolStripMenuItem1->Text = L"Выход";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::toolStripMenuItem1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(492, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Данные о плательщиках";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Surame,
					this->Nam, this->Income, this->CarWeight, this->DistrictSquare, this->DistrictCost, this->FlatSquare, this->FlatCost
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle8->Format = L"N1";
			dataGridViewCellStyle8->NullValue = nullptr;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Location = System::Drawing::Point(41, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1131, 370);
			this->dataGridView1->TabIndex = 2;
			// 
			// Surame
			// 
			this->Surame->Frozen = true;
			this->Surame->HeaderText = L"Фамилия";
			this->Surame->MinimumWidth = 8;
			this->Surame->Name = L"Surame";
			this->Surame->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Surame->Width = 90;
			// 
			// Nam
			// 
			this->Nam->Frozen = true;
			this->Nam->HeaderText = L"Имя";
			this->Nam->MinimumWidth = 8;
			this->Nam->Name = L"Nam";
			this->Nam->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Nam->Width = 80;
			// 
			// Income
			// 
			this->Income->HeaderText = L"Доход";
			this->Income->MinimumWidth = 8;
			this->Income->Name = L"Income";
			this->Income->Width = 80;
			// 
			// CarWeight
			// 
			this->CarWeight->HeaderText = L"Вес личного транспорта";
			this->CarWeight->MinimumWidth = 8;
			this->CarWeight->Name = L"CarWeight";
			this->CarWeight->Width = 90;
			// 
			// DistrictSquare
			// 
			this->DistrictSquare->HeaderText = L"Площадь участка";
			this->DistrictSquare->MinimumWidth = 8;
			this->DistrictSquare->Name = L"DistrictSquare";
			this->DistrictSquare->Width = 85;
			// 
			// DistrictCost
			// 
			this->DistrictCost->HeaderText = L"Стоимость участка";
			this->DistrictCost->MinimumWidth = 8;
			this->DistrictCost->Name = L"DistrictCost";
			this->DistrictCost->Width = 90;
			// 
			// FlatSquare
			// 
			this->FlatSquare->HeaderText = L"Площадь квартиры";
			this->FlatSquare->MinimumWidth = 8;
			this->FlatSquare->Name = L"FlatSquare";
			this->FlatSquare->Width = 85;
			// 
			// FlatCost
			// 
			this->FlatCost->HeaderText = L"Стоимость квартиры";
			this->FlatCost->MinimumWidth = 8;
			this->FlatCost->Name = L"FlatCost";
			this->FlatCost->Width = 90;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(564, 504);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Налоги";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle9->NullValue = nullptr;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Surname1,
					this->Nam1, this->PodohodniyNalog, this->TransportniyNalog, this->ZemelniyNalog, this->NalogNaNedvizhimost
			});
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle12->Format = L"N1";
			dataGridViewCellStyle12->NullValue = nullptr;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView2->Location = System::Drawing::Point(41, 543);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->Format = L"N1";
			dataGridViewCellStyle13->NullValue = nullptr;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView2->RowHeadersWidth = 62;
			dataGridViewCellStyle14->Format = L"N1";
			dataGridViewCellStyle14->NullValue = nullptr;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridView2->RowTemplate->DefaultCellStyle->Format = L"N1";
			this->dataGridView2->RowTemplate->DefaultCellStyle->NullValue = nullptr;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(1131, 370);
			this->dataGridView2->TabIndex = 4;
			// 
			// Surname1
			// 
			this->Surname1->Frozen = true;
			this->Surname1->HeaderText = L"Фамилия";
			this->Surname1->MinimumWidth = 8;
			this->Surname1->Name = L"Surname1";
			this->Surname1->Width = 90;
			// 
			// Nam1
			// 
			this->Nam1->Frozen = true;
			this->Nam1->HeaderText = L"Имя";
			this->Nam1->MinimumWidth = 8;
			this->Nam1->Name = L"Nam1";
			this->Nam1->Width = 80;
			// 
			// PodohodniyNalog
			// 
			this->PodohodniyNalog->HeaderText = L"Подоходный налог";
			this->PodohodniyNalog->MinimumWidth = 8;
			this->PodohodniyNalog->Name = L"PodohodniyNalog";
			this->PodohodniyNalog->Width = 130;
			// 
			// TransportniyNalog
			// 
			this->TransportniyNalog->HeaderText = L"Транспортный налог";
			this->TransportniyNalog->MinimumWidth = 8;
			this->TransportniyNalog->Name = L"TransportniyNalog";
			this->TransportniyNalog->Width = 130;
			// 
			// ZemelniyNalog
			// 
			dataGridViewCellStyle10->Format = L"N1";
			dataGridViewCellStyle10->NullValue = nullptr;
			this->ZemelniyNalog->DefaultCellStyle = dataGridViewCellStyle10;
			this->ZemelniyNalog->HeaderText = L"Земельный налог";
			this->ZemelniyNalog->MinimumWidth = 8;
			this->ZemelniyNalog->Name = L"ZemelniyNalog";
			this->ZemelniyNalog->Width = 130;
			// 
			// NalogNaNedvizhimost
			// 
			dataGridViewCellStyle11->Format = L"N1";
			dataGridViewCellStyle11->NullValue = nullptr;
			this->NalogNaNedvizhimost->DefaultCellStyle = dataGridViewCellStyle11;
			this->NalogNaNedvizhimost->HeaderText = L"Налог на недвижимость";
			this->NalogNaNedvizhimost->MinimumWidth = 8;
			this->NalogNaNedvizhimost->Name = L"NalogNaNedvizhimost";
			this->NalogNaNedvizhimost->Width = 130;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1211, 944);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Автоматизация данных";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void поискToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);

public: void ShowSearchedTax();
public: void ShowAddedPerson();

private: System::Void сохранитьТаблицуНалоговToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сохранитьДанныеОПлательщиковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void опрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void расчетНалоговToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void добавитьПлательщика_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void поПодоходномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void поТранспортномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void поЗеменльномуНалогуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void поНалогуНаНедвижимостьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void удалить_Click(System::Object^ sender, System::EventArgs^ e);
};
}
