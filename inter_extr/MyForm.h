#pragma once
#include <fstream>
#include <iostream>

namespace interextr {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		double* koeff;
		int n;
		int mY; int mX;
	private: System::Windows::Forms::TextBox^ textBox7;
	public:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Label^ labelOK;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxX1;
	private: System::Windows::Forms::TextBox^ textBoxX2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxIterations;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBoxMinimum;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заданиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ руководствоПользователяToolStripMenuItem;





	private: System::Windows::Forms::Label^ labelKind;





	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;












	private: System::Windows::Forms::ToolStripMenuItem^ cthdbcToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вводИсходныхДанныхИзФайлаToolStripMenuItem;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;

	private:
		String^ CWindows;
		String^ CDir;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заданиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->руководствоПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cthdbcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вводИсходныхДанныхИзФайлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelKind = (gcnew System::Windows::Forms::Label());
			this->labelOK = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxX1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxIterations = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxMinimum = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->помощьToolStripMenuItem, this->cthdbcToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1160, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->файлToolStripMenuItem->Text = L"Выход";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::файлToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->заданиеToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->руководствоПользователяToolStripMenuItem
			});
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// заданиеToolStripMenuItem
			// 
			this->заданиеToolStripMenuItem->Name = L"заданиеToolStripMenuItem";
			this->заданиеToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->заданиеToolStripMenuItem->Text = L"Задание";
			this->заданиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заданиеToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// руководствоПользователяToolStripMenuItem
			// 
			this->руководствоПользователяToolStripMenuItem->Name = L"руководствоПользователяToolStripMenuItem";
			this->руководствоПользователяToolStripMenuItem->Size = System::Drawing::Size(278, 26);
			this->руководствоПользователяToolStripMenuItem->Text = L"Руководство пользователя";
			this->руководствоПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::руководствоПользователяToolStripMenuItem_Click);
			// 
			// cthdbcToolStripMenuItem
			// 
			this->cthdbcToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вводИсходныхДанныхИзФайлаToolStripMenuItem });
			this->cthdbcToolStripMenuItem->Name = L"cthdbcToolStripMenuItem";
			this->cthdbcToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->cthdbcToolStripMenuItem->Text = L"Файл";
			// 
			// вводИсходныхДанныхИзФайлаToolStripMenuItem
			// 
			this->вводИсходныхДанныхИзФайлаToolStripMenuItem->Name = L"вводИсходныхДанныхИзФайлаToolStripMenuItem";
			this->вводИсходныхДанныхИзФайлаToolStripMenuItem->Size = System::Drawing::Size(320, 26);
			this->вводИсходныхДанныхИзФайлаToolStripMenuItem->Text = L"Ввод исходных данных из файла";
			this->вводИсходныхДанныхИзФайлаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вводИсходныхДанныхИзФайлаToolStripMenuItem_Click);
			// 
			// labelKind
			// 
			this->labelKind->AutoSize = true;
			this->labelKind->BackColor = System::Drawing::Color::Transparent;
			this->labelKind->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelKind->Location = System::Drawing::Point(177, 291);
			this->labelKind->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelKind->Name = L"labelKind";
			this->labelKind->Size = System::Drawing::Size(216, 28);
			this->labelKind->TabIndex = 14;
			this->labelKind->Text = L"Флаг вида экстремума";
			this->labelKind->Click += gcnew System::EventHandler(this, &MyForm::labelKind_Click);
			// 
			// labelOK
			// 
			this->labelOK->AutoSize = true;
			this->labelOK->BackColor = System::Drawing::Color::Transparent;
			this->labelOK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOK->Location = System::Drawing::Point(177, 252);
			this->labelOK->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelOK->Name = L"labelOK";
			this->labelOK->Size = System::Drawing::Size(261, 28);
			this->labelOK->TabIndex = 14;
			this->labelOK->Text = L"Флаг достижения точности";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(221, 137);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(217, 38);
			this->textBox7->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(21, 137);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 28);
			this->label7->TabIndex = 11;
			this->label7->Text = L"За сколько шагов:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(221, 87);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 38);
			this->textBox5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(21, 92);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 28);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Значение F(x):";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(221, 41);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 38);
			this->textBox4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(21, 45);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Значение Х:";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"*.txt";
			this->openFileDialog->Filter = L"Все файлы|*.*";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ввод функции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 270);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Интервал (Х):";
			// 
			// textBoxX1
			// 
			this->textBoxX1->Location = System::Drawing::Point(305, 277);
			this->textBoxX1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxX1->Name = L"textBoxX1";
			this->textBoxX1->Size = System::Drawing::Size(81, 22);
			this->textBoxX1->TabIndex = 4;
			this->textBoxX1->Text = L"-10";
			this->textBoxX1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxX1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBoxX2
			// 
			this->textBoxX2->Location = System::Drawing::Point(394, 277);
			this->textBoxX2->Margin = System::Windows::Forms::Padding(4);
			this->textBoxX2->Name = L"textBoxX2";
			this->textBoxX2->Size = System::Drawing::Size(81, 22);
			this->textBoxX2->TabIndex = 4;
			this->textBoxX2->Text = L"10";
			this->textBoxX2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxX2->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 300);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Точность вычислений (eps):";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(305, 307);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0,001";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(26, 335);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Шаг поиска (h):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(305, 337);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(172, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(26, 361);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(202, 28);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Максимум итераций";
			// 
			// textBoxIterations
			// 
			this->textBoxIterations->Location = System::Drawing::Point(305, 367);
			this->textBoxIterations->Margin = System::Windows::Forms::Padding(4);
			this->textBoxIterations->Name = L"textBoxIterations";
			this->textBoxIterations->Size = System::Drawing::Size(172, 22);
			this->textBoxIterations->TabIndex = 8;
			this->textBoxIterations->Text = L"1000";
			this->textBoxIterations->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxIterations->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(366, 420);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 48);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(27, 78);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(553, 130);
			this->textBox6->TabIndex = 10;
			// 
			// comboBoxMinimum
			// 
			this->comboBoxMinimum->FormattingEnabled = true;
			this->comboBoxMinimum->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Искать минимум", L"Искать максимум" });
			this->comboBoxMinimum->Location = System::Drawing::Point(305, 244);
			this->comboBoxMinimum->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxMinimum->Name = L"comboBoxMinimum";
			this->comboBoxMinimum->Size = System::Drawing::Size(172, 24);
			this->comboBoxMinimum->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(24, 237);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(113, 28);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Что искать:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->labelKind);
			this->groupBox1->Controls->Add(this->labelOK);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(658, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(472, 387);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результаты";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1160, 481);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxMinimum);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxIterations);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBoxX2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBoxX1);
			this->Controls->Add(this->label3);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Метод квадратичной интерполяции-экстраполяции";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBoxMinimum->SelectedIndex = 1;
		CWindows = Environment::GetFolderPath(Environment::SpecialFolder::Windows);
		String^ FrameWork = CWindows + "\\Microsoft.NET\\Framework\\";
		for each (auto Dir in Directory::GetDirectories(FrameWork)) {
			if (File::Exists(Dir + "\\csc.exe")) {

				//CDir = "c:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\MSBuild\15.0\Bin\amd64\MSBuild.exe";//(Path::GetFileName(Dir));
				CDir = "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\MSBuild\\Current\\Bin\\MSBuild.exe";//(Path::GetFileName(Dir));
				break;
			}
		}
		String^ path = Path::GetDirectoryName(Application::ExecutablePath);
		path += "\\..\\..\\inter_extr_solver\\";

		if (File::Exists(path + "Function.h"))
			textBox6->Lines = File::ReadAllLines(path + "Function.h", System::Text::Encoding::Default);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		double x_ = Convert::ToDouble(textBoxX1->Text);
		double start = x_;
		x_ = Convert::ToDouble(textBoxX2->Text);
		double finish = x_;

		double eps = Convert::ToDouble(textBox2->Text);
		double h = Convert::ToDouble(textBox3->Text);
		int maxiterations = Convert::ToInt32(textBoxIterations->Text);
		String^ findMinimum = "false";
		if (comboBoxMinimum->SelectedIndex == 0) findMinimum = "true";

		String^ path = Path::GetDirectoryName(Application::ExecutablePath);

		//**
		path = Path::GetDirectoryName(path);
		path = Path::GetDirectoryName(path);
		path += "\\inter_extr_solver\\";

		String^ ProjectName = path + gcnew String("inter_extr_solver.vcxproj");
		//Найти и удалить файлы в каталогах \release и \debug 
		String^ CleanName = Path::GetFileNameWithoutExtension(ProjectName);
		String^ ExeFile1 = path + "release\\" + CleanName + ".exe";
		if (File::Exists(ExeFile1))
			File::Delete(ExeFile1);
		String^ ExeFile2 = path + "debug\\" + CleanName + ".exe";
		if (File::Exists(ExeFile2))
			File::Delete(ExeFile2);
		//?x64
		String^ ExeFile3 = "..\\x64\\release\\" + CleanName + ".exe";
		if (File::Exists(ExeFile3))
			File::Delete(ExeFile3);
		String^ ExeFile4 = "..\\x64\\debug\\" + CleanName + ".exe";
		if (File::Exists(ExeFile4))
			File::Delete(ExeFile4);
		//Добавить при необходимости кавычки
		if (ProjectName->IndexOf(" ") >= 0)
			ProjectName = "\"" + ProjectName + "\"";

		String^ ResultFile = Path::GetDirectoryName(Application::ExecutablePath) + "\\result.txt";
		if (File::Exists(ResultFile)) File::Delete(ResultFile); //Удаляется результат
		//Добавить при необходимости кавычки
		String^ QuatedResultFile = "\"" + ResultFile + "\"";

		String^ FunctionName = path + "Function.h";
		File::Delete(FunctionName);
		File::WriteAllLines(FunctionName, textBox6->Lines, System::Text::Encoding::Default);
		//Записать параметры в Parametrs.h
		String^ ParametersName = path + "Parameters.h";
		File::Delete(ParametersName);
		StreamWriter^ F = gcnew StreamWriter(ParametersName,false,System::Text::Encoding::Default);

		F->WriteLine("#pragma once");
		F->WriteLine("double x1 = " + start.ToString()->Replace(",", ".") + ";");
		F->WriteLine("double x2 = " + finish.ToString()->Replace(",", ".") + ";");
		F->WriteLine("double h = " + h.ToString()->Replace(",", ".") + ";");
		F->WriteLine("double eps = " + eps.ToString()->Replace(",", ".") + ";");
		F->WriteLine("int maxiterations = " + maxiterations.ToString() + ";");
		F->WriteLine("bool findMinimum = "+findMinimum + ";");
		String^ SlashedResultFile = ResultFile->Replace("\\", "\\\\");
		F->WriteLine("char filename[] = \"" + SlashedResultFile + "\";");

		F->Close();
		//Скомпилировать
		String^ CompilerName = "c:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\MSBuild\\Current\\Bin\\MSBuild.exe";CWindows + "\\Microsoft.NET\\Framework\\" + CDir + "\\msbuild.exe";

		//!!
		//CompilerName = "U:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\MSBuild\\Current\\Bin\\MSBuild.exe";
		//!!
		Process^ P = Process::Start(CompilerName, ProjectName);
		while (!P->HasExited) Application::DoEvents();
		//Удачно ли?
		String^ ExeName = "";
		if (File::Exists(ExeFile1))	ExeName = ExeFile1;
		if (File::Exists(ExeFile2))	ExeName = ExeFile2;
		if (File::Exists(ExeFile3))	ExeName = ExeFile3;
		if (File::Exists(ExeFile4))	ExeName = ExeFile4;

		if (ExeName->IndexOf(" ") >= 0)
			ExeName = "\"" + ExeName + "\"";

		if (ExeName == "") {
		   MessageBox::Show ("Ошибка компиляции");//textBox4->Text = "ошибка компиляции"
			return;
		}
		//String^ ExeName = Path::GetDirectoryName(textBoxPath->Text) + "\\debug\\" + Path::GetFileNameWithoutExtension(ProjectName) + ".exe";
		//Запустить с параметром "куда результат"
		try
		{
			P = Process::Start(ExeName, QuatedResultFile);
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		//Подождать завершения
		while (!P->HasExited) Application::DoEvents();
		//Прочитать результат
		if (File::Exists(ResultFile))
		{
			array<String^>^ results = File::ReadAllLines(ResultFile);
			textBox4->Text = results[0];
			textBox5->Text = results[1];
			textBox7->Text = results[2];
			labelOK->Text = (results[3] == "OK" ? "Точность достигнута" : "Точность не достигнута");

			if (comboBoxMinimum->SelectedIndex == 0)
				if (results[4] == "OK")
					labelKind->Text = "Найден минимум";
				else
					labelKind->Text = "Минимум не найден, ближайший экстремум  - максимум!";
			else
				if (results[4] == "OK")
						labelKind->Text = "Найден максимум";
				else
					labelKind->Text = "Максимум не найден, ближайший экстремум  - минимум!";
		}
		else
		{
			textBox4->Text = "Что то пошло не так";
			return;
		}
		return;
		
	}
	private:
		bool readFromFile(String^ FileName)
		{
			array<String^>^ fs = File::ReadAllLines(FileName);
			if (fs->Length < 1) return false;
			textBoxX1->Text = Convert::ToString(fs[0]);
			if (fs->Length < 2) return false;
			textBox2->Text = Convert::ToString(fs[1]);
			if (fs->Length < 3) return false;
			textBox3->Text = Convert::ToString(fs[2]);
			return true;
		}

	private: System::Void вводИсходныхДанныхИзФайлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		readFromFile(openFileDialog->FileName);
	}

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		TextBox^ textBox1 = (TextBox^)sender;
		try {
			System::Double val = System::Convert::ToDouble(textBoxX1->Text);
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show("Входная строка имела неверный формат"); //MessageBox::Show(ex->Message, "Входная строка имела неверный формат");
			textBox1->Text = "-10";
		}
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::Double val = System::Convert::ToDouble(textBox2->Text);
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show("Входная строка имела неверный формат");//MessageBox::Show(ex->Message, "Входная строка имела неверный формат");
			textBox2->Text = "0,001";
	
		}
	}
	private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::Double val = System::Convert::ToDouble(textBox3->Text);

		}
		catch (Exception ^ ex)
		{
			MessageBox::Show( "Входная строка имела неверный формат");//MessageBox::Show(ex->Message, "Входная строка имела неверный формат");
			textBox3->Text = "0,1";
		}
	}
	private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) { //textBoxIterations_TextChanged
		try {
			System::Double val = System::Convert::ToInt32(textBoxIterations->Text);

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Входная строка имела неверный формат");//MessageBox::Show(ex->Message, "Входная строка имела неверный формат");
			textBoxIterations->Text = "1000";
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void файлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void labelKind_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void заданиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void руководствоПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
