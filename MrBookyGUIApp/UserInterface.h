#pragma once
#include "BookSearchResults.h"
#include "FoundBookForm.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyController;
	using namespace MrBookyModel;
	using namespace MrBookyPersistance;


	/// <summary>
	/// Resumen de UserInterface
	/// </summary>
	public ref class UserInterface : public System::Windows::Forms::Form
	{
	public:
		UserInterface(void)
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
		~UserInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ BookTitletxt;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtAutor;
	private: System::Windows::Forms::TextBox^ txtEditorial;
	private: System::Windows::Forms::TextBox^ txtGenero;



	private: System::Windows::Forms::DataGridView^ dgvBooksFound;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookAuthor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookStatus;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;
	private: System::Windows::Forms::DataGridViewButtonColumn^ BookDetails;





















	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserInterface::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BookTitletxt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtAutor = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->txtGenero = (gcnew System::Windows::Forms::TextBox());
			this->dgvBooksFound = (gcnew System::Windows::Forms::DataGridView());
			this->BookName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookAuthor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->BookDetails = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooksFound))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(63, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(63, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(440, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sistema de búsqueda MRBOOKY";
			// 
			// BookTitletxt
			// 
			this->BookTitletxt->BackColor = System::Drawing::Color::White;
			this->BookTitletxt->Location = System::Drawing::Point(70, 195);
			this->BookTitletxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BookTitletxt->Name = L"BookTitletxt";
			this->BookTitletxt->Size = System::Drawing::Size(366, 26);
			this->BookTitletxt->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(451, 195);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(27, 26);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UserInterface::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Location = System::Drawing::Point(65, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(277, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Búsqueda Avanzada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label4->Location = System::Drawing::Point(65, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Autor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label5->Location = System::Drawing::Point(65, 374);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Editorial";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label6->Location = System::Drawing::Point(65, 429);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Género";
			// 
			// txtAutor
			// 
			this->txtAutor->BackColor = System::Drawing::Color::White;
			this->txtAutor->Location = System::Drawing::Point(202, 319);
			this->txtAutor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(234, 26);
			this->txtAutor->TabIndex = 8;
			// 
			// txtEditorial
			// 
			this->txtEditorial->BackColor = System::Drawing::Color::White;
			this->txtEditorial->Location = System::Drawing::Point(202, 374);
			this->txtEditorial->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(234, 26);
			this->txtEditorial->TabIndex = 9;
			// 
			// txtGenero
			// 
			this->txtGenero->BackColor = System::Drawing::Color::White;
			this->txtGenero->Location = System::Drawing::Point(202, 429);
			this->txtGenero->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(234, 26);
			this->txtGenero->TabIndex = 10;
			// 
			// dgvBooksFound
			// 
			this->dgvBooksFound->AllowUserToAddRows = false;
			this->dgvBooksFound->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvBooksFound->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooksFound->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->BookName,
					this->BookAuthor, this->BookStatus, this->ColumnaImagen, this->BookDetails
			});
			this->dgvBooksFound->Location = System::Drawing::Point(12, 501);
			this->dgvBooksFound->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvBooksFound->Name = L"dgvBooksFound";
			this->dgvBooksFound->RowHeadersWidth = 62;
			this->dgvBooksFound->RowTemplate->Height = 100;
			this->dgvBooksFound->Size = System::Drawing::Size(1033, 379);
			this->dgvBooksFound->TabIndex = 11;
			this->dgvBooksFound->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserInterface::dgvBooksFound_CellContentClick);
			// 
			// BookName
			// 
			this->BookName->HeaderText = L"Nombre";
			this->BookName->MinimumWidth = 8;
			this->BookName->Name = L"BookName";
			// 
			// BookAuthor
			// 
			this->BookAuthor->HeaderText = L"Autor";
			this->BookAuthor->MinimumWidth = 8;
			this->BookAuthor->Name = L"BookAuthor";
			// 
			// BookStatus
			// 
			this->BookStatus->HeaderText = L"Estado";
			this->BookStatus->MinimumWidth = 8;
			this->BookStatus->Name = L"BookStatus";
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->ColumnaImagen->HeaderText = L"Portada";
			this->ColumnaImagen->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->ColumnaImagen->MinimumWidth = 8;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			this->ColumnaImagen->Width = 71;
			// 
			// BookDetails
			// 
			this->BookDetails->HeaderText = L"Ver detalles";
			this->BookDetails->MinimumWidth = 8;
			this->BookDetails->Name = L"BookDetails";
			this->BookDetails->Text = L"Ver";
			this->BookDetails->UseColumnTextForButtonValue = true;
			// 
			// UserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1077, 894);
			this->Controls->Add(this->dgvBooksFound);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->txtAutor);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BookTitletxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UserInterface";
			this->Text = L"UserInterface";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooksFound))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void ShowResults(List<Book^>^ books) {
			dgvBooksFound->Rows->Clear(); // Limpiar el DataGridView antes de mostrar los resultados
			if (books != nullptr && books->Count > 0) {
				for (int i = 0; i < books->Count; i++) {
					int index = dgvBooksFound->Rows->Add(gcnew array<String^>{
							books[i]->Title,
							books[i]->Author,
							books[i]->Availability}
					);

					array<Byte>^ photoBytes = books[i]->Photo;
					if (photoBytes != nullptr && photoBytes->Length > 0) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(photoBytes);
						System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

						// Insertar la imagen en la última columna
						dgvBooksFound->Rows[index]->Cells["ColumnaImagen"]->Value = image;
					}

				}
			}
			else {
				MessageBox::Show("No se encontraron libros con ese criterio de búsqueda.", "Resultado de búsqueda", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Al presionar el botón de búsqueda se debe realizar la búsqueda de los libros.
		// Solo se debe realizar la búsqueda si se ha ingresado algún criterio de búsqueda.
		dgvBooksFound->Rows->Clear(); // Limpiar el DataGridView antes de mostrar los resultados
		String^ bookTitle = "" + BookTitletxt->Text->Trim();
		String^ bookAuthor = "" + txtAutor->Text->Trim();
		String^ bookPublisher = "" + txtEditorial->Text->Trim();
		String^ bookGenre = "" + txtGenero->Text->Trim();
		if (System::String::IsNullOrEmpty(bookTitle) == false) {
			List<Book^>^ booksFound = Controller::AdvancedSearchBook(bookTitle, bookAuthor, bookPublisher, bookGenre);
			if (booksFound != nullptr) {
				ShowResults(booksFound);
			}
			else {
				MessageBox::Show("No se encontraron libros con ese título.", "Resultado de búsqueda", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Por favor, ingrese un criterio de búsqueda.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
private: System::Void dgvBooksFound_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->ColumnIndex == dgvBooksFound->Columns["BookDetails"]->Index) {
		// Obtener el libro seleccionado
		String^ bookName = dgvBooksFound->Rows[e->RowIndex]->Cells["BookName"]->Value->ToString();
		MessageBox::Show("Detalles del libro: " + bookName, "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Book^ selectedBook = Controller::SearchBook(bookName);

		if (selectedBook != nullptr) {
			// Mostrar los detalles del libro en un nuevo formulario o en un MessageBox
			Persistance::PersistBinaryFile("tempBook", selectedBook);
			FoundBookForm^ bookDetailsForm = gcnew FoundBookForm(selectedBook);
			bookDetailsForm->ShowDialog();
		}
		else {
			MessageBox::Show("No se encontraron detalles para el libro seleccionado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
};
}
