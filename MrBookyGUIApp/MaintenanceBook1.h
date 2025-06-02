#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace System::Collections::Generic;
	using namespace MrBookyController;
	/// <summary>
	/// Resumen de AddBook
	/// </summary>
	public ref class MaintenanceBook : public System::Windows::Forms::Form
	{
	public:
		MaintenanceBook(void)
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
		~MaintenanceBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvBooks;
	protected:







	private: System::Windows::Forms::Button^ btnDeleteBook;
	private: System::Windows::Forms::Button^ btnUpdateBook;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::RichTextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtProvider;
	private: System::Windows::Forms::TextBox^ txtQuantity;
	private: System::Windows::Forms::TextBox^ txtPublisher;
	private: System::Windows::Forms::TextBox^ txtGenre;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookTittle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Autor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookGenre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookPublisher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookProvider;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookDescription;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnAgregarFoto;

































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvBooks = (gcnew System::Windows::Forms::DataGridView());
			this->BookTittle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Autor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookGenre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookPublisher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookProvider = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteBook = (gcnew System::Windows::Forms::Button());
			this->btnUpdateBook = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->txtProvider = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvBooks
			// 
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->BookTittle,
					this->Autor, this->BookGenre, this->BookPublisher, this->BookQuantity, this->BookProvider, this->BookDescription
			});
			this->dgvBooks->Location = System::Drawing::Point(51, 524);
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->RowHeadersWidth = 82;
			this->dgvBooks->RowTemplate->Height = 33;
			this->dgvBooks->Size = System::Drawing::Size(1384, 190);
			this->dgvBooks->TabIndex = 38;
			this->dgvBooks->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceBook::dgvBooks_CellContentClick);
			// 
			// BookTittle
			// 
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			this->BookTittle->DefaultCellStyle = dataGridViewCellStyle8;
			this->BookTittle->HeaderText = L"Título";
			this->BookTittle->MinimumWidth = 10;
			this->BookTittle->Name = L"BookTittle";
			this->BookTittle->Width = 200;
			// 
			// Autor
			// 
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::Black;
			this->Autor->DefaultCellStyle = dataGridViewCellStyle9;
			this->Autor->HeaderText = L"Autor";
			this->Autor->MinimumWidth = 10;
			this->Autor->Name = L"Autor";
			this->Autor->Width = 200;
			// 
			// BookGenre
			// 
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			this->BookGenre->DefaultCellStyle = dataGridViewCellStyle10;
			this->BookGenre->HeaderText = L"Género";
			this->BookGenre->MinimumWidth = 10;
			this->BookGenre->Name = L"BookGenre";
			this->BookGenre->Width = 200;
			// 
			// BookPublisher
			// 
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::Black;
			this->BookPublisher->DefaultCellStyle = dataGridViewCellStyle11;
			this->BookPublisher->HeaderText = L"Editorial";
			this->BookPublisher->MinimumWidth = 10;
			this->BookPublisher->Name = L"BookPublisher";
			this->BookPublisher->Width = 200;
			// 
			// BookQuantity
			// 
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::Black;
			this->BookQuantity->DefaultCellStyle = dataGridViewCellStyle12;
			this->BookQuantity->HeaderText = L"Cantidad";
			this->BookQuantity->MinimumWidth = 10;
			this->BookQuantity->Name = L"BookQuantity";
			this->BookQuantity->Width = 200;
			// 
			// BookProvider
			// 
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::Black;
			this->BookProvider->DefaultCellStyle = dataGridViewCellStyle13;
			this->BookProvider->HeaderText = L"Proveedor";
			this->BookProvider->MinimumWidth = 10;
			this->BookProvider->Name = L"BookProvider";
			this->BookProvider->Width = 200;
			// 
			// BookDescription
			// 
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::Black;
			this->BookDescription->DefaultCellStyle = dataGridViewCellStyle14;
			this->BookDescription->HeaderText = L"Descripción";
			this->BookDescription->MinimumWidth = 10;
			this->BookDescription->Name = L"BookDescription";
			this->BookDescription->Width = 200;
			// 
			// btnDeleteBook
			// 
			this->btnDeleteBook->BackColor = System::Drawing::Color::White;
			this->btnDeleteBook->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteBook->Location = System::Drawing::Point(1134, 452);
			this->btnDeleteBook->Name = L"btnDeleteBook";
			this->btnDeleteBook->Size = System::Drawing::Size(173, 46);
			this->btnDeleteBook->TabIndex = 37;
			this->btnDeleteBook->Text = L"Eliminar\r\n";
			this->btnDeleteBook->UseVisualStyleBackColor = false;
			this->btnDeleteBook->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnDeleteBook_Click);
			// 
			// btnUpdateBook
			// 
			this->btnUpdateBook->BackColor = System::Drawing::Color::White;
			this->btnUpdateBook->ForeColor = System::Drawing::Color::Black;
			this->btnUpdateBook->Location = System::Drawing::Point(614, 452);
			this->btnUpdateBook->Name = L"btnUpdateBook";
			this->btnUpdateBook->Size = System::Drawing::Size(226, 46);
			this->btnUpdateBook->TabIndex = 36;
			this->btnUpdateBook->Text = L"Modificar";
			this->btnUpdateBook->UseVisualStyleBackColor = false;
			this->btnUpdateBook->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnUpdateBook_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::White;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(219, 452);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(183, 46);
			this->btnAdd->TabIndex = 35;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnAdd_Click_1);
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(614, 366);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(495, 57);
			this->txtDescription->TabIndex = 34;
			this->txtDescription->Text = L"";
			// 
			// txtProvider
			// 
			this->txtProvider->Location = System::Drawing::Point(614, 314);
			this->txtProvider->Name = L"txtProvider";
			this->txtProvider->Size = System::Drawing::Size(377, 42);
			this->txtProvider->TabIndex = 33;
			// 
			// txtQuantity
			// 
			this->txtQuantity->Location = System::Drawing::Point(614, 263);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(113, 42);
			this->txtQuantity->TabIndex = 32;
			// 
			// txtPublisher
			// 
			this->txtPublisher->Location = System::Drawing::Point(613, 211);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(332, 42);
			this->txtPublisher->TabIndex = 31;
			// 
			// txtGenre
			// 
			this->txtGenre->Location = System::Drawing::Point(613, 157);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(333, 42);
			this->txtGenre->TabIndex = 30;
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(613, 104);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(500, 42);
			this->txtAuthor->TabIndex = 29;
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(613, 53);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(500, 42);
			this->txtTitle->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(424, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 34);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Descripción :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(424, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 34);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Proveedor :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(424, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 34);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Cantidad :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(424, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 34);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Editorial :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(424, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 34);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Género :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(424, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 34);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Autor :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(424, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 34);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Título :";
			this->label2->Click += gcnew System::EventHandler(this, &MaintenanceBook::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(423, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 38);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Ingresar datos del libro :";
			this->label1->Click += gcnew System::EventHandler(this, &MaintenanceBook::label1_Click_1);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BackColor = System::Drawing::Color::White;
			this->pbPhoto->Location = System::Drawing::Point(1219, 72);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(227, 230);
			this->pbPhoto->TabIndex = 20;
			this->pbPhoto->TabStop = false;
			// 
			// btnAgregarFoto
			// 
			this->btnAgregarFoto->ForeColor = System::Drawing::Color::Black;
			this->btnAgregarFoto->Location = System::Drawing::Point(1247, 316);
			this->btnAgregarFoto->Name = L"btnAgregarFoto";
			this->btnAgregarFoto->Size = System::Drawing::Size(173, 38);
			this->btnAgregarFoto->TabIndex = 21;
			this->btnAgregarFoto->Text = L"Actualizar Foto";
			this->btnAgregarFoto->UseVisualStyleBackColor = true;
			this->btnAgregarFoto->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnAgregarFoto_Click);
			// 
			// MaintenanceBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1517, 750);
			this->Controls->Add(this->dgvBooks);
			this->Controls->Add(this->btnDeleteBook);
			this->Controls->Add(this->btnUpdateBook);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtProvider);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MaintenanceBook";
			this->Text = L"Mantenimiento de libros";
			this->Load += gcnew System::EventHandler(this, &MaintenanceBook::MaintenanceBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MaintenanceBook_Load(System::Object^ sender, System::EventArgs^ e) {

	ShowBooks();
}
private: System::Void btnAdd_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ title = txtTitle->Text;
		String^ author = txtAuthor->Text;
		String^ genre = txtGenre->Text;
		String^ publisher = txtPublisher->Text;
		int quantity = 0;
		quantity = Int32::Parse(txtQuantity->Text);
		String^ provider = txtProvider->Text;
		String^ description = txtDescription->Text;

		if (title->Length == 0 || author->Length == 0 || publisher->Length == 0 || quantity == 0 || title == nullptr) {
			MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		Book^ book = gcnew Book(title, author, genre, publisher, quantity, provider, description);
		if (Controller::AddBook(book) == 1) {
			ShowBooks();
			MessageBox::Show("Se ha agregado el libro " + title);
		}
		else {
			MessageBox::Show("No se ha podido agregar el libro " + title);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnUpdateBook_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookTitle = txtTitle->Text->Trim();
	if (bookTitle->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro.");
		return;
	}
	try {
		String^ bookTitle = txtTitle->Text->Trim();
		String^ bookAuthor = txtAuthor->Text->Trim();
		if (bookTitle->Length == 0) {
			MessageBox::Show("El nombre del libro no debe estar vacío");
			return;
		}
		if (bookAuthor->Length == 0) {
			MessageBox::Show("El nombre del autor no debe estar vacío");
			return;
		}
		String^ bookGenre = txtGenre->Text->Trim();
		if (bookGenre->Length == 0) {
			MessageBox::Show("El género del libro no debe estar vacío");
			return;
		}
		int bookQuantity = Int32::Parse(txtQuantity->Text);

		String^ bookPublisher = txtPublisher->Text->Trim();
		if (bookPublisher->Length == 0) {
			MessageBox::Show("El género del libro no debe estar vacío");
			return;
		}
		String^ bookProvider = txtProvider->Text->Trim();
		if (bookProvider->Length == 0) {
			MessageBox::Show("El proveedor del libro no debe estar vacío");
			return;
		}
		String^ bookDescription = txtDescription->Text->Trim();
		if (bookDescription->Length == 0) {
			MessageBox::Show("La descripción del libro no debe estar vacía");
			return;
		}
		Book^ book1 = gcnew Book(bookTitle, bookAuthor, bookGenre, bookPublisher, bookQuantity, bookProvider, bookDescription);
		if (MrBookyController::Controller::UpdateBook(book1) == 1) {
			MessageBox::Show("Se ha modificado el libro " + bookTitle + "-" + bookAuthor);
			ShowBooks();
		}
		else {
			MessageBox::Show("No se ha podido modificar el libro " + bookTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
	   void ShowBooks() {
		   List<Book^>^ books = MrBookyController::Controller::GetBooks();
		   if (books != nullptr) {
			   dgvBooks->Rows->Clear();
			   for (int i = 0; i < books->Count; i++) {
				   dgvBooks->Rows->Add(gcnew array<String^>{
					   books[i]->Title,
						   books[i]->Author,
						   books[i]->Genre,
						   books[i]->Publisher,
						   "" + books[i]->Quantity,
						   books[i]->Provider,
						   books[i]->Description
				   }
				   );
			   }
		   }
	   }
private: System::Void btnDeleteBook_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ bookTittle = txtTitle->Text->Trim();
	if (bookTittle->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro.");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el libro?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteBook(bookTittle);
			ShowBooks();
			MessageBox::Show("Se ha eliminado el libro " + bookTittle + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void dgvBooks_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ bookName = dgvBooks->Rows[dgvBooks->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
	Book^ book = Controller::SearchBook(bookName);
	txtTitle->Text = book->Title;
	txtAuthor->Text = book->Author;
	txtGenre->Text = book->Genre;
	txtPublisher->Text = book->Publisher;
	txtQuantity->Text = "" + book->Quantity;
	txtProvider->Text = book->Provider;
	txtDescription->Text = book->Description;
}

private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
