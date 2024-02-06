#pragma once

namespace IntegratedAuthentication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LUsername;
	private: System::Windows::Forms::TextBox^ LtextBoxUsername;



	private: System::Windows::Forms::Label^ LEmail;
	private: System::Windows::Forms::Label^ LPassword;
	private: System::Windows::Forms::TextBox^ LtextBoxEmail;
	private: System::Windows::Forms::TextBox^ LtextBoxPassword;






	private: System::Windows::Forms::Button^ ForgotFormButton;

	private: System::Windows::Forms::Button^ ConnectButton;
	private: System::Windows::Forms::Button^ CloseButton;







	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LUsername = (gcnew System::Windows::Forms::Label());
			this->LtextBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->LEmail = (gcnew System::Windows::Forms::Label());
			this->LPassword = (gcnew System::Windows::Forms::Label());
			this->LtextBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->LtextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->ForgotFormButton = (gcnew System::Windows::Forms::Button());
			this->ConnectButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(977, 106);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LUsername
			// 
			this->LUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LUsername->Location = System::Drawing::Point(86, 106);
			this->LUsername->Name = L"LUsername";
			this->LUsername->Size = System::Drawing::Size(166, 63);
			this->LUsername->TabIndex = 1;
			this->LUsername->Text = L"Username";
			// 
			// LtextBoxUsername
			// 
			this->LtextBoxUsername->Location = System::Drawing::Point(299, 106);
			this->LtextBoxUsername->Name = L"LtextBoxUsername";
			this->LtextBoxUsername->Size = System::Drawing::Size(463, 38);
			this->LtextBoxUsername->TabIndex = 2;
			// 
			// LEmail
			// 
			this->LEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LEmail->Location = System::Drawing::Point(86, 199);
			this->LEmail->Name = L"LEmail";
			this->LEmail->Size = System::Drawing::Size(166, 67);
			this->LEmail->TabIndex = 3;
			this->LEmail->Text = L"Email";
			// 
			// LPassword
			// 
			this->LPassword->Location = System::Drawing::Point(86, 296);
			this->LPassword->Name = L"LPassword";
			this->LPassword->Size = System::Drawing::Size(166, 63);
			this->LPassword->TabIndex = 4;
			this->LPassword->Text = L"Password";
			// 
			// LtextBoxEmail
			// 
			this->LtextBoxEmail->Location = System::Drawing::Point(299, 199);
			this->LtextBoxEmail->Name = L"LtextBoxEmail";
			this->LtextBoxEmail->Size = System::Drawing::Size(463, 38);
			this->LtextBoxEmail->TabIndex = 5;
			// 
			// LtextBoxPassword
			// 
			this->LtextBoxPassword->Location = System::Drawing::Point(299, 293);
			this->LtextBoxPassword->Name = L"LtextBoxPassword";
			this->LtextBoxPassword->Size = System::Drawing::Size(463, 38);
			this->LtextBoxPassword->TabIndex = 6;
			// 
			// ForgotFormButton
			// 
			this->ForgotFormButton->Location = System::Drawing::Point(12, 444);
			this->ForgotFormButton->Name = L"ForgotFormButton";
			this->ForgotFormButton->Size = System::Drawing::Size(252, 45);
			this->ForgotFormButton->TabIndex = 7;
			this->ForgotFormButton->Text = L"Forgot Password\?";
			this->ForgotFormButton->UseVisualStyleBackColor = true;
			// 
			// ConnectButton
			// 
			this->ConnectButton->Location = System::Drawing::Point(299, 385);
			this->ConnectButton->Name = L"ConnectButton";
			this->ConnectButton->Size = System::Drawing::Size(131, 46);
			this->ConnectButton->TabIndex = 10;
			this->ConnectButton->Text = L"Connect";
			this->ConnectButton->UseVisualStyleBackColor = true;
			this->ConnectButton->Click += gcnew System::EventHandler(this, &LoginForm::Connect_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(631, 385);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(131, 46);
			this->CloseButton->TabIndex = 11;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &LoginForm::CloseButton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 501);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->ConnectButton);
			this->Controls->Add(this->ForgotFormButton);
			this->Controls->Add(this->LtextBoxPassword);
			this->Controls->Add(this->LtextBoxEmail);
			this->Controls->Add(this->LPassword);
			this->Controls->Add(this->LEmail);
			this->Controls->Add(this->LtextBoxUsername);
			this->Controls->Add(this->LUsername);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Connect_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ 
}
private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
