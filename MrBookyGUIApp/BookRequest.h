#pragma once
#include "RequestDetails.h"
#include "RequestDisapprove.h"
#include "RobotApprove.h"
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














	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCode;










	private: System::Windows::Forms::DataGridView^ dgvPrestamos;



	private: System::Windows::Forms::Button^ btnVerDetalles;
	private: System::Windows::Forms::Button^ btnDenegar;

	private: System::Windows::Forms::Button^ btnAceptar;






	private: System::Windows::Forms::CheckBox^ chbVerTodas;
	private: System::Windows::Forms::CheckBox^ chbVerAprobadas;
	private: System::Windows::Forms::CheckBox^ chbVerDesaprobadas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaUsuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaMetodoEntrega;















































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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->dgvPrestamos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaUsuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaMetodoEntrega = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnVerDetalles = (gcnew System::Windows::Forms::Button());
			this->btnDenegar = (gcnew System::Windows::Forms::Button());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->chbVerTodas = (gcnew System::Windows::Forms::CheckBox());
			this->chbVerAprobadas = (gcnew System::Windows::Forms::CheckBox());
			this->chbVerDesaprobadas = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(44, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resultados";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(16, 81);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ID Solicitud :";
			// 
			// txtCode
			// 
			this->txtCode->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->txtCode->Location = System::Drawing::Point(168, 81);
			this->txtCode->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->txtCode->Name = L"txtCode";
			this->txtCode->Size = System::Drawing::Size(211, 33);
			this->txtCode->TabIndex = 9;
			// 
			// dgvPrestamos
			// 
			this->dgvPrestamos->AllowUserToAddRows = false;
			this->dgvPrestamos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPrestamos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPrestamos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaID,
					this->ColumnaUsuario, this->ColumnaEstado, this->ColumnaFecha, this->ColumnaMetodoEntrega
			});
			this->dgvPrestamos->EnableHeadersVisualStyles = false;
			this->dgvPrestamos->Location = System::Drawing::Point(21, 225);
			this->dgvPrestamos->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dgvPrestamos->Name = L"dgvPrestamos";
			this->dgvPrestamos->RowHeadersWidth = 51;
			this->dgvPrestamos->RowTemplate->Height = 24;
			this->dgvPrestamos->Size = System::Drawing::Size(1043, 250);
			this->dgvPrestamos->TabIndex = 15;
			this->dgvPrestamos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRequest::dgvPrestamos_CellClick_1);
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
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->MinimumWidth = 6;
			this->ColumnaEstado->Name = L"ColumnaEstado";
			// 
			// ColumnaFecha
			// 
			this->ColumnaFecha->HeaderText = L"Fecha de Solicitud";
			this->ColumnaFecha->MinimumWidth = 6;
			this->ColumnaFecha->Name = L"ColumnaFecha";
			// 
			// ColumnaMetodoEntrega
			// 
			this->ColumnaMetodoEntrega->HeaderText = L"Metodo de entrega";
			this->ColumnaMetodoEntrega->MinimumWidth = 6;
			this->ColumnaMetodoEntrega->Name = L"ColumnaMetodoEntrega";
			// 
			// btnVerDetalles
			// 
			this->btnVerDetalles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnVerDetalles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerDetalles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerDetalles->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnVerDetalles->Location = System::Drawing::Point(429, 81);
			this->btnVerDetalles->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnVerDetalles->Name = L"btnVerDetalles";
			this->btnVerDetalles->Size = System::Drawing::Size(228, 29);
			this->btnVerDetalles->TabIndex = 16;
			this->btnVerDetalles->Text = L"Ver Detalles de Solicitud";
			this->btnVerDetalles->UseVisualStyleBackColor = false;
			this->btnVerDetalles->Click += gcnew System::EventHandler(this, &BookRequest::btnVerDetalles_Click);
			// 
			// btnDenegar
			// 
			this->btnDenegar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnDenegar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDenegar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDenegar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDenegar->Location = System::Drawing::Point(223, 141);
			this->btnDenegar->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnDenegar->Name = L"btnDenegar";
			this->btnDenegar->Size = System::Drawing::Size(121, 35);
			this->btnDenegar->TabIndex = 17;
			this->btnDenegar->Text = L"Denegar";
			this->btnDenegar->UseVisualStyleBackColor = false;
			this->btnDenegar->Click += gcnew System::EventHandler(this, &BookRequest::btnDenegar_Click);
			// 
			// btnAceptar
			// 
			this->btnAceptar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnAceptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAceptar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnAceptar->Location = System::Drawing::Point(21, 140);
			this->btnAceptar->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(116, 36);
			this->btnAceptar->TabIndex = 19;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = false;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &BookRequest::btnAceptar_Click);
			// 
			// chbVerTodas
			// 
			this->chbVerTodas->AutoSize = true;
			this->chbVerTodas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbVerTodas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chbVerTodas->Location = System::Drawing::Point(721, 54);
			this->chbVerTodas->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->chbVerTodas->Name = L"chbVerTodas";
			this->chbVerTodas->Size = System::Drawing::Size(248, 29);
			this->chbVerTodas->TabIndex = 20;
			this->chbVerTodas->Text = L"Ver todas las solicitudes";
			this->chbVerTodas->UseVisualStyleBackColor = true;
			this->chbVerTodas->CheckedChanged += gcnew System::EventHandler(this, &BookRequest::chbVerTodas_CheckedChanged);
			// 
			// chbVerAprobadas
			// 
			this->chbVerAprobadas->AutoSize = true;
			this->chbVerAprobadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbVerAprobadas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chbVerAprobadas->Location = System::Drawing::Point(721, 97);
			this->chbVerAprobadas->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->chbVerAprobadas->Name = L"chbVerAprobadas";
			this->chbVerAprobadas->Size = System::Drawing::Size(263, 29);
			this->chbVerAprobadas->TabIndex = 21;
			this->chbVerAprobadas->Text = L"Ver solicitudes aprobadas";
			this->chbVerAprobadas->UseVisualStyleBackColor = true;
			this->chbVerAprobadas->CheckedChanged += gcnew System::EventHandler(this, &BookRequest::chbVerAprobadas_CheckedChanged);
			// 
			// chbVerDesaprobadas
			// 
			this->chbVerDesaprobadas->AutoSize = true;
			this->chbVerDesaprobadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbVerDesaprobadas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chbVerDesaprobadas->Location = System::Drawing::Point(721, 140);
			this->chbVerDesaprobadas->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->chbVerDesaprobadas->Name = L"chbVerDesaprobadas";
			this->chbVerDesaprobadas->Size = System::Drawing::Size(295, 29);
			this->chbVerDesaprobadas->TabIndex = 22;
			this->chbVerDesaprobadas->Text = L"Ver solicitudes desaprobadas";
			this->chbVerDesaprobadas->UseVisualStyleBackColor = true;
			this->chbVerDesaprobadas->CheckedChanged += gcnew System::EventHandler(this, &BookRequest::chbVerDesaprobadas_CheckedChanged);
			// 
			// BookRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1092, 511);
			this->Controls->Add(this->chbVerDesaprobadas);
			this->Controls->Add(this->chbVerAprobadas);
			this->Controls->Add(this->chbVerTodas);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnDenegar);
			this->Controls->Add(this->btnVerDetalles);
			this->Controls->Add(this->dgvPrestamos);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"BookRequest";
			this->Text = L"BookRequest";
			this->Load += gcnew System::EventHandler(this, &BookRequest::BookRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void ShowAllLoanOrders() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvPrestamos->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
							"" + loanOrders[i]->LoanOrderID,
								loanOrders[i]->Client->Name,
								loanOrders[i]->Status,
								loanOrders[i]->LoanDate->ToString("dd/MM/yyyy"),
								loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
						);

					}
				}
				else {
					MessageBox::Show("No hay préstamos pendientes.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowApproveLoanOrders() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvPrestamos->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Aprobado") {
							int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->Status,
							        loanOrders[i]->LoanDate->ToString("dd/MM/yyyy"),
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
							);
						}
					}

				}
				else {
					MessageBox::Show("No hay préstamos aprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowDisapproveLoanOrders() {
				List<LoanOrder^>^ loanOrders = Controller::GetLoanOrders();
				if (loanOrders != nullptr) {
					dgvPrestamos->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Desaprobado") {
							int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
								"" + loanOrders[i]->LoanOrderID,
									loanOrders[i]->Client->Name,
									loanOrders[i]->Status,
									loanOrders[i]->LoanDate->ToString("dd/MM/yyyy"),
									loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
							);
						}

					}
				}
				else {
					MessageBox::Show("No hay préstamos desaprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
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


	}

private: System::Void dgvPrestamos_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex < 0) {
		return; // Evitar errores si se hace clic en el encabezado o fuera de las filas
	}
	int loanOrderId = Convert::ToInt32(dgvPrestamos->Rows[e->RowIndex]->Cells[0]->Value);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	txtCode->Text = loanOrder->LoanOrderID.ToString();
}


