#pragma once
#include "DispatchProblemForm.h"
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
	/// Resumen de DispatchBooks
	/// </summary>
	public ref class DispatchBooks : public System::Windows::Forms::Form
	{
	public:
		DispatchBooks(void)
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
		~DispatchBooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvDespachoLibros;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEntrega;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ txtIDPrestamo;

	private: System::Windows::Forms::CheckBox^ cbNoRecogido;
	private: System::Windows::Forms::CheckBox^ cbEntregado;


	private: System::Windows::Forms::CheckBox^ cbEnEnvio;
	private: System::Windows::Forms::Button^ btnConfirmarEntrega;
	private: System::Windows::Forms::Button^ btnReportarProblemas;

	private: System::Windows::Forms::CheckBox^ cbVerReprogramados;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnProcesarPedidos;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DispatchBooks::typeid));
			this->dgvDespachoLibros = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaUsuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEntrega = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtIDPrestamo = (gcnew System::Windows::Forms::RichTextBox());
			this->cbNoRecogido = (gcnew System::Windows::Forms::CheckBox());
			this->cbEntregado = (gcnew System::Windows::Forms::CheckBox());
			this->cbEnEnvio = (gcnew System::Windows::Forms::CheckBox());
			this->btnConfirmarEntrega = (gcnew System::Windows::Forms::Button());
			this->btnReportarProblemas = (gcnew System::Windows::Forms::Button());
			this->cbVerReprogramados = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnProcesarPedidos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDespachoLibros))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvDespachoLibros
			// 
			this->dgvDespachoLibros->AllowUserToAddRows = false;
			this->dgvDespachoLibros->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvDespachoLibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDespachoLibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnaID,
					this->ColumnaUsuario, this->ColumnaEntrega, this->ColumnaEstado
			});
			this->dgvDespachoLibros->Location = System::Drawing::Point(51, 303);
			this->dgvDespachoLibros->Name = L"dgvDespachoLibros";
			this->dgvDespachoLibros->RowHeadersWidth = 51;
			this->dgvDespachoLibros->Size = System::Drawing::Size(859, 459);
			this->dgvDespachoLibros->TabIndex = 0;
			this->dgvDespachoLibros->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DispatchBooks::dgvDespachoLibros_CellClick);
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->MinimumWidth = 6;
			this->ColumnaID->Name = L"ColumnaID";
			// 
			// ColumnaUsuario
			// 
			this->ColumnaUsuario->HeaderText = L"Usuario";
			this->ColumnaUsuario->MinimumWidth = 6;
			this->ColumnaUsuario->Name = L"ColumnaUsuario";
			// 
			// ColumnaEntrega
			// 
			this->ColumnaEntrega->HeaderText = L"Metodo de Entrega";
			this->ColumnaEntrega->MinimumWidth = 6;
			this->ColumnaEntrega->Name = L"ColumnaEntrega";
			// 
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->MinimumWidth = 6;
			this->ColumnaEstado->Name = L"ColumnaEstado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(46, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ID de Préstamo :";
			// 
			// txtIDPrestamo
			// 
			this->txtIDPrestamo->Location = System::Drawing::Point(255, 72);
			this->txtIDPrestamo->Name = L"txtIDPrestamo";
			this->txtIDPrestamo->Size = System::Drawing::Size(211, 38);
			this->txtIDPrestamo->TabIndex = 2;
			this->txtIDPrestamo->Text = L"";
			// 
			// cbNoRecogido
			// 
			this->cbNoRecogido->AutoSize = true;
			this->cbNoRecogido->BackColor = System::Drawing::Color::Transparent;
			this->cbNoRecogido->Location = System::Drawing::Point(542, 97);
			this->cbNoRecogido->Name = L"cbNoRecogido";
			this->cbNoRecogido->Size = System::Drawing::Size(341, 34);
			this->cbNoRecogido->TabIndex = 3;
			this->cbNoRecogido->Text = L"Ver prestamos no recogidos";
			this->cbNoRecogido->UseVisualStyleBackColor = false;
			this->cbNoRecogido->CheckedChanged += gcnew System::EventHandler(this, &DispatchBooks::cbNoRecogido_CheckedChanged);
			// 
			// cbEntregado
			// 
			this->cbEntregado->AutoSize = true;
			this->cbEntregado->BackColor = System::Drawing::Color::Transparent;
			this->cbEntregado->Location = System::Drawing::Point(542, 137);
			this->cbEntregado->Name = L"cbEntregado";
			this->cbEntregado->Size = System::Drawing::Size(321, 34);
			this->cbEntregado->TabIndex = 4;
			this->cbEntregado->Text = L"Ver prestamos entregados";
			this->cbEntregado->UseVisualStyleBackColor = false;
			this->cbEntregado->CheckedChanged += gcnew System::EventHandler(this, &DispatchBooks::cbEntregado_CheckedChanged);
			// 
			// cbEnEnvio
			// 
			this->cbEnEnvio->AutoSize = true;
			this->cbEnEnvio->BackColor = System::Drawing::Color::Transparent;
			this->cbEnEnvio->Location = System::Drawing::Point(542, 56);
			this->cbEnEnvio->Name = L"cbEnEnvio";
			this->cbEnEnvio->Size = System::Drawing::Size(295, 34);
			this->cbEnEnvio->TabIndex = 6;
			this->cbEnEnvio->Text = L"Ver prestamos en envio";
			this->cbEnEnvio->UseVisualStyleBackColor = false;
			this->cbEnEnvio->CheckedChanged += gcnew System::EventHandler(this, &DispatchBooks::cbEnEnvio_CheckedChanged);
			// 
			// btnConfirmarEntrega
			// 
			this->btnConfirmarEntrega->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnConfirmarEntrega->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmarEntrega->ForeColor = System::Drawing::Color::Black;
			this->btnConfirmarEntrega->Location = System::Drawing::Point(51, 187);
			this->btnConfirmarEntrega->Name = L"btnConfirmarEntrega";
			this->btnConfirmarEntrega->Size = System::Drawing::Size(205, 34);
			this->btnConfirmarEntrega->TabIndex = 7;
			this->btnConfirmarEntrega->Text = L"Confirmar entrega";
			this->btnConfirmarEntrega->UseVisualStyleBackColor = false;
			this->btnConfirmarEntrega->Click += gcnew System::EventHandler(this, &DispatchBooks::btnConfirmarEntrega_Click);
			// 
			// btnReportarProblemas
			// 
			this->btnReportarProblemas->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnReportarProblemas->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReportarProblemas->ForeColor = System::Drawing::Color::Black;
			this->btnReportarProblemas->Location = System::Drawing::Point(51, 237);
			this->btnReportarProblemas->Name = L"btnReportarProblemas";
			this->btnReportarProblemas->Size = System::Drawing::Size(360, 34);
			this->btnReportarProblemas->TabIndex = 8;
			this->btnReportarProblemas->Text = L"Reportar problemas en la entrega";
			this->btnReportarProblemas->UseVisualStyleBackColor = false;
			this->btnReportarProblemas->Click += gcnew System::EventHandler(this, &DispatchBooks::btnReportarProblemas_Click);
			// 
			// cbVerReprogramados
			// 
			this->cbVerReprogramados->AutoSize = true;
			this->cbVerReprogramados->BackColor = System::Drawing::Color::Transparent;
			this->cbVerReprogramados->Location = System::Drawing::Point(542, 177);
			this->cbVerReprogramados->Name = L"cbVerReprogramados";
			this->cbVerReprogramados->Size = System::Drawing::Size(369, 34);
			this->cbVerReprogramados->TabIndex = 9;
			this->cbVerReprogramados->Text = L"Ver prestamos reprogramados";
			this->cbVerReprogramados->UseVisualStyleBackColor = false;
			this->cbVerReprogramados->CheckedChanged += gcnew System::EventHandler(this, &DispatchBooks::cbVerReprogramados_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(274, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Reanudar entrega";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DispatchBooks::button1_Click);
			// 
			// btnProcesarPedidos
			// 
			this->btnProcesarPedidos->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnProcesarPedidos->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProcesarPedidos->ForeColor = System::Drawing::Color::Black;
			this->btnProcesarPedidos->Location = System::Drawing::Point(51, 137);
			this->btnProcesarPedidos->Name = L"btnProcesarPedidos";
			this->btnProcesarPedidos->Size = System::Drawing::Size(360, 34);
			this->btnProcesarPedidos->TabIndex = 11;
			this->btnProcesarPedidos->Text = L"Procesar pedidos aprobados";
			this->btnProcesarPedidos->UseVisualStyleBackColor = false;
			this->btnProcesarPedidos->Click += gcnew System::EventHandler(this, &DispatchBooks::btnProcesarPedidos_Click);
			// 
			// DispatchBooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 878);
			this->Controls->Add(this->btnProcesarPedidos);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cbVerReprogramados);
			this->Controls->Add(this->btnReportarProblemas);
			this->Controls->Add(this->btnConfirmarEntrega);
			this->Controls->Add(this->cbEnEnvio);
			this->Controls->Add(this->cbEntregado);
			this->Controls->Add(this->cbNoRecogido);
			this->Controls->Add(this->txtIDPrestamo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvDespachoLibros);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"DispatchBooks";
			this->Text = L"DispatchBooks";
			this->Load += gcnew System::EventHandler(this, &DispatchBooks::DispatchBooks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDespachoLibros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void MostrarLibrosEnEnvio() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvDespachoLibros->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "En Envío") {
							int index = dgvDespachoLibros->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca",
									loanOrders[i]->Status}
							);
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void MostrarLibrosNoRecogidos() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvDespachoLibros->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "No Recogido") {
							int index = dgvDespachoLibros->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca",
									loanOrders[i]->Status}
							);
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void MostrarLibrosEntregados() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvDespachoLibros->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Entregado") {
							int index = dgvDespachoLibros->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca",
									loanOrders[i]->Status}
							);
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void MostrarLibrosReprogramados() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvDespachoLibros->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Reprogramado") {
							int index = dgvDespachoLibros->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca",
									loanOrders[i]->Status}
							);
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};


