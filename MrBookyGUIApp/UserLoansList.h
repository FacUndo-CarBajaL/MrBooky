#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyController;
	using namespace MrBookyModel;
	using namespace MrBookyPersistance;
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::DataGridView^ dgvLoans;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnVerMapa;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ txtIDPrestamo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbEstadoPrestamo;
	private: System::Windows::Forms::Button^ btnVisualizar;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnConfirmarEntrega;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnVerMotivo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaIDPrestamo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaLibro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaFechaEntrega;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaDevolucion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTipoEntrega;


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
			this->dgvLoans = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaIDPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaLibro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaFechaEntrega = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaDevolucion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEstado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTipoEntrega = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnVerMapa = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIDPrestamo = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbEstadoPrestamo = (gcnew System::Windows::Forms::ComboBox());
			this->btnVisualizar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnConfirmarEntrega = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnVerMotivo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLoans))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLoans
			// 
			this->dgvLoans->AllowUserToAddRows = false;
			this->dgvLoans->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvLoans->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dgvLoans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLoans->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumnaIDPrestamo,
					this->ColumnaLibro, this->ColumnaFechaEntrega, this->ColumnaDevolucion, this->ColumnaCantidad, this->ColumnaEstado, this->ColumnaTipoEntrega
			});
			this->dgvLoans->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->dgvLoans->Location = System::Drawing::Point(34, 378);
			this->dgvLoans->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvLoans->Name = L"dgvLoans";
			this->dgvLoans->RowHeadersWidth = 62;
			this->dgvLoans->RowTemplate->Height = 28;
			this->dgvLoans->Size = System::Drawing::Size(1287, 299);
			this->dgvLoans->TabIndex = 0;
			this->dgvLoans->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserLoansList::dgvLoans_CellClick);
			this->dgvLoans->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserLoansList::dgvLoans_CellContentClick);
			// 
			// ColumnaIDPrestamo
			// 
			this->ColumnaIDPrestamo->HeaderText = L"ID Préstamo";
			this->ColumnaIDPrestamo->MinimumWidth = 8;
			this->ColumnaIDPrestamo->Name = L"ColumnaIDPrestamo";
			// 
			// ColumnaLibro
			// 
			this->ColumnaLibro->HeaderText = L"Libro";
			this->ColumnaLibro->MinimumWidth = 8;
			this->ColumnaLibro->Name = L"ColumnaLibro";
			// 
			// ColumnaFechaEntrega
			// 
			this->ColumnaFechaEntrega->HeaderText = L"Fecha de Entrega";
			this->ColumnaFechaEntrega->MinimumWidth = 6;
			this->ColumnaFechaEntrega->Name = L"ColumnaFechaEntrega";
			// 
			// ColumnaDevolucion
			// 
			this->ColumnaDevolucion->HeaderText = L"Fecha de devolución";
			this->ColumnaDevolucion->MinimumWidth = 8;
			this->ColumnaDevolucion->Name = L"ColumnaDevolucion";
			// 
			// ColumnaCantidad
			// 
			this->ColumnaCantidad->HeaderText = L"Cantidad";
			this->ColumnaCantidad->MinimumWidth = 6;
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			// 
			// ColumnaEstado
			// 
			this->ColumnaEstado->HeaderText = L"Estado";
			this->ColumnaEstado->MinimumWidth = 6;
			this->ColumnaEstado->Name = L"ColumnaEstado";
			// 
			// ColumnaTipoEntrega
			// 
			this->ColumnaTipoEntrega->HeaderText = L"Tipo de Entrega";
			this->ColumnaTipoEntrega->MinimumWidth = 6;
			this->ColumnaTipoEntrega->Name = L"ColumnaTipoEntrega";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(25, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SOLICITUDES DE PRÉSTAMOS";
			// 
			// btnVerMapa
			// 
			this->btnVerMapa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnVerMapa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerMapa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerMapa->ForeColor = System::Drawing::Color::Black;
			this->btnVerMapa->Location = System::Drawing::Point(39, 288);
			this->btnVerMapa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnVerMapa->Name = L"btnVerMapa";
			this->btnVerMapa->Size = System::Drawing::Size(154, 39);
			this->btnVerMapa->TabIndex = 2;
			this->btnVerMapa->Text = L"Ver Mapa";
			this->btnVerMapa->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(35, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ID Préstamo :";
			// 
			// txtIDPrestamo
			// 
			this->txtIDPrestamo->Location = System::Drawing::Point(198, 94);
			this->txtIDPrestamo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtIDPrestamo->Name = L"txtIDPrestamo";
			this->txtIDPrestamo->Size = System::Drawing::Size(256, 43);
			this->txtIDPrestamo->TabIndex = 4;
			this->txtIDPrestamo->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Location = System::Drawing::Point(547, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Visualizar Préstamos:";
			// 
			// cmbEstadoPrestamo
			// 
			this->cmbEstadoPrestamo->FormattingEnabled = true;
			this->cmbEstadoPrestamo->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Solicitado", L"Aprobado", L"Desaprobado",
					L"En recojo", L"Enviado", L"Entregado", L"Cancelado", L"Reprogramado", L"Todas"
			});
			this->cmbEstadoPrestamo->Location = System::Drawing::Point(786, 94);
			this->cmbEstadoPrestamo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cmbEstadoPrestamo->Name = L"cmbEstadoPrestamo";
			this->cmbEstadoPrestamo->Size = System::Drawing::Size(245, 28);
			this->cmbEstadoPrestamo->TabIndex = 6;
			// 
			// btnVisualizar
			// 
			this->btnVisualizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnVisualizar->Location = System::Drawing::Point(786, 168);
			this->btnVisualizar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnVisualizar->Name = L"btnVisualizar";
			this->btnVisualizar->Size = System::Drawing::Size(225, 42);
			this->btnVisualizar->TabIndex = 7;
			this->btnVisualizar->Text = L"Visualizar";
			this->btnVisualizar->UseVisualStyleBackColor = false;
			this->btnVisualizar->Click += gcnew System::EventHandler(this, &UserLoansList::btnVisualizar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label4->Location = System::Drawing::Point(35, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"PRÉSTAMOS CON DELIVERY";
			// 
			// btnConfirmarEntrega
			// 
			this->btnConfirmarEntrega->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnConfirmarEntrega->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirmarEntrega->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmarEntrega->ForeColor = System::Drawing::Color::Black;
			this->btnConfirmarEntrega->Location = System::Drawing::Point(250, 288);
			this->btnConfirmarEntrega->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnConfirmarEntrega->Name = L"btnConfirmarEntrega";
			this->btnConfirmarEntrega->Size = System::Drawing::Size(210, 39);
			this->btnConfirmarEntrega->TabIndex = 9;
			this->btnConfirmarEntrega->Text = L"Confirmar entrega";
			this->btnConfirmarEntrega->UseVisualStyleBackColor = false;
			this->btnConfirmarEntrega->Click += gcnew System::EventHandler(this, &UserLoansList::btnConfirmarEntrega_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label5->Location = System::Drawing::Point(34, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 29);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Préstamo cancelado\?";
			// 
			// btnVerMotivo
			// 
			this->btnVerMotivo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnVerMotivo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVerMotivo->Location = System::Drawing::Point(285, 172);
			this->btnVerMotivo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnVerMotivo->Name = L"btnVerMotivo";
			this->btnVerMotivo->Size = System::Drawing::Size(225, 42);
			this->btnVerMotivo->TabIndex = 11;
			this->btnVerMotivo->Text = L"Ver motivo";
			this->btnVerMotivo->UseVisualStyleBackColor = false;
			this->btnVerMotivo->Click += gcnew System::EventHandler(this, &UserLoansList::btnVerMotivo_Click);
			// 
			// UserLoansList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1349, 707);
			this->Controls->Add(this->btnVerMotivo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnConfirmarEntrega);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnVisualizar);
			this->Controls->Add(this->cmbEstadoPrestamo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtIDPrestamo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnVerMapa);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvLoans);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UserLoansList";
			this->Text = L"UserLoansList";
			this->Load += gcnew System::EventHandler(this, &UserLoansList::UserLoansList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLoans))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void ShowAllLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
					}
				}
				else {
					MessageBox::Show("No hay préstamos aprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowSolicitedLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Solicitado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos aprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowApproveLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Aprobado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos aprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowDisapproveLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Desaprobado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos desaprobados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowEnRecojoLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "No Recogido") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos con recojo en biblioteca.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowSendingLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "En envío") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos con recojo en biblioteca.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowEntregadoLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Entregado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										loanOrders[i]->LoanDate->ToString("dd/MM/yyyy"),
										loanOrders[i]->LoanDate->AddDays(loanOrders[i]->Loans[j]->Book->LoanTime).ToString("dd/MM/yyyy"),
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos entregados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowCanceledLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Cancelado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos cancelados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

			void ShowReprogramLoans() {
				Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
				List<LoanOrder^>^ loanOrders = Controller::GetAllLoanOrdersByUserID(user->UserID);
				if (loanOrders != nullptr) {
					dgvLoans->Rows->Clear();
					for (int i = 0; i < loanOrders->Count; i++) {
						if (loanOrders[i]->Status == "Reprogramado") {
							for (int j = 0; j < loanOrders[i]->Loans->Count; j++) {
								int index = dgvLoans->Rows->Add(gcnew array<String^> {
									"" + loanOrders[i]->LoanOrderID,
										loanOrders[i]->Loans[j]->Book->Title,
										"Sin fecha de entrega",
										"Sin fecha de devolución",
										"" + loanOrders[i]->Loans[j]->Quantity,
										loanOrders[i]->Status,
										loanOrders[i]->IsDelivery ? "Delivery por Robot" : "Recojo en biblioteca"}
								);
							}
						}
					}
				}
				else {
					MessageBox::Show("No hay préstamos reprogramados.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			};

private: System::Void dgvLoans_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex < 0) {
		return; // Evitar errores si se hace clic en el encabezado o fuera de las filas
	}
	int loanOrderId = Convert::ToInt32(dgvLoans->Rows[e->RowIndex]->Cells[0]->Value);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	txtIDPrestamo->Text = loanOrder->LoanOrderID.ToString();
}
private: System::Void btnVisualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	int opcion = cmbEstadoPrestamo->SelectedIndex;
	if (opcion == 0) {
		ShowSolicitedLoans();
	}
	else if (opcion == 1) {
		ShowApproveLoans();
	}
	else if (opcion == 2){
		ShowDisapproveLoans();
	}
	else if (opcion == 3) {
		ShowEnRecojoLoans();
	}
	else if (opcion == 4) {
		ShowSendingLoans();
	}
	else if (opcion == 5) {
		ShowEntregadoLoans();
	}
	else if (opcion == 6) {
		ShowCanceledLoans();
	}
	else if (opcion == 7) {
		ShowReprogramLoans();
	}
	else if (opcion == 8) {
		ShowAllLoans();
	}


}
private: System::Void btnVerMotivo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIDPrestamo->Text == "") {
		MessageBox::Show("Por favor, seleccione un préstamo.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtIDPrestamo->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder == nullptr) {
		MessageBox::Show("No se encontró el préstamo seleccionado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (loanOrder->Status == "Cancelado" || loanOrder->Status == "Desaprobado") {
		MessageBox::Show("Motivo de cancelación: " + loanOrder->DisapprovalReason, "Motivo de cancelación", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("El préstamo seleccionado no está cancelado o desaprobado.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btnConfirmarEntrega_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIDPrestamo->Text == "") {
		MessageBox::Show("Por favor, seleccione un préstamo.");
		return;
	}
	int loanOrderId = Convert::ToInt32(txtIDPrestamo->Text);
	LoanOrder^ loanOrder = Controller::SearchLoanOrderById(loanOrderId);
	if (loanOrder != nullptr) {
		if (loanOrder->IsDelivery == false) {
			MessageBox::Show("Solo se pueden confirmar préstamo con método de éntrega por delivery.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		if (loanOrder->Status == "En Envío") {
			loanOrder->Status = "Entregado";
			loanOrder->LoanDate = DateTime::Now; // Actualizar la fecha de entrega al momento actual
			List<Loan^>^ loans = loanOrder->Loans;
			for each (Loan^ loan in loans) {
				loan->DateLoan = DateTime::Now; // Actualizar la fecha de préstamo al momento actual.
			}
			Controller::UpdateLoanOrder(loanOrder);
			MessageBox::Show("Entrega confirmada exitosamente.");
			ShowEntregadoLoans();
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
private: System::Void dgvLoans_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	dgvLoans->DefaultCellStyle->ForeColor = Color::Black;
	dgvLoans->DefaultCellStyle->BackColor = Color::White;

	dgvLoans->ColumnHeadersDefaultCellStyle->ForeColor = Color::Black;
	dgvLoans->ColumnHeadersDefaultCellStyle->BackColor = Color::White;
}
private: System::Void UserLoansList_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowAllLoans();
}
};
}
