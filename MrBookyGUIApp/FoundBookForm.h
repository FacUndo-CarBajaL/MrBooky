#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyPersistance;
	using namespace MrBookyModel;
	using namespace MrBookyController;

	/// <summary>
	/// Resumen de FoundBookForm
	/// </summary>
	public ref class FoundBookForm : public System::Windows::Forms::Form
	{
	public:
		Book^ book;
	public:
		FoundBookForm(Book^ bookFound)
		{
			InitializeComponent();
			this->book = bookFound; 
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
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtGenre;
	private: System::Windows::Forms::TextBox^ txtAvailability;
	private: System::Windows::Forms::TextBox^ txtPublisher;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtReleaseYear;


	private: System::Windows::Forms::TextBox^ txtStock;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::PictureBox^ pbBook;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtLoanTime;
	private: System::Windows::Forms::TextBox^ txtWeight;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dvgReviews;
	private: System::Windows::Forms::Button^ button1;



	protected:


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtAvailability = (gcnew System::Windows::Forms::TextBox());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtReleaseYear = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->pbBook = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtLoanTime = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dvgReviews = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBook))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgReviews))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Título";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Genero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(285, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibilidad";
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(31, 41);
			this->txtTitle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(96, 22);
			this->txtTitle->TabIndex = 4;
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(31, 87);
			this->txtAuthor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(96, 22);
			this->txtAuthor->TabIndex = 5;
			// 
			// txtGenre
			// 
			this->txtGenre->Location = System::Drawing::Point(31, 136);
			this->txtGenre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(96, 22);
			this->txtGenre->TabIndex = 6;
			// 
			// txtAvailability
			// 
			this->txtAvailability->Location = System::Drawing::Point(289, 41);
			this->txtAvailability->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAvailability->Name = L"txtAvailability";
			this->txtAvailability->Size = System::Drawing::Size(96, 22);
			this->txtAvailability->TabIndex = 7;
			// 
			// txtPublisher
			// 
			this->txtPublisher->Location = System::Drawing::Point(289, 87);
			this->txtPublisher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(96, 22);
			this->txtPublisher->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(285, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Editorial";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(285, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Año Publicación";
			// 
			// txtReleaseYear
			// 
			this->txtReleaseYear->Location = System::Drawing::Point(289, 136);
			this->txtReleaseYear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtReleaseYear->Name = L"txtReleaseYear";
			this->txtReleaseYear->Size = System::Drawing::Size(96, 22);
			this->txtReleaseYear->TabIndex = 11;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(31, 186);
			this->txtStock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(89, 22);
			this->txtStock->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Stock";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(285, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Descripcion";
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(289, 186);
			this->txtDescription->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(96, 22);
			this->txtDescription->TabIndex = 15;
			// 
			// pbBook
			// 
			this->pbBook->Location = System::Drawing::Point(531, 41);
			this->pbBook->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbBook->Name = L"pbBook";
			this->pbBook->Size = System::Drawing::Size(132, 143);
			this->pbBook->TabIndex = 16;
			this->pbBook->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(567, 192);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Portada";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(28, 218);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Tiempo de prestamo";
			// 
			// txtLoanTime
			// 
			this->txtLoanTime->Location = System::Drawing::Point(31, 236);
			this->txtLoanTime->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLoanTime->Name = L"txtLoanTime";
			this->txtLoanTime->Size = System::Drawing::Size(89, 22);
			this->txtLoanTime->TabIndex = 19;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(289, 236);
			this->txtWeight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(96, 22);
			this->txtWeight->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(285, 218);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Peso (kg)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 267);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 16);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Comentarios";
			// 
			// dvgReviews
			// 
			this->dvgReviews->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgReviews->Location = System::Drawing::Point(31, 286);
			this->dvgReviews->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dvgReviews->Name = L"dvgReviews";
			this->dvgReviews->RowHeadersWidth = 62;
			this->dvgReviews->RowTemplate->Height = 28;
			this->dvgReviews->Size = System::Drawing::Size(683, 192);
			this->dvgReviews->TabIndex = 23;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(527, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 24);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Agregar al carrito";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FoundBookForm::button1_Click);
			// 
			// FoundBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(756, 503);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dvgReviews);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->txtLoanTime);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pbBook);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtReleaseYear);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->txtAvailability);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FoundBookForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FoundBookForm";
			this->Load += gcnew System::EventHandler(this, &FoundBookForm::FoundBookForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBook))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgReviews))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FoundBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Book^ tempBook = (Book^)Persistance::LoadBinaryFile("tempBook");
		txtTitle->Text = book->Title;
		txtAuthor->Text = book->Author;
		txtGenre->Text = book->Genre;
		txtAvailability->Text = book->Availability;
		txtPublisher->Text = book->Publisher;
		txtReleaseYear->Text = book->ReleaseYear.ToString();
		txtStock->Text = book->Quantity.ToString();
		txtDescription->Text = book->Description;
		txtLoanTime->Text = book->LoanTime.ToString();
		txtWeight->Text = book->Weight.ToString();
		if (book->Photo != nullptr) {
			try {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(book->Photo);
				pbBook->Image = Image::FromStream(ms);
				pbBook->SizeMode = PictureBoxSizeMode::Zoom;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar la imagen: " + ex->Message);
				pbBook->Image = nullptr;
			}
		}
		else {
			pbBook->Image = nullptr;
			pbBook->Invalidate();
		}
		
		dvgReviews->Rows->Clear(); 

		List<String^>^ reviews = book->Reviews;

		if (reviews != nullptr) {
			for each (String ^ review in reviews) {
				int rowIndex = dvgReviews->Rows->Add();
				dvgReviews->Rows[rowIndex]->Cells[0]->Value = review;
			}

		}
		else {
			MessageBox::Show("No hay reseñas disponibles para este libro.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Agregar el libro al carrito
	Loan^ loan1 = gcnew Loan();
	int id = Int64::Parse(DateTime::Now.ToString("yyMMddHHmmss"));
	Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
	LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
	if (loanCart == nullptr) {
		loanCart = gcnew LoanCart();
		loanCart->Client = user;
		loanCart->Loans = gcnew List<Loan^>();
		Controller::AddLoanCart(loanCart);
	}
	loan1->LoanID = id;
	loan1->Book = this->book;
	loan1->Quantity = 1;
	if (loan1->Book != nullptr) {
		loanCart->Loans->Add(loan1);
		MessageBox::Show("Total préstamos en carrito: " + loanCart->Loans->Count);
		Controller::UpdateLoanCart(loanCart);
		MessageBox::Show("Libro agregado al carrito exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No se pudo agregar el libro al carrito.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
