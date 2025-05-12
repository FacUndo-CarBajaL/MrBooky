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
	/// Resumen de RegisterUserForm
	/// </summary>
	public ref class RegisterUserForm : public System::Windows::Forms::Form
	{
	public:
		RegisterUserForm(void)
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
		~RegisterUserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombreCompleto;
	private: System::Windows::Forms::TextBox^ txtNombreUsuario;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtCelular;
	private: System::Windows::Forms::TextBox^ txtContraseña;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbTipoUsuario;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRegistrar;


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
			this->txtNombreCompleto = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbTipoUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 30, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(34, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrar Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(141, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre Completo :";
			// 
			// txtNombreCompleto
			// 
			this->txtNombreCompleto->Location = System::Drawing::Point(281, 126);
			this->txtNombreCompleto->Name = L"txtNombreCompleto";
			this->txtNombreCompleto->Size = System::Drawing::Size(298, 22);
			this->txtNombreCompleto->TabIndex = 2;
			// 
			// txtNombreUsuario
			// 
			this->txtNombreUsuario->Location = System::Drawing::Point(281, 173);
			this->txtNombreUsuario->Name = L"txtNombreUsuario";
			this->txtNombreUsuario->Size = System::Drawing::Size(298, 22);
			this->txtNombreUsuario->TabIndex = 3;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(281, 220);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(298, 22);
			this->txtCorreo->TabIndex = 4;
			// 
			// txtCelular
			// 
			this->txtCelular->Location = System::Drawing::Point(281, 269);
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(298, 22);
			this->txtCelular->TabIndex = 5;
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(281, 316);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(298, 22);
			this->txtContraseña->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(133, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Nombre de Usuario :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(210, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Correo :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(209, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Celular :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(182, 316);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Contraseña :";
			// 
			// cmbTipoUsuario
			// 
			this->cmbTipoUsuario->FormattingEnabled = true;
			this->cmbTipoUsuario->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cliente", L"Bibliotecario" });
			this->cmbTipoUsuario->Location = System::Drawing::Point(281, 368);
			this->cmbTipoUsuario->Name = L"cmbTipoUsuario";
			this->cmbTipoUsuario->Size = System::Drawing::Size(121, 24);
			this->cmbTipoUsuario->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(154, 368);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Tipo de Usuario :";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(329, 431);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(75, 23);
			this->btnRegistrar->TabIndex = 14;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &RegisterUserForm::btnRegistrar_Click);
			// 
			// RegisterUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(792, 506);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cmbTipoUsuario);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtCelular);
			this->Controls->Add(this->txtCorreo);
			this->Controls->Add(this->txtNombreUsuario);
			this->Controls->Add(this->txtNombreCompleto);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterUserForm";
			this->Text = L"RegisterUserForm";
			this->Load += gcnew System::EventHandler(this, &RegisterUserForm::RegisterUserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int userId = 1;
			String^ userName = txtNombreUsuario->Text->Trim();
			if (userName->Length == 0) {
				MessageBox::Show("El nombre del usuario no debe estar vacío");
				return;
			}
			String^ userPassword = txtContraseña->Text->Trim();
			int selectedIndex = cmbTipoUsuario->SelectedIndex;
			if (selectedIndex < 0) {
				MessageBox::Show("Debe seleccionar el tipo de usuario que desea registrar");
				return;
			}
			UserType userType = static_cast<UserType>(selectedIndex);
			User^ user = nullptr;
			switch (userType) {
			case UserType::Client:
				user = gcnew Client(userId, userName, userPassword);
				if (Controller::AddUser(user) == 1) {
					MessageBox::Show("Cliente registrado éxitosamente. Bienvenid@ " + userName);
					txtNombreCompleto->Clear();
					txtNombreUsuario->Clear();
					txtCorreo->Clear();
					txtCelular->Clear();
					txtContraseña->Clear();
					cmbTipoUsuario->SelectedIndex = -1;
					this->Close();
				}
				else {
					MessageBox::Show("No se ha podido registrar su usuario");
				}
				break;
			case UserType::Librarian:
				user = gcnew Librarian(userId, userName, userPassword);
				if (Controller::AddUser(user) == 1) {
					MessageBox::Show("Solicitud para registro de bibliotecario enviada. Espere la confirmación" + userName);
					txtNombreCompleto->Clear();
					txtNombreUsuario->Clear();
					txtCorreo->Clear();
					txtCelular->Clear();
					txtContraseña->Clear();
					cmbTipoUsuario->SelectedIndex = -1;
					this->Close();
				}
				else {
					MessageBox::Show("No se ha podido registrar su solicitud");
				}
				break;
			}


			
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar el usuario por el siguiente motivo:\n" +
				ex->Message);
		}

	}
private: System::Void RegisterUserForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
