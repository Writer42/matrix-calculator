#pragma once

#include <ctime>
#include <cstdlib>
#include <vector>
#include <cmath>




namespace Cursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	protected:
	protected:
	private: System::Windows::Forms::Label^  labelCurrentCellA;
	private: System::Windows::Forms::DataGridView^  dataGridMatrixB;
	private: System::Windows::Forms::Button^  buttonSwap_A_B;

	private: System::Windows::Forms::TextBox^  textBoxRowB;
	private: System::Windows::Forms::TextBox^  textBoxColB;

	private: System::Windows::Forms::Button^  buttonClear_B;
	private: System::Windows::Forms::Button^  buttonDetB;
	private: System::Windows::Forms::Button^  buttonTranspB;

	private: System::Windows::Forms::Button^  buttonAcceptB;
	private: System::Windows::Forms::Label^  labelColumnsB;

	private: System::Windows::Forms::Label^  labelRowsB;

	private: System::Windows::Forms::Button^  buttonPlus;
	private: System::Windows::Forms::Button^  buttonMinus;
	private: System::Windows::Forms::Button^  buttonMultip;

	private: System::Windows::Forms::TextBox^  textBoxRowA;
	private: System::Windows::Forms::TextBox^  textBoxColA;

	private: System::Windows::Forms::Button^  buttonClear_A;
	private: System::Windows::Forms::Button^  buttonDetA;
	private: System::Windows::Forms::Button^  buttonTranspA;

	private: System::Windows::Forms::Button^  buttonAcceptA;
	private: System::Windows::Forms::Label^  labelColumnsA;

	private: System::Windows::Forms::Label^  labelRowsA;

	private: System::Windows::Forms::DataGridView^  dataGridMatrixA;
	private: System::Windows::Forms::DataGridView^  dataGridMatrixRes;
	private: System::Windows::Forms::Button^  buttonCopyA;
	private: System::Windows::Forms::Button^  buttonCopyB;

	private: System::Windows::Forms::LinkLabel^  linkAbout;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  buttonRandomA;
	private: System::Windows::Forms::Button^  buttonReverseA;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel4;
	private: System::Windows::Forms::Label^  labelA;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel5;
	private: System::Windows::Forms::Button^  buttonRandomB;
	private: System::Windows::Forms::Button^  buttonReverseB;
	private: System::Windows::Forms::Label^  labelB;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel6;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel7;
	private: System::Windows::Forms::Label^  labelRes;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel8;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel9;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel10;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

	private: System::ComponentModel::IContainer^  components;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->labelCurrentCellA = (gcnew System::Windows::Forms::Label());
			this->dataGridMatrixB = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSwap_A_B = (gcnew System::Windows::Forms::Button());
			this->textBoxRowB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColB = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear_B = (gcnew System::Windows::Forms::Button());
			this->buttonDetB = (gcnew System::Windows::Forms::Button());
			this->buttonTranspB = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptB = (gcnew System::Windows::Forms::Button());
			this->labelColumnsB = (gcnew System::Windows::Forms::Label());
			this->labelRowsB = (gcnew System::Windows::Forms::Label());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMultip = (gcnew System::Windows::Forms::Button());
			this->textBoxRowA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColA = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear_A = (gcnew System::Windows::Forms::Button());
			this->buttonDetA = (gcnew System::Windows::Forms::Button());
			this->buttonTranspA = (gcnew System::Windows::Forms::Button());
			this->buttonAcceptA = (gcnew System::Windows::Forms::Button());
			this->labelColumnsA = (gcnew System::Windows::Forms::Label());
			this->labelRowsA = (gcnew System::Windows::Forms::Label());
			this->dataGridMatrixA = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridMatrixRes = (gcnew System::Windows::Forms::DataGridView());
			this->buttonCopyA = (gcnew System::Windows::Forms::Button());
			this->buttonCopyB = (gcnew System::Windows::Forms::Button());
			this->linkAbout = (gcnew System::Windows::Forms::LinkLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonRandomB = (gcnew System::Windows::Forms::Button());
			this->buttonReverseB = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonReverseA = (gcnew System::Windows::Forms::Button());
			this->buttonRandomA = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixRes))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelCurrentCellA
			// 
			this->labelCurrentCellA->AutoSize = true;
			this->labelCurrentCellA->Location = System::Drawing::Point(14, 342);
			this->labelCurrentCellA->Name = L"labelCurrentCellA";
			this->labelCurrentCellA->Size = System::Drawing::Size(0, 13);
			this->labelCurrentCellA->TabIndex = 9;
			// 
			// dataGridMatrixB
			// 
			this->dataGridMatrixB->AllowUserToAddRows = false;
			this->dataGridMatrixB->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridMatrixB->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridMatrixB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridMatrixB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridMatrixB->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridMatrixB->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridMatrixB->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridMatrixB->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridMatrixB->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridMatrixB->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridMatrixB->Location = System::Drawing::Point(359, 2);
			this->dataGridMatrixB->Margin = System::Windows::Forms::Padding(2);
			this->dataGridMatrixB->MultiSelect = false;
			this->dataGridMatrixB->Name = L"dataGridMatrixB";
			this->dataGridMatrixB->RowHeadersVisible = false;
			this->dataGridMatrixB->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridMatrixB->RowTemplate->Height = 24;
			this->dataGridMatrixB->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridMatrixB->Size = System::Drawing::Size(262, 232);
			this->dataGridMatrixB->TabIndex = 10;
			// 
			// buttonSwap_A_B
			// 
			this->buttonSwap_A_B->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonSwap_A_B->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSwap_A_B.BackgroundImage")));
			this->buttonSwap_A_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSwap_A_B->Location = System::Drawing::Point(3, 3);
			this->buttonSwap_A_B->Name = L"buttonSwap_A_B";
			this->buttonSwap_A_B->Size = System::Drawing::Size(38, 39);
			this->buttonSwap_A_B->TabIndex = 11;
			this->buttonSwap_A_B->UseVisualStyleBackColor = true;
			this->buttonSwap_A_B->Click += gcnew System::EventHandler(this, &MainForm::buttonSwap_A_B_Click);
			// 
			// textBoxRowB
			// 
			this->textBoxRowB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxRowB->Location = System::Drawing::Point(3, 16);
			this->textBoxRowB->Name = L"textBoxRowB";
			this->textBoxRowB->Size = System::Drawing::Size(99, 20);
			this->textBoxRowB->TabIndex = 12;
			this->textBoxRowB->Text = L"3";
			// 
			// textBoxColB
			// 
			this->textBoxColB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxColB->Location = System::Drawing::Point(108, 16);
			this->textBoxColB->Name = L"textBoxColB";
			this->textBoxColB->Size = System::Drawing::Size(100, 20);
			this->textBoxColB->TabIndex = 14;
			this->textBoxColB->Text = L"3";
			// 
			// buttonClear_B
			// 
			this->buttonClear_B->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonClear_B->Location = System::Drawing::Point(3, 42);
			this->buttonClear_B->Name = L"buttonClear_B";
			this->buttonClear_B->Size = System::Drawing::Size(99, 24);
			this->buttonClear_B->TabIndex = 12;
			this->buttonClear_B->Text = L"Очистить";
			this->buttonClear_B->UseVisualStyleBackColor = true;
			this->buttonClear_B->Click += gcnew System::EventHandler(this, &MainForm::buttonClear_B_Click);
			// 
			// buttonDetB
			// 
			this->buttonDetB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonDetB->Enabled = false;
			this->buttonDetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDetB->Location = System::Drawing::Point(107, 71);
			this->buttonDetB->Margin = System::Windows::Forms::Padding(2);
			this->buttonDetB->Name = L"buttonDetB";
			this->buttonDetB->Size = System::Drawing::Size(101, 41);
			this->buttonDetB->TabIndex = 11;
			this->buttonDetB->Text = L"Определитель";
			this->buttonDetB->UseVisualStyleBackColor = true;
			this->buttonDetB->Click += gcnew System::EventHandler(this, &MainForm::buttonDetB_Click);
			// 
			// buttonTranspB
			// 
			this->buttonTranspB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonTranspB->Enabled = false;
			this->buttonTranspB->Location = System::Drawing::Point(2, 71);
			this->buttonTranspB->Margin = System::Windows::Forms::Padding(2);
			this->buttonTranspB->Name = L"buttonTranspB";
			this->buttonTranspB->Size = System::Drawing::Size(101, 41);
			this->buttonTranspB->TabIndex = 7;
			this->buttonTranspB->Text = L"Транспонировать";
			this->buttonTranspB->UseVisualStyleBackColor = true;
			this->buttonTranspB->Click += gcnew System::EventHandler(this, &MainForm::buttonTranspB_Click);
			// 
			// buttonAcceptB
			// 
			this->buttonAcceptB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAcceptB->Location = System::Drawing::Point(107, 42);
			this->buttonAcceptB->Margin = System::Windows::Forms::Padding(2);
			this->buttonAcceptB->Name = L"buttonAcceptB";
			this->buttonAcceptB->Size = System::Drawing::Size(101, 24);
			this->buttonAcceptB->TabIndex = 2;
			this->buttonAcceptB->Text = L"Применить";
			this->buttonAcceptB->UseVisualStyleBackColor = true;
			this->buttonAcceptB->Click += gcnew System::EventHandler(this, &MainForm::buttonAcceptB_Click);
			// 
			// labelColumnsB
			// 
			this->labelColumnsB->AutoSize = true;
			this->labelColumnsB->Location = System::Drawing::Point(108, 0);
			this->labelColumnsB->Name = L"labelColumnsB";
			this->labelColumnsB->Size = System::Drawing::Size(54, 13);
			this->labelColumnsB->TabIndex = 6;
			this->labelColumnsB->Text = L"Столбцы:";
			// 
			// labelRowsB
			// 
			this->labelRowsB->AutoSize = true;
			this->labelRowsB->Location = System::Drawing::Point(3, 0);
			this->labelRowsB->Name = L"labelRowsB";
			this->labelRowsB->Size = System::Drawing::Size(46, 13);
			this->labelRowsB->TabIndex = 5;
			this->labelRowsB->Text = L"Строки:";
			// 
			// buttonPlus
			// 
			this->buttonPlus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonPlus->Enabled = false;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(3, 138);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(38, 39);
			this->buttonPlus->TabIndex = 16;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MainForm::buttonPlus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonMinus->Enabled = false;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(3, 48);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(38, 39);
			this->buttonMinus->TabIndex = 17;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MainForm::buttonMinus_Click);
			// 
			// buttonMultip
			// 
			this->buttonMultip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonMultip->Enabled = false;
			this->buttonMultip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultip->Location = System::Drawing::Point(3, 93);
			this->buttonMultip->Name = L"buttonMultip";
			this->buttonMultip->Size = System::Drawing::Size(38, 39);
			this->buttonMultip->TabIndex = 18;
			this->buttonMultip->Text = L"*";
			this->buttonMultip->UseVisualStyleBackColor = true;
			this->buttonMultip->Click += gcnew System::EventHandler(this, &MainForm::buttonMultip_Click);
			// 
			// textBoxRowA
			// 
			this->textBoxRowA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxRowA->Location = System::Drawing::Point(8, 16);
			this->textBoxRowA->Name = L"textBoxRowA";
			this->textBoxRowA->Size = System::Drawing::Size(88, 20);
			this->textBoxRowA->TabIndex = 12;
			this->textBoxRowA->Text = L"3";
			this->textBoxRowA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxRowA_KeyPress);
			// 
			// textBoxColA
			// 
			this->textBoxColA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxColA->Location = System::Drawing::Point(113, 16);
			this->textBoxColA->Name = L"textBoxColA";
			this->textBoxColA->Size = System::Drawing::Size(88, 20);
			this->textBoxColA->TabIndex = 14;
			this->textBoxColA->Text = L"3";
			this->textBoxColA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxColA_KeyPress);
			// 
			// buttonClear_A
			// 
			this->buttonClear_A->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonClear_A->Location = System::Drawing::Point(3, 42);
			this->buttonClear_A->Name = L"buttonClear_A";
			this->buttonClear_A->Size = System::Drawing::Size(98, 24);
			this->buttonClear_A->TabIndex = 12;
			this->buttonClear_A->Text = L"Очистить";
			this->buttonClear_A->UseVisualStyleBackColor = true;
			this->buttonClear_A->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// buttonDetA
			// 
			this->buttonDetA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonDetA->Enabled = false;
			this->buttonDetA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDetA->Location = System::Drawing::Point(106, 71);
			this->buttonDetA->Margin = System::Windows::Forms::Padding(2);
			this->buttonDetA->Name = L"buttonDetA";
			this->buttonDetA->Size = System::Drawing::Size(103, 41);
			this->buttonDetA->TabIndex = 11;
			this->buttonDetA->Text = L"Определитель";
			this->buttonDetA->UseVisualStyleBackColor = true;
			this->buttonDetA->Click += gcnew System::EventHandler(this, &MainForm::buttonDetA_Click);
			// 
			// buttonTranspA
			// 
			this->buttonTranspA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonTranspA->Enabled = false;
			this->buttonTranspA->Location = System::Drawing::Point(2, 71);
			this->buttonTranspA->Margin = System::Windows::Forms::Padding(2);
			this->buttonTranspA->Name = L"buttonTranspA";
			this->buttonTranspA->Size = System::Drawing::Size(99, 41);
			this->buttonTranspA->TabIndex = 7;
			this->buttonTranspA->Text = L"Транспонировать";
			this->buttonTranspA->UseVisualStyleBackColor = true;
			this->buttonTranspA->Click += gcnew System::EventHandler(this, &MainForm::buttonTransp_Click);
			// 
			// buttonAcceptA
			// 
			this->buttonAcceptA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonAcceptA->Location = System::Drawing::Point(106, 42);
			this->buttonAcceptA->Margin = System::Windows::Forms::Padding(2);
			this->buttonAcceptA->Name = L"buttonAcceptA";
			this->buttonAcceptA->Size = System::Drawing::Size(103, 24);
			this->buttonAcceptA->TabIndex = 2;
			this->buttonAcceptA->Text = L"Применить";
			this->buttonAcceptA->UseVisualStyleBackColor = true;
			this->buttonAcceptA->Click += gcnew System::EventHandler(this, &MainForm::buttonAcceptA_Click);
			// 
			// labelColumnsA
			// 
			this->labelColumnsA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->labelColumnsA->AutoSize = true;
			this->labelColumnsA->Location = System::Drawing::Point(107, 0);
			this->labelColumnsA->Name = L"labelColumnsA";
			this->labelColumnsA->Size = System::Drawing::Size(54, 13);
			this->labelColumnsA->TabIndex = 6;
			this->labelColumnsA->Text = L"Столбцы:";
			// 
			// labelRowsA
			// 
			this->labelRowsA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->labelRowsA->AutoSize = true;
			this->labelRowsA->Location = System::Drawing::Point(3, 0);
			this->labelRowsA->Name = L"labelRowsA";
			this->labelRowsA->Size = System::Drawing::Size(46, 13);
			this->labelRowsA->TabIndex = 5;
			this->labelRowsA->Text = L"Строки:";
			// 
			// dataGridMatrixA
			// 
			this->dataGridMatrixA->AllowUserToAddRows = false;
			this->dataGridMatrixA->AllowUserToDeleteRows = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridMatrixA->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridMatrixA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridMatrixA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridMatrixA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridMatrixA->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridMatrixA->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridMatrixA->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridMatrixA->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridMatrixA->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridMatrixA->Location = System::Drawing::Point(15, 2);
			this->dataGridMatrixA->Margin = System::Windows::Forms::Padding(2);
			this->dataGridMatrixA->MultiSelect = false;
			this->dataGridMatrixA->Name = L"dataGridMatrixA";
			this->dataGridMatrixA->RowHeadersVisible = false;
			this->dataGridMatrixA->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridMatrixA->RowTemplate->Height = 24;
			this->dataGridMatrixA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridMatrixA->Size = System::Drawing::Size(262, 232);
			this->dataGridMatrixA->TabIndex = 3;
			this->dataGridMatrixA->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MainForm::dataGridMatrixA_EditingControlShowing);
			// 
			// dataGridMatrixRes
			// 
			this->dataGridMatrixRes->AllowUserToAddRows = false;
			this->dataGridMatrixRes->AllowUserToDeleteRows = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridMatrixRes->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridMatrixRes->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridMatrixRes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridMatrixRes->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridMatrixRes->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridMatrixRes->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridMatrixRes->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridMatrixRes->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridMatrixRes->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridMatrixRes->Location = System::Drawing::Point(2, 2);
			this->dataGridMatrixRes->Margin = System::Windows::Forms::Padding(2);
			this->dataGridMatrixRes->MultiSelect = false;
			this->dataGridMatrixRes->Name = L"dataGridMatrixRes";
			this->dataGridMatrixRes->RowHeadersVisible = false;
			this->dataGridMatrixRes->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->dataGridMatrixRes->RowTemplate->Height = 24;
			this->dataGridMatrixRes->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridMatrixRes->Size = System::Drawing::Size(245, 232);
			this->dataGridMatrixRes->TabIndex = 19;
			// 
			// buttonCopyA
			// 
			this->buttonCopyA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCopyA->Enabled = false;
			this->buttonCopyA->Location = System::Drawing::Point(3, 15);
			this->buttonCopyA->Name = L"buttonCopyA";
			this->buttonCopyA->Size = System::Drawing::Size(85, 41);
			this->buttonCopyA->TabIndex = 20;
			this->buttonCopyA->Text = L"Копировать в А";
			this->buttonCopyA->UseVisualStyleBackColor = true;
			this->buttonCopyA->Click += gcnew System::EventHandler(this, &MainForm::buttonCopyA_Click);
			// 
			// buttonCopyB
			// 
			this->buttonCopyB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCopyB->Enabled = false;
			this->buttonCopyB->Location = System::Drawing::Point(94, 15);
			this->buttonCopyB->Name = L"buttonCopyB";
			this->buttonCopyB->Size = System::Drawing::Size(85, 41);
			this->buttonCopyB->TabIndex = 21;
			this->buttonCopyB->Text = L"Копировать в Б";
			this->buttonCopyB->UseVisualStyleBackColor = true;
			this->buttonCopyB->Click += gcnew System::EventHandler(this, &MainForm::buttonCopyB_Click);
			// 
			// linkAbout
			// 
			this->linkAbout->AutoSize = true;
			this->linkAbout->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->linkAbout->Location = System::Drawing::Point(857, 0);
			this->linkAbout->Name = L"linkAbout";
			this->linkAbout->Size = System::Drawing::Size(75, 13);
			this->linkAbout->TabIndex = 23;
			this->linkAbout->TabStop = true;
			this->linkAbout->Text = L"О программе";
			this->linkAbout->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkAbout_LinkClicked);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				8)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				46)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->dataGridMatrixA, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->dataGridMatrixB, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(8, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(637, 465);
			this->tableLayoutPanel1->TabIndex = 24;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->labelB, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->tableLayoutPanel5, 0, 1);
			this->tableLayoutPanel6->Location = System::Drawing::Point(381, 255);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel6->Size = System::Drawing::Size(217, 191);
			this->tableLayoutPanel6->TabIndex = 27;
			// 
			// labelB
			// 
			this->labelB->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(76, 0);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(64, 13);
			this->labelB->TabIndex = 26;
			this->labelB->Text = L"Матрица В:";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->buttonRandomB, 1, 4);
			this->tableLayoutPanel5->Controls->Add(this->buttonReverseB, 0, 4);
			this->tableLayoutPanel5->Controls->Add(this->textBoxColB, 1, 1);
			this->tableLayoutPanel5->Controls->Add(this->buttonTranspB, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->buttonDetB, 1, 3);
			this->tableLayoutPanel5->Controls->Add(this->buttonClear_B, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->textBoxRowB, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->labelRowsB, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->buttonAcceptB, 1, 2);
			this->tableLayoutPanel5->Controls->Add(this->labelColumnsB, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 5;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->Size = System::Drawing::Size(211, 176);
			this->tableLayoutPanel5->TabIndex = 25;
			// 
			// buttonRandomB
			// 
			this->buttonRandomB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRandomB->Enabled = false;
			this->buttonRandomB->Location = System::Drawing::Point(108, 124);
			this->buttonRandomB->Name = L"buttonRandomB";
			this->buttonRandomB->Size = System::Drawing::Size(99, 41);
			this->buttonRandomB->TabIndex = 4;
			this->buttonRandomB->Text = L"Случайное \r\nзаполнение";
			this->buttonRandomB->UseVisualStyleBackColor = true;
			this->buttonRandomB->Click += gcnew System::EventHandler(this, &MainForm::buttonRandomB_Click);
			// 
			// buttonReverseB
			// 
			this->buttonReverseB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonReverseB->Enabled = false;
			this->buttonReverseB->Location = System::Drawing::Point(3, 124);
			this->buttonReverseB->Name = L"buttonReverseB";
			this->buttonReverseB->Size = System::Drawing::Size(99, 41);
			this->buttonReverseB->TabIndex = 13;
			this->buttonReverseB->Text = L"Обратная\r\n матрица";
			this->buttonReverseB->UseVisualStyleBackColor = true;
			this->buttonReverseB->Click += gcnew System::EventHandler(this, &MainForm::buttonReverseB_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->buttonSwap_A_B, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->buttonMinus, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->buttonMultip, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->buttonPlus, 0, 3);
			this->tableLayoutPanel2->Location = System::Drawing::Point(296, 28);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(44, 179);
			this->tableLayoutPanel2->TabIndex = 16;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->labelA, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(38, 249);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->Size = System::Drawing::Size(217, 202);
			this->tableLayoutPanel4->TabIndex = 26;
			// 
			// labelA
			// 
			this->labelA->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelA->AutoSize = true;
			this->labelA->Location = System::Drawing::Point(76, 0);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(64, 13);
			this->labelA->TabIndex = 27;
			this->labelA->Text = L"Матрица А:";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.31507F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.68493F)));
			this->tableLayoutPanel3->Controls->Add(this->labelRowsA, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBoxRowA, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->labelColumnsA, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBoxColA, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->buttonAcceptA, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->buttonClear_A, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->buttonTranspA, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->buttonDetA, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->buttonReverseA, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->buttonRandomA, 1, 4);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 19);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 5;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->Size = System::Drawing::Size(211, 176);
			this->tableLayoutPanel3->TabIndex = 25;
			// 
			// buttonReverseA
			// 
			this->buttonReverseA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonReverseA->Enabled = false;
			this->buttonReverseA->Location = System::Drawing::Point(3, 124);
			this->buttonReverseA->Name = L"buttonReverseA";
			this->buttonReverseA->Size = System::Drawing::Size(98, 41);
			this->buttonReverseA->TabIndex = 13;
			this->buttonReverseA->Text = L"Обратная\r\n матрица";
			this->buttonReverseA->UseVisualStyleBackColor = true;
			this->buttonReverseA->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// buttonRandomA
			// 
			this->buttonRandomA->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonRandomA->Enabled = false;
			this->buttonRandomA->Location = System::Drawing::Point(107, 124);
			this->buttonRandomA->Name = L"buttonRandomA";
			this->buttonRandomA->Size = System::Drawing::Size(101, 41);
			this->buttonRandomA->TabIndex = 4;
			this->buttonRandomA->Text = L"Случайное \r\nзаполнение";
			this->buttonRandomA->UseVisualStyleBackColor = true;
			this->buttonRandomA->Click += gcnew System::EventHandler(this, &MainForm::buttonRandA_Click);
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel7->Controls->Add(this->buttonCopyB, 1, 0);
			this->tableLayoutPanel7->Controls->Add(this->buttonCopyA, 0, 0);
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 16);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(182, 72);
			this->tableLayoutPanel7->TabIndex = 25;
			// 
			// labelRes
			// 
			this->labelRes->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelRes->AutoSize = true;
			this->labelRes->Location = System::Drawing::Point(37, 0);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(114, 13);
			this->labelRes->TabIndex = 26;
			this->labelRes->Text = L"Матрица результата:";
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->tableLayoutPanel7, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->labelRes, 0, 0);
			this->tableLayoutPanel8->Location = System::Drawing::Point(30, 251);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 2;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel8->Size = System::Drawing::Size(188, 102);
			this->tableLayoutPanel8->TabIndex = 27;
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel9->ColumnCount = 1;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel9->Controls->Add(this->tableLayoutPanel8, 0, 1);
			this->tableLayoutPanel9->Controls->Add(this->dataGridMatrixRes, 0, 0);
			this->tableLayoutPanel9->Location = System::Drawing::Point(670, 51);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 2;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel9->Size = System::Drawing::Size(249, 369);
			this->tableLayoutPanel9->TabIndex = 28;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->AutoScroll = true;
			this->tableLayoutPanel10->AutoSize = true;
			this->tableLayoutPanel10->ColumnCount = 2;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel10->Controls->Add(this->tableLayoutPanel9, 1, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel10->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel10->Size = System::Drawing::Size(935, 471);
			this->tableLayoutPanel10->TabIndex = 29;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->linkAbout);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 482);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(935, 13);
			this->flowLayoutPanel1->TabIndex = 30;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(935, 495);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel10);
			this->Controls->Add(this->labelCurrentCellA);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Матричный Калькулятор  ver. 1.02                                                 "
				L"       ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrixRes))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel10->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		//Очищает DataGridView от строк и столбцов
		void clear_matrix(DataGridView^ table){
			while (0 != table->RowCount)
				table->Rows->RemoveAt(0);
			while (0 != table->ColumnCount)
				table->Columns->RemoveAt(0);
		}

		//Не позволяет вводить ничего, кроме цифр и запятой
		void digit_only(System::Windows::Forms::KeyPressEventArgs^  e){
			if ((e->KeyChar == '.'))
				e->KeyChar = ',';
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '-'))
				return;
			if (Char::IsControl(e->KeyChar))
				return;
			e->Handled = true;

		}
		//Не позволяет вводить ничего, кроме цифр
		void digit_only(System::Windows::Forms::KeyPressEventArgs^  e, bool without_float){
			if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
				return;
			if (Char::IsControl(e->KeyChar))
				return;
			e->Handled = true;


		}
		// Возвращает случайное число в диапазоне от min до max
		int getRandomNumber(int min, int max)
		{
			return rand() % max + 1 - min;
		}
	//Заполняет DataGridView матрицей размера col X row
	void build_matrix(int col, int row, DataGridView^ Matrix){
		for (int i = 0; i != col + 1; i++)
		{

			Matrix->Columns->Add("", System::Convert::ToString(i));
			Matrix->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
		}
		for (int j = 0; j != row; j++)
		{
			Matrix->Rows->Add(System::Convert::ToString(j + 1));
		}
		for (int i = 1; i != col + 1; i++){
			for (int j = 0; j != row; j++){
				Matrix->Rows[j]->Cells[i]->Value = 0;
			}
		}
		Matrix->Columns[0]->ReadOnly = true;
		Matrix->Columns[0]->HeaderText = " ";
	}
		// Заполняет DataGridView элементами из vector-матрицы
		void fill_matrix(DataGridView^ Matrix, vector<vector<double>> vector_matrix){
			int	col = vector_matrix[0].size();
			int	row = vector_matrix.size();
			build_matrix(col, row, Matrix);
			for (int i = 0; i != row; i++){
				for (int j = 1; j != col + 1; j++){
					Matrix->Rows[i]->Cells[j]->Value = vector_matrix[i][j - 1];
				}
			}
		}
		//Возвращает транспонированную матрицу
		vector<vector<double> > matrix_transponation(vector<vector<double> >matrix1){
			vector<vector<double>> matrix2 = vectorize(matrix1[0].size(), matrix1.size());
			for (int i = 0; i < matrix2.size(); i++)
				for (int j = 0; j < matrix2[0].size(); j++)
					matrix2[i][j] = matrix1[j][i];
			return matrix2;

		}
		//Транспонирует DataGridView матрицу
		void matrix_transponation(DataGridView^ Matrix){
			vector<vector<double>> Matrix1 = vectorize(Matrix);
			vector<vector<double>> Matrix2 = matrix_transponation(Matrix1);
			clear_matrix(Matrix);
			fill_matrix(Matrix, Matrix2);

		}
		//Возвращает определитель заданной матрицы
		double m_det(DataGridView^ matrix){
			const double EPS = 1E-9;
			vector<vector<double>> a = vectorize(matrix);
			int n = a.size();
			double det = 1;
			for (int i = 0; i < n; ++i) {
				int k = i;
				for (int j = i + 1; j<n; ++j)
					if (abs(a[j][i]) > abs(a[k][i]))
						k = j;
				if (abs(a[k][i]) < EPS) {
					det = 0;
					break;
				}
				swap(a[i], a[k]);
				if (i != k)
					det = -det;
				det *= a[i][i];
				for (int j = i + 1; j < n; ++j)
					a[i][j] /= a[i][i];
				for (int j = 0; j<n; ++j)
					if (j != i && abs(a[j][i]) > EPS)
						for (int k = i + 1; k < n; ++k)
							a[j][k] -= a[i][k] * a[j][i];
			}
			return det;
		}
		//Возвращает определитель заданной матрицы
		double m_det(vector<vector<double>> a){
			const double EPS = 1E-9;
			int n = a.size();
			double det = 1;
			for (int i = 0; i < n; ++i) {
				int k = i;
				for (int j = i + 1; j<n; ++j)
					if (abs(a[j][i]) > abs(a[k][i]))
						k = j;
				if (abs(a[k][i]) < EPS) {
					det = 0;
					break;
				}
				swap(a[i], a[k]);
				if (i != k)
					det = -det;
				det *= a[i][i];
				for (int j = i + 1; j < n; ++j)
					a[i][j] /= a[i][i];
				for (int j = 0; j<n; ++j)
					if (j != i && abs(a[j][i]) > EPS)
						for (int k = i + 1; k < n; ++k)
							a[j][k] -= a[i][k] * a[j][i];
			}
			return det;
		}
		// возвращает минор матрицы по строке i столбцу j
		vector<vector<double>> minor(vector<vector<double>> matr, int i, int j){
			vector<vector<double>> res;
			res = vectorize(matr.size() - 1, matr[0].size() - 1);
			int i2 = 0, j2 = 0;
			for (int i1 = 0; i1 < matr.size(); i1++){
				j2 = 0;
				for (int j1 = 0; j1 < matr[0].size(); j1++){
					if (i1 != i - 1 && j1 != j - 1){
						res[i2][j2] = matr[i1][j1];
						j2++;
					}
				}
				if (i1 != i - 1)
					i2++;
			}
			return res;
		}
		//Возвращает матрицу, обратную заданной
		vector<vector<double>> reverse_matrix(vector<vector<double>> matr){
			double matr_det = m_det(matr);
			double div_det = 1 / matr_det;
			vector<vector<double>> matr_t = matrix_transponation(matr);
			vector<vector<double>> matr_res = vectorize(matr_t.size(), matr_t[0].size());

			for (int i = 0; i < matr_t.size(); i++){
				for (int j = 0; j < matr_t[0].size(); j++){
					if ((i + j + 2) % 2 == 0){
						matr_res[i][j] = m_det(minor(matr_t, i + 1, j + 1));
						matr_res[i][j] = round(div_det*matr_res[i][j] * 1000) / 1000;
					}
					else{
						matr_res[i][j] = -m_det(minor(matr_t, i + 1, j + 1));
						matr_res[i][j] = round(div_det*matr_res[i][j] * 1000) / 1000;
					}
				}
			}
			return matr_res;
		}
		// Заполняет DataGridView случайными значениями
		void rand_fill(DataGridView^ Matrix, int right_bord){
			int col = Matrix->ColumnCount - 1;
			int row = Matrix->RowCount;
			for (int i = 1; i != col + 1; i++){
				for (int j = 0; j != row; j++){
					Matrix->Rows[j]->Cells[i]->Value = getRandomNumber(1, right_bord+1);
				}
			}

		}
		// Возвращает пустую vector-матрицу размерности rowsXcols
		vector<vector<double>> vectorize(int rows, int cols){
			vector<vector<double>> vec;
			vec.resize(rows);
			for (int i = 0; i < rows; ++i)
				vec[i].resize(cols);
			return vec;
		}
		// Возвращает vector-матрицу, заполненными значениями из matrix
		vector<vector<double>> vectorize(DataGridView^ matrix){
			int col = matrix->ColumnCount - 1;
			int row = matrix->RowCount;
			vector<vector<double>> vec;
			vec.resize(row);
			for (int i = 0; i < row; ++i)
				vec[i].resize(col);
			for (int i = 0; i != row; i++){
				for (int j = 1; j != col + 1; j++){
					vec[i][j - 1] = System::Convert::ToDouble(matrix->Rows[i]->Cells[j]->Value);
				}
			}
			return vec;

		}
		//Включает кнопки копирования матрицы результата
		void enableCopyButtons(){
			buttonCopyA->Enabled = true;
			buttonCopyB->Enabled = true;
		
		}
	private: System::Void buttonAcceptA_Click(System::Object^  sender, System::EventArgs^  e) {
		int Rows, Columns;
		Rows = System::Convert::ToInt32(textBoxRowA->Text);
		Columns = System::Convert::ToInt32(textBoxColA->Text);
		clear_matrix(dataGridMatrixA);
		build_matrix(Columns, Rows, dataGridMatrixA);
		buttonRandomA->Enabled = true;
		buttonTranspA->Enabled = true;
		buttonReverseA->Enabled = true;
		if (dataGridMatrixA->Columns->Count - 1 == dataGridMatrixB->Rows->Count)
			buttonMultip->Enabled = true;
		else
			buttonMultip->Enabled = false;
		if (dataGridMatrixA->Rows->Count == dataGridMatrixB->Rows->Count && dataGridMatrixA->Columns->Count == dataGridMatrixB->Columns->Count){
			buttonPlus->Enabled = true;
			buttonMinus->Enabled = true;
		}
		else{
			buttonPlus->Enabled = false;
			buttonMinus->Enabled = false;
		}
		if (Rows == Columns)
		{
			buttonDetA->Enabled = true;
		}
		else
		{
			buttonDetA->Enabled = false;
		}
	}

	private: System::Void buttonRandA_Click(System::Object^  sender, System::EventArgs^  e) {
		
		rand_fill(dataGridMatrixA, 100);

	}
	private: System::Void buttonTransp_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix_transponation(dataGridMatrixA);
		if (dataGridMatrixA->Columns->Count - 1 == dataGridMatrixB->Rows->Count)
			buttonMultip->Enabled = true;
		else
			buttonMultip->Enabled = false;
		if (dataGridMatrixA->Rows->Count == dataGridMatrixB->Rows->Count && dataGridMatrixA->Columns->Count == dataGridMatrixB->Columns->Count){
			buttonPlus->Enabled = true;
			buttonMinus->Enabled = true;
		}
		else{
			buttonPlus->Enabled = false;
			buttonMinus->Enabled = false;
		}
	}





	private: System::Void dataGridMatrixA_EditingControlShowing(System::Object^  sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^  e) {
		e->Control->KeyPress += gcnew KeyPressEventHandler(this, &MainForm::digit_onlyA);
	}
	private: System::Void digit_onlyA(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e){
		digit_only(e);
	}
	private: System::Void buttonDetA_Click(System::Object^  sender, System::EventArgs^  e) {
		double det = m_det(dataGridMatrixA);
		MessageBox::Show(System::Convert::ToString(det));
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixA);
	}
	private: System::Void buttonSwap_A_B_Click(System::Object^  sender, System::EventArgs^  e) {
		vector < vector<double> > matrixA = vectorize(dataGridMatrixA);
		vector < vector<double> > matrixB = vectorize(dataGridMatrixB);
		if (matrixA.size() == 0 && matrixB.size() == 0)
			return;
		if (matrixA.size() == 0){
			clear_matrix(dataGridMatrixB);
			fill_matrix(dataGridMatrixA, matrixB);
		}
		if (matrixB.size() == 0){
			clear_matrix(dataGridMatrixA);
			fill_matrix(dataGridMatrixB, matrixA);
		}
		if ((matrixA.size() != 0) && (matrixB.size() != 0)) {
			clear_matrix(dataGridMatrixA);
			clear_matrix(dataGridMatrixB);
			fill_matrix(dataGridMatrixB, matrixA);
			fill_matrix(dataGridMatrixA, matrixB);
		}
		if (dataGridMatrixA->Columns->Count - 1 == dataGridMatrixB->Rows->Count)
			buttonMultip->Enabled = true;
		else
			buttonMultip->Enabled = false;
	}
	private: System::Void textBoxRowA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		digit_only(e, 1);
	}
	private: System::Void textBoxColA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		digit_only(e, 1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		vector<vector<double>> matr = vectorize(dataGridMatrixA);
		if (matr.size() != matr[0].size() || m_det(matr) == 0)
			MessageBox::Show("Обратной матрицы не существует!");
		else{
			clear_matrix(dataGridMatrixA);
			matr = reverse_matrix(matr);
			fill_matrix(dataGridMatrixA, matr);

		}
	}
	private: System::Void buttonAcceptB_Click(System::Object^  sender, System::EventArgs^  e) {
		int Rows, Columns;
		Rows = System::Convert::ToInt32(textBoxRowB->Text);
		Columns = System::Convert::ToInt32(textBoxColB->Text);
		clear_matrix(dataGridMatrixB);
		build_matrix(Columns, Rows, dataGridMatrixB);
		buttonRandomB->Enabled = true;
		buttonTranspB->Enabled = true;
		buttonReverseB->Enabled = true;
		if (dataGridMatrixA->Columns->Count - 1 == dataGridMatrixB->Rows->Count)
			buttonMultip->Enabled = true;
		else
			buttonMultip->Enabled = false;
		if (dataGridMatrixA->Rows->Count == dataGridMatrixB->Rows->Count && dataGridMatrixA->Columns->Count == dataGridMatrixB->Columns->Count){
			buttonPlus->Enabled = true;
			buttonMinus->Enabled = true;
		}
		else{
			buttonPlus->Enabled = false;
			buttonMinus->Enabled = false;
		}
		if (Rows == Columns)
		{
			buttonDetB->Enabled = true;
		}
		else
		{
			buttonDetB->Enabled = false;
		}

	}
	private: System::Void buttonClear_B_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixB);
	}
	private: System::Void buttonTranspB_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix_transponation(dataGridMatrixB);
		if (dataGridMatrixA->Columns->Count - 1 == dataGridMatrixB->Rows->Count)
			buttonMultip->Enabled = true;
		else
			buttonMultip->Enabled = false;
		if (dataGridMatrixA->Rows->Count == dataGridMatrixB->Rows->Count && dataGridMatrixA->Columns->Count == dataGridMatrixB->Columns->Count){
			buttonPlus->Enabled = true;
			buttonMinus->Enabled = true;
		}
		else{
			buttonPlus->Enabled = false;
			buttonMinus->Enabled = false;
		}
	}
	private: System::Void buttonDetB_Click(System::Object^  sender, System::EventArgs^  e) {
		double det = m_det(dataGridMatrixB);
		MessageBox::Show("Определитель матрицы B равен: " + System::Convert::ToString(det), "Определитель матрицы");
	}
	private: System::Void buttonReverseB_Click(System::Object^  sender, System::EventArgs^  e) {
		vector<vector<double>> matr = vectorize(dataGridMatrixB);
		if (matr.size() != matr[0].size() || m_det(matr) == 0)
			MessageBox::Show("Обратной матрицы не существует!");
		else{
			clear_matrix(dataGridMatrixB);
			matr = reverse_matrix(matr);
			fill_matrix(dataGridMatrixB, matr);

		}
	}
	private: System::Void buttonRandomB_Click(System::Object^  sender, System::EventArgs^  e) {
		rand_fill(dataGridMatrixB, 100);
	}
	private: System::Void buttonPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixRes);
		enableCopyButtons();
		vector<vector<double>> matrixA = vectorize(dataGridMatrixA);
		vector<vector<double>> matrixB = vectorize(dataGridMatrixB);
		vector<vector<double>> matrixRes = vectorize(matrixA.size(), matrixA[0].size());
		for (int i = 0; i < matrixRes.size(); i++){
			for (int j = 0; j < matrixRes[0].size(); j++){
				matrixRes[i][j] = matrixA[i][j] + matrixB[i][j];
			}
		}
		fill_matrix(dataGridMatrixRes, matrixRes);
	}
	private: System::Void buttonMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixRes);
		enableCopyButtons();
		vector<vector<double>> matrixA = vectorize(dataGridMatrixA);
		vector<vector<double>> matrixB = vectorize(dataGridMatrixB);
		vector<vector<double>> matrixRes = vectorize(matrixA.size(), matrixA[0].size());
		for (int i = 0; i < matrixRes.size(); i++){
			for (int j = 0; j < matrixRes[0].size(); j++){
				matrixRes[i][j] = matrixA[i][j] - matrixB[i][j];
			}
		}
		fill_matrix(dataGridMatrixRes, matrixRes);
	}
	private: System::Void buttonMultip_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixRes);
		enableCopyButtons();
		vector<vector<double>> matrixA = vectorize(dataGridMatrixA);
		vector<vector<double>> matrixB = vectorize(dataGridMatrixB);
		vector<vector<double>> matrixRes = vectorize(matrixA.size(), matrixB[0].size());
		for (int i = 0; i < matrixRes.size(); i++){
			for (int j = 0; j < matrixRes[0].size(); j++){
				for (int k = 0; k < matrixA[0].size(); k++)
					matrixRes[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
		fill_matrix(dataGridMatrixRes, matrixRes);

	}
	private: System::Void buttonCopyA_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixA);
		vector<vector<double>> matrixRes = vectorize(dataGridMatrixRes);
		fill_matrix(dataGridMatrixA, matrixRes);
	}
	private: System::Void buttonCopyB_Click(System::Object^  sender, System::EventArgs^  e) {
		clear_matrix(dataGridMatrixB);
		vector<vector<double>> matrixRes = vectorize(dataGridMatrixRes);
		fill_matrix(dataGridMatrixB, matrixRes);
	}
	private: System::Void linkAbout_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		MessageBox::Show("Матричный калькулятор ver 1.01\nРазработчик: Чикишев Илья Вячеславович\nГруппа: РИСб-19-1\nНаучный руководитель: Спирин Игорь Сергеевич", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
};
}
