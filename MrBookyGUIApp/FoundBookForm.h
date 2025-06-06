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
			//
			//TODO: agregar código de constructor aquí
			//

			Book^ book = bookFound;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBook))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgReviews))->BeginInit();
			this->SuspendLayout();
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Título";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Autor";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Genero";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(321, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Disponibilidad";
			this->txtTitle->Location = System::Drawing::Point(35, 51);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(108, 26);
			this->txtTitle->TabIndex = 4;
			this->txtAuthor->Location = System::Drawing::Point(35, 109);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(108, 26);
			this->txtAuthor->TabIndex = 5;
			this->txtGenre->Location = System::Drawing::Point(35, 170);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(108, 26);
			this->txtGenre->TabIndex = 6;
			this->txtAvailability->Location = System::Drawing::Point(325, 51);
			this->txtAvailability->Name = L"txtAvailability";
			this->txtAvailability->Size = System::Drawing::Size(108, 26);
			this->txtAvailability->TabIndex = 7;
			this->txtPublisher->Location = System::Drawing::Point(325, 109);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(108, 26);
			this->txtPublisher->TabIndex = 8;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(321, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Editorial";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(321, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Año Publicación";
			this->txtReleaseYear->Location = System::Drawing::Point(325, 170);
			this->txtReleaseYear->Name = L"txtReleaseYear";
			this->txtReleaseYear->Size = System::Drawing::Size(108, 26);
			this->txtReleaseYear->TabIndex = 11;
			this->txtStock->Location = System::Drawing::Point(35, 233);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 26);
			this->txtStock->TabIndex = 12;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 210);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Stock";
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(321, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Descripcion";
			this->txtDescription->Location = System::Drawing::Point(325, 233);
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(108, 26);
			this->txtDescription->TabIndex = 15;
			this->pbBook->Location = System::Drawing::Point(597, 51);
			this->pbBook->Name = L"pbBook";
			this->pbBook->Size = System::Drawing::Size(149, 138);
			this->pbBook->TabIndex = 16;
			this->pbBook->TabStop = false;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(638, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Portada";
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 272);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(154, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Tiempo de prestamo";
			this->txtLoanTime->Location = System::Drawing::Point(35, 295);
			this->txtLoanTime->Name = L"txtLoanTime";
			this->txtLoanTime->Size = System::Drawing::Size(100, 26);
			this->txtLoanTime->TabIndex = 19;
			this->txtWeight->Location = System::Drawing::Point(325, 295);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(108, 26);
			this->txtWeight->TabIndex = 20;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(321, 272);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Peso (kg)";
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(31, 334);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 20);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Comentarios";
			this->dvgReviews->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgReviews->Location = System::Drawing::Point(35, 357);
			this->dvgReviews->Name = L"dvgReviews";
			this->dvgReviews->RowHeadersWidth = 62;
			this->dvgReviews->RowTemplate->Height = 28;
			this->dvgReviews->Size = System::Drawing::Size(768, 150);
			this->dvgReviews->TabIndex = 23;
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(850, 512);
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
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
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
		ShowDetails(book);
	}

	public:
		void ShowDetails(Book^ book) {
			// Se muestra todos los detalles del libro encontrado.
			txtTitle->Text = book->Title;
			txtAuthor->Text = book->Author;
			txtGenre->Text = book->Genre;
			txtAvailability->Text = book->Availability;
			txtPublisher->Text = book->Publisher;
			txtReleaseYear->Text = book->ReleaseYear.ToString();
			txtStock->Text = book->Quantity.ToString();
			txtDescription->Text = book->Description;
			if (book->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbBook->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				book->Photo = ms->ToArray(); // Asignar la imagen del libro al PictureBox
			}
			txtLoanTime->Text = book->LoanTime.ToString();
			txtWeight->Text = book->Weight.ToString();
			// Mostrar las reseñas del libro en el DataGridView
			dvgReviews->Rows->Clear(); // Limpiar el DataGridView antes de mostrar los resultados
			for each (String^ review in book->Reviews) {
				int rowIndex = dvgReviews->Rows->Add();
				dvgReviews->Rows[rowIndex]->Cells[0]->Value = review;
			}

		}
};
}
