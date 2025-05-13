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

	/// <summary>
	/// Resumen de CarritoPrestamoForm
	/// </summary>
	public ref class CarritoPrestamoForm : public System::Windows::Forms::Form
	{
	public:
		CarritoPrestamoForm(void)
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
		~CarritoPrestamoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnVaciarCarrito;

	private: System::Windows::Forms::Button^ btnConfirmarPrestamos;
	private: System::Windows::Forms::RichTextBox^ txtTotalPesoLibros;
	private: System::Windows::Forms::RichTextBox^ txtCapacidadPesoCarrito;



	private: System::Windows::Forms::ComboBox^ cmbCarritos;

	private: System::Windows::Forms::DataGridView^ dgvPrestamos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTiempo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPeso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaEliminar;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarritoPrestamoForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnVaciarCarrito = (gcnew System::Windows::Forms::Button());
			this->btnConfirmarPrestamos = (gcnew System::Windows::Forms::Button());
			this->txtTotalPesoLibros = (gcnew System::Windows::Forms::RichTextBox());
			this->txtCapacidadPesoCarrito = (gcnew System::Windows::Forms::RichTextBox());
			this->cmbCarritos = (gcnew System::Windows::Forms::ComboBox());
			this->dgvPrestamos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTiempo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPeso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->ColumnaEliminar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(27, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Carrito de Prestamo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(541, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Robot :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(93, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total de Libros:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(541, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 35);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Capacidad Total:";
			// 
			// btnVaciarCarrito
			// 
			this->btnVaciarCarrito->Location = System::Drawing::Point(547, 163);
			this->btnVaciarCarrito->Name = L"btnVaciarCarrito";
			this->btnVaciarCarrito->Size = System::Drawing::Size(205, 39);
			this->btnVaciarCarrito->TabIndex = 4;
			this->btnVaciarCarrito->Text = L"Vaciar Carrito";
			this->btnVaciarCarrito->UseVisualStyleBackColor = true;
			// 
			// btnConfirmarPrestamos
			// 
			this->btnConfirmarPrestamos->Location = System::Drawing::Point(99, 163);
			this->btnConfirmarPrestamos->Name = L"btnConfirmarPrestamos";
			this->btnConfirmarPrestamos->Size = System::Drawing::Size(205, 39);
			this->btnConfirmarPrestamos->TabIndex = 5;
			this->btnConfirmarPrestamos->Text = L"Confirmar Préstamos";
			this->btnConfirmarPrestamos->UseVisualStyleBackColor = true;
			// 
			// txtTotalPesoLibros
			// 
			this->txtTotalPesoLibros->Location = System::Drawing::Point(293, 112);
			this->txtTotalPesoLibros->Name = L"txtTotalPesoLibros";
			this->txtTotalPesoLibros->Size = System::Drawing::Size(118, 34);
			this->txtTotalPesoLibros->TabIndex = 6;
			this->txtTotalPesoLibros->Text = L"";
			// 
			// txtCapacidadPesoCarrito
			// 
			this->txtCapacidadPesoCarrito->Location = System::Drawing::Point(762, 108);
			this->txtCapacidadPesoCarrito->Name = L"txtCapacidadPesoCarrito";
			this->txtCapacidadPesoCarrito->Size = System::Drawing::Size(132, 35);
			this->txtCapacidadPesoCarrito->TabIndex = 7;
			this->txtCapacidadPesoCarrito->Text = L"";
			// 
			// cmbCarritos
			// 
			this->cmbCarritos->FormattingEnabled = true;
			this->cmbCarritos->Location = System::Drawing::Point(682, 71);
			this->cmbCarritos->Name = L"cmbCarritos";
			this->cmbCarritos->Size = System::Drawing::Size(284, 24);
			this->cmbCarritos->TabIndex = 8;
			// 
			// dgvPrestamos
			// 
			this->dgvPrestamos->AllowUserToAddRows = false;
			this->dgvPrestamos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPrestamos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaTiempo, this->ColumnaPeso, this->ColumnaAutor, this->ColumnaEstado, this->ColumnaImagen, this->ColumnaEliminar
			});
			this->dgvPrestamos->Location = System::Drawing::Point(39, 252);
			this->dgvPrestamos->Name = L"dgvPrestamos";
			this->dgvPrestamos->RowHeadersWidth = 51;
			this->dgvPrestamos->RowTemplate->Height = 24;
			this->dgvPrestamos->Size = System::Drawing::Size(1037, 231);
			this->dgvPrestamos->TabIndex = 9;
			this->dgvPrestamos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoPrestamoForm::dgvPrestamos_CellClick);
			this->dgvPrestamos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoPrestamoForm::dgvPrestamos_CellContentClick);
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
			// ColumnaTiempo
			// 
			this->ColumnaTiempo->HeaderText = L"Tiempo de Prestamo";
			this->ColumnaTiempo->MinimumWidth = 6;
			this->ColumnaTiempo->Name = L"ColumnaTiempo";
			this->ColumnaTiempo->Width = 125;
			// 
			// ColumnaPeso
			// 
			this->ColumnaPeso->HeaderText = L"Peso";
			this->ColumnaPeso->MinimumWidth = 6;
			this->ColumnaPeso->Name = L"ColumnaPeso";
			this->ColumnaPeso->Width = 125;
			// 
			// ColumnaAutor
			// 
			this->ColumnaAutor->HeaderText = L"Autor";
			this->ColumnaAutor->MinimumWidth = 6;
			this->ColumnaAutor->Name = L"ColumnaAutor";
			this->ColumnaAutor->Width = 125;
			// 
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->MinimumWidth = 6;
			this->ColumnaEstado->Name = L"ColumnaEstado";
			this->ColumnaEstado->Width = 125;
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->HeaderText = L"Imagen";
			this->ColumnaImagen->MinimumWidth = 6;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			this->ColumnaImagen->Width = 125;
			// 
			// ColumnaEliminar
			// 
			this->ColumnaEliminar->HeaderText = L"Eliminar\?";
			this->ColumnaEliminar->MinimumWidth = 6;
			this->ColumnaEliminar->Name = L"ColumnaEliminar";
			this->ColumnaEliminar->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ColumnaEliminar->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->ColumnaEliminar->Text = L"Eliminar";
			this->ColumnaEliminar->UseColumnTextForButtonValue = true;
			this->ColumnaEliminar->Width = 125;
			// 
			// CarritoPrestamoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1088, 576);
			this->Controls->Add(this->dgvPrestamos);
			this->Controls->Add(this->cmbCarritos);
			this->Controls->Add(this->txtCapacidadPesoCarrito);
			this->Controls->Add(this->txtTotalPesoLibros);
			this->Controls->Add(this->btnConfirmarPrestamos);
			this->Controls->Add(this->btnVaciarCarrito);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CarritoPrestamoForm";
			this->Text = L"CarritoPrestamoForm";
			this->Load += gcnew System::EventHandler(this, &CarritoPrestamoForm::CarritoPrestamoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowLoans() {
			User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
			LoanOrder^ loanOrder = Controller::SearchLoanOrderByUser(user);
			if (loanOrder != nullptr) {
				dgvPrestamos->Rows->Clear();
				List<Loan^>^ loans = loanOrder->Loans;
				for (int i = 0; i < loans->Count; i++) {
					int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
						"" + loans[i]->LoanID,
							loans[i]->Book->Title,
							"" + loans[i]->ReturnDate,
							"" + loans[i]->Book->Weight,
							loans[i]->Book->Author,
							loans[i]->Status}
					);

					array<Byte>^ photoBytes = loans[i]->Book->Photo;
					if (photoBytes != nullptr && photoBytes->Length > 0) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(photoBytes);
						System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

						// Insertar la imagen en la última columna
						dgvPrestamos->Rows[index]->Cells["ColumnaImagen"]->Value = image;
					}

				}
			}
		};

	private: System::Void CarritoPrestamoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowLoans();
		dgvPrestamos->Rows->Add(gcnew array<String^>{
			"1", "Pinocho", "12 dias", "15 kg", "Mario", "Disponible"});
	}
private: System::Void dgvPrestamos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->ColumnIndex == 7) {
		dgvPrestamos->Rows->Clear();
	}
}
private: System::Void dgvPrestamos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
