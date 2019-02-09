#pragma once

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateAccount
	/// </summary>
	public ref class CreateAccount : public System::Windows::Forms::Form
	{
	public:
		CreateAccount(void)
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
		~CreateAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1289, 577);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Create Account";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &CreateAccount::GroupBox1_Enter);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(897, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreateAccount::Button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(495, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateAccount::Button1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(649, 316);
			this->maskedTextBox1->Mask = L"0000000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(265, 35);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(649, 239);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 35);
			this->textBox2->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Current", L"Saving" });
			this->comboBox1->Location = System::Drawing::Point(649, 166);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(265, 37);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(649, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 35);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(196, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter Account Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(196, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Initial Amount";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(196, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Account Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(196, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Holder Name";
			// 
			// CreateAccount
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1313, 601);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"CreateAccount";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Create Account";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
			
		}
	
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ AccountHolderName = textBox1->Text;
	String^ AccountType = comboBox1->SelectedItem->ToString;
	String^ AmountInString = textBox2->Text;
	Decimal^ Amount = System::Convert::ToDecimal(AmountInString);
	String^ AccountNumberInString = maskedTextBox1->Text;
	Int32^ AccountNumber = System::Convert::ToInt32(AccountNumberInString);

		}
	};
}
