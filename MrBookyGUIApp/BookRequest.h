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
	using namespace MrBookyPersistance;

	/// <summary>
	/// Resumen de BookRequest
	/// </summary>
	public ref class BookRequest : public System::Windows::Forms::Form
	{
	public:
		BookRequest(void)
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
		~BookRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Button^ btnRegister;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCode;




	private: System::Windows::Forms::TextBox^ txtCantidad;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbState;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::DataGridView^ dgvPrestamos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaVerLibros;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ ColumnaAccion;






























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookRequest::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbState = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->dgvPrestamos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaUsuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaVerLibros = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->ColumnaAccion = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resultados";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::White;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnRegister->Location = System::Drawing::Point(225, 388);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(223, 35);
			this->btnRegister->TabIndex = 4;
			this->btnRegister->Text = L"Registrar";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &BookRequest::btnRegister_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->label2->Location = System::Drawing::Point(84, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Usuario:";
			// 
			// txtCode
			// 
			this->txtCode->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->txtCode->Location = System::Drawing::Point(198, 92);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(157, 29);
			this->txtCode->TabIndex = 9;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->txtCantidad->Location = System::Drawing::Point(706, 96);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(110, 29);
			this->txtCantidad->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->label3->Location = System::Drawing::Point(499, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Cantidad de libros:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->label4->Location = System::Drawing::Point(86, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Estado:";
			// 
			// cmbState
			// 
			this->cmbState->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13));
			this->cmbState->FormattingEnabled = true;
			this->cmbState->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Devuelto", L"En Uso", L"Aprobado", L"Desaprobado" });
			this->cmbState->Location = System::Drawing::Point(198, 149);
			this->cmbState->Name = L"cmbState";
			this->cmbState->Size = System::Drawing::Size(206, 32);
			this->cmbState->TabIndex = 13;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::White;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnUpdate->Location = System::Drawing::Point(518, 388);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(223, 35);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			// 
			// dgvPrestamos
			// 
			this->dgvPrestamos->AllowUserToAddRows = false;
			this->dgvPrestamos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPrestamos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaID,
					this->ColumnaUsuario, this->ColumnaEstado, this->ColumnaVerLibros, this->ColumnaAccion
			});
			this->dgvPrestamos->Location = System::Drawing::Point(92, 212);
			this->dgvPrestamos->Name = L"dgvPrestamos";
			this->dgvPrestamos->RowHeadersWidth = 51;
			this->dgvPrestamos->RowTemplate->Height = 24;
			this->dgvPrestamos->Size = System::Drawing::Size(793, 130);
			this->dgvPrestamos->TabIndex = 15;
			this->dgvPrestamos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRequest::dgvPrestamos_CellContentClick);
			this->dgvPrestamos->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRequest::dgvPrestamos_CellContentDoubleClick);
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->MinimumWidth = 6;
			this->ColumnaID->Name = L"ColumnaID";
			this->ColumnaID->Width = 125;
			// 
			// ColumnaUsuario
			// 
			this->ColumnaUsuario->HeaderText = L"Usuario";
			this->ColumnaUsuario->MinimumWidth = 6;
			this->ColumnaUsuario->Name = L"ColumnaUsuario";
			this->ColumnaUsuario->Width = 125;
			// 
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->MinimumWidth = 6;
			this->ColumnaEstado->Name = L"ColumnaEstado";
			this->ColumnaEstado->Width = 125;
			// 
			// ColumnaVerLibros
			// 
			this->ColumnaVerLibros->HeaderText = L"Libros";
			this->ColumnaVerLibros->MinimumWidth = 6;
			this->ColumnaVerLibros->Name = L"ColumnaVerLibros";
			this->ColumnaVerLibros->Text = L"Ver";
			this->ColumnaVerLibros->UseColumnTextForButtonValue = true;
			this->ColumnaVerLibros->Width = 125;
			// 
			// ColumnaAccion
			// 
			this->ColumnaAccion->HeaderText = L"Accion";
			this->ColumnaAccion->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Aceptar", L"Denegar" });
			this->ColumnaAccion->MinimumWidth = 6;
			this->ColumnaAccion->Name = L"ColumnaAccion";
			this->ColumnaAccion->Width = 125;
			// 
			// BookRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->dgvPrestamos);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->cmbState);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"BookRequest";
			this->Text = L"BookRequest";
			this->Load += gcnew System::EventHandler(this, &BookRequest::BookRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void ShowLoanOrders() {
				User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvPrestamos->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
							"" + loanOrders[i]->LoanOrderID,
								loanOrders[i]->Client->Name,
								loanOrders[i]->Status}
						);

					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void MostrarLibrosDePrestamo(LoanOrder^ order) {
				String^ mensaje = "Libros solicitados:\n\n";

				for each (Loan ^ loan in order->Loans) {
					mensaje += "ID: " + loan->Book->BookID +
						"\nTítulo: " + loan->Book->Title +
						"\nCantidad: " + loan->Quantity + "\n\n";
				}

				MessageBox::Show(mensaje, "Detalle de libros del préstamo");
			}

	private: System::Void BookRequest_Load(System::Object^ sender, System::EventArgs^ e) {
		dgvPrestamos->DefaultCellStyle->ForeColor = Color::Black;
		dgvPrestamos->DefaultCellStyle->BackColor = Color::White;

		dgvPrestamos->ColumnHeadersDefaultCellStyle->ForeColor = Color::Black;
		dgvPrestamos->ColumnHeadersDefaultCellStyle->BackColor = Color::White;

		ShowLoanOrders();
		// Configurar el DataGridView para que las celdas de la columna "VerLibros" sean botones
		dgvPrestamos->Columns["ColumnaVerLibros"]->DefaultCellStyle->BackColor = System::Drawing::Color::LightGray;
		dgvPrestamos->Columns["ColumnaVerLibros"]->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
		dgvPrestamos->Columns["ColumnaVerLibros"]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		dgvPrestamos->Columns["ColumnaVerLibros"]->Width = 100;

		this->dgvPrestamos->CellDoubleClick += gcnew DataGridViewCellEventHandler(this, &BookRequest::dgvPrestamos_CellContentDoubleClick);
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCode->Text == "" || txtCantidad->Text == "" || cmbState->SelectedIndex == -1) {
			MessageBox::Show("Por favor, complete todos los campos.");
			return;
		}
		int userId = Int32::Parse(txtCode->Text);
		int quantity = Int32::Parse(txtCantidad->Text);
		String^ state = cmbState->SelectedItem->ToString();
		
		//LoanOrder ^ newLoan = gcnew LoanOrder ();
		//newLoan.LoanOrderID = DateTime::Today.ToString("ddMMyy") + loanOrderToday.ToString;
		//newLoan->Client = gcnew Client();
		//newLoan->Client->UserID = userId;
		//newLoan->LoanDate = DateTime::Now;

		txtCode->Clear();
		txtCantidad->Clear();
		cmbState->SelectedIndex = -1;
		MessageBox::Show("Solicitud de libro registrada exitosamente.");
	}

