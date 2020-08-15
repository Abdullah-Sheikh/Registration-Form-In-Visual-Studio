#pragma once
#include <string>
#include"AddDataView.h"
#include"ViewForm.h"
#include"SearchForm.h"
#include"UpdateForm.h"
namespace dblab {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form_2
	/// </summary>
	public ref class Form_2 : public System::Windows::Forms::Form
	{
	public:
		Form_2(void)
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
		~Form_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::MaskedTextBox^  name_txt_Box;
	private: System::Windows::Forms::MaskedTextBox^  rollno_txt_Box;
	private: System::Windows::Forms::MaskedTextBox^  cnic_txt_Box;






	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::MaskedTextBox^  class_txt_Box;
	private: System::Windows::Forms::MaskedTextBox^  section_txt_Box;
	private: System::Windows::Forms::MaskedTextBox^  address_txt_Box;



	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  view_button;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->name_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->rollno_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cnic_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->class_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->section_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->address_txt_Box = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->view_button = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(327, 587);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(344, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(628, 84);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(107, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 73);
			this->label1->TabIndex = 2;
			this->label1->Text = L"R";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(724, 73);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(106, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(107, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 73);
			this->label2->TabIndex = 4;
			this->label2->Text = L"E";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(107, 488);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 73);
			this->label3->TabIndex = 5;
			this->label3->Text = L"R";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(107, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 73);
			this->label4->TabIndex = 6;
			this->label4->Text = L"T";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(107, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 73);
			this->label5->TabIndex = 7;
			this->label5->Text = L"S";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(118, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 73);
			this->label6->TabIndex = 8;
			this->label6->Text = L"I";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(107, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 73);
			this->label7->TabIndex = 9;
			this->label7->Text = L"G";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(107, 427);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 73);
			this->label8->TabIndex = 10;
			this->label8->Text = L"E";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(434, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(295, 40);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Registration Form";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label10->Location = System::Drawing::Point(359, 263);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 23);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Name";
			// 
			// name_txt_Box
			// 
			this->name_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->name_txt_Box->Location = System::Drawing::Point(441, 261);
			this->name_txt_Box->Name = L"name_txt_Box";
			this->name_txt_Box->Size = System::Drawing::Size(168, 29);
			this->name_txt_Box->TabIndex = 13;
			// 
			// rollno_txt_Box
			// 
			this->rollno_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rollno_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->rollno_txt_Box->Location = System::Drawing::Point(777, 262);
			this->rollno_txt_Box->Name = L"rollno_txt_Box";
			this->rollno_txt_Box->Size = System::Drawing::Size(178, 29);
			this->rollno_txt_Box->TabIndex = 14;
			// 
			// cnic_txt_Box
			// 
			this->cnic_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cnic_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->cnic_txt_Box->Location = System::Drawing::Point(441, 321);
			this->cnic_txt_Box->Name = L"cnic_txt_Box";
			this->cnic_txt_Box->Size = System::Drawing::Size(168, 29);
			this->cnic_txt_Box->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label11->Location = System::Drawing::Point(687, 262);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 23);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Roll no";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label12->Location = System::Drawing::Point(359, 322);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 23);
			this->label12->TabIndex = 18;
			this->label12->Text = L"CNIC";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label13->Location = System::Drawing::Point(688, 320);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 23);
			this->label13->TabIndex = 19;
			this->label13->Text = L"DOB";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label14->Location = System::Drawing::Point(359, 381);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 23);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Class";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label15->Location = System::Drawing::Point(688, 382);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 23);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Section";
			// 
			// class_txt_Box
			// 
			this->class_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->class_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->class_txt_Box->Location = System::Drawing::Point(441, 380);
			this->class_txt_Box->Name = L"class_txt_Box";
			this->class_txt_Box->Size = System::Drawing::Size(168, 29);
			this->class_txt_Box->TabIndex = 22;
			// 
			// section_txt_Box
			// 
			this->section_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->section_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->section_txt_Box->Location = System::Drawing::Point(777, 381);
			this->section_txt_Box->Name = L"section_txt_Box";
			this->section_txt_Box->Size = System::Drawing::Size(178, 29);
			this->section_txt_Box->TabIndex = 23;
			// 
			// address_txt_Box
			// 
			this->address_txt_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_txt_Box->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->address_txt_Box->Location = System::Drawing::Point(441, 442);
			this->address_txt_Box->Name = L"address_txt_Box";
			this->address_txt_Box->Size = System::Drawing::Size(514, 29);
			this->address_txt_Box->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->label16->Location = System::Drawing::Point(359, 443);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(76, 23);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Address";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(777, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 33);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::No;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Green;
			this->button2->Location = System::Drawing::Point(333, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 33);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Search Roll no";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// view_button
			// 
			this->view_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->view_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_button->Location = System::Drawing::Point(855, 196);
			this->view_button->Name = L"view_button";
			this->view_button->Size = System::Drawing::Size(117, 33);
			this->view_button->TabIndex = 28;
			this->view_button->Text = L"View";
			this->view_button->UseVisualStyleBackColor = false;
			this->view_button->Click += gcnew System::EventHandler(this, &Form_2::view_button_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Green;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(777, 321);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(178, 21);
			this->dateTimePicker1->TabIndex = 29;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form_2::dateTimePicker1_ValueChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(460, 186);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(62, 53);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 30;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form_2::pictureBox4_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(441, 511);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 33);
			this->button4->TabIndex = 31;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form_2::button4_Click);
			// 
			// Form_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(994, 581);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->view_button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->address_txt_Box);
			this->Controls->Add(this->section_txt_Box);
			this->Controls->Add(this->class_txt_Box);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->cnic_txt_Box);
			this->Controls->Add(this->rollno_txt_Box);
			this->Controls->Add(this->name_txt_Box);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form_2";
			this->Text = L"Registration form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String ^ conString = "Data Source=ABDULLAH;Integrated Security=True";
		String^ theDate;

		private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		theDate = dateTimePicker1->Value.ToShortDateString();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SqlConnection^ con = gcnew SqlConnection(conString);
		con->Open();
		if (con->State == System::Data::ConnectionState::Open)
		{
			
			SqlCommand^ comm = gcnew SqlCommand("Insert into register_table (Name, Rollno,CNIC,Class,Section,DOB,Address) values ( ' " + name_txt_Box->Text->ToString() + "' , ' " + rollno_txt_Box->Text->ToString() + "' ,' " + cnic_txt_Box->Text->ToString() + "', ' " + class_txt_Box->Text->ToString() + "',' " + section_txt_Box->Text->ToString() + "',' " + theDate + "',' "
				+ address_txt_Box->Text->ToString() + "')", con);
			try
			{
				comm->ExecuteNonQuery();

				AddDataView^ F3 = gcnew  AddDataView();
				F3->Show();
			}
			catch (Exception^ ex)
			{
			
		     MessageBox::Show(ex->Message," ", MessageBoxButtons::OK, MessageBoxIcon::Warning) ;
			}
			finally
			{
				//clean up environment
				con->Close();
			
			}
		}



	}

