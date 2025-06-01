#pragma once

#include "Stock.h"
#include "BookRequest.h"
#include "Stats.h"
#include "DispatchBooks.h"

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LibrarianLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLoans;
	private: System::Windows::Forms::Button^ btnStock;
	private: System::Windows::Forms::Button^ btnStats;
	private: System::Windows::Forms::Button^ btnBooksDispatch;
	private: System::Windows::Forms::Label^ label2;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LibrarianLogIn::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnLoans = (gcnew System::Windows::Forms::Button());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnStats = (gcnew System::Windows::Forms::Button());
			this->btnBooksDispatch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(130, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(652, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sistema de Logística Mr.Booky";
			// 
			// btnLoans
			// 
			this->btnLoans->BackColor = System::Drawing::Color::White;
			this->btnLoans->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoans->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLoans->Location = System::Drawing::Point(201, 210);
			this->btnLoans->Name = L"btnLoans";
			this->btnLoans->Size = System::Drawing::Size(515, 42);
			this->btnLoans->TabIndex = 1;
			this->btnLoans->Text = L"Ver solicitudes de préstamos";
			this->btnLoans->UseVisualStyleBackColor = false;
			this->btnLoans->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnLoans_Click);
			// 
			// btnStock
			// 
			this->btnStock->BackColor = System::Drawing::Color::White;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::Color::Black;
			this->btnStock->Location = System::Drawing::Point(201, 267);
			this->btnStock->Name = L"btnStock";
			this->btnStock->Size = System::Drawing::Size(515, 41);
			this->btnStock->TabIndex = 2;
			this->btnStock->Text = L"Verificar y actualizar Stock";
			this->btnStock->UseVisualStyleBackColor = false;
			this->btnStock->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnStock_Click);
			// 
			// btnStats
			// 
			this->btnStats->BackColor = System::Drawing::Color::White;
			this->btnStats->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStats->ForeColor = System::Drawing::Color::Black;
			this->btnStats->Location = System::Drawing::Point(201, 327);
			this->btnStats->Name = L"btnStats";
			this->btnStats->Size = System::Drawing::Size(515, 41);
			this->btnStats->TabIndex = 3;
			this->btnStats->Text = L"Ver estadísticas";
			this->btnStats->UseVisualStyleBackColor = false;
			this->btnStats->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnStats_Click);
			// 
			// btnBooksDispatch
			// 
			this->btnBooksDispatch->BackColor = System::Drawing::Color::White;
			this->btnBooksDispatch->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBooksDispatch->ForeColor = System::Drawing::Color::Black;
			this->btnBooksDispatch->Location = System::Drawing::Point(201, 386);
			this->btnBooksDispatch->Name = L"btnBooksDispatch";
			this->btnBooksDispatch->Size = System::Drawing::Size(515, 41);
			this->btnBooksDispatch->TabIndex = 4;
			this->btnBooksDispatch->Text = L"Despacho de Libros";
			this->btnBooksDispatch->UseVisualStyleBackColor = false;
			this->btnBooksDispatch->Click += gcnew System::EventHandler(this, &LibrarianLogIn::btnBooksDispatch_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(183, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(545, 51);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Bibliotecario, Bienvenido";
			// 
			// LibrarianLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBooksDispatch);
			this->Controls->Add(this->btnStats);
			this->Controls->Add(this->btnStock);
			this->Controls->Add(this->btnLoans);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"LibrarianLogIn";
			this->Text = L"LibrarianLogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnLoans_Click(System::Object^ sender, System::EventArgs^ e) {
	BookRequest^ bookRequestForm = gcnew BookRequest();
	bookRequestForm->Show();
}

private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ stockForm = gcnew Stock();
	stockForm->Show();
}
private: System::Void btnStats_Click(System::Object^ sender, System::EventArgs^ e) {
	Stats^ statsForm = gcnew Stats();
	statsForm->Show();
}
private: System::Void btnBooksDispatch_Click(System::Object^ sender, System::EventArgs^ e) {
	DispatchBooks^ dispatchBooksForm = gcnew DispatchBooks();
	dispatchBooksForm->Show();
}
};
}
