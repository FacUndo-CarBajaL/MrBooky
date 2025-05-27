#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserLoansList
	/// </summary>
	public ref class UserLoansList : public System::Windows::Forms::Form
	{
	public:
		UserLoansList(void)
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
		~UserLoansList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LoanColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BookLoanColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DueDateColumn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->LoanColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BookLoanColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DueDateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->LoanColumn,
					this->BookLoanColumn, this->DueDateColumn
			});
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->dataGridView1->Location = System::Drawing::Point(32, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(543, 211);
			this->dataGridView1->TabIndex = 0;
			// 
			// LoanColumn
			// 
			this->LoanColumn->HeaderText = L"Prestamo";
			this->LoanColumn->MinimumWidth = 8;
			this->LoanColumn->Name = L"LoanColumn";
			this->LoanColumn->Width = 150;
			// 
			// BookLoanColumn
			// 
			this->BookLoanColumn->HeaderText = L"Libro";
			this->BookLoanColumn->MinimumWidth = 8;
			this->BookLoanColumn->Name = L"BookLoanColumn";
			this->BookLoanColumn->Width = 150;
			// 
			// DueDateColumn
			// 
			this->DueDateColumn->HeaderText = L"FechaDeDevolución";
			this->DueDateColumn->MinimumWidth = 8;
			this->DueDateColumn->Name = L"DueDateColumn";
			this->DueDateColumn->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->label1->Location = System::Drawing::Point(25, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SOLICITUDES DE PRÉSTAMOS";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->Location = System::Drawing::Point(260, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ver Mapa";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// UserLoansList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(640, 442);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"UserLoansList";
			this->Text = L"UserLoansList";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
