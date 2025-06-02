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
	private: System::Windows::Forms::DataGridView^ dgvBookRequest;




	private: System::Windows::Forms::Button^ btnRegister;








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ txtUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ txtName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ txtQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ txtState;
	private: System::Windows::Forms::TextBox^ txtCantidad;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbState;
	private: System::Windows::Forms::Button^ btnUpdate;











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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookRequest::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvBookRequest = (gcnew System::Windows::Forms::DataGridView());
			this->txtUser = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtState = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCode = (gcnew System::Windows::Forms::TextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbState = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookRequest))->BeginInit();
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
			// dgvBookRequest
			// 
			this->dgvBookRequest->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvBookRequest->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvBookRequest->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBookRequest->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->txtUser,
					this->txtName, this->txtQuantity, this->txtState
			});
			this->dgvBookRequest->Location = System::Drawing::Point(110, 226);
			this->dgvBookRequest->Name = L"dgvBookRequest";
			this->dgvBookRequest->RowHeadersWidth = 51;
			this->dgvBookRequest->RowTemplate->Height = 24;
			this->dgvBookRequest->Size = System::Drawing::Size(744, 135);
			this->dgvBookRequest->TabIndex = 3;
			this->dgvBookRequest->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BookRequest::dataGridView1_CellContentClick);
			// 
			// txtUser
			// 
			this->txtUser->HeaderText = L"Usuario";
			this->txtUser->MinimumWidth = 6;
			this->txtUser->Name = L"txtUser";
			this->txtUser->Width = 139;
			// 
			// txtName
			// 
			this->txtName->HeaderText = L"Nombre";
			this->txtName->MinimumWidth = 6;
			this->txtName->Name = L"txtName";
			this->txtName->Width = 138;
			// 
			// txtQuantity
			// 
			this->txtQuantity->HeaderText = L"Cantidad de Libros";
			this->txtQuantity->MinimumWidth = 6;
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Width = 272;
			// 
			// txtState
			// 
			this->txtState->HeaderText = L"Estado";
			this->txtState->MinimumWidth = 6;
			this->txtState->Name = L"txtState";
			this->txtState->Width = 125;
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
			// BookRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->cmbState);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->dgvBookRequest);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"BookRequest";
			this->Text = L"BookRequest";
			this->Load += gcnew System::EventHandler(this, &BookRequest::BookRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBookRequest))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void BookRequest_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCode->Text == "" || txtCantidad->Text == "" || cmbState->SelectedIndex == -1) {
			MessageBox::Show("Por favor, complete todos los campos.");
			return;
		}
		String^ UserName = txtCode->Text;
		int quantity = Int32::Parse(txtCantidad->Text);
		String^ state = cmbState->SelectedItem->ToString();
		// Verificar si el usuario existe
		User^ user = MrBookyController::Controller::SearchUserbyName(UserName);
		Client^ client = dynamic_cast<Client^>(user);
		if (user == nullptr) {
			MessageBox::Show("El cliente no está registrado.");
			return;
		}
		Loan^ newLoan = gcnew Loan();
		newLoan->Client = client;
		newLoan->Status = state;
		newLoan->DateLoan = DateTime::Now;
		newLoan->ReturnDate = DateTime::Now.AddDays(15);

		int idLoan = MrBookyController::Controller::AddLoan(newLoan);

		dgvBookRequest->Rows->Add(gcnew String(client->Name), gcnew String(newLoan->Book->Title), quantity, state);

		txtCode->Clear();
		txtCantidad->Clear();
		cmbState->SelectedIndex = -1;
		MessageBox::Show("Solicitud de libro registrada exitosamente.");
	}
};
}