private: System::Void view_button_Click(System::Object^  sender, System::EventArgs^  e) {
	
	ViewForm^ vf = gcnew  ViewForm();
	vf->Show();
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	SearchForm^ sf = gcnew  SearchForm();
	sf->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	SqlConnection^ con = gcnew SqlConnection(conString);
	con->Open();                                                                                                                //(Name, Rollno,CNIC,Class,Section,DOB,Address)
		SqlCommand^ comm = gcnew SqlCommand("Update  register_table SET  Name= ' " + name_txt_Box->Text->ToString() + "' ,Rollno= ' " + rollno_txt_Box->Text->ToString() + "' ,CNIC=' " + cnic_txt_Box->Text->ToString() + "',Class= ' " + class_txt_Box->Text->ToString() + "',Section= ' " + section_txt_Box->Text->ToString() + "',DOB=' " + theDate + "',Address=' "
			+ address_txt_Box->Text->ToString() + "' Where Rollno =' " + rollno_txt_Box->Text->ToString() + "'", con);
		try
		{
			int n=comm->ExecuteNonQuery();

			UpdateForm^ uf = gcnew  UpdateForm();
			uf->Show();
		}
		catch (Exception^ ex)
		{

			MessageBox::Show(ex->Message, " ", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		finally
		{
			//clean up environment
			con->Close();

		}

	
}
};
}
