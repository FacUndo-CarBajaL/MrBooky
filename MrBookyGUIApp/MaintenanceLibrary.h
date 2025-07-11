#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace System::Collections::Generic;
	using namespace MrBookyController;

	/// <summary>
	/// Summary for MaintenanceLibrary
	/// </summary>
	public ref class MaintenanceLibrary : public System::Windows::Forms::Form
	{
	public:
		MaintenanceLibrary(void)
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
		~MaintenanceLibrary()
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
	private: System::Windows::Forms::Button^ btnAddLibrary;
	private: System::Windows::Forms::Button^ btnUpdateLibrary;
	private: System::Windows::Forms::Button^ btnDeleteLibrary;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtX;
	private: System::Windows::Forms::TextBox^ txtY;
	private: System::Windows::Forms::DataGridView^ dgvLibraries;










	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::MaskedTextBox^ txtOpenHour;
	private: System::Windows::Forms::MaskedTextBox^ txtCLoseHour;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LibraryName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ XPosition;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ YPosition;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OpenHour;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CloseHour;












	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAddLibrary = (gcnew System::Windows::Forms::Button());
			this->btnUpdateLibrary = (gcnew System::Windows::Forms::Button());
			this->btnDeleteLibrary = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->txtY = (gcnew System::Windows::Forms::TextBox());
			this->dgvLibraries = (gcnew System::Windows::Forms::DataGridView());
			this->LibraryName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->XPosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->YPosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OpenHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CloseHour = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtOpenHour = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtCLoseHour = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibraries))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(268, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(414, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos de la librería:";
			this->label1->Click += gcnew System::EventHandler(this, &MaintenanceLibrary::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(16, 65);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Location = System::Drawing::Point(16, 103);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Posicion X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label4->Location = System::Drawing::Point(16, 145);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Posicion Y:";
			// 
			// btnAddLibrary
			// 
			this->btnAddLibrary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnAddLibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddLibrary->Location = System::Drawing::Point(124, 209);
			this->btnAddLibrary->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAddLibrary->Name = L"btnAddLibrary";
			this->btnAddLibrary->Size = System::Drawing::Size(165, 45);
			this->btnAddLibrary->TabIndex = 4;
			this->btnAddLibrary->Text = L"Agregar Librería";
			this->btnAddLibrary->UseVisualStyleBackColor = false;
			this->btnAddLibrary->Click += gcnew System::EventHandler(this, &MaintenanceLibrary::btnAddLibrary_Click);
			// 
			// btnUpdateLibrary
			// 
			this->btnUpdateLibrary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnUpdateLibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateLibrary->Location = System::Drawing::Point(356, 209);
			this->btnUpdateLibrary->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnUpdateLibrary->Name = L"btnUpdateLibrary";
			this->btnUpdateLibrary->Size = System::Drawing::Size(165, 45);
			this->btnUpdateLibrary->TabIndex = 5;
			this->btnUpdateLibrary->Text = L"Modificar Librería";
			this->btnUpdateLibrary->UseVisualStyleBackColor = false;
			this->btnUpdateLibrary->Click += gcnew System::EventHandler(this, &MaintenanceLibrary::btnUpdateLibrary_Click);
			// 
			// btnDeleteLibrary
			// 
			this->btnDeleteLibrary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnDeleteLibrary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteLibrary->Location = System::Drawing::Point(592, 209);
			this->btnDeleteLibrary->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDeleteLibrary->Name = L"btnDeleteLibrary";
			this->btnDeleteLibrary->Size = System::Drawing::Size(165, 45);
			this->btnDeleteLibrary->TabIndex = 6;
			this->btnDeleteLibrary->Text = L"Eliminar Librería";
			this->btnDeleteLibrary->UseVisualStyleBackColor = false;
			this->btnDeleteLibrary->Click += gcnew System::EventHandler(this, &MaintenanceLibrary::btnDeleteLibrary_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(147, 69);
			this->txtName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(319, 26);
			this->txtName->TabIndex = 7;
			// 
			// txtX
			// 
			this->txtX->Location = System::Drawing::Point(147, 105);
			this->txtX->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(100, 26);
			this->txtX->TabIndex = 8;
			// 
			// txtY
			// 
			this->txtY->Location = System::Drawing::Point(147, 149);
			this->txtY->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtY->Name = L"txtY";
			this->txtY->Size = System::Drawing::Size(100, 26);
			this->txtY->TabIndex = 9;
			// 
			// dgvLibraries
			// 
			this->dgvLibraries->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLibraries->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->LibraryName,
					this->XPosition, this->YPosition, this->Email, this->OpenHour, this->CloseHour
			});
			this->dgvLibraries->Location = System::Drawing::Point(32, 286);
			this->dgvLibraries->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvLibraries->Name = L"dgvLibraries";
			this->dgvLibraries->RowHeadersWidth = 82;
			this->dgvLibraries->RowTemplate->Height = 33;
			this->dgvLibraries->Size = System::Drawing::Size(960, 198);
			this->dgvLibraries->TabIndex = 10;
			// 
			// LibraryName
			// 
			this->LibraryName->HeaderText = L"Nombre";
			this->LibraryName->MinimumWidth = 10;
			this->LibraryName->Name = L"LibraryName";
			this->LibraryName->Width = 200;
			// 
			// XPosition
			// 
			this->XPosition->HeaderText = L"X";
			this->XPosition->MinimumWidth = 10;
			this->XPosition->Name = L"XPosition";
			this->XPosition->Width = 200;
			// 
			// YPosition
			// 
			this->YPosition->HeaderText = L"Y";
			this->YPosition->MinimumWidth = 10;
			this->YPosition->Name = L"YPosition";
			this->YPosition->Width = 200;
			// 
			// Email
			// 
			this->Email->HeaderText = L"E-mail";
			this->Email->MinimumWidth = 10;
			this->Email->Name = L"Email";
			this->Email->Width = 200;
			// 
			// OpenHour
			// 
			this->OpenHour->HeaderText = L"Hora de apertura";
			this->OpenHour->MinimumWidth = 10;
			this->OpenHour->Name = L"OpenHour";
			this->OpenHour->Width = 200;
			// 
			// CloseHour
			// 
			this->CloseHour->HeaderText = L"Hora de cierre";
			this->CloseHour->MinimumWidth = 10;
			this->CloseHour->Name = L"CloseHour";
			this->CloseHour->Width = 200;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label5->Location = System::Drawing::Point(495, 105);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 26);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Hora de apertura:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label6->Location = System::Drawing::Point(495, 69);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"EMAIL:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label7->Location = System::Drawing::Point(495, 145);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 26);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Hora de cierre:";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(680, 65);
			this->txtEmail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(311, 26);
			this->txtEmail->TabIndex = 14;
			// 
			// txtOpenHour
			// 
			this->txtOpenHour->Location = System::Drawing::Point(680, 107);
			this->txtOpenHour->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtOpenHour->Mask = L"00:00";
			this->txtOpenHour->Name = L"txtOpenHour";
			this->txtOpenHour->Size = System::Drawing::Size(204, 26);
			this->txtOpenHour->TabIndex = 15;
			this->txtOpenHour->ValidatingType = System::DateTime::typeid;
			// 
			// txtCLoseHour
			// 
			this->txtCLoseHour->Location = System::Drawing::Point(680, 147);
			this->txtCLoseHour->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCLoseHour->Mask = L"00:00";
			this->txtCLoseHour->Name = L"txtCLoseHour";
			this->txtCLoseHour->Size = System::Drawing::Size(204, 26);
			this->txtCLoseHour->TabIndex = 16;
			this->txtCLoseHour->ValidatingType = System::DateTime::typeid;
			// 
			// MaintenanceLibrary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1036, 502);
			this->Controls->Add(this->txtCLoseHour);
			this->Controls->Add(this->txtOpenHour);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvLibraries);
			this->Controls->Add(this->txtY);
			this->Controls->Add(this->txtX);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnDeleteLibrary);
			this->Controls->Add(this->btnUpdateLibrary);
			this->Controls->Add(this->btnAddLibrary);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MaintenanceLibrary";
			this->Text = L"MaintenanceLibrary";
			this->Load += gcnew System::EventHandler(this, &MaintenanceLibrary::MaintenanceLibrary_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLibraries))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAddLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name = txtName->Text;
			double xPosition = Double::Parse(txtX->Text);
			double yPosition = Double::Parse(txtY->Text);
			String^ email = txtEmail->Text;
			String^ openHour = txtOpenHour->Text;
			String^ closeHour = txtCLoseHour->Text;
			

			if (name->Length == 0 || xPosition == 0 || yPosition == 0 || openHour->Length == 0|| closeHour->Length == 0||name == nullptr) {
				MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			Library^ library = gcnew Library(name, email, openHour, closeHour, xPosition, yPosition);
			if (Controller::AddLibrary(library) == 1) {
				ShowLibraries();
				MessageBox::Show("Se ha agregado la libreria " + name);
			}
			else {
				MessageBox::Show("No se ha podido agregar la libreria " + name);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
				ex->Message);
		}
	}

		   void ShowLibraries() {
			   List<Library^>^ libraries = MrBookyController::Controller::GetLibraries();
			   if (libraries != nullptr) {
				   dgvLibraries->Rows->Clear();
				   for (int i = 0; i < libraries->Count; i++) {
					   dgvLibraries->Rows->Add(gcnew array<String^>{
						   libraries[i]->Name,
							   ""+libraries[i]->X,
							   "" +libraries[i]->Y,
							   libraries[i]->ContactEmail,
							   libraries[i]->OpeningHour,
							   libraries[i]->CloseHour
					   }
					   );
				   }
			   }
		   }

