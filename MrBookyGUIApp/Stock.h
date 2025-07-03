#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MrBookyController;
	using namespace MrBookyModel;
	using namespace MrBookyPersistance;

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
	private: System::Windows::Forms::TextBox^ txtCantidad;


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvResultados;

	private: System::Windows::Forms::Button^ button3;
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
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvResultados = (gcnew System::Windows::Forms::DataGridView());
			this->colIdBook = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResultados))->BeginInit();
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
			this->txtIdStock->Enter += gcnew System::EventHandler(this, &Stock::txtIdStock_Enter);
			this->txtIdStock->Leave += gcnew System::EventHandler(this, &Stock::txtIdStock_Leave);
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
			this->txtTitle->Enter += gcnew System::EventHandler(this, &Stock::txtTitle_Enter);
			this->txtTitle->Leave += gcnew System::EventHandler(this, &Stock::txtTitle_Leave);
			// 
			// txtCantidad
			// 
			this->txtCantidad->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCantidad->ForeColor = System::Drawing::Color::DarkGray;
			this->txtCantidad->Location = System::Drawing::Point(77, 136);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(427, 29);
			this->txtCantidad->TabIndex = 3;
			this->txtCantidad->Text = L"Cantidad";
			this->txtCantidad->Enter += gcnew System::EventHandler(this, &Stock::textBox2_Enter);
			this->txtCantidad->Leave += gcnew System::EventHandler(this, &Stock::textBox2_Leave);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(533, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Stock::button1_Click);
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
			// dgvResultados
			// 
			this->dgvResultados->AllowUserToAddRows = false;
			this->dgvResultados->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvResultados->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvResultados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvResultados->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colIdBook,
					this->colTitle, this->colQuantity
			});
			this->dgvResultados->Location = System::Drawing::Point(65, 235);
			this->dgvResultados->Name = L"dgvResultados";
			this->dgvResultados->RowHeadersWidth = 51;
			this->dgvResultados->Size = System::Drawing::Size(818, 189);
			this->dgvResultados->TabIndex = 7;
			// 
			// colIdBook
			// 
			this->colIdBook->HeaderText = L"Id";
			this->colIdBook->MinimumWidth = 6;
			this->colIdBook->Name = L"colIdBook";
			// 
			// colTitle
			// 
			this->colTitle->HeaderText = L"Título";
			this->colTitle->MinimumWidth = 6;
			this->colTitle->Name = L"colTitle";
			// 
			// colQuantity
			// 
			this->colQuantity->HeaderText = L"Cantidad";
			this->colQuantity->MinimumWidth = 6;
			this->colQuantity->Name = L"colQuantity";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(433, 449);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 32);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Stock::button3_Click);
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dgvResultados);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtIdStock);
			this->Name = L"Stock";
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResultados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	void ShowBook(Book^ book) {
		dgvResultados->Rows->Clear();

		int index = dgvResultados->Rows->Add(gcnew array<String^> {
			"" + book->BookID,
				book->Title,
				"" + book->Quantity}
		);
	}
private: System::Void txtIdStock_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtIdStock->Text == "Ingrese Id del libro") {
		txtIdStock->Text = "";
		txtIdStock->ForeColor = System::Drawing::Color::Black;
	}
	else if (txtIdStock->Text->Length == 0) {
		txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
		txtIdStock->Text = "Ingrese Id del libro";
	}
}


private: System::Void txtIdStock_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtIdStock->Text->Length == 0) {
		txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
		txtIdStock->Text = "Ingrese Id del libro";
	}
	else {
		txtIdStock->ForeColor = System::Drawing::Color::Black;
	}
}

private: System::Void txtTitle_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtIdStock->Text == "Ingrese titulo del libro") {
		txtIdStock->Text = "";
		txtIdStock->ForeColor = System::Drawing::Color::Black;
	}
	else if (txtIdStock->Text->Length == 0) {
		txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
		txtIdStock->Text = "Ingrese titulo del libro";
	}
}

private: System::Void txtTitle_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtTitle->Text->Length == 0) {
		txtTitle->ForeColor = System::Drawing::Color::DarkGray;
		txtTitle->Text = "Ingrese Título del libro";
	}
	else {
		txtTitle->ForeColor = System::Drawing::Color::Black;
	}
}

private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtCantidad->Text == "Cantidad") {
		txtCantidad->Text = "";
		txtCantidad->ForeColor = System::Drawing::Color::Black;
	}
	else if (txtCantidad->Text->Length == 0) {
		txtCantidad->ForeColor = System::Drawing::Color::DarkGray;
		txtCantidad->Text = "Cantidad";
	}
}

private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtCantidad->Text->Length == 0) {
		txtCantidad->ForeColor = System::Drawing::Color::DarkGray;
		txtCantidad->Text = "Cantidad";
	}
	else {
		txtCantidad->ForeColor = System::Drawing::Color::Black;
	}
}

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtIdStock->Text;
	if (id->Length == 0) {
		MessageBox::Show("Por favor, ingrese un id válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Book^ book = Controller::SearchBookById(Convert::ToInt32(id));
	if (book == nullptr) {
		MessageBox::Show("Libro no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	ShowBook(book);
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = txtTitle->Text;
	if (title->Length == 0) {
		MessageBox::Show("Por favor, ingrese un título válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	Book^ book = Controller::SearchBook(title);
	if (book == nullptr) {
		MessageBox::Show("Libro no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	ShowBook(book);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvResultados->SelectedRows->Count == 0) {
		MessageBox::Show("Por favor, seleccione un libro para actualizar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int selectedRowIndex = dgvResultados->SelectedRows[0]->Index;
	int bookId = Convert::ToInt32(dgvResultados->Rows[selectedRowIndex]->Cells["colIdBook"]->Value);
	Book^ book = Controller::SearchBookById(bookId);
	if (book == nullptr) {
		MessageBox::Show("Libro no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int cantidad;
	String^ textoCantidad = dgvResultados->Rows[selectedRowIndex]->Cells["colQuantity"]->Value->ToString();
	if (!Int32::TryParse(textoCantidad, cantidad) || cantidad < 0) {
		MessageBox::Show("Ingrese una cantidad válida (entero positivo).");
		return;
	}
	cantidad = Convert::ToInt32(txtCantidad->Text);
	book->Quantity = cantidad;

	if (Controller::UpdateBook(book)) {
		MessageBox::Show("Libro actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Error al actualizar el libro.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	ShowBook(book);
}
};
}