private: System::Void dgvDespachoLibros_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex < 0) {
		return; // Evitar errores si se hace clic en el encabezado o fuera de las filas
	}
	int loanOrderId = Convert::ToInt32(dgvDespachoLibros->Rows[e->RowIndex]->Cells[0]->Value);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	txtIDPrestamo->Text = loanOrder->LoanOrderID.ToString();
}
private: System::Void btnConfirmarEntrega_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIDPrestamo->Text == "") {
		MessageBox::Show("Por favor, seleccione un préstamo.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtIDPrestamo->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder != nullptr) {
		if (loanOrder->Status == "En Envío" || loanOrder->Status=="No Recogido") {
			loanOrder->Status = "Entregado";
			loanOrder->LoanDate = DateTime::Now; // Registrar la fecha de entrega
			List<Loan^>^ loans = loanOrder->Loans;
			for each (Loan ^ loan in loans) {
				loan->DateLoan = DateTime::Now; // Actualizar la fecha de préstamo al momento actual.
			}
			Controller::UpdateLoanOrder(loanOrder);
			MessageBox::Show("Entrega confirmada exitosamente.");
			if (cbEnEnvio->Checked) {
				MostrarLibrosEnEnvio();
			}
			else if (cbNoRecogido->Checked) {
				MostrarLibrosNoRecogidos();
			}
			else if (cbEntregado->Checked) {
				MostrarLibrosEntregados();
			}
			else if (cbVerReprogramados->Checked) {
				MostrarLibrosReprogramados();
			}
		}
		else {
			MessageBox::Show("El préstamo ya ha sido entregado.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
	}
	else {
		MessageBox::Show("Préstamo no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void cbEnEnvio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbEnEnvio->Checked) {
		MostrarLibrosEnEnvio();
		cbNoRecogido->Checked = false;
		cbEntregado->Checked = false;
		cbVerReprogramados->Checked = false; 
	}
	else {
		dgvDespachoLibros->Rows->Clear(); // Limpiar la vista si se desmarca
	}
}

private: System::Void cbNoRecogido_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbNoRecogido->Checked) {
		MostrarLibrosNoRecogidos();
		cbEnEnvio->Checked = false;
		cbEntregado->Checked = false;
		cbVerReprogramados->Checked = false; 
	}
	else {
		dgvDespachoLibros->Rows->Clear(); // Limpiar la vista si se desmarca
	}
}


private: System::Void cbEntregado_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbEntregado->Checked) {
		MostrarLibrosEntregados();
		cbEnEnvio->Checked = false;
		cbNoRecogido->Checked = false;
		cbVerReprogramados->Checked = false;
	}
	else {
		dgvDespachoLibros->Rows->Clear(); // Limpiar la vista si se desmarca
	}
}