private: System::Void btnUpdateLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ libraryName = txtName->Text->Trim();
	if (libraryName->Equals("")) {
		MessageBox::Show("Debe seleccionar una libreria");
		return;
	}
	try {

		String^ libraryName = txtName->Text->Trim();
		String^ email = txtEmail->Text;
		if (libraryName->Length == 0) {
			MessageBox::Show("El nombre de la biblioteca no debe estar vacía");
			return;
		}
		if (email->Length == 0) {
			MessageBox::Show("El correo electr[onico de contacto no debe estar vacío");
			return;
		}


		String^ openHour = txtOpenHour->Text;
		if (openHour->Length == 0) {
			MessageBox::Show("La hora de apertura no debe estar vacía");
			return;
		}
		String^ closeHour = txtCLoseHour->Text;
		if (openHour->Length == 0) {
			MessageBox::Show("La hora de cierre no debe estar vacía");
			return;
		}

		Double xPosition = Double::Parse(txtX->Text);
		Double yPosition = Double::Parse(txtY->Text);

		Library^ library = gcnew Library(libraryName, email, openHour, closeHour, xPosition,yPosition);
		if (MrBookyController::Controller::UpdateLibrary(library) == 1) {
			MessageBox::Show("Se ha modificado la librer[ia " + libraryName);
			ShowLibraries();
		}
		else {
			MessageBox::Show("No se ha podido modificar la librería " + libraryName);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar la librería por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnDeleteLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ libraryName = txtName->Text->Trim();
	if (libraryName->Equals("")) {
		MessageBox::Show("Debe seleccionar una biblioteca.");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar la biblioteca?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteLibrary(libraryName);
			ShowLibraries();
			MessageBox::Show("Se ha eliminado la biblioteca" + libraryName + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void MaintenanceLibrary_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowLibraries();

}
};
}
