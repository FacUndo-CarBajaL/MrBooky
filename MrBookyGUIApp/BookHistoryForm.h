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
	/// Resumen de BookHistoryForm
	/// </summary>
	public ref class BookHistoryForm : public System::Windows::Forms::Form
	{
	public:
		BookHistoryForm(void)
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
		~BookHistoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvHistorial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEditorial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaFechaPrestamo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaFechaFinPrestamo;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaAñadirReseña;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookHistoryForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvHistorial = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaFechaPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaFechaFinPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->ColumnaAñadirReseña = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(347, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(473, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Historial de Libros";
			// 
			// dgvHistorial
			// 
			this->dgvHistorial->AllowUserToAddRows = false;
			this->dgvHistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaAutor, this->ColumnaEditorial, this->ColumnaFechaPrestamo, this->ColumnaFechaFinPrestamo, this->ColumnaImagen,
					this->ColumnaAñadirReseña
			});
			this->dgvHistorial->Location = System::Drawing::Point(46, 135);
			this->dgvHistorial->Name = L"dgvHistorial";
			this->dgvHistorial->RowHeadersWidth = 51;
			this->dgvHistorial->RowTemplate->Height = 24;
			this->dgvHistorial->Size = System::Drawing::Size(1045, 353);
			this->dgvHistorial->TabIndex = 1;
			this->dgvHistorial->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookHistoryForm::dgvHistorial_CellContentClick);
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->MinimumWidth = 6;
			this->ColumnaID->Name = L"ColumnaID";
			this->ColumnaID->Width = 125;
			// 
			// ColumnaTitulo
			// 
			this->ColumnaTitulo->HeaderText = L"Titulo";
			this->ColumnaTitulo->MinimumWidth = 6;
			this->ColumnaTitulo->Name = L"ColumnaTitulo";
			this->ColumnaTitulo->Width = 125;
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
			// ColumnaFechaPrestamo
			// 
			this->ColumnaFechaPrestamo->HeaderText = L"Fecha Inicio de Préstamo";
			this->ColumnaFechaPrestamo->MinimumWidth = 6;
			this->ColumnaFechaPrestamo->Name = L"ColumnaFechaPrestamo";
			this->ColumnaFechaPrestamo->Width = 125;
			// 
			// ColumnaFechaFinPrestamo
			// 
			this->ColumnaFechaFinPrestamo->HeaderText = L"Fecha Fin de Préstamo";
			this->ColumnaFechaFinPrestamo->MinimumWidth = 6;
			this->ColumnaFechaFinPrestamo->Name = L"ColumnaFechaFinPrestamo";
			this->ColumnaFechaFinPrestamo->Width = 125;
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->HeaderText = L"Imagen";
			this->ColumnaImagen->MinimumWidth = 6;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			this->ColumnaImagen->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ColumnaImagen->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->ColumnaImagen->Width = 125;
			// 
			// ColumnaAñadirReseña
			// 
			this->ColumnaAñadirReseña->HeaderText = L"Añadir Reseña\?";
			this->ColumnaAñadirReseña->MinimumWidth = 6;
			this->ColumnaAñadirReseña->Name = L"ColumnaAñadirReseña";
			this->ColumnaAñadirReseña->Text = L"Añadir";
			this->ColumnaAñadirReseña->UseColumnTextForButtonValue = true;
			this->ColumnaAñadirReseña->Width = 125;
			// 
			// BookHistoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1132, 537);
			this->Controls->Add(this->dgvHistorial);
			this->Controls->Add(this->label1);
			this->Name = L"BookHistoryForm";
			this->Text = L"BookHistoryForm";
			this->Load += gcnew System::EventHandler(this, &BookHistoryForm::BookHistoryForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowHistory() {
			Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
			List<Loan^>^ loanHistory = Controller::GetLoanHistoryByUser(user);
			if (loanHistory != nullptr) {
				dgvHistorial->Rows->Clear();
				for (int i = 0; i < loanHistory->Count; i++) {
					int index = dgvHistorial->Rows->Add(gcnew array<String^>{
						"" + loanHistory[i]->Book->BookID,
							loanHistory[i]->Book->Title,
							loanHistory[i]->Book->Author,
							loanHistory[i]->Book->Publisher,
							loanHistory[i]->Book->Author,
							"" + loanHistory[i]->DateLoan,
					        "" + loanHistory[i]->ReturnDate}
					);

					array<Byte>^ photoBytes = loanHistory[i]->Book->Photo;
					if (photoBytes != nullptr && photoBytes->Length > 0) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(photoBytes);
						System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

						// Insertar la imagen en la última columna
						dgvHistorial->Rows[index]->Cells["ColumnaImagen"]->Value = image;
					}

				}
			}
		};

	private: System::Void BookHistoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowHistory();

	}
private: System::Void dgvHistorial_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == dgvHistorial->Columns["ColumnaAñadirReseña"]->Index && e->RowIndex >= 0) {
		// Obtener el libro seleccionado
		int bookId = Int32::Parse(dgvHistorial->Rows[e->RowIndex]->Cells["ColumnaID"]->Value->ToString());
		Book^ book = Controller::SearchBookById(bookId);
		if (book != nullptr) {
			// Abrir el formulario de reseña
			AddReviewForm^ addReviewForm = gcnew AddReviewForm(book);
			addReviewForm->ShowDialog();
			ShowHistory(); // Actualizar el historial después de agregar la reseña
		}
		else {
			MessageBox::Show("Libro no encontrado.");
		}
}
};
}
