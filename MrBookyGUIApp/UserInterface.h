#pragma once
#include "BookResult.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookAuthor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookPublisher;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookStatus;
	private: System::Windows::Forms::DataGridViewButtonColumn^ BookShowMore;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->BookName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookAuthor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookPublisher = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookShowMore = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label1->Location = System::Drawing::Point(49, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label2->Location = System::Drawing::Point(51, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(363, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sistema de búsqueda MRBOOKY";
			// 
			// BookTitletxt
			// 
			this->BookTitletxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->BookTitletxt->Location = System::Drawing::Point(56, 151);
			this->BookTitletxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BookTitletxt->Name = L"BookTitletxt";
			this->BookTitletxt->Size = System::Drawing::Size(326, 22);
			this->BookTitletxt->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(395, 151);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 21);
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
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(51, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(231, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Búsqueda Avanzada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label4->Location = System::Drawing::Point(52, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Autor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label5->Location = System::Drawing::Point(52, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Editorial";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label6->Location = System::Drawing::Point(52, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Género";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->textBox2->Location = System::Drawing::Point(174, 250);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(208, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->textBox3->Location = System::Drawing::Point(174, 294);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->textBox4->Location = System::Drawing::Point(174, 338);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(208, 22);
			this->textBox4->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->BookName,
					this->BookAuthor, this->BookPublisher, this->BookStatus, this->BookShowMore
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 407);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(678, 150);
			this->dataGridView1->TabIndex = 11;
			// 
			// BookName
			// 
			this->BookName->HeaderText = L"Nombre";
			this->BookName->MinimumWidth = 6;
			this->BookName->Name = L"BookName";
			this->BookName->Width = 125;
			// 
			// BookAuthor
			// 
			this->BookAuthor->HeaderText = L"Autor";
			this->BookAuthor->MinimumWidth = 6;
			this->BookAuthor->Name = L"BookAuthor";
			this->BookAuthor->Width = 125;
			// 
			// BookPublisher
			// 
			this->BookPublisher->HeaderText = L"Editorial";
			this->BookPublisher->MinimumWidth = 6;
			this->BookPublisher->Name = L"BookPublisher";
			this->BookPublisher->Width = 125;
			// 
			// BookStatus
			// 
			this->BookStatus->HeaderText = L"Estado";
			this->BookStatus->MinimumWidth = 6;
			this->BookStatus->Name = L"BookStatus";
			this->BookStatus->Width = 125;
			// 
			// BookShowMore
			// 
			this->BookShowMore->HeaderText = L"Detalles";
			this->BookShowMore->MinimumWidth = 6;
			this->BookShowMore->Name = L"BookShowMore";
			this->BookShowMore->Width = 125;
			// 
			// UserInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(707, 569);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Al presionar el botón de búsqueda se debe dirigir al usuario a la ventana de resultados de búsqueda.
		// Solo se debe abrir la ventana de resultados si se ha ingresado algún criterio de búsqueda.
		if (System::String::IsNullOrEmpty(BookTitletxt->Text->Trim()) == false) {
			/*BookResult^ searchResultsForm = gcnew BookResult();
			searchResultsForm->ShowDialog();*/
			// Se realiza la búsqueda y se muestran los resultados en el DataGridView.
			String^ bookName = BookTitletxt->Text->Trim()
			dataGridView1->Rows->Clear(); // Limpiar filas previas
			// Se llama a la función de búsqueda y se obtienen los resultados.
			List<Book^>^ searchResults = SearchBooks(bookName);
			if (searchResults != nullptr) {
				for each (Book ^ book in searchResults) {
					int rowIndex = dataGridView1->Rows->Add();
					DataGridViewRow^ row = dataGridView1->Rows[rowIndex];
					row->Cells["BookName"]->Value = book->Name;
					row->Cells["BookAuthor"]->Value = book->Author;
					row->Cells["BookPublisher"]->Value = book->Publisher;
					row->Cells["BookStatus"]->Value = book->Status;
					row->Cells["BookShowMore"]->Value = "Ver más";
				}
			}
			else {
				MessageBox::Show("No se encontraron resultados para la búsqueda.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Por favor, ingrese un criterio de búsqueda.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: List<Book^>^ SearchBooks(String^ bookName) {
		// Aquí se implementaría la lógica de búsqueda de libros.
		// Por ahora, retornamos una lista vacía como ejemplo.
		List<Book^>^ books = gcnew List<Book^>();
		// Simulación de resultados de búsqueda
		results->Add(gcnew Book("Libro 1", "Autor 1", "Editorial 1", "Disponible"));
		results->Add(gcnew Book("Libro 2", "Autor 2", "Editorial 2", "No disponible"));
		return results;
	}
};
}
