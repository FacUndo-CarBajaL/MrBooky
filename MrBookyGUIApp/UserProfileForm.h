#pragma once
#include "CarritoPrestamoForm.h"
#include "ReporteGraficaClienteForm.h"
#include "BookHistoryForm.h"
namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;

	/// <summary>
	/// Resumen de UserProfileForm
	/// </summary>
	public ref class UserProfileForm : public System::Windows::Forms::Form
	{
	public:
		UserProfileForm(void)
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
		~UserProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ txtNombre;
	private: System::Windows::Forms::RichTextBox^ txtEmail;
	private: System::Windows::Forms::RichTextBox^ txtCodigoEstudiante;
	private: System::Windows::Forms::RichTextBox^ txtContraseña;




	private: System::Windows::Forms::PictureBox^ btnCarrito;

	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnHistorial;

	private: System::Windows::Forms::Button^ btnReporte;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserProfileForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::RichTextBox());
			this->txtEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->txtCodigoEstudiante = (gcnew System::Windows::Forms::RichTextBox());
			this->txtContraseña = (gcnew System::Windows::Forms::RichTextBox());
			this->btnCarrito = (gcnew System::Windows::Forms::PictureBox());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnHistorial = (gcnew System::Windows::Forms::Button());
			this->btnReporte = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCarrito))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(196, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(726, 97);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Perfil de Usuario";
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(283, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(305, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"E-mail :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(118, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(290, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Codigo de Estudiante :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(238, 359);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contraseña :";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(451, 197);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(505, 34);
			this->txtNombre->TabIndex = 5;
			this->txtNombre->Text = L"";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(451, 250);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(505, 34);
			this->txtEmail->TabIndex = 6;
			this->txtEmail->Text = L"";
			// 
			// txtCodigoEstudiante
			// 
			this->txtCodigoEstudiante->Location = System::Drawing::Point(451, 305);
			this->txtCodigoEstudiante->Name = L"txtCodigoEstudiante";
			this->txtCodigoEstudiante->ReadOnly = true;
			this->txtCodigoEstudiante->Size = System::Drawing::Size(505, 34);
			this->txtCodigoEstudiante->TabIndex = 7;
			this->txtCodigoEstudiante->Text = L"";
			// 
			// txtContraseña
			// 
			this->txtContraseña->Location = System::Drawing::Point(451, 359);
			this->txtContraseña->Name = L"txtContraseña";
			this->txtContraseña->Size = System::Drawing::Size(505, 34);
			this->txtContraseña->TabIndex = 8;
			this->txtContraseña->Text = L"";
			// 
			// btnCarrito
			// 
			this->btnCarrito->BackColor = System::Drawing::Color::Transparent;
			this->btnCarrito->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->btnCarrito->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCarrito->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCarrito.Image")));
			this->btnCarrito->Location = System::Drawing::Point(1085, 35);
			this->btnCarrito->Name = L"btnCarrito";
			this->btnCarrito->Size = System::Drawing::Size(102, 102);
			this->btnCarrito->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->btnCarrito->TabIndex = 9;
			this->btnCarrito->TabStop = false;
			this->btnCarrito->Click += gcnew System::EventHandler(this, &UserProfileForm::btnCarrito_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->BackColor = System::Drawing::Color::DimGray;
			this->btnModificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnModificar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnModificar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnModificar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(552, 436);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(184, 35);
			this->btnModificar->TabIndex = 10;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = false;
			this->btnModificar->Click += gcnew System::EventHandler(this, &UserProfileForm::btnModificar_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(986, 497);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(201, 193);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// btnHistorial
			// 
			this->btnHistorial->BackColor = System::Drawing::Color::DimGray;
			this->btnHistorial->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHistorial->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnHistorial->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnHistorial->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnHistorial->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHistorial->Location = System::Drawing::Point(414, 533);
			this->btnHistorial->Name = L"btnHistorial";
			this->btnHistorial->Size = System::Drawing::Size(462, 45);
			this->btnHistorial->TabIndex = 12;
			this->btnHistorial->Text = L"Ver Historial De Libros";
			this->btnHistorial->UseVisualStyleBackColor = false;
			this->btnHistorial->Click += gcnew System::EventHandler(this, &UserProfileForm::btnHistorial_Click);
			// 
			// btnReporte
			// 
			this->btnReporte->BackColor = System::Drawing::Color::DimGray;
			this->btnReporte->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReporte->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnReporte->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btnReporte->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnReporte->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReporte->Location = System::Drawing::Point(414, 611);
			this->btnReporte->Name = L"btnReporte";
			this->btnReporte->Size = System::Drawing::Size(462, 45);
			this->btnReporte->TabIndex = 13;
			this->btnReporte->Text = L"Reporte/Estadística";
			this->btnReporte->UseVisualStyleBackColor = false;
			this->btnReporte->Click += gcnew System::EventHandler(this, &UserProfileForm::button2_Click);
			// 
			// UserProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1210, 702);
			this->Controls->Add(this->btnReporte);
			this->Controls->Add(this->btnHistorial);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnCarrito);
			this->Controls->Add(this->txtContraseña);
			this->Controls->Add(this->txtCodigoEstudiante);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserProfileForm";
			this->Load += gcnew System::EventHandler(this, &UserProfileForm::UserProfileForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnCarrito))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteGraficaClienteForm^ reporteForm = gcnew ReporteGraficaClienteForm();
	reporteForm->Show();
}

private: System::Void UserProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
	txtNombre->Text = user->FormalName;
	txtEmail->Text = user->Email;
	txtCodigoEstudiante->Text = "" + user->StudentCode;
	txtContraseña->Text = user->Password;
}

private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
	String^ name = txtNombre->Text->Trim();
	String^ email = txtEmail->Text->Trim();
	String^ password = txtContraseña->Text->Trim();

	if (name->Length == 0 || email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Ninguna casilla debe quedar en blanco");
		return;
	}

	user->Name = name;
	user->Email = email;
	user->Password = password;


	MessageBox::Show("Se han modificado los valores exitósamente");
	txtNombre->Text = user->FormalName;
	txtEmail->Text = user->Email;
	txtCodigoEstudiante->Text = "" + user->StudentCode;
	txtContraseña->Text = user->Password;
}

private: System::Void btnCarrito_Click(System::Object^ sender, System::EventArgs^ e) {
	CarritoPrestamoForm^ carrito = gcnew CarritoPrestamoForm();
	carrito->Show();
}
private: System::Void btnHistorial_Click(System::Object^ sender, System::EventArgs^ e) {
	BookHistoryForm^ historyForm = gcnew BookHistoryForm();
	historyForm->Show();
}
};
}
