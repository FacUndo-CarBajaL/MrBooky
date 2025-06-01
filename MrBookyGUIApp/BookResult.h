#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BookResult
	/// </summary>
	public ref class BookResult : public System::Windows::Forms::Form
	{
	public:
		BookResult(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~BookResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ SeeReviews;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StarsRevies;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookAuthor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookYear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookTimeLoan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookImage;
	private: System::Windows::Forms::DataGridViewButtonColumn^ LoanBook;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SeeReviews = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->StarsRevies = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookAuthor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookYear = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookTimeLoan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookImage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LoanBook = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RESULTADOS";
			this->label1->Click += gcnew System::EventHandler(this, &BookResult::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->SeeReviews,
					this->StarsRevies, this->BookName, this->BookAuthor, this->BookYear, this->BookTimeLoan, this->BookImage, this->LoanBook
			});
			this->dataGridView1->Location = System::Drawing::Point(17, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1053, 203);
			this->dataGridView1->TabIndex = 1;
			// 
			// SeeReviews
			// 
			this->SeeReviews->HeaderText = L"Ver rese�as";
			this->SeeReviews->MinimumWidth = 6;
			this->SeeReviews->Name = L"SeeReviews";
			this->SeeReviews->Width = 125;
			// 
			// StarsRevies
			// 
			this->StarsRevies->HeaderText = L"Calificaci�n";
			this->StarsRevies->MinimumWidth = 6;
			this->StarsRevies->Name = L"StarsRevies";
			this->StarsRevies->Width = 125;
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
			// BookYear
			// 
			this->BookYear->HeaderText = L"A�o";
			this->BookYear->MinimumWidth = 6;
			this->BookYear->Name = L"BookYear";
			this->BookYear->Width = 125;
			// 
			// BookTimeLoan
			// 
			this->BookTimeLoan->HeaderText = L"Tiempo de Prestamo";
			this->BookTimeLoan->MinimumWidth = 6;
			this->BookTimeLoan->Name = L"BookTimeLoan";
			this->BookTimeLoan->Width = 125;
			// 
			// BookImage
			// 
			this->BookImage->HeaderText = L"Portada";
			this->BookImage->MinimumWidth = 6;
			this->BookImage->Name = L"BookImage";
			this->BookImage->Width = 125;
			// 
			// LoanBook
			// 
			this->LoanBook->HeaderText = L"Solicitar";
			this->LoanBook->MinimumWidth = 6;
			this->LoanBook->Name = L"LoanBook";
			this->LoanBook->Width = 125;
			// 
			// BookResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 338);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"BookResult";
			this->Text = L"BookResult";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	};
}