private: System::Void dgvPrestamos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void dgvPrestamos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && dgvPrestamos->Columns[e->ColumnIndex]->Name == "ColumnaVerLibros") {
		int loanOrderId = Convert::ToInt32(dgvPrestamos->Rows[e->RowIndex]->Cells[0]->Value);

		// Buscar el objeto LoanOrder correspondiente
		List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
		for each (LoanOrder ^ order in loanOrders) {
			if (order->LoanOrderID == loanOrderId) {
				MostrarLibrosDePrestamo(order);
				break;
			}
		}

	}

}
private: System::Void dgvPrestamos_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && dgvPrestamos->Columns[e->ColumnIndex]->Name == "ColumnaAccion") {
		DataGridViewCell^ cell = dgvPrestamos->Rows[e->RowIndex]->Cells[e->ColumnIndex];

		if (cell->Value != nullptr) {
			String^ accion = cell->Value->ToString();
			int loanOrderId = Convert::ToInt32(dgvPrestamos->Rows[e->RowIndex]->Cells[0]->Value);

			// Obtener préstamo y actualizar estado
			List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
			for (int i = 0; i < loanOrders->Count; i++) {
				if (loanOrders[i]->LoanOrderID == loanOrderId) {
					String^ status;
					if (accion->ToLower() == "aceptar") {
						status = "aceptada";
					}
					else if (accion->ToLower() == "denegar") {
						status = "denegada";
					}
					else {
						MessageBox::Show("Acción no válida.");
						return;
					}

					loanOrders[i]->Status = status;

					MessageBox::Show("Solicitud " + status + " con éxito.", "Éxito");

					// Eliminar fila visualmente
					dgvPrestamos->Rows->RemoveAt(e->RowIndex);

					// Guardar cambios
					Controller::UpdateLoanOrder(loanOrders[i]);
					break;
				}
			}
		}
	}
}
};
}