private: System::Void btnVerDetalles_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCode->Text == "") {
		MessageBox::Show("Por favor, seleccione una solicitud.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtCode->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	Persistance::PersistBinaryFile("TempLoanOrder.bin", loanOrder);
	RequestDetails^ requestDetailsForm = gcnew RequestDetails();
	requestDetailsForm->ShowDialog();
}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCode->Text == "") {
		MessageBox::Show("Por favor, seleccione una solicitud.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtCode->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder->Status != "Aprobado") {
		Persistance::PersistBinaryFile("TempLoanOrder.bin", loanOrder);

		if (loanOrder != nullptr) {
			if (loanOrder->IsDelivery == false) {
				loanOrder->Status = "Aprobado";
				Controller::UpdateLoanOrder(loanOrder);
				MessageBox::Show("Solicitud aceptada exitosamente.");
			}
			else if (loanOrder->IsDelivery == true) {
				Persistance::PersistBinaryFile("TempLoanOrder.bin", loanOrder);
				RobotApprove^ robotApproveForm = gcnew RobotApprove(5);
				robotApproveForm->ShowDialog();
			}
		}

		if (chbVerAprobadas->Checked) {
			ShowApproveLoanOrders();
		}
		else if (chbVerDesaprobadas->Checked) {
			ShowDisapproveLoanOrders();
		}
		else if (chbVerTodas->Checked) {
			ShowAllLoanOrders();
		}
	}
	else {
		MessageBox::Show("La solicitud ya ha sido aprobada.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	
}
private: System::Void chbVerTodas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chbVerTodas->Checked) {
		ShowAllLoanOrders();
		chbVerAprobadas->Checked = false;
		chbVerDesaprobadas->Checked = false;
	}
}

private: System::Void chbVerAprobadas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chbVerAprobadas->Checked) {
		ShowApproveLoanOrders();
		chbVerTodas->Checked = false;
		chbVerDesaprobadas->Checked = false;
	}
}
private: System::Void chbVerDesaprobadas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chbVerDesaprobadas->Checked) {
		ShowDisapproveLoanOrders();
		chbVerTodas->Checked = false;
		chbVerAprobadas->Checked = false;
	}
}
private: System::Void btnDenegar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCode->Text == "") {
		MessageBox::Show("Por favor, seleccione una solicitud.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtCode->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder->Status != "Desaprobado") {
		Persistance::PersistBinaryFile("TempLoanOrder.bin", loanOrder);
		RequestDisapprove^ requestDisapproveForm = gcnew RequestDisapprove();
		requestDisapproveForm->ShowDialog();
		if (chbVerAprobadas->Checked) {
			ShowApproveLoanOrders();
		}
		else if (chbVerDesaprobadas->Checked) {
			ShowDisapproveLoanOrders();
		}
		else if (chbVerTodas->Checked) {
			ShowAllLoanOrders();
		}
	}
	else {
		MessageBox::Show("La solicitud ya ha sido desaprobada.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	
	

}
};
}
