#pragma once

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteAccount
	/// </summary>
	public ref class DeleteAccount : public System::Windows::Forms::Form
	{
	public:
		DeleteAccount(void)
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
		~DeleteAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ DeleteBtn;
	private: System::Windows::Forms::Button^ CloseBtn;



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
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DeleteBtn = (gcnew System::Windows::Forms::Button());
			this->CloseBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(702, 115);
			this->maskedTextBox1->Mask = L"0000000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(228, 35);
			this->maskedTextBox1->TabIndex = 9;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(235, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Enter Account Number";
			// 
			// DeleteBtn
			// 
			this->DeleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteBtn->Location = System::Drawing::Point(368, 278);
			this->DeleteBtn->Name = L"DeleteBtn";
			this->DeleteBtn->Size = System::Drawing::Size(99, 37);
			this->DeleteBtn->TabIndex = 10;
			this->DeleteBtn->Text = L"Delete";
			this->DeleteBtn->UseVisualStyleBackColor = true;
			this->DeleteBtn->Click += gcnew System::EventHandler(this, &DeleteAccount::DeleteBtn_Click);
			// 
			// CloseBtn
			// 
			this->CloseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseBtn->Location = System::Drawing::Point(702, 278);
			this->CloseBtn->Name = L"CloseBtn";
			this->CloseBtn->Size = System::Drawing::Size(102, 37);
			this->CloseBtn->TabIndex = 11;
			this->CloseBtn->Text = L"Close";
			this->CloseBtn->UseVisualStyleBackColor = true;
			this->CloseBtn->Click += gcnew System::EventHandler(this, &DeleteAccount::CloseBtn_Click);
			// 
			// DeleteAccount
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1297, 565);
			this->ControlBox = false;
			this->Controls->Add(this->CloseBtn);
			this->Controls->Add(this->DeleteBtn);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"DeleteAccount";
			this->RightToLeftLayout = true;
			this->Text = L"DeleteAccount";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void CloseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void DeleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Write query here
}
};
}
