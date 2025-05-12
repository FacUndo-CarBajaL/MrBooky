#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FoundBookForm
	/// </summary>
	public ref class FoundBookForm : public System::Windows::Forms::Form
	{
	public:
		FoundBookForm(void)
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
		~FoundBookForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ txtFoundTitulo;
	private: System::Windows::Forms::RichTextBox^ txtFoundAutor;
	private: System::Windows::Forms::RichTextBox^ txtFoundEditorial;
	private: System::Windows::Forms::RichTextBox^ txtFoundGenero;
	private: System::Windows::Forms::RichTextBox^ txtFoundDisponible;







	private: System::Windows::Forms::Button^ button1;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtFoundTitulo = (gcnew System::Windows::Forms::RichTextBox());
			this->txtFoundAutor = (gcnew System::Windows::Forms::RichTextBox());
			this->txtFoundEditorial = (gcnew System::Windows::Forms::RichTextBox());
			this->txtFoundGenero = (gcnew System::Windows::Forms::RichTextBox());
			this->txtFoundDisponible = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(47, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Libro Encontrado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(122, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Titulo :  ";
			this->label2->Click += gcnew System::EventHandler(this, &FoundBookForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(122, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Autor :";
			this->label3->Click += gcnew System::EventHandler(this, &FoundBookForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(101, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Editorial :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(74, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Disponibles :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(107, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Género :";
			this->label6->Click += gcnew System::EventHandler(this, &FoundBookForm::label6_Click);
			// 
			// txtFoundTitulo
			// 
			this->txtFoundTitulo->Location = System::Drawing::Point(187, 98);
			this->txtFoundTitulo->Name = L"txtFoundTitulo";
			this->txtFoundTitulo->Size = System::Drawing::Size(323, 28);
			this->txtFoundTitulo->TabIndex = 6;
			this->txtFoundTitulo->Text = L"";
			// 
			// txtFoundAutor
			// 
			this->txtFoundAutor->Location = System::Drawing::Point(187, 154);
			this->txtFoundAutor->Name = L"txtFoundAutor";
			this->txtFoundAutor->Size = System::Drawing::Size(323, 28);
			this->txtFoundAutor->TabIndex = 7;
			this->txtFoundAutor->Text = L"";
			// 
			// txtFoundEditorial
			// 
			this->txtFoundEditorial->Location = System::Drawing::Point(187, 207);
			this->txtFoundEditorial->Name = L"txtFoundEditorial";
			this->txtFoundEditorial->Size = System::Drawing::Size(323, 28);
			this->txtFoundEditorial->TabIndex = 8;
			this->txtFoundEditorial->Text = L"";
			// 
			// txtFoundGenero
			// 
			this->txtFoundGenero->Location = System::Drawing::Point(187, 264);
			this->txtFoundGenero->Name = L"txtFoundGenero";
			this->txtFoundGenero->Size = System::Drawing::Size(323, 28);
			this->txtFoundGenero->TabIndex = 9;
			this->txtFoundGenero->Text = L"";
			// 
			// txtFoundDisponible
			// 
			this->txtFoundDisponible->Location = System::Drawing::Point(187, 316);
			this->txtFoundDisponible->Name = L"txtFoundDisponible";
			this->txtFoundDisponible->Size = System::Drawing::Size(323, 28);
			this->txtFoundDisponible->TabIndex = 10;
			this->txtFoundDisponible->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(289, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Solicitar Préstamo";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// FoundBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(714, 437);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtFoundDisponible);
			this->Controls->Add(this->txtFoundGenero);
			this->Controls->Add(this->txtFoundEditorial);
			this->Controls->Add(this->txtFoundAutor);
			this->Controls->Add(this->txtFoundTitulo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FoundBookForm";
			this->Text = L"FoundBookForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
