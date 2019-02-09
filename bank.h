#pragma once

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for bank
	/// </summary>
	public ref class bank : public System::Windows::Forms::Form
	{
	public:
		bank(void)
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
		~bank()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addMoneyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ withdrawMoneyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ searchAnAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ showAllAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteAnAccountToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addMoneyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->withdrawMoneyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchAnAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showAllAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteAnAccountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(1323, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->createAccountToolStripMenuItem,
					this->addMoneyToolStripMenuItem, this->withdrawMoneyToolStripMenuItem, this->searchAnAccountToolStripMenuItem, this->showAllAccountToolStripMenuItem,
					this->deleteAnAccountToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// createAccountToolStripMenuItem
			// 
			this->createAccountToolStripMenuItem->Name = L"createAccountToolStripMenuItem";
			this->createAccountToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->createAccountToolStripMenuItem->Text = L"Create Account";
			// 
			// addMoneyToolStripMenuItem
			// 
			this->addMoneyToolStripMenuItem->Name = L"addMoneyToolStripMenuItem";
			this->addMoneyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->addMoneyToolStripMenuItem->Text = L"Add money";
			// 
			// withdrawMoneyToolStripMenuItem
			// 
			this->withdrawMoneyToolStripMenuItem->Name = L"withdrawMoneyToolStripMenuItem";
			this->withdrawMoneyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->withdrawMoneyToolStripMenuItem->Text = L"Withdraw money";
			// 
			// searchAnAccountToolStripMenuItem
			// 
			this->searchAnAccountToolStripMenuItem->Name = L"searchAnAccountToolStripMenuItem";
			this->searchAnAccountToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->searchAnAccountToolStripMenuItem->Text = L"Search an account";
			// 
			// showAllAccountToolStripMenuItem
			// 
			this->showAllAccountToolStripMenuItem->Name = L"showAllAccountToolStripMenuItem";
			this->showAllAccountToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->showAllAccountToolStripMenuItem->Text = L"Show all account";
			// 
			// deleteAnAccountToolStripMenuItem
			// 
			this->deleteAnAccountToolStripMenuItem->Name = L"deleteAnAccountToolStripMenuItem";
			this->deleteAnAccountToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->deleteAnAccountToolStripMenuItem->Text = L"Delete an account";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &bank::ExitToolStripMenuItem_Click);
			// 
			// bank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1323, 572);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"bank";
			this->Text = L"bank";
			this->Load += gcnew System::EventHandler(this, &bank::Bank_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bank_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
