#pragma once

namespace IntegratedAuthentication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ RegistationForm
	/// </summary>
	public ref class RegistationForm : public System::Windows::Forms::Form
	{
	public:
		RegistationForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RegistationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ RFirstName;
	protected:
	private: System::Windows::Forms::Label^ RegistationFormStart;
	private: System::Windows::Forms::Label^ RLastName;
	private: System::Windows::Forms::Label^ RPassword;
	private: System::Windows::Forms::Label^ RUsername;
	private: System::Windows::Forms::Label^ REmail;
	private: System::Windows::Forms::TextBox^ RFirstNametextBox;
	private: System::Windows::Forms::TextBox^ RLastNametextBox;
	private: System::Windows::Forms::TextBox^ REmailtextBox;
	private: System::Windows::Forms::TextBox^ RUsernametextBox;
	private: System::Windows::Forms::TextBox^ RPasswordtextBox;









	private: System::Windows::Forms::Button^ RClosebutton;
	private: System::Windows::Forms::Button^ RConnectbutton;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->RFirstName = (gcnew System::Windows::Forms::Label());
			this->RegistationFormStart = (gcnew System::Windows::Forms::Label());
			this->RLastName = (gcnew System::Windows::Forms::Label());
			this->RPassword = (gcnew System::Windows::Forms::Label());
			this->RUsername = (gcnew System::Windows::Forms::Label());
			this->REmail = (gcnew System::Windows::Forms::Label());
			this->RFirstNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->RLastNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->REmailtextBox = (gcnew System::Windows::Forms::TextBox());
			this->RUsernametextBox = (gcnew System::Windows::Forms::TextBox());
			this->RPasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->RClosebutton = (gcnew System::Windows::Forms::Button());
			this->RConnectbutton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// RFirstName
			// 
			this->RFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RFirstName->Location = System::Drawing::Point(60, 66);
			this->RFirstName->Name = L"RFirstName";
			this->RFirstName->Size = System::Drawing::Size(162, 41);
			this->RFirstName->TabIndex = 0;
			this->RFirstName->Text = L"FirstName";
			this->RFirstName->Click += gcnew System::EventHandler(this, &RegistationForm::RFirstName_Click);
			// 
			// RegistationFormStart
			// 
			this->RegistationFormStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->RegistationFormStart->Location = System::Drawing::Point(199, 9);
			this->RegistationFormStart->Name = L"RegistationFormStart";
			this->RegistationFormStart->Size = System::Drawing::Size(342, 48);
			this->RegistationFormStart->TabIndex = 1;
			this->RegistationFormStart->Text = L"Create Your Own User";
			this->RegistationFormStart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RLastName
			// 
			this->RLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RLastName->Location = System::Drawing::Point(60, 121);
			this->RLastName->Name = L"RLastName";
			this->RLastName->Size = System::Drawing::Size(162, 41);
			this->RLastName->TabIndex = 2;
			this->RLastName->Text = L"LastName";
			// 
			// RPassword
			// 
			this->RPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RPassword->Location = System::Drawing::Point(60, 288);
			this->RPassword->Name = L"RPassword";
			this->RPassword->Size = System::Drawing::Size(162, 41);
			this->RPassword->TabIndex = 3;
			this->RPassword->Text = L"Password";
			// 
			// RUsername
			// 
			this->RUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RUsername->Location = System::Drawing::Point(60, 232);
			this->RUsername->Name = L"RUsername";
			this->RUsername->Size = System::Drawing::Size(162, 41);
			this->RUsername->TabIndex = 4;
			this->RUsername->Text = L"Username";
			// 
			// REmail
			// 
			this->REmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->REmail->Location = System::Drawing::Point(60, 179);
			this->REmail->Name = L"REmail";
			this->REmail->Size = System::Drawing::Size(162, 41);
			this->REmail->TabIndex = 5;
			this->REmail->Text = L"Email";
			// 
			// RFirstNametextBox
			// 
			this->RFirstNametextBox->Location = System::Drawing::Point(253, 76);
			this->RFirstNametextBox->Multiline = true;
			this->RFirstNametextBox->Name = L"RFirstNametextBox";
			this->RFirstNametextBox->Size = System::Drawing::Size(347, 31);
			this->RFirstNametextBox->TabIndex = 6;
			this->RFirstNametextBox->TextChanged += gcnew System::EventHandler(this, &RegistationForm::textBox1_TextChanged);
			// 
			// RLastNametextBox
			// 
			this->RLastNametextBox->Location = System::Drawing::Point(253, 131);
			this->RLastNametextBox->Multiline = true;
			this->RLastNametextBox->Name = L"RLastNametextBox";
			this->RLastNametextBox->Size = System::Drawing::Size(347, 31);
			this->RLastNametextBox->TabIndex = 7;
			// 
			// REmailtextBox
			// 
			this->REmailtextBox->Location = System::Drawing::Point(253, 189);
			this->REmailtextBox->Multiline = true;
			this->REmailtextBox->Name = L"REmailtextBox";
			this->REmailtextBox->Size = System::Drawing::Size(347, 31);
			this->REmailtextBox->TabIndex = 8;
			// 
			// RUsernametextBox
			// 
			this->RUsernametextBox->Location = System::Drawing::Point(253, 242);
			this->RUsernametextBox->Multiline = true;
			this->RUsernametextBox->Name = L"RUsernametextBox";
			this->RUsernametextBox->Size = System::Drawing::Size(347, 31);
			this->RUsernametextBox->TabIndex = 9;
			// 
			// RPasswordtextBox
			// 
			this->RPasswordtextBox->Location = System::Drawing::Point(253, 298);
			this->RPasswordtextBox->Multiline = true;
			this->RPasswordtextBox->Name = L"RPasswordtextBox";
			this->RPasswordtextBox->Size = System::Drawing::Size(347, 31);
			this->RPasswordtextBox->TabIndex = 10;
			// 
			// RClosebutton
			// 
			this->RClosebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RClosebutton->Location = System::Drawing::Point(488, 368);
			this->RClosebutton->Name = L"RClosebutton";
			this->RClosebutton->Size = System::Drawing::Size(112, 38);
			this->RClosebutton->TabIndex = 11;
			this->RClosebutton->Text = L"Close";
			this->RClosebutton->UseVisualStyleBackColor = true;
			this->RClosebutton->Click += gcnew System::EventHandler(this, &RegistationForm::RClosebutton_Click);
			// 
			// RConnectbutton
			// 
			this->RConnectbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RConnectbutton->Location = System::Drawing::Point(253, 368);
			this->RConnectbutton->Name = L"RConnectbutton";
			this->RConnectbutton->Size = System::Drawing::Size(112, 38);
			this->RConnectbutton->TabIndex = 12;
			this->RConnectbutton->Text = L"Connect";
			this->RConnectbutton->UseVisualStyleBackColor = true;
			this->RConnectbutton->Click += gcnew System::EventHandler(this, &RegistationForm::RConnectbutton_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(48, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 38);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Button";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// RegistationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 442);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RConnectbutton);
			this->Controls->Add(this->RClosebutton);
			this->Controls->Add(this->RPasswordtextBox);
			this->Controls->Add(this->RUsernametextBox);
			this->Controls->Add(this->REmailtextBox);
			this->Controls->Add(this->RLastNametextBox);
			this->Controls->Add(this->RFirstNametextBox);
			this->Controls->Add(this->REmail);
			this->Controls->Add(this->RUsername);
			this->Controls->Add(this->RPassword);
			this->Controls->Add(this->RLastName);
			this->Controls->Add(this->RegistationFormStart);
			this->Controls->Add(this->RFirstName);
			this->Name = L"RegistationForm";
			this->Text = L"RegistationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RClosebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   public:  
	private: System::Void RConnectbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ RFirstName = RFirstNametextBox->Text;
		String^ RLastName = RLastNametextBox->Text;
		String^ REmail = REmailtextBox->Text;
		String^ RUsername = RUsernametextBox->Text;
		String^ RPassword = RPasswordtextBox->Text;
		if (String::IsNullOrWhiteSpace(RFirstName) || String::IsNullOrWhiteSpace(RLastName)
			|| String::IsNullOrWhiteSpace(REmail) || String::IsNullOrWhiteSpace(RUsername)
			|| String::IsNullOrWhiteSpace(RPassword)) {
			MessageBox::Show("Not all fields are filled in", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (RFirstName->Length <= 50 || RLastName->Length <= 50
			|| REmail->Length <= 50 || RUsername->Length <= 50
			|| RPassword->Length <= 50) {
			MessageBox::Show("Permissible length exceeded", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			RFirstNametextBox->Text = RFirstName->Substring(0, 51);
			RLastNametextBox->Text = RLastName->Substring(0, 51);
			REmailtextBox->Text = REmail->Substring(0, 51);
			RUsernametextBox->Text = RUsername->Substring(0, 51);
			RPasswordtextBox->Text = RPassword->Substring(0, 51);
		}
}
};
}
