#pragma once

namespace dblab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 99);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(240, 105);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchForm::dataGridView2_CellContentClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SearchForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Roll no";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchForm::button1_Click);
			// 
			// SearchForm
			// 
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SearchForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ conString = "Data Source=ABDULLAH;Integrated Security=True";
	SqlConnection^ con = gcnew SqlConnection(conString);
	SqlDataAdapter^ da = gcnew SqlDataAdapter("Select * from register_table Where Rollno = '"+textBox1->Text->ToString()+"'", con);
	DataTable^ dt = gcnew DataTable();
	try
	{
		con->Open();
		da->Fill(dt);
		dataGridView2->DataSource = dt;
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
