#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

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

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->colIdBook = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(77, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(427, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Cantidad";
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
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colIdBook,
					this->colTitle, this->colQuantity
			});
			this->dataGridView1->Location = System::Drawing::Point(65, 235);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(818, 189);
			this->dataGridView1->TabIndex = 7;
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
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtIdStock);
			this->Name = L"Stock";
			this->Text = L"Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtIdStock->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = txtTitle->Text;
	if (title->Length == 0) {
		MessageBox::Show("Por favor, ingrese un título válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
}
};
}
