#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MaintenanceLibrarian
	/// </summary>
	public ref class MaintenanceLibrarian : public System::Windows::Forms::Form
	{
	public:
		MaintenanceLibrarian(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MaintenanceLibrarian()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvLibrarians;
	private: System::Windows::Forms::Button^ btnDelete;
	protected:

	protected:








	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtPassword;




	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtId;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LibrarianId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LibrarianName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LibrarianEmail;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvLibrarians = (gcnew System::Windows::Forms::DataGridView());
			this->LibrarianId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LibrarianName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LibrarianEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibrarians))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLibrarians
			// 
			this->dgvLibrarians->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLibrarians->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->LibrarianId,
					this->LibrarianName, this->LibrarianEmail
			});
			this->dgvLibrarians->Location = System::Drawing::Point(378, 493);
			this->dgvLibrarians->Name = L"dgvLibrarians";
			this->dgvLibrarians->RowHeadersWidth = 82;
			this->dgvLibrarians->RowTemplate->Height = 33;
			this->dgvLibrarians->Size = System::Drawing::Size(862, 190);
			this->dgvLibrarians->TabIndex = 57;
			this->dgvLibrarians->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceLibrarian::dgvLibrarians_CellContentClick);
			// 
			// LibrarianId
			// 
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->LibrarianId->DefaultCellStyle = dataGridViewCellStyle1;
			this->LibrarianId->HeaderText = L"ID";
			this->LibrarianId->MinimumWidth = 10;
			this->LibrarianId->Name = L"LibrarianId";
			this->LibrarianId->Width = 200;
			// 
			// LibrarianName
			// 
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->LibrarianName->DefaultCellStyle = dataGridViewCellStyle2;
			this->LibrarianName->HeaderText = L"Nombre";
			this->LibrarianName->MinimumWidth = 10;
			this->LibrarianName->Name = L"LibrarianName";
			this->LibrarianName->Width = 200;
			// 
			// LibrarianEmail
			// 
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			this->LibrarianEmail->DefaultCellStyle = dataGridViewCellStyle3;
			this->LibrarianEmail->HeaderText = L"Email";
			this->LibrarianEmail->MinimumWidth = 10;
			this->LibrarianEmail->Name = L"LibrarianEmail";
			this->LibrarianEmail->Width = 300;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::White;
			this->btnDelete->ForeColor = System::Drawing::Color::Black;
			this->btnDelete->Location = System::Drawing::Point(1131, 359);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(173, 46);
			this->btnDelete->TabIndex = 56;
			this->btnDelete->Text = L"Eliminar\r\n";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MaintenanceLibrarian::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::White;
			this->btnUpdate->ForeColor = System::Drawing::Color::Black;
			this->btnUpdate->Location = System::Drawing::Point(643, 359);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(226, 46);
			this->btnUpdate->TabIndex = 55;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MaintenanceLibrarian::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::White;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(215, 359);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(183, 46);
			this->btnAdd->TabIndex = 54;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MaintenanceLibrarian::btnAdd_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(602, 285);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(332, 31);
			this->txtPassword->TabIndex = 50;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(602, 231);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(333, 31);
			this->txtEmail->TabIndex = 49;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(602, 178);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(500, 31);
			this->txtName->TabIndex = 48;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(602, 127);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(500, 31);
			this->txtId->TabIndex = 47;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(413, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Contraseña :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(413, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 25);
			this->label4->TabIndex = 42;
			this->label4->Text = L"E-mail :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(413, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 25);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Id :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(413, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Nombre :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(394, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(507, 38);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Ingresar datos del bibliotecario :";
			this->label1->Click += gcnew System::EventHandler(this, &MaintenanceLibrarian::label1_Click);
			// 
			// MaintenanceLibrarian
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1463, 775);
			this->Controls->Add(this->dgvLibrarians);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MaintenanceLibrarian";
			this->Text = L"MaintenanceLibrarian";
			this->Load += gcnew System::EventHandler(this, &MaintenanceLibrarian::MaintenanceLibrarian_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibrarians))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MaintenanceLibrarian_Load(System::Object^ sender, System::EventArgs^ e) {

		ShowUsers();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name = txtName->Text;
			int id = Int32::Parse(txtId->Text);
			String^ email = txtEmail->Text;
			String^ password = txtPassword->Text;

			if (name->Length == 0 || email->Length == 0 || password->Length == 0 || id < 0) {
				MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			Librarian^ librarian = gcnew Librarian(id, name, password);
			Controller::AddUser(librarian);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar el bibliotecario por el siguiente motivo:\n" +
				ex->Message);
		}
	}
		   void ShowUsers() {
			   List<User^>^ users = MrBookyController::Controller::GetUsers();
			   if (users != nullptr) {
				   dgvLibrarians->Rows->Clear();
				   for (int i = 0; i < users->Count; i++) {
					   dgvLibrarians->Rows->Add(gcnew array<String^>{
						   "" + users[i]->UserID,
							   users[i]->Name,
							   users[i]->Email
					   }
					   );
				   }
			   }
		   }
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = txtName->Text->Trim();
	if (name->Equals("")) {
		MessageBox::Show("Debe seleccionar un bibliotecario.");
		return;
	}
	try {
		String^ email = txtEmail->Text->Trim();
		if (email->Length == 0) {
			MessageBox::Show("El email no debe estar vacío");
			return;
		}
		String^ password = txtPassword->Text->Trim();
		if (password->Length == 0) {
			MessageBox::Show("La contrasena no debe estar vacía");
			return;
		}

		int id = Int32::Parse(txtId->Text);
		if (id < 0) {
			MessageBox::Show("El id debe tener valores validos.");
			return;
		}

		Librarian^ librarian = gcnew Librarian(id, name, password);
		if (MrBookyController::Controller::UpdateUser(librarian) == 1) {
			MessageBox::Show("Se ha modificado el bibliotecario " + id + "-" + name);
			ShowUsers();
		}
		else {
			MessageBox::Show("No se ha podido modificar el usuario" + id + "-" + name);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el bibliotecario por el siguiente motivo:\n" +
			ex->Message);
	}


}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtId->Text->Trim();
	if (id->Equals("")) {
		MessageBox::Show("Debe seleccionar un bibliotecario.");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el bibliotecario?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		int idLibrarian = Int32::Parse(txtId->Text->Trim());
		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteRobot(idLibrarian);
			ShowUsers();
			MessageBox::Show("Se ha eliminado el bibliotecario con id " + idLibrarian + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el bibliotecario por el siguiente motivo:\n" +
			ex->Message);
	}

}
private: System::Void dgvLibrarians_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int librarianId = Int32::Parse(dgvLibrarians->Rows[dgvLibrarians->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	User^ librarian = Controller::SearchUser(librarianId);
	txtId->Text = "" + librarian->UserID;
	txtName->Text = librarian->Name;
	txtEmail->Text = librarian->Email;
	txtPassword->Text = librarian->Password;
}
};
}
