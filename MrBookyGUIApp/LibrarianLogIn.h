#pragma once

#include "Stock.h"
#include "AddBook.h"
#include "UserReport.h"
#include "BookReport.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de LibrarianLogIn
	/// </summary>
	public ref class LibrarianLogIn : public System::Windows::Forms::Form
	{
	public:
		LibrarianLogIn(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LibrarianLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnStock;
	private: System::Windows::Forms::Button^ btnAddBook;
	private: System::Windows::Forms::Button^ btnReporte;
	private: System::Windows::Forms::Button^ btnUserReport;
	private: System::Windows::Forms::Button^ btnBookReport;





	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnAddBook = (gcnew System::Windows::Forms::Button());
			this->btnReporte = (gcnew System::Windows::Forms::Button());
			this->btnUserReport = (gcnew System::Windows::Forms::Button());
			this->btnBookReport = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(137, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(652, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sistema de Log�stica Mr.Booky";
			// 
			// btnStock
			// 
			this->btnStock->BackColor = System::Drawing::Color::White;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStock->Location = System::Drawing::Point(201, 140);
			this->btnStock->Name = L"btnStock";
			this->btnStock->Size = System::Drawing::Size(515, 42);
			this->btnStock->TabIndex = 1;
			this->btnStock->Text = L"Verificar Stock";
			this->btnStock->UseVisualStyleBackColor = false;
			this->btnStock->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnStock_Click);
			// 
			// btnAddBook
			// 
			this->btnAddBook->BackColor = System::Drawing::Color::White;
			this->btnAddBook->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddBook->Location = System::Drawing::Point(201, 235);
			this->btnAddBook->Name = L"btnAddBook";
			this->btnAddBook->Size = System::Drawing::Size(515, 41);
			this->btnAddBook->TabIndex = 2;
			this->btnAddBook->Text = L"Registrar Libro";
			this->btnAddBook->UseVisualStyleBackColor = false;
			this->btnAddBook->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnAddBook_Click);
			// 
			// btnReporte
			// 
			this->btnReporte->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReporte->Location = System::Drawing::Point(201, 327);
			this->btnReporte->Name = L"btnReporte";
			this->btnReporte->Size = System::Drawing::Size(515, 41);
			this->btnReporte->TabIndex = 3;
			this->btnReporte->Text = L"Generar Reporte";
			this->btnReporte->UseVisualStyleBackColor = true;
			this->btnReporte->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnReporte_Click);
			// 
			// btnUserReport
			// 
			this->btnUserReport->BackColor = System::Drawing::Color::White;
			this->btnUserReport->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUserReport->Location = System::Drawing::Point(201, 359);
			this->btnUserReport->Name = L"btnUserReport";
			this->btnUserReport->Size = System::Drawing::Size(515, 34);
			this->btnUserReport->TabIndex = 4;
			this->btnUserReport->Text = L"Por Usuario";
			this->btnUserReport->UseVisualStyleBackColor = false;
			this->btnUserReport->Visible = false;
			this->btnUserReport->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnUserReport_Click);
			// 
			// btnBookReport
			// 
			this->btnBookReport->BackColor = System::Drawing::Color::White;
			this->btnBookReport->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBookReport->Location = System::Drawing::Point(201, 392);
			this->btnBookReport->Name = L"btnBookReport";
			this->btnBookReport->Size = System::Drawing::Size(515, 37);
			this->btnBookReport->TabIndex = 5;
			this->btnBookReport->Text = L"Por Libro";
			this->btnBookReport->UseVisualStyleBackColor = false;
			this->btnBookReport->Visible = false;
			this->btnBookReport->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnBookReport_Click);
			// 
			// LibrarianLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->btnBookReport);
			this->Controls->Add(this->btnUserReport);
			this->Controls->Add(this->btnReporte);
			this->Controls->Add(this->btnAddBook);
			this->Controls->Add(this->btnStock);
			this->Controls->Add(this->label1);
			this->Name = L"LibrarianLogIn";
			this->Text = L"LibrarianLogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ stockForm = gcnew Stock();
	stockForm->Show();
}
private: System::Void btnAddBook_Click(System::Object^ sender, System::EventArgs^ e) {
	AddBook^ addBook = gcnew AddBook();
	addBook->Show();
}
private: System::Void btnReporte_Click(System::Object^ sender, System::EventArgs^ e) {
	btnUserReport->Visible = true;
	btnBookReport->Visible = true;
}
private: System::Void btnUserReport_Click(System::Object^ sender, System::EventArgs^ e) {
	UserReport^ userReport = gcnew UserReport();
	userReport->Show();
}
private: System::Void btnBookReport_Click(System::Object^ sender, System::EventArgs^ e) {
	BookReport^ bookReport = gcnew BookReport();
	bookReport->Show();
}
};
}
