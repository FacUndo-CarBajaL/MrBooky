#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MrBookyModel;
	using namespace MrBookyController;

	/// <summary>
	/// Resumen de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtIdStock;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtQuantity;


	private: System::Windows::Forms::Button^ btnSearchTitle;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvStocks;
	private: System::Windows::Forms::Button^ btnUpdate;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIdBook;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colQuantity;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stock::typeid));
			this->txtIdStock = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchTitle = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvStocks = (gcnew System::Windows::Forms::DataGridView());
			this->colIdBook = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStocks))->BeginInit();
			this->SuspendLayout();
			// 
			// txtIdStock
			// 
			this->txtIdStock->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
			this->txtIdStock->Location = System::Drawing::Point(77, 37);
			this->txtIdStock->Name = L"txtIdStock";
			this->txtIdStock->Size = System::Drawing::Size(427, 29);
			this->txtIdStock->TabIndex = 0;
			this->txtIdStock->Text = L"Ingrese Id del libro";
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::White;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(533, 35);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(111, 32);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Stock::btnSearch_Click);
			// 
			// txtTitle
			// 
			this->txtTitle->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTitle->ForeColor = System::Drawing::Color::DarkGray;
			this->txtTitle->Location = System::Drawing::Point(77, 88);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(427, 29);
			this->txtTitle->TabIndex = 2;
			this->txtTitle->Text = L"Ingrese Título del libro";
			// 
			// txtQuantity
			// 
			this->txtQuantity->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtQuantity->ForeColor = System::Drawing::Color::DarkGray;
			this->txtQuantity->Location = System::Drawing::Point(77, 136);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(427, 29);
			this->txtQuantity->TabIndex = 3;
			this->txtQuantity->Text = L"Cantidad";
			// 
			// btnSearchTitle
			// 
			this->btnSearchTitle->BackColor = System::Drawing::Color::White;
			this->btnSearchTitle->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearchTitle->Location = System::Drawing::Point(533, 86);
			this->btnSearchTitle->Name = L"btnSearchTitle";
			this->btnSearchTitle->Size = System::Drawing::Size(111, 32);
			this->btnSearchTitle->TabIndex = 4;
			this->btnSearchTitle->Text = L"Buscar";
			this->btnSearchTitle->UseVisualStyleBackColor = false;
			this->btnSearchTitle->Click += gcnew System::EventHandler(this, &Stock::btnSearchTitle_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Underline));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(72, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Resultados";
			// 
			// dgvStocks
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvStocks->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvStocks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStocks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colIdBook,
					this->colTitle, this->colQuantity
			});
			this->dgvStocks->Location = System::Drawing::Point(65, 235);
			this->dgvStocks->Name = L"dgvStocks";
			this->dgvStocks->RowHeadersWidth = 51;
			this->dgvStocks->Size = System::Drawing::Size(818, 189);
			this->dgvStocks->TabIndex = 7;
			// 
			// colIdBook
			// 
			this->colIdBook->HeaderText = L"Id";
			this->colIdBook->MinimumWidth = 6;
			this->colIdBook->Name = L"colIdBook";
			this->colIdBook->Width = 125;
			// 
			// colTitle
			// 
			this->colTitle->HeaderText = L"Título";
			this->colTitle->MinimumWidth = 6;
			this->colTitle->Name = L"colTitle";
			this->colTitle->Width = 125;
			// 
			// colQuantity
			// 
			this->colQuantity->HeaderText = L"Cantidad";
			this->colQuantity->MinimumWidth = 6;
			this->colQuantity->Name = L"colQuantity";
			this->colQuantity->Width = 125;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::White;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(431, 440);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(111, 32);
			this->btnUpdate->TabIndex = 8;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Stock::btnUpdate_Click);
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->dgvStocks);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSearchTitle);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtIdStock);
			this->Name = L"Stock";
			this->Text = L"Stock";
			this->Load += gcnew System::EventHandler(this, &Stock::Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStocks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowBooks() {
			dgvStocks->Rows->Clear();
			List<Book^>^ books = MrBookyController::Controller::GetBooks();
			for each (Book ^ book in books) {
				int rowIndex = dgvStocks->Rows->Add();
				dgvStocks->Rows->Add(book->BookID, book->Title, book->Stock);
			}
		}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtIdStock->Text;

	if (id== "" || id == "Ingrese Id del libro") {
		MessageBox::Show("Por favor, ingrese un ID válido.", "Error");
		return;
	}

	int bookId;
	if (!Int32::TryParse(id, bookId)) {
		MessageBox::Show("Id inválido. Deber un número");
		return;
	}
	Book^ book = MrBookyController::Controller::SearchBook(bookId);
	dgvStocks->Rows->Clear();
	if (book == nullptr) {
		MessageBox::Show("Libro no encontrado.", "Error");
		return;
	}
	else {
		dgvStocks->Rows->Add(book->BookID, book->Title, book->Stock);
	}
}


private: System::Void btnSearchTitle_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = txtTitle->Text;
	if (title == "" || title == "Ingrese Título del libro") {
		MessageBox::Show("Por favor, ingrese un título válido.", "Error");
		return;
	}
	Book^ book = MrBookyController::Controller::SearchBookByName(title);
	dgvStocks->Rows->Clear();
	if (book != nullptr) {
		dgvStocks->Rows->Add(book->BookID, book->Title, book->Stock);
	}
	else {
		MessageBox::Show("No se encontraron libros con ese título.");
		return;
	}
}

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvStocks->SelectedRows->Count == 0) {
		MessageBox::Show("Por favor, seleccione un libro para actualizar.");
		return;
	}

	int selectedRowIndex = dgvStocks->SelectedRows[0]->Index;
	int bookId = Convert::ToInt32(dgvStocks->Rows[selectedRowIndex]->Cells["colIdBook"]->Value);
	String^ title = Convert::ToString(dgvStocks->Rows[selectedRowIndex]->Cells["colTitle"]->Value);
	
	try {
		int quantityUpdated = Convert::ToInt32(txtQuantity->Text);

		if (quantityUpdated < 0) {
			MessageBox::Show("La cantidad no puede ser negativa.");
			return;
		}
		Book^ book = MrBookyController::Controller::SearchBook(bookId);
		if (book == nullptr) {
			MessageBox::Show("Libro no encontrado.");
			return;
		}
		book->Stock = quantityUpdated;
		int bookUpdated = MrBookyController::Controller::UpdateBook(book);

		if (bookUpdated == 1) {
			MessageBox::Show("Stock actualizado correctamente.");
			ShowBooks();
		}
		else {
			MessageBox::Show("Error al actualizar el stock.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al actualizar el stock: " + ex->Message);
	}
}
private: System::Void Stock_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowBooks();
}
};
}
