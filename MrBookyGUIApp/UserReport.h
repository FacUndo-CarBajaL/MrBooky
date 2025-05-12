#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserReport
	/// </summary>
	public ref class UserReport : public System::Windows::Forms::Form
	{
	public:
		UserReport(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UserReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ lbResults;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbPhone;
	private: System::Windows::Forms::Panel^ pnHistorial;
	protected:

	protected:






	private: System::Windows::Forms::Label^ lbHistorial;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lbResults = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbPhone = (gcnew System::Windows::Forms::Label());
			this->pnHistorial = (gcnew System::Windows::Forms::Panel());
			this->lbHistorial = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtUser
			// 
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUser->ForeColor = System::Drawing::Color::DarkGray;
			this->txtUser->Location = System::Drawing::Point(48, 25);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(568, 29);
			this->txtUser->TabIndex = 0;
			this->txtUser->Text = L"Ingrese Usuario";
			// 
			// btnSearch
			// 
			this->btnSearch->ForeColor = System::Drawing::Color::Black;
			this->btnSearch->Location = System::Drawing::Point(645, 23);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(86, 33);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &UserReport::btnSearch_Click);
			// 
			// lbResults
			// 
			this->lbResults->AutoSize = true;
			this->lbResults->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbResults->ForeColor = System::Drawing::Color::White;
			this->lbResults->Location = System::Drawing::Point(44, 68);
			this->lbResults->Name = L"lbResults";
			this->lbResults->Size = System::Drawing::Size(106, 22);
			this->lbResults->TabIndex = 2;
			this->lbResults->Text = L"Resultados :";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(44, 116);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(83, 22);
			this->lbName->TabIndex = 3;
			this->lbName->Text = L"Nombre :";
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(44, 163);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(70, 22);
			this->lbEmail->TabIndex = 4;
			this->lbEmail->Text = L"Email :";
			// 
			// lbPhone
			// 
			this->lbPhone->AutoSize = true;
			this->lbPhone->Location = System::Drawing::Point(571, 116);
			this->lbPhone->Name = L"lbPhone";
			this->lbPhone->Size = System::Drawing::Size(181, 22);
			this->lbPhone->TabIndex = 5;
			this->lbPhone->Text = L"Número de teléfono : ";
			// 
			// pnHistorial
			// 
			this->pnHistorial->AutoScroll = true;
			this->pnHistorial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnHistorial->Location = System::Drawing::Point(44, 227);
			this->pnHistorial->Name = L"pnHistorial";
			this->pnHistorial->Size = System::Drawing::Size(857, 232);
			this->pnHistorial->TabIndex = 6;
			// 
			// lbHistorial
			// 
			this->lbHistorial->AutoSize = true;
			this->lbHistorial->Location = System::Drawing::Point(428, 196);
			this->lbHistorial->Name = L"lbHistorial";
			this->lbHistorial->Size = System::Drawing::Size(83, 22);
			this->lbHistorial->TabIndex = 7;
			this->lbHistorial->Text = L"Historial";
			// 
			// UserReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->lbHistorial);
			this->Controls->Add(this->pnHistorial);
			this->Controls->Add(this->lbPhone);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbResults);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtUser);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserReport";
			this->Text = L"UserReport";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = txtUser->Text;

	}
};
}
