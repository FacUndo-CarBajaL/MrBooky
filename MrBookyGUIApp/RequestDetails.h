#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;

	/// <summary>
	/// Resumen de RequestDetails
	/// </summary>
	public ref class RequestDetails : public System::Windows::Forms::Form
	{
	public:
		RequestDetails(void)
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
		~RequestDetails()
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
	private: System::Windows::Forms::DataGridView^ dgvLoanOrder;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTiempoPrestamos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPeso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RequestDetails::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvLoanOrder = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTiempoPrestamos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPeso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLoanOrder))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(69, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Solicitud :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(69, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre de cliente :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(69, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fecha de solicitud :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(69, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Código de cliente :";
			// 
			// dgvLoanOrder
			// 
			this->dgvLoanOrder->AllowUserToAddRows = false;
			this->dgvLoanOrder->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvLoanOrder->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvLoanOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLoanOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaTiempoPrestamos, this->ColumnaPeso, this->ColumnaAutor, this->ColumnaCantidad, this->ColumnaImagen
			});
			this->dgvLoanOrder->Location = System::Drawing::Point(72, 320);
			this->dgvLoanOrder->Name = L"dgvLoanOrder";
			this->dgvLoanOrder->RowHeadersWidth = 51;
			this->dgvLoanOrder->RowTemplate->Height = 24;
			this->dgvLoanOrder->Size = System::Drawing::Size(978, 236);
			this->dgvLoanOrder->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(452, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 28);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Libros solicitados";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(537, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 28);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Biblioteca de Recojo :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(697, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(195, 28);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Detalles de entrega";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Leelawadee UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(537, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 28);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Horario de Recojo :";
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->MinimumWidth = 6;
			this->ColumnaID->Name = L"ColumnaID";
			// 
			// ColumnaTitulo
			// 
			this->ColumnaTitulo->HeaderText = L"Titulo";
			this->ColumnaTitulo->MinimumWidth = 6;
			this->ColumnaTitulo->Name = L"ColumnaTitulo";
			// 
			// ColumnaTiempoPrestamos
			// 
			this->ColumnaTiempoPrestamos->HeaderText = L"Tiempo de préstamo (dias)";
			this->ColumnaTiempoPrestamos->MinimumWidth = 6;
			this->ColumnaTiempoPrestamos->Name = L"ColumnaTiempoPrestamos";
			// 
			// ColumnaPeso
			// 
			this->ColumnaPeso->HeaderText = L"Peso Total (kg)";
			this->ColumnaPeso->MinimumWidth = 6;
			this->ColumnaPeso->Name = L"ColumnaPeso";
			// 
			// ColumnaAutor
			// 
			this->ColumnaAutor->HeaderText = L"Autor";
			this->ColumnaAutor->MinimumWidth = 6;
			this->ColumnaAutor->Name = L"ColumnaAutor";
			// 
			// ColumnaCantidad
			// 
			this->ColumnaCantidad->HeaderText = L"Cantidad";
			this->ColumnaCantidad->MinimumWidth = 6;
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			// 
			// ColumnaImagen
			// 
			this->ColumnaImagen->HeaderText = L"Imagen";
			this->ColumnaImagen->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->ColumnaImagen->MinimumWidth = 6;
			this->ColumnaImagen->Name = L"ColumnaImagen";
			// 
			// RequestDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1098, 568);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvLoanOrder);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RequestDetails";
			this->Text = L"RequestDetails";
			this->Load += gcnew System::EventHandler(this, &RequestDetails::RequestDetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLoanOrder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void ShowLoans() {
			LoanOrder^ loanOrder = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin"); // Obtener la orden de préstamo seleccionada
			if (loanOrder != nullptr) {
				dgvLoanOrder->Rows->Clear();
				List<Loan^>^ loans = loanOrder->Loans;
				for (int i = 0; i < loans->Count; i++) {
					int index = dgvLoanOrder->Rows->Add(gcnew array<String^>{
						"" + loans[i]->LoanID,
							loans[i]->Book->Title,
							"" + loans[i]->Book->LoanTime,
							"" + loans[i]->Book->Weight,
							loans[i]->Book->Author,
							"" + loans[i]->Quantity}
					);

					array<Byte>^ photoBytes = loans[i]->Book->Photo;
					if (photoBytes != nullptr && photoBytes->Length > 0) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(photoBytes);
						System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

						// Insertar la imagen en la última columna
						dgvLoanOrder->Rows[index]->Cells["ColumnaImagen"]->Value = image;
					}

				}
			}
			else {
				MessageBox::Show("No se encontraron préstamos en la solicitud.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		};
#pragma endregion
private: System::Void RequestDetails_Load(System::Object^ sender, System::EventArgs^ e) {
	LoanOrder^ loanOrder = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin");
	if (loanOrder != nullptr) {
		label1->Text = "ID Solicitud: " + loanOrder->LoanOrderID.ToString();
		label2->Text = "Nombre de cliente: " + loanOrder->Client->Name;
		label3->Text = "Fecha de solicitud: " + loanOrder->LoanDate->ToString("dd/MM/yyyy");
		label4->Text = "Código de cliente: " + loanOrder->Client->UserID.ToString();

		if ((loanOrder->IsDelivery == true)) {
			DeliveryRobot^ robot = Controller::SearchRobot(loanOrder->DeliveryRobotID);
			label6->Text = "Entrega por Robot : " + robot->Name + "( ID : " + robot->RobotID + ")";
			label8->Text = "Capacidad Máxima de Robot : " + robot->MaxCapacity + " kg";
		}
		else if(loanOrder->IsDelivery == false){
			label6->Text = "Biblioteca de Recojo: " + loanOrder->Library->ToUpper();
			// Mostrar el horario de recojo si es una entrega
			Library^ libreria = Controller::SearchLibrary(loanOrder->Library);
			if (libreria != nullptr) {
				label8->Text = "Horario de Recojo: " + libreria->OpeningHour->ToString() + "-" + libreria->CloseHour->ToString();
			}
		}
		ShowLoans();
	}
}
};
}
