#pragma once
#include "RegisterUserForm.h"
namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnIngresar;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(245, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mr. Booky";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(156, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(156, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(267, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(265, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(267, 233);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(265, 22);
			this->textBox2->TabIndex = 4;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::Teal;
			this->linkLabel1->Location = System::Drawing::Point(308, 340);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(132, 16);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿No está registrado\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserForm::linkLabel1_LinkClicked);
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(326, 294);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(95, 25);
			this->btnIngresar->TabIndex = 8;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &UserForm::btnIngresar_Click);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(792, 466);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->IsMdiContainer = true;
			this->Name = L"UserForm";
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	RegisterUserForm^ registerForm = gcnew RegisterUserForm();
	registerForm->Show();
}
private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
