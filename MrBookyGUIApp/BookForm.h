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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtAutor;
	private: System::Windows::Forms::TextBox^ txtEditorial;
	private: System::Windows::Forms::TextBox^ txtGenero;



	private: System::Windows::Forms::TextBox^ txtNombreLibro;


	private: System::Windows::Forms::DataGridView^ dgvLibrosEncontrados;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitutlo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEditorial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaDisponibles;
	private: System::Windows::Forms::Button^ btnBuscar;























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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtAutor = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->txtGenero = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreLibro = (gcnew System::Windows::Forms::TextBox());
			this->dgvLibrosEncontrados = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaTitutlo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaDisponibles = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibrosEncontrados))->BeginInit();
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(25, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Busqueda Avanzada";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(27, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Autor";
			this->label3->Click += gcnew System::EventHandler(this, &BookForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(310, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Editorial";
			this->label4->Click += gcnew System::EventHandler(this, &BookForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(593, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Género";
			// 
			// txtAutor
			// 
			this->txtAutor->Location = System::Drawing::Point(101, 270);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(144, 22);
			this->txtAutor->TabIndex = 5;
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(384, 270);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(144, 22);
			this->txtEditorial->TabIndex = 6;
			// 
			// txtGenero
			// 
			this->txtGenero->Location = System::Drawing::Point(667, 270);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(144, 22);
			this->txtGenero->TabIndex = 7;
			// 
			// txtNombreLibro
			// 
			this->txtNombreLibro->Location = System::Drawing::Point(30, 157);
			this->txtNombreLibro->Name = L"txtNombreLibro";
			this->txtNombreLibro->Size = System::Drawing::Size(579, 22);
			this->txtNombreLibro->TabIndex = 8;
			// 
			// dgvLibrosEncontrados
			// 
			this->dgvLibrosEncontrados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLibrosEncontrados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaTitutlo,
					this->ColumnaAutor, this->ColumnaEditorial, this->ColumnaGenero, this->ColumnaDisponibles
			});
			this->dgvLibrosEncontrados->Location = System::Drawing::Point(30, 344);
			this->dgvLibrosEncontrados->Name = L"dgvLibrosEncontrados";
			this->dgvLibrosEncontrados->RowHeadersWidth = 51;
			this->dgvLibrosEncontrados->RowTemplate->Height = 24;
			this->dgvLibrosEncontrados->Size = System::Drawing::Size(673, 197);
			this->dgvLibrosEncontrados->TabIndex = 10;
			// 
			// ColumnaTitutlo
			// 
			this->ColumnaTitutlo->HeaderText = L"Titulo";
			this->ColumnaTitutlo->MinimumWidth = 6;
			this->ColumnaTitutlo->Name = L"ColumnaTitutlo";
			this->ColumnaTitutlo->Width = 125;
			// 
			// ColumnaAutor
			// 
			this->ColumnaAutor->HeaderText = L"Autor";
			this->ColumnaAutor->MinimumWidth = 6;
			this->ColumnaAutor->Name = L"ColumnaAutor";
			this->ColumnaAutor->Width = 125;
			// 
			// ColumnaEditorial
			// 
			this->ColumnaEditorial->HeaderText = L"Editorial";
			this->ColumnaEditorial->MinimumWidth = 6;
			this->ColumnaEditorial->Name = L"ColumnaEditorial";
			this->ColumnaEditorial->Width = 125;
			// 
			// ColumnaGenero
			// 
			this->ColumnaGenero->HeaderText = L"Genero";
			this->ColumnaGenero->MinimumWidth = 6;
			this->ColumnaGenero->Name = L"ColumnaGenero";
			this->ColumnaGenero->Width = 125;
			// 
			// ColumnaDisponibles
			// 
			this->ColumnaDisponibles->HeaderText = L"Disponibles";
			this->ColumnaDisponibles->MinimumWidth = 6;
			this->ColumnaDisponibles->Name = L"ColumnaDisponibles";
			this->ColumnaDisponibles->Width = 125;
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
			// BookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(858, 574);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->dgvLibrosEncontrados);
			this->Controls->Add(this->txtNombreLibro);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->txtAutor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BookForm";
			this->Text = L"Búsqueda con filtros";
			this->Load += gcnew System::EventHandler(this, &BookForm::BookForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibrosEncontrados))->EndInit();
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

	Book^ book = Controller::SearchBookByName(title);

	if (book != nullptr) {
		String^ author = book->Author;
		String^ publisher = book->Publisher;
		String^ genre = book->Genre;
		int stock = book->Stock;

		dgvLibrosEncontrados->Rows->Add(title, author, publisher, genre, stock);
	}
	else {
		MessageBox::Show("No se encontró un libro con ese titulo");
	}
}
};
}
