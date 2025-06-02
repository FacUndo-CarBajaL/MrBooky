#pragma once

#include "AddDeliveryRobot.h"
#include "AddLibrary.h"
#include "MaintenanceBook.h"
#include "LibrarianLogIn.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdminInterface
	/// </summary>
	public ref class AdminInterface : public System::Windows::Forms::Form
	{
	public:
		AdminInterface(void)
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
		~AdminInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdminLibrarian;

	private: System::Windows::Forms::Button^ btnAdminRobot;

	private: System::Windows::Forms::Button^ btnAdminLibrary;
	private: System::Windows::Forms::Button^ btnAdminBook;
	private: System::Windows::Forms::Button^ btnLibrarianInterface;






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
			this->btnAdminLibrarian = (gcnew System::Windows::Forms::Button());
			this->btnAdminRobot = (gcnew System::Windows::Forms::Button());
			this->btnAdminLibrary = (gcnew System::Windows::Forms::Button());
			this->btnAdminBook = (gcnew System::Windows::Forms::Button());
			this->btnLibrarianInterface = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(659, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Administrador, Bienvenido al Sistema de Logística Mr.Booky";
			// 
			// btnAdminLibrarian
			// 
			this->btnAdminLibrarian->Location = System::Drawing::Point(255, 90);
			this->btnAdminLibrarian->Name = L"btnAdminLibrarian";
			this->btnAdminLibrarian->Size = System::Drawing::Size(197, 23);
			this->btnAdminLibrarian->TabIndex = 1;
			this->btnAdminLibrarian->Text = L"Administrar Bibliotecario";
			this->btnAdminLibrarian->UseVisualStyleBackColor = true;
			// 
			// btnAdminRobot
			// 
			this->btnAdminRobot->Location = System::Drawing::Point(255, 139);
			this->btnAdminRobot->Name = L"btnAdminRobot";
			this->btnAdminRobot->Size = System::Drawing::Size(197, 23);
			this->btnAdminRobot->TabIndex = 2;
			this->btnAdminRobot->Text = L"Administrar Robot";
			this->btnAdminRobot->UseVisualStyleBackColor = true;
			this->btnAdminRobot->Click += gcnew System::EventHandler(this, &AdminInterface::btnAdminRobot_Click);
			// 
			// btnAdminLibrary
			// 
			this->btnAdminLibrary->Location = System::Drawing::Point(255, 191);
			this->btnAdminLibrary->Name = L"btnAdminLibrary";
			this->btnAdminLibrary->Size = System::Drawing::Size(197, 23);
			this->btnAdminLibrary->TabIndex = 3;
			this->btnAdminLibrary->Text = L"Administrar Biblioteca";
			this->btnAdminLibrary->UseVisualStyleBackColor = true;
			this->btnAdminLibrary->Click += gcnew System::EventHandler(this, &AdminInterface::btnAdminLibrary_Click);
			// 
			// btnAdminBook
			// 
			this->btnAdminBook->Location = System::Drawing::Point(255, 242);
			this->btnAdminBook->Name = L"btnAdminBook";
			this->btnAdminBook->Size = System::Drawing::Size(197, 23);
			this->btnAdminBook->TabIndex = 4;
			this->btnAdminBook->Text = L"Administrar Libros";
			this->btnAdminBook->UseVisualStyleBackColor = true;
			this->btnAdminBook->Click += gcnew System::EventHandler(this, &AdminInterface::btnAdminBook_Click);
			// 
			// btnLibrarianInterface
			// 
			this->btnLibrarianInterface->Location = System::Drawing::Point(255, 300);
			this->btnLibrarianInterface->Name = L"btnLibrarianInterface";
			this->btnLibrarianInterface->Size = System::Drawing::Size(197, 23);
			this->btnLibrarianInterface->TabIndex = 5;
			this->btnLibrarianInterface->Text = L"Opciones de Bibliotecario";
			this->btnLibrarianInterface->UseVisualStyleBackColor = true;
			this->btnLibrarianInterface->Click += gcnew System::EventHandler(this, &AdminInterface::btnLibrarianInterface_Click);
			// 
			// AdminInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 384);
			this->Controls->Add(this->btnLibrarianInterface);
			this->Controls->Add(this->btnAdminBook);
			this->Controls->Add(this->btnAdminLibrary);
			this->Controls->Add(this->btnAdminRobot);
			this->Controls->Add(this->btnAdminLibrarian);
			this->Controls->Add(this->label1);
			this->Name = L"AdminInterface";
			this->Text = L"AdminInterface";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnAdminRobot_Click(System::Object^ sender, System::EventArgs^ e) {
	// Al presionarse el boton , se abrirá la interfaz de administración del robot
	AddDeliveryRobot^ robotForm = gcnew AddDeliveryRobot();
	robotForm->ShowDialog();
}
private: System::Void btnAdminLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
	// Al presionarse el boton, se abrirá la interfaz de administración de la biblioteca
	AddLibrary^ libraryForm = gcnew AddLibrary();
	libraryForm->ShowDialog();
}
private: System::Void btnAdminBook_Click(System::Object^ sender, System::EventArgs^ e) {
	MaintenanceBook^ bookForm = gcnew MaintenanceBook();
	bookForm->ShowDialog();
}
private: System::Void btnLibrarianInterface_Click(System::Object^ sender, System::EventArgs^ e) {
	LibrarianLogIn^ librarianInterfaceForm = gcnew LibrarianLogIn();
	librarianInterfaceForm->ShowDialog();
}
};
}
