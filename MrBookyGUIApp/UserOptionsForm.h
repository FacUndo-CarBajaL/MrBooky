#pragma once
#include "BookForm.h"
#include "UserInterface.h"
#include "UserLoansList.h"
#include "UserProfileForm.h"
namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UserOptionsForm
	/// </summary>
	public ref class UserOptionsForm : public System::Windows::Forms::Form
	{
	public:
		UserOptionsForm(void)
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
		~UserOptionsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnBuscarLibros;
	private: System::Windows::Forms::Button^ btnVerPerfil;
	private: System::Windows::Forms::Button^ btnBuscarLibrerias;
	private: System::Windows::Forms::Button^ btnSolicitudesRealizadas;

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
			this->btnBuscarLibros = (gcnew System::Windows::Forms::Button());
			this->btnVerPerfil = (gcnew System::Windows::Forms::Button());
			this->btnBuscarLibrerias = (gcnew System::Windows::Forms::Button());
			this->btnSolicitudesRealizadas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(81, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(719, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido a Mr. Booky";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(282, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(283, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Selecciona una opción :";
			// 
			// btnBuscarLibros
			// 
			this->btnBuscarLibros->BackColor = System::Drawing::Color::White;
			this->btnBuscarLibros->Location = System::Drawing::Point(345, 257);
			this->btnBuscarLibros->Name = L"btnBuscarLibros";
			this->btnBuscarLibros->Size = System::Drawing::Size(172, 37);
			this->btnBuscarLibros->TabIndex = 2;
			this->btnBuscarLibros->Text = L"Busqueda de Libros";
			this->btnBuscarLibros->UseVisualStyleBackColor = false;
			this->btnBuscarLibros->Click += gcnew System::EventHandler(this, &UserOptionsForm::btnBuscarLibros_Click);
			// 
			// btnVerPerfil
			// 
			this->btnVerPerfil->BackColor = System::Drawing::Color::White;
			this->btnVerPerfil->Location = System::Drawing::Point(345, 317);
			this->btnVerPerfil->Name = L"btnVerPerfil";
			this->btnVerPerfil->Size = System::Drawing::Size(172, 37);
			this->btnVerPerfil->TabIndex = 3;
			this->btnVerPerfil->Text = L"Ver Perfil";
			this->btnVerPerfil->UseVisualStyleBackColor = false;
			this->btnVerPerfil->Click += gcnew System::EventHandler(this, &UserOptionsForm::btnVerPerfil_Click);
			// 
			// btnBuscarLibrerias
			// 
			this->btnBuscarLibrerias->BackColor = System::Drawing::Color::White;
			this->btnBuscarLibrerias->Location = System::Drawing::Point(345, 376);
			this->btnBuscarLibrerias->Name = L"btnBuscarLibrerias";
			this->btnBuscarLibrerias->Size = System::Drawing::Size(172, 37);
			this->btnBuscarLibrerias->TabIndex = 4;
			this->btnBuscarLibrerias->Text = L"Buscar Librerias";
			this->btnBuscarLibrerias->UseVisualStyleBackColor = false;
			// 
			// btnSolicitudesRealizadas
			// 
			this->btnSolicitudesRealizadas->BackColor = System::Drawing::Color::White;
			this->btnSolicitudesRealizadas->Location = System::Drawing::Point(345, 438);
			this->btnSolicitudesRealizadas->Name = L"btnSolicitudesRealizadas";
			this->btnSolicitudesRealizadas->Size = System::Drawing::Size(172, 37);
			this->btnSolicitudesRealizadas->TabIndex = 5;
			this->btnSolicitudesRealizadas->Text = L"Solicitudes Realizadas";
			this->btnSolicitudesRealizadas->UseVisualStyleBackColor = false;
			this->btnSolicitudesRealizadas->Click += gcnew System::EventHandler(this, &UserOptionsForm::btnSolicitudesRealizadas_Click);
			// 
			// UserOptionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(869, 533);
			this->Controls->Add(this->btnSolicitudesRealizadas);
			this->Controls->Add(this->btnBuscarLibrerias);
			this->Controls->Add(this->btnVerPerfil);
			this->Controls->Add(this->btnBuscarLibros);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserOptionsForm";
			this->Text = L"UserOptionsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBuscarLibros_Click(System::Object^ sender, System::EventArgs^ e) {
		UserInterface^ UserInterfaceForm = gcnew UserInterface();
		UserInterfaceForm->ShowDialog();
	}
private: System::Void btnVerPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	UserProfileForm^ profileForm = gcnew UserProfileForm();
	profileForm->Show();
}
private: System::Void btnSolicitudesRealizadas_Click(System::Object^ sender, System::EventArgs^ e) {
	UserLoansList^ loansListForm = gcnew UserLoansList();
	loansListForm->ShowDialog();
	// Aquí podrías agregar más lógica si es necesario, como actualizar la lista de préstamos.
}
};
}
