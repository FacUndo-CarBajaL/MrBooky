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

	/// <summary>
	/// Resumen de AddLibrary
	/// </summary>
	public ref class AddLibrary : public System::Windows::Forms::Form
	{
	public:
		AddLibrary(void)
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
		~AddLibrary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtOpenHour;
	private: System::Windows::Forms::TextBox^ txtCloseHour;





	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::Button^ btnAddLibrary;
	private: System::Windows::Forms::DataGridView^ dvgLibrerias;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCorreo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaHoraApertura;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaHoraCierre;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtOpenHour = (gcnew System::Windows::Forms::TextBox());
			this->txtCloseHour = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnAddLibrary = (gcnew System::Windows::Forms::Button());
			this->dvgLibrerias = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCorreo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaHoraApertura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaHoraCierre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgLibrerias))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Añadir Libreria";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo Contacto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Hora Apertura";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Hora Cierre";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(198, 41);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 22);
			this->txtID->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(198, 76);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 22);
			this->txtName->TabIndex = 7;
			// 
			// txtOpenHour
			// 
			this->txtOpenHour->Location = System::Drawing::Point(198, 141);
			this->txtOpenHour->Name = L"txtOpenHour";
			this->txtOpenHour->Size = System::Drawing::Size(100, 22);
			this->txtOpenHour->TabIndex = 8;
			// 
			// txtCloseHour
			// 
			this->txtCloseHour->Location = System::Drawing::Point(198, 172);
			this->txtCloseHour->Name = L"txtCloseHour";
			this->txtCloseHour->Size = System::Drawing::Size(100, 22);
			this->txtCloseHour->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(198, 107);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 22);
			this->txtEmail->TabIndex = 10;
			// 
			// btnAddLibrary
			// 
			this->btnAddLibrary->Location = System::Drawing::Point(112, 237);
			this->btnAddLibrary->Name = L"btnAddLibrary";
			this->btnAddLibrary->Size = System::Drawing::Size(75, 23);
			this->btnAddLibrary->TabIndex = 11;
			this->btnAddLibrary->Text = L"Añadir";
			this->btnAddLibrary->UseVisualStyleBackColor = true;
			this->btnAddLibrary->Click += gcnew System::EventHandler(this, &AddLibrary::btnAddLibrary_Click);
			// 
			// dvgLibrerias
			// 
			this->dvgLibrerias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgLibrerias->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ColumnaID,
					this->ColumnaNombre, this->ColumnaCorreo, this->ColumnaHoraApertura, this->ColumnaHoraCierre
			});
			this->dvgLibrerias->Location = System::Drawing::Point(51, 299);
			this->dvgLibrerias->Name = L"dvgLibrerias";
			this->dvgLibrerias->RowHeadersWidth = 51;
			this->dvgLibrerias->RowTemplate->Height = 24;
			this->dvgLibrerias->Size = System::Drawing::Size(467, 123);
			this->dvgLibrerias->TabIndex = 12;
			this->dvgLibrerias->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddLibrary::dataGridView1_CellContentClick);
			// 
			// ColumnaID
			// 
			this->ColumnaID->HeaderText = L"ID";
			this->ColumnaID->MinimumWidth = 6;
			this->ColumnaID->Name = L"ColumnaID";
			this->ColumnaID->Width = 125;
			// 
			// ColumnaNombre
			// 
			this->ColumnaNombre->HeaderText = L"Nombre";
			this->ColumnaNombre->MinimumWidth = 6;
			this->ColumnaNombre->Name = L"ColumnaNombre";
			this->ColumnaNombre->Width = 125;
			// 
			// ColumnaCorreo
			// 
			this->ColumnaCorreo->HeaderText = L"E-mail";
			this->ColumnaCorreo->MinimumWidth = 6;
			this->ColumnaCorreo->Name = L"ColumnaCorreo";
			this->ColumnaCorreo->Width = 125;
			// 
			// ColumnaHoraApertura
			// 
			this->ColumnaHoraApertura->HeaderText = L"HoraApertura";
			this->ColumnaHoraApertura->MinimumWidth = 6;
			this->ColumnaHoraApertura->Name = L"ColumnaHoraApertura";
			this->ColumnaHoraApertura->Width = 125;
			// 
			// ColumnaHoraCierre
			// 
			this->ColumnaHoraCierre->HeaderText = L"HoraCierre";
			this->ColumnaHoraCierre->MinimumWidth = 6;
			this->ColumnaHoraCierre->Name = L"ColumnaHoraCierre";
			this->ColumnaHoraCierre->Width = 125;
			// 
			// AddLibrary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(553, 463);
			this->Controls->Add(this->dvgLibrerias);
			this->Controls->Add(this->btnAddLibrary);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtCloseHour);
			this->Controls->Add(this->txtOpenHour);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddLibrary";
			this->Text = L"AddLibrary";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgLibrerias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnAddLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(txtID->Text);
	String^ name = txtName->Text;
	String^ email = txtEmail->Text;
	String^ openHour = txtOpenHour->Text;
	String^ closeHour = txtCloseHour->Text;
	Library^ library = gcnew Library(id, name, email, openHour, closeHour);
	if (Controller::AddLibrary(library) == 1) {
		MessageBox::Show("Biblioteca registrada exitosamente", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
		txtID->Clear();
		txtName->Clear();
		txtEmail->Clear();
		txtOpenHour->Clear();
		txtCloseHour->Clear();
		dvgLibrerias->Rows->Add(id, name, email, openHour, closeHour);
	}
	else {
		MessageBox::Show("No se ha podido registrar la biblioteca");
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
};
}
