#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;
	using namespace System::IO;
	using namespace System::Drawing::Imaging;


	/// <summary>
	/// Resumen de MaintenanceBook
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ txtTitulo;
	private: System::Windows::Forms::RichTextBox^ txtAutor;
	private: System::Windows::Forms::RichTextBox^ txtGenero;
	private: System::Windows::Forms::RichTextBox^ txtEditorial;
	private: System::Windows::Forms::RichTextBox^ txtCantidad;
	private: System::Windows::Forms::RichTextBox^ txtDescripcion;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnActualizarFoto;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::DataGridView^ dgvlibros;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEditorial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaDescripción;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ txtID;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MaintenanceBook::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::RichTextBox());
			this->txtAutor = (gcnew System::Windows::Forms::RichTextBox());
			this->txtGenero = (gcnew System::Windows::Forms::RichTextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::RichTextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::RichTextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnActualizarFoto = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvlibros = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaDescripción = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvlibros))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos del libro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(130, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Titulo :";
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(197, 84);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(385, 26);
			this->txtTitulo->TabIndex = 2;
			this->txtTitulo->Text = L"";
			// 
			// txtAutor
			// 
			this->txtAutor->Location = System::Drawing::Point(197, 116);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(311, 26);
			this->txtAutor->TabIndex = 3;
			this->txtAutor->Text = L"";
			// 
			// txtGenero
			// 
			this->txtGenero->Location = System::Drawing::Point(197, 148);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(135, 26);
			this->txtGenero->TabIndex = 4;
			this->txtGenero->Text = L"";
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(197, 180);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(228, 26);
			this->txtEditorial->TabIndex = 5;
			this->txtEditorial->Text = L"";
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(197, 212);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(85, 26);
			this->txtCantidad->TabIndex = 6;
			this->txtCantidad->Text = L"";
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(197, 244);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(385, 122);
			this->txtDescripcion->TabIndex = 7;
			this->txtDescripcion->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(130, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Autor :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(114, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Genero :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(109, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Editorial :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(102, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Cantidad :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(78, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Descripción :";
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(687, 54);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(163, 175);
			this->pbPhoto->TabIndex = 13;
			this->pbPhoto->TabStop = false;
			// 
			// btnActualizarFoto
			// 
			this->btnActualizarFoto->Location = System::Drawing::Point(687, 244);
			this->btnActualizarFoto->Name = L"btnActualizarFoto";
			this->btnActualizarFoto->Size = System::Drawing::Size(162, 24);
			this->btnActualizarFoto->TabIndex = 14;
			this->btnActualizarFoto->Text = L"Actualizar Foto";
			this->btnActualizarFoto->UseVisualStyleBackColor = true;
			this->btnActualizarFoto->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnActualizarFoto_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(64, 400);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(162, 24);
			this->btnRegistrar->TabIndex = 15;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnRegistrar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(382, 400);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(162, 24);
			this->btnModificar->TabIndex = 16;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(687, 400);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(162, 24);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnEliminar_Click);
			// 
			// dgvlibros
			// 
			this->dgvlibros->AllowUserToAddRows = false;
			this->dgvlibros->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvlibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvlibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaAutor, this->ColumnaGenero, this->ColumnaEditorial, this->ColumnaCantidad, this->ColumnaDescripción
			});
			this->dgvlibros->Location = System::Drawing::Point(29, 456);
			this->dgvlibros->Name = L"dgvlibros";
			this->dgvlibros->Size = System::Drawing::Size(849, 377);
			this->dgvlibros->TabIndex = 18;
			this->dgvlibros->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceBook::dgvlibros_CellClick);
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->Name = L"ColumnaID";
			// 
			// ColumnaTitulo
			// 
			this->ColumnaTitulo->HeaderText = L"Titulo";
			this->ColumnaTitulo->Name = L"ColumnaTitulo";
			// 
			// ColumnaAutor
			// 
			this->ColumnaAutor->HeaderText = L"Autor";
			this->ColumnaAutor->Name = L"ColumnaAutor";
			// 
			// ColumnaGenero
			// 
			this->ColumnaGenero->HeaderText = L"Genero";
			this->ColumnaGenero->Name = L"ColumnaGenero";
			// 
			// ColumnaEditorial
			// 
			this->ColumnaEditorial->HeaderText = L"Editorial";
			this->ColumnaEditorial->Name = L"ColumnaEditorial";
			// 
			// ColumnaCantidad
			// 
			this->ColumnaCantidad->HeaderText = L"Cantidad";
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			// 
			// ColumnaDescripción
			// 
			this->ColumnaDescripción->HeaderText = L"Descripción";
			this->ColumnaDescripción->Name = L"ColumnaDescripción";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(157, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 18);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ID :";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(197, 49);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(85, 26);
			this->txtID->TabIndex = 19;
			this->txtID->Text = L"";
			// 
			// MaintenanceBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(903, 845);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->dgvlibros);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->btnActualizarFoto);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->txtAutor);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MaintenanceBook";
			this->Text = L"MaintenanceBook";
			this->Load += gcnew System::EventHandler(this, &MaintenanceBook::MaintenanceBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvlibros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowBooks() {
			List<Book^>^ bookList = Controller::GetBooks();
			if (bookList != nullptr) {
				dgvlibros->Rows->Clear();
				for (int i = 0; i < bookList->Count; i++) {
					dgvlibros->Rows->Add(gcnew array<String^> { "" + bookList[i]->BookID,
						bookList[i]->Title,
						bookList[i]->Author,
						bookList[i]->Genre,
						bookList[i]->Publisher,
					    ""+ bookList[i]->Quantity,
					    bookList[i]->Description});
				}
			}
			
		}

		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Image = nullptr;
					dynamic_cast<PictureBox^>(control)->Invalidate();
				}
			}
		}


	private: System::Void MaintenanceBook_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowBooks();

	}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		Book^ book = gcnew Book();
		String^ idText = txtID->Text;
		String^ title = txtTitulo->Text;
		String^ author = txtAutor->Text;
		String^ genre = txtGenero->Text;
		String^ publisher = txtEditorial->Text;
		String^ description = txtDescripcion->Text;
		String^ quantityText = txtCantidad->Text;
		int quantity;
		int id;


		if (title->Length > 0 && author->Length > 0 && genre->Length > 0 &&publisher->Length > 0 && description->Length > 0 && Int32::TryParse(quantityText, quantity) && Int32::TryParse(idText, id)) {
		    book->BookID = id;
			book->Title = title;
			book->Author = author;
			book->Genre = genre;
			book->Publisher = publisher;
			book->Description = description;
			book->Quantity = quantity;
		}
		
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			book->Photo = ms->ToArray();
		}

		Controller::AddBook(book);
		ShowBooks();
		MessageBox::Show("Se ha agregado el libro " + id + " - " + title);
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookId = txtID->Text->Trim();
	if (bookId->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro");
		return;
	}
	try {

		Book^ book = gcnew Book();
		String^ idText = txtID->Text;
		String^ title = txtTitulo->Text;
		String^ author = txtAutor->Text;
		String^ genre = txtGenero->Text;
		String^ publisher = txtEditorial->Text;
		String^ description = txtDescripcion->Text;
		String^ quantityText = txtCantidad->Text;
		int quantity;
		int id;

		if (title->Length > 0 && author->Length > 0 && genre->Length > 0 && publisher->Length > 0 && description->Length > 0 && Int32::TryParse(quantityText, quantity) && Int32::TryParse(idText, id)) {
			book->BookID = id;
			book->Title = title;
			book->Author = author;
			book->Genre = genre;
			book->Publisher = publisher;
			book->Description = description;
			book->Quantity = quantity;
		}

		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			book->Photo = ms->ToArray();
		}
		Controller::UpdateBook(book);
		ShowBooks();
		MessageBox::Show("Se ha modificado el libro " + id + " - " + title);
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookName = txtTitulo->Text->Trim();
	if (bookName->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el libro?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteBook(bookName);
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
			ShowBooks();
			ClearControls();
			MessageBox::Show("Se ha eliminado el libro  " + bookName + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnActualizarFoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
private: System::Void dgvlibros_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ bookName = dgvlibros->Rows[e->RowIndex]->Cells["ColumnaTitulo"]->Value->ToString();
	Book^ book = Controller::SearchBookByName(bookName);
	txtTitulo->Text = book->Title;
	txtAutor->Text = book->Author;
	txtGenero->Text = book->Genre;
	txtEditorial->Text = book->Publisher;
	txtID->Text = "" + book->BookID;
	txtCantidad->Text = "" + book->Quantity;
	txtDescripcion->Text = book->Description;

	if (book->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(book->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}

}

};
}
