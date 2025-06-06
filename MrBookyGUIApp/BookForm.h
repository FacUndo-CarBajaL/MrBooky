#pragma once
#include "FoundBookForm.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de BookForm
	/// </summary>
	public ref class BookForm : public System::Windows::Forms::Form
	{
	public:
		BookForm(void)
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
		~BookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;










	private: System::Windows::Forms::TextBox^ txtNombreLibro;









	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtAutor;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtEditorial;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtGenero;
























	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreLibro = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtAutor = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtGenero = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Cornsilk;
			this->label1->Location = System::Drawing::Point(57, 27);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(702, 125);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido Sistema de Búsqueda MrBooky";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtNombreLibro
			// 
			this->txtNombreLibro->Location = System::Drawing::Point(30, 157);
			this->txtNombreLibro->Name = L"txtNombreLibro";
			this->txtNombreLibro->Size = System::Drawing::Size(579, 22);
			this->txtNombreLibro->TabIndex = 8;
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->Location = System::Drawing::Point(650, 151);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(70, 28);
			this->btnBuscar->TabIndex = 11;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &BookForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(34, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 26);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Búsqueda Avanzada";
			// 
			// txtAutor
			// 
			this->txtAutor->Location = System::Drawing::Point(175, 282);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(245, 22);
			this->txtAutor->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(82, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 22);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Autor : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(82, 328);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 22);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Editorial :";
			this->label4->Click += gcnew System::EventHandler(this, &BookForm::label4_Click_1);
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(175, 328);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(245, 22);
			this->txtEditorial->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(82, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Género :";
			// 
			// txtGenero
			// 
			this->txtGenero->Location = System::Drawing::Point(175, 377);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(245, 22);
			this->txtGenero->TabIndex = 17;
			// 
			// BookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(784, 462);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtAutor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtNombreLibro);
			this->Controls->Add(this->label1);
			this->Name = L"BookForm";
			this->Text = L"Búsqueda con filtros";
			this->Load += gcnew System::EventHandler(this, &BookForm::BookForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BookForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = txtNombreLibro->Text->Trim();
	String^ author = txtAutor->Text->Trim();
	String^ publisher = txtEditorial->Text->Trim();
	String^ genre = txtGenero->Text->Trim();
	try {
		if (title != nullptr) {
			if (author == nullptr && publisher == nullptr && genre == nullptr) {
				Book^ libroEncontrado = Controller::SearchBookByName(title);
				Persistance::RAMBinaryFile("ram.bin", libroEncontrado);
			}
			else {
				List<Book^>^ foundBooks = Controller::AdvancedSearchBook(title, author, publisher, genre);
				Persistance::RAMBinaryFile("ram.bin", foundBooks);
			}
			//FoundBookForm^ foundForm = gcnew FoundBookForm();
			//foundForm->Show();
		}
		else {
			MessageBox::Show("Debe llenar almenos la casilla de nombre");
		}
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido buscar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
	

}
private: System::Void dgvLibrosEncontrados_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