private: System::Void cbVerReprogramados_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbVerReprogramados->Checked) {
		MostrarLibrosReprogramados();
		cbEnEnvio->Checked = false;
		cbNoRecogido->Checked = false;
		cbEntregado->Checked = false;
	}
	else {
		dgvDespachoLibros->Rows->Clear(); // Limpiar la vista si se desmarca
	}
}

private: System::Void btnReportarProblemas_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIDPrestamo->Text == "") {
		MessageBox::Show("Por favor, seleccione un préstamo.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtIDPrestamo->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder != nullptr) {
		if (loanOrder->Status != "En Envío" && loanOrder->Status != "No Recogido") {
			MessageBox::Show("El préstamo no está en estado de envío o no recogido.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		Persistance::PersistBinaryFile("TempLoanOrder.bin", loanOrder);
		DispatchProblemForm^ reportProblemsForm = gcnew DispatchProblemForm();
		reportProblemsForm->ShowDialog();

	}
	else {
		MessageBox::Show("Préstamo no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIDPrestamo->Text == "") {
		MessageBox::Show("Por favor, seleccione un préstamo.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtIDPrestamo->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder != nullptr) {
		if (loanOrder->Status == "Reprogramado") {
			if (loanOrder->IsDelivery) {
				loanOrder->Status = "En Envío";
			}
			else {
				loanOrder->Status = "No Recogido";
			}
			Controller::UpdateLoanOrder(loanOrder);
			MessageBox::Show("Entrega reanudada exitosamente.");
			if (cbEnEnvio->Checked) {
				MostrarLibrosEnEnvio();
			}
			else if (cbNoRecogido->Checked) {
				MostrarLibrosNoRecogidos();
			}
			else if (cbEntregado->Checked) {
				MostrarLibrosEntregados();
			}
			else if (cbVerReprogramados->Checked) {
				MostrarLibrosReprogramados();
			}
		}
		else {
			MessageBox::Show("El préstamo no está reprogramado.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
	}
	else {
		MessageBox::Show("Préstamo no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnProcesarPedidos_Click(System::Object^ sender, System::EventArgs^ e) {
	List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
	if (loanOrders != nullptr) {
		for (int i = 0; i < loanOrders->Count; i++) {
			if (loanOrders[i]->Status == "Aprobado") {
				if (loanOrders[i]->IsDelivery) {
					loanOrders[i]->Status = "En Envío";
				}
				else {
					loanOrders[i]->Status = "No Recogido";
				}
				Controller::UpdateLoanOrder(loanOrders[i]);
			}
		}
		MessageBox::Show("Todos los préstamos aprobados han sido procesados exitosamente.");
	}
	else {
		MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void DispatchBooks_Load(System::Object^ sender, System::EventArgs^ e) {
	dgvDespachoLibros->DefaultCellStyle->ForeColor = Color::Black;
	dgvDespachoLibros->DefaultCellStyle->BackColor = Color::White;

	dgvDespachoLibros->ColumnHeadersDefaultCellStyle->ForeColor = Color::Black;
	dgvDespachoLibros->ColumnHeadersDefaultCellStyle->BackColor = Color::White;
}
};
}
