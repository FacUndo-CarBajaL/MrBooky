#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtGenre;
	private: System::Windows::Forms::TextBox^ txtEditorial;
	private: System::Windows::Forms::TextBox^ txtQuantity;
	private: System::Windows::Forms::TextBox^ txtProvider;
	private: System::Windows::Forms::RichTextBox^ rtxtDescription;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::DataGridView^ dgvLibros;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Autor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookGenre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookPublisher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookSupplier;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MaintenanceBook::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtProvider = (gcnew System::Windows::Forms::TextBox());
			this->rtxtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvLibros = (gcnew System::Windows::Forms::DataGridView());
			this->BookTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Autor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookGenre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookPublisher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookSupplier = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnAgregarFoto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(423, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos del libro :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(424, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Título :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(424, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Autor :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(424, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Género :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(424, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Editorial :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(424, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cantidad :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(424, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Proveedor :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(424, 391);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 22);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Descripción :";
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(613, 64);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(500, 29);
			this->txtTitle->TabIndex = 8;
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(613, 115);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(500, 29);
			this->txtAuthor->TabIndex = 9;
			// 
			// txtGenre
			// 
			this->txtGenre->Location = System::Drawing::Point(613, 168);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(333, 29);
			this->txtGenre->TabIndex = 10;
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(613, 222);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(332, 29);
			this->txtEditorial->TabIndex = 11;
			// 
			// txtQuantity
			// 
			this->txtQuantity->Location = System::Drawing::Point(614, 274);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(113, 29);
			this->txtQuantity->TabIndex = 12;
			// 
			// txtProvider
			// 
			this->txtProvider->Location = System::Drawing::Point(614, 325);
			this->txtProvider->Name = L"txtProvider";
			this->txtProvider->Size = System::Drawing::Size(377, 29);
			this->txtProvider->TabIndex = 13;
			// 
			// rtxtDescription
			// 
			this->rtxtDescription->Location = System::Drawing::Point(614, 377);
			this->rtxtDescription->Name = L"rtxtDescription";
			this->rtxtDescription->Size = System::Drawing::Size(495, 57);
			this->rtxtDescription->TabIndex = 14;
			this->rtxtDescription->Text = L"";
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(79, 463);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(183, 46);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnAdd_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->ForeColor = System::Drawing::Color::Black;
			this->btnModificar->Location = System::Drawing::Point(404, 463);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(226, 46);
			this->btnModificar->TabIndex = 16;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnModificar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->ForeColor = System::Drawing::Color::Black;
			this->btnBuscar->Location = System::Drawing::Point(777, 463);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(301, 46);
			this->btnBuscar->TabIndex = 17;
			this->btnBuscar->Text = L"Buscar por nombre\r\n";
			this->btnBuscar->UseVisualStyleBackColor = true;
			// 
			// btnEliminar
			// 
			this->btnEliminar->ForeColor = System::Drawing::Color::Black;
			this->btnEliminar->Location = System::Drawing::Point(1219, 463);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(173, 46);
			this->btnEliminar->TabIndex = 18;
			this->btnEliminar->Text = L"Eliminar\r\n";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// dgvLibros
			// 
			this->dgvLibros->AllowUserToAddRows = false;
			this->dgvLibros->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvLibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->BookTitle,
					this->Autor, this->BookGenre, this->BookPublisher, this->BookQuantity, this->BookSupplier, this->BookDescription
			});
			this->dgvLibros->Location = System::Drawing::Point(27, 537);
			this->dgvLibros->Name = L"dgvLibros";
			this->dgvLibros->RowHeadersWidth = 82;
			this->dgvLibros->RowTemplate->Height = 33;
			this->dgvLibros->Size = System::Drawing::Size(1487, 190);
			this->dgvLibros->TabIndex = 19;
			this->dgvLibros->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceBook::dgvLibros_CellClick);
			// 
			// BookTitle
			// 
			this->BookTitle->HeaderText = L"Título";
			this->BookTitle->MinimumWidth = 10;
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Width = 200;
			// 
			// Autor
			// 
			this->Autor->HeaderText = L"BookAuthor";
			this->Autor->MinimumWidth = 10;
			this->Autor->Name = L"Autor";
			this->Autor->Width = 200;
			// 
			// BookGenre
			// 
			this->BookGenre->HeaderText = L"Género";
			this->BookGenre->MinimumWidth = 10;
			this->BookGenre->Name = L"BookGenre";
			this->BookGenre->Width = 200;
			// 
			// BookPublisher
			// 
			this->BookPublisher->HeaderText = L"Editorial";
			this->BookPublisher->MinimumWidth = 10;
			this->BookPublisher->Name = L"BookPublisher";
			this->BookPublisher->Width = 200;
			// 
			// BookQuantity
			// 
			this->BookQuantity->HeaderText = L"Cantidad";
			this->BookQuantity->MinimumWidth = 10;
			this->BookQuantity->Name = L"BookQuantity";
			this->BookQuantity->Width = 200;
			// 
			// BookSupplier
			// 
			this->BookSupplier->HeaderText = L"Proveedor";
			this->BookSupplier->MinimumWidth = 10;
			this->BookSupplier->Name = L"BookSupplier";
			this->BookSupplier->Width = 200;
			// 
			// BookDescription
			// 
			this->BookDescription->HeaderText = L"Description";
			this->BookDescription->MinimumWidth = 10;
			this->BookDescription->Name = L"BookDescription";
			this->BookDescription->Width = 200;
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
			this->Controls->Add(this->btnAgregarFoto);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->dgvLibros);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->rtxtDescription);
			this->Controls->Add(this->txtProvider);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtEditorial);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void ShowBooks() {
				List<Book^>^ bookList = Controller::GetBooks();
				if (bookList != nullptr) {
					dgvLibros->Rows->Clear();
					for (int i = 0; i < bookList->Count; i++) {
						dgvLibros->Rows->Add(gcnew array<String^> {bookList[i]->Title,
							bookList[i]->Author,
							bookList[i]->Genre,
							bookList[i]->Publisher,
						    "" + bookList[i]->Stock,
						    bookList[i]->Provider,
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

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ title = txtTitle->Text;
		String^ author = txtAuthor->Text;
		String^ genre = txtGenre->Text;
		String^ editorial = txtEditorial->Text;
		int quantity = Int32::Parse(txtQuantity->Text);
		String^ provider = txtProvider->Text;
		String^ description = rtxtDescription->Text;

		if (title->Length == 0 || author->Length == 0 || editorial->Length == 0 || quantity == 0) {
			MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		MessageBox::Show("Libro registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		int bookId = 1;
		Book^ book = gcnew Book();
		book->Title = title;
		book->Author = author;
		book->Genre = genre;
		book->Publisher = editorial;
		book->Stock = quantity;
		book->Description = description;
		book->BookID = bookId;
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			book->Photo = ms->ToArray();
		}

		Controller::AddBook(book);
		ShowBooks();
		MessageBox::Show("Se ha agregado el robot " + bookId + " - " + title);
		txtTitle->Clear();
		txtAuthor->Clear();
		txtGenre->Clear();
		txtEditorial->Clear();
		txtQuantity->Clear();
		txtProvider->Clear();
		rtxtDescription->Clear();

		bookId++;
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el robot por el siguiente motivo:\n" +
			ex->Message);
	}
	
}

private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAgregarFoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
private: System::Void dgvLibros_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*int robotId = Convert::ToInt32(dgvLibros->Rows[dgvLibros->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Book^ book = Controller::SearchBookByName(robotId);
	txtRobotId->Text = "" + robot->Id;
	txtRobotName->Text = robot->Name;
	txtRobotModel->Text = robot->Model;
	for (int i = 0; i < cmbBrand->Items->Count; i++) {
		if (((ComboBoxItem^)cmbBrand->Items[i])->Value == robot->Brand->Id) {
			cmbBrand->SelectedIndex = i;
			break;
		}
	}
	txtRobotLoadCapacity->Text = "" + robot->LoadCapacity;
	txtRobotSpeed->Text = "" + robot->Speed;
	rbtnRobotIsOperativeYes->Checked = robot->Status->Equals("A");
	rbtnRobotIsOperativeNo->Checked = robot->Status->Equals("I");

	if (robot->PurchaseDate != nullptr)
		dtpPurchaseDate->Value = *(robot->PurchaseDate);
	else
		dtpPurchaseDate->Value = DateTime::Now;
	if (robot->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(robot->Photo);
		pbRobotPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbRobotPhoto->Image = nullptr;
		pbRobotPhoto->Invalidate();
	}
	*/
}
};
}
