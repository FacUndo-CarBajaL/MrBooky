#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BookSearchResults
	/// </summary>
	public ref class BookSearchResults : public System::Windows::Forms::Form
	{
	public:
		BookSearchResults(void)
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
		~BookSearchResults()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Calificación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookAuthor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookStatus;
	private: System::Windows::Forms::DataGridViewImageColumn^ BookImage;
	private: System::Windows::Forms::DataGridViewButtonColumn^ BookLoan;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookSearchResults::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Calificación = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->BookTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookAuthor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookImage = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->BookLoan = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 47);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label1->Location = System::Drawing::Point(99, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Result 1 Título";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label2->Location = System::Drawing::Point(99, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label3->Location = System::Drawing::Point(99, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Descripción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label4->Location = System::Drawing::Point(99, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Estado";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(295, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(119, 80);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->Location = System::Drawing::Point(460, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 53);
			this->button1->TabIndex = 6;
			this->button1->Text = L"SOLICITAR";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Calificación,
					this->BookTitle, this->BookAuthor, this->BookDescription, this->BookStatus, this->BookImage, this->BookLoan
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 137);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1134, 264);
			this->dataGridView1->TabIndex = 7;
			// 
			// Calificación
			// 
			this->Calificación->HeaderText = L"Calificación";
			this->Calificación->MinimumWidth = 8;
			this->Calificación->Name = L"Calificación";
			this->Calificación->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Calificación->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Calificación->Width = 150;
			// 
			// BookTitle
			// 
			this->BookTitle->HeaderText = L"Título";
			this->BookTitle->MinimumWidth = 8;
			this->BookTitle->Name = L"BookTitle";
			this->BookTitle->Width = 150;
			// 
			// BookAuthor
			// 
			this->BookAuthor->HeaderText = L"Autor";
			this->BookAuthor->MinimumWidth = 8;
			this->BookAuthor->Name = L"BookAuthor";
			this->BookAuthor->Width = 150;
			// 
			// BookDescription
			// 
			this->BookDescription->HeaderText = L"Descripción";
			this->BookDescription->MinimumWidth = 8;
			this->BookDescription->Name = L"BookDescription";
			this->BookDescription->Width = 150;
			// 
			// BookStatus
			// 
			this->BookStatus->HeaderText = L"Estado";
			this->BookStatus->MinimumWidth = 8;
			this->BookStatus->Name = L"BookStatus";
			this->BookStatus->Width = 150;
			// 
			// BookImage
			// 
			this->BookImage->HeaderText = L"Portada";
			this->BookImage->MinimumWidth = 8;
			this->BookImage->Name = L"BookImage";
			this->BookImage->Width = 150;
			// 
			// BookLoan
			// 
			this->BookLoan->HeaderText = L"Solicitar";
			this->BookLoan->MinimumWidth = 8;
			this->BookLoan->Name = L"BookLoan";
			this->BookLoan->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->BookLoan->Width = 150;
			// 
			// BookSearchResults
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1227, 435);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"BookSearchResults";
			this->Text = L"BookSearchResults";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
