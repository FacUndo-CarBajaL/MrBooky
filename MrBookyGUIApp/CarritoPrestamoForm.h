#pragma once
#include "ComboBoxItem.h"

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;
	using namespace System::IO;
	using namespace System::Drawing::Imaging;

	/// <summary>
	/// Resumen de CarritoPrestamoForm
	/// </summary>
	public ref class CarritoPrestamoForm : public System::Windows::Forms::Form
	{
	public:
		CarritoPrestamoForm(void)
		{
			InitializeComponent();

			this->cmbRobots->SelectedIndexChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::cmbRobots_SelectedIndexChanged);
			this->cmbBibliotecas->SelectedIndexChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::cmbBibliotecas_SelectedIndexChanged);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CarritoPrestamoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblRobot;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblCapacidadTotalRobot;

	private: System::Windows::Forms::Button^ btnVaciarCarrito;

	private: System::Windows::Forms::Button^ btnConfirmarPrestamos;
	private: System::Windows::Forms::RichTextBox^ txtTotalPesoLibros;
	private: System::Windows::Forms::RichTextBox^ txtCapacidadPesoRobot;

	private: System::Windows::Forms::ComboBox^ cmbRobots;




	private: System::Windows::Forms::DataGridView^ dgvPrestamos;


	private: System::Windows::Forms::CheckBox^ chLibreria;
	private: System::Windows::Forms::CheckBox^ chRobot;


	private: System::Windows::Forms::Label^ lblBiblioteca;
	private: System::Windows::Forms::ComboBox^ cmbBibliotecas;
	private: System::Windows::Forms::Label^ lblHorarioBiblioteca;
	private: System::Windows::Forms::RichTextBox^ txtHorario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTiempo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaPeso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewImageColumn^ ColumnaImagen;
	private: System::Windows::Forms::DataGridViewButtonColumn^ ColumnaEliminar;












	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblRobot = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblCapacidadTotalRobot = (gcnew System::Windows::Forms::Label());
			this->btnVaciarCarrito = (gcnew System::Windows::Forms::Button());
			this->btnConfirmarPrestamos = (gcnew System::Windows::Forms::Button());
			this->txtTotalPesoLibros = (gcnew System::Windows::Forms::RichTextBox());
			this->txtCapacidadPesoRobot = (gcnew System::Windows::Forms::RichTextBox());
			this->cmbRobots = (gcnew System::Windows::Forms::ComboBox());
			this->dgvPrestamos = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTiempo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaPeso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaImagen = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->ColumnaEliminar = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->chLibreria = (gcnew System::Windows::Forms::CheckBox());
			this->chRobot = (gcnew System::Windows::Forms::CheckBox());
			this->lblBiblioteca = (gcnew System::Windows::Forms::Label());
			this->cmbBibliotecas = (gcnew System::Windows::Forms::ComboBox());
			this->lblHorarioBiblioteca = (gcnew System::Windows::Forms::Label());
			this->txtHorario = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(30, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Carrito de Prestamo";
			// 
			// lblRobot
			// 
			this->lblRobot->AutoSize = true;
			this->lblRobot->BackColor = System::Drawing::Color::Transparent;
			this->lblRobot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRobot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblRobot->Location = System::Drawing::Point(472, 119);
			this->lblRobot->Name = L"lblRobot";
			this->lblRobot->Size = System::Drawing::Size(90, 29);
			this->lblRobot->TabIndex = 1;
			this->lblRobot->Text = L"Robot :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Location = System::Drawing::Point(37, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total Peso de Libros (kg):";
			// 
			// lblCapacidadTotalRobot
			// 
			this->lblCapacidadTotalRobot->AutoSize = true;
			this->lblCapacidadTotalRobot->BackColor = System::Drawing::Color::Transparent;
			this->lblCapacidadTotalRobot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCapacidadTotalRobot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblCapacidadTotalRobot->Location = System::Drawing::Point(472, 193);
			this->lblCapacidadTotalRobot->Name = L"lblCapacidadTotalRobot";
			this->lblCapacidadTotalRobot->Size = System::Drawing::Size(196, 29);
			this->lblCapacidadTotalRobot->TabIndex = 3;
			this->lblCapacidadTotalRobot->Text = L"Capacidad Total:";
			// 
			// btnVaciarCarrito
			// 
			this->btnVaciarCarrito->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnVaciarCarrito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVaciarCarrito->Location = System::Drawing::Point(249, 135);
			this->btnVaciarCarrito->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnVaciarCarrito->Name = L"btnVaciarCarrito";
			this->btnVaciarCarrito->Size = System::Drawing::Size(150, 49);
			this->btnVaciarCarrito->TabIndex = 4;
			this->btnVaciarCarrito->Text = L"Vaciar Carrito";
			this->btnVaciarCarrito->UseVisualStyleBackColor = false;
			this->btnVaciarCarrito->Click += gcnew System::EventHandler(this, &CarritoPrestamoForm::btnVaciarCarrito_Click);
			// 
			// btnConfirmarPrestamos
			// 
			this->btnConfirmarPrestamos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnConfirmarPrestamos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirmarPrestamos->Location = System::Drawing::Point(44, 135);
			this->btnConfirmarPrestamos->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnConfirmarPrestamos->Name = L"btnConfirmarPrestamos";
			this->btnConfirmarPrestamos->Size = System::Drawing::Size(181, 49);
			this->btnConfirmarPrestamos->TabIndex = 5;
			this->btnConfirmarPrestamos->Text = L"Confirmar Préstamos";
			this->btnConfirmarPrestamos->UseVisualStyleBackColor = false;
			this->btnConfirmarPrestamos->Click += gcnew System::EventHandler(this, &CarritoPrestamoForm::btnConfirmarPrestamos_Click);
			// 
			// txtTotalPesoLibros
			// 
			this->txtTotalPesoLibros->Location = System::Drawing::Point(222, 76);
			this->txtTotalPesoLibros->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtTotalPesoLibros->Name = L"txtTotalPesoLibros";
			this->txtTotalPesoLibros->Size = System::Drawing::Size(121, 36);
			this->txtTotalPesoLibros->TabIndex = 6;
			this->txtTotalPesoLibros->Text = L"";
			// 
			// txtCapacidadPesoRobot
			// 
			this->txtCapacidadPesoRobot->Location = System::Drawing::Point(687, 193);
			this->txtCapacidadPesoRobot->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtCapacidadPesoRobot->Name = L"txtCapacidadPesoRobot";
			this->txtCapacidadPesoRobot->Size = System::Drawing::Size(148, 29);
			this->txtCapacidadPesoRobot->TabIndex = 7;
			this->txtCapacidadPesoRobot->Text = L"";
			// 
			// cmbRobots
			// 
			this->cmbRobots->FormattingEnabled = true;
			this->cmbRobots->Location = System::Drawing::Point(687, 123);
			this->cmbRobots->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cmbRobots->Name = L"cmbRobots";
			this->cmbRobots->Size = System::Drawing::Size(319, 28);
			this->cmbRobots->TabIndex = 8;
			this->cmbRobots->SelectedIndexChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::cmbRobots_SelectedIndexChanged);
			// 
			// dgvPrestamos
			// 
			this->dgvPrestamos->AllowUserToAddRows = false;
			this->dgvPrestamos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPrestamos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPrestamos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaTiempo, this->ColumnaPeso, this->ColumnaAutor, this->ColumnaCantidad, this->ColumnaImagen,
					this->ColumnaEliminar
			});
			this->dgvPrestamos->Location = System::Drawing::Point(36, 242);
			this->dgvPrestamos->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dgvPrestamos->Name = L"dgvPrestamos";
			this->dgvPrestamos->RowHeadersWidth = 51;
			this->dgvPrestamos->RowTemplate->Height = 110;
			this->dgvPrestamos->Size = System::Drawing::Size(1167, 314);
			this->dgvPrestamos->TabIndex = 9;
			this->dgvPrestamos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoPrestamoForm::dgvPrestamos_CellClick);
			this->dgvPrestamos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoPrestamoForm::dgvPrestamos_CellContentClick);
			this->dgvPrestamos->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarritoPrestamoForm::dgvPrestamos_CellEndEdit);
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
			// ColumnaTiempo
			// 
			this->ColumnaTiempo->HeaderText = L"Tiempo de Prestamo (dias)";
			this->ColumnaTiempo->MinimumWidth = 6;
			this->ColumnaTiempo->Name = L"ColumnaTiempo";
			// 
			// ColumnaPeso
			// 
			this->ColumnaPeso->HeaderText = L"Peso Total(kg)";
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
			// ColumnaEliminar
			// 
			this->ColumnaEliminar->HeaderText = L"Eliminar Prestamo\?";
			this->ColumnaEliminar->MinimumWidth = 6;
			this->ColumnaEliminar->Name = L"ColumnaEliminar";
			this->ColumnaEliminar->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ColumnaEliminar->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->ColumnaEliminar->Text = L"Eliminar";
			this->ColumnaEliminar->UseColumnTextForButtonValue = true;
			// 
			// chLibreria
			// 
			this->chLibreria->AutoSize = true;
			this->chLibreria->BackColor = System::Drawing::Color::Transparent;
			this->chLibreria->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chLibreria->Location = System::Drawing::Point(615, 28);
			this->chLibreria->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chLibreria->Name = L"chLibreria";
			this->chLibreria->Size = System::Drawing::Size(163, 24);
			this->chLibreria->TabIndex = 10;
			this->chLibreria->Text = L"Recojo en Libreria";
			this->chLibreria->UseVisualStyleBackColor = false;
			this->chLibreria->CheckedChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::chLibreria_CheckedChanged);
			// 
			// chRobot
			// 
			this->chRobot->AutoSize = true;
			this->chRobot->BackColor = System::Drawing::Color::Transparent;
			this->chRobot->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->chRobot->Location = System::Drawing::Point(790, 28);
			this->chRobot->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chRobot->Name = L"chRobot";
			this->chRobot->Size = System::Drawing::Size(167, 24);
			this->chRobot->TabIndex = 11;
			this->chRobot->Text = L"Enviado por Robot";
			this->chRobot->UseVisualStyleBackColor = false;
			this->chRobot->CheckedChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::chRobot_CheckedChanged);
			// 
			// lblBiblioteca
			// 
			this->lblBiblioteca->AutoSize = true;
			this->lblBiblioteca->BackColor = System::Drawing::Color::Transparent;
			this->lblBiblioteca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBiblioteca->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblBiblioteca->Location = System::Drawing::Point(472, 80);
			this->lblBiblioteca->Name = L"lblBiblioteca";
			this->lblBiblioteca->Size = System::Drawing::Size(120, 29);
			this->lblBiblioteca->TabIndex = 12;
			this->lblBiblioteca->Text = L"Biblioteca";
			// 
			// cmbBibliotecas
			// 
			this->cmbBibliotecas->FormattingEnabled = true;
			this->cmbBibliotecas->Location = System::Drawing::Point(687, 84);
			this->cmbBibliotecas->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cmbBibliotecas->Name = L"cmbBibliotecas";
			this->cmbBibliotecas->Size = System::Drawing::Size(319, 28);
			this->cmbBibliotecas->TabIndex = 13;
			this->cmbBibliotecas->SelectedIndexChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::cmbBibliotecas_SelectedIndexChanged);
			// 
			// lblHorarioBiblioteca
			// 
			this->lblHorarioBiblioteca->AutoSize = true;
			this->lblHorarioBiblioteca->BackColor = System::Drawing::Color::Transparent;
			this->lblHorarioBiblioteca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHorarioBiblioteca->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lblHorarioBiblioteca->Location = System::Drawing::Point(472, 156);
			this->lblHorarioBiblioteca->Name = L"lblHorarioBiblioteca";
			this->lblHorarioBiblioteca->Size = System::Drawing::Size(206, 29);
			this->lblHorarioBiblioteca->TabIndex = 14;
			this->lblHorarioBiblioteca->Text = L"Horario Biblioteca";
			// 
			// txtHorario
			// 
			this->txtHorario->Location = System::Drawing::Point(687, 156);
			this->txtHorario->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtHorario->Name = L"txtHorario";
			this->txtHorario->Size = System::Drawing::Size(275, 29);
			this->txtHorario->TabIndex = 15;
			this->txtHorario->Text = L"";
			// 
			// CarritoPrestamoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1245, 593);
			this->Controls->Add(this->txtHorario);
			this->Controls->Add(this->lblHorarioBiblioteca);
			this->Controls->Add(this->cmbBibliotecas);
			this->Controls->Add(this->lblBiblioteca);
			this->Controls->Add(this->chRobot);
			this->Controls->Add(this->chLibreria);
			this->Controls->Add(this->dgvPrestamos);
			this->Controls->Add(this->cmbRobots);
			this->Controls->Add(this->txtCapacidadPesoRobot);
			this->Controls->Add(this->txtTotalPesoLibros);
			this->Controls->Add(this->btnConfirmarPrestamos);
			this->Controls->Add(this->btnVaciarCarrito);
			this->Controls->Add(this->lblCapacidadTotalRobot);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblRobot);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"CarritoPrestamoForm";
			this->Text = L"CarritoPrestamoForm";
			this->Load += gcnew System::EventHandler(this, &CarritoPrestamoForm::CarritoPrestamoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void FillRobotsComboBox() {
			cmbRobots->Items->Clear();
			List<DeliveryRobot^>^ robotList = Controller::GetRobots();
			if (robotList != nullptr) {
				for each (DeliveryRobot ^ robot in robotList) {
					cmbRobots->Items->Add(gcnew ComboBoxItem(robot->RobotID,
						robot->Name));
				}
			}
		}

		void FillLibrariesComboBox() {
			cmbBibliotecas->Items->Clear();
			List<Library^>^ librariesList = Controller::GetLibraries();
			if (librariesList != nullptr) {
				for each (Library ^ library in librariesList) {
					cmbBibliotecas->Items->Add(gcnew ComboBoxItem(library->LibraryID,
						library->Name));
				}
			}
		}

		

		void ShowLoans() {
			User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
			LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
			if (loanCart != nullptr) {
				dgvPrestamos->Rows->Clear();
				List<Loan^>^ loans = loanCart->Loans;
				for (int i = 0; i < loans->Count; i++) {
					int index = dgvPrestamos->Rows->Add(gcnew array<String^>{
						"" + loans[i]->LoanID,
							loans[i]->Book->Title,
							"" + loans[i]->Book->LoanTime,
							"" + loans[i]->Book->Weight,
							loans[i]->Book->Author,
							"" + loans[i]->Quantity,
							loans[i]->Status}
					);

					array<Byte>^ photoBytes = loans[i]->Book->Photo;
					if (photoBytes != nullptr && photoBytes->Length > 0) {
						System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(photoBytes);
						System::Drawing::Image^ image = System::Drawing::Image::FromStream(ms);

						// Insertar la imagen en la última columna
						dgvPrestamos->Rows[index]->Cells["ColumnaImagen"]->Value = image;
					}

				}
			}
			else {
				MessageBox::Show("No hay préstamos en el carrito.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		};

		void UpdateBooksWeight() {
			double total = 0.0;
			for (int i = 0; i < dgvPrestamos->Rows->Count; i++) {

				Object^ valorPeso = dgvPrestamos->Rows[i]->Cells[3]->Value;
				Object^ valorCantidad = dgvPrestamos->Rows[i]->Cells[5]->Value;
				if (valorPeso != nullptr && valorCantidad != nullptr) {
					double pesoFila = Double::Parse(valorPeso->ToString());
					double cantidadFila = Double::Parse(valorCantidad->ToString());
					if (cantidadFila > 0) {
						total = pesoFila * (double)cantidadFila + total;
					}
					else if (cantidadFila == 0) {
						dgvPrestamos->Rows->RemoveAt(i);
					}

				}
			}
			txtTotalPesoLibros->Text = total.ToString("F2");
		};

	private: System::Void CarritoPrestamoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Hacer columnas no editables
		for each (DataGridViewColumn ^ col in dgvPrestamos->Columns) {
			col->ReadOnly = true;
		}
		//Hacer columna de cantidad editable
		dgvPrestamos->Columns[5]->ReadOnly = false;

		// Ocultar opciones robot
		cmbRobots->Visible = false;
		lblRobot->Visible = false;
		lblCapacidadTotalRobot->Visible = false;
		txtCapacidadPesoRobot->Visible = false;

		// Ocultar opciones biblioteca
		cmbBibliotecas->Visible = false;
		lblBiblioteca->Visible = false;
		txtHorario->Visible = false;
		lblHorarioBiblioteca->Visible = false;

		ShowLoans();
		UpdateBooksWeight();
	}

	private: System::Void dgvPrestamos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->ColumnIndex == 7 && e->RowIndex >= 0) {  // Asegura que es una celda válida
			if (MessageBox::Show("¿Eliminar este préstamo?", "Confirmar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				dgvPrestamos->Rows->RemoveAt(e->RowIndex);
				int fila = e->RowIndex;
				User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
				LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
				List<Loan^>^ loans = loanCart->Loans;
				if (fila >= 0 && fila < loans->Count) {
					loans->RemoveAt(fila); // Elimina el préstamo de la lista
					Persistance::PersistBinaryFile("loanCart.bin", loanCart); // Guarda el carrito actualizado
				}

				UpdateBooksWeight();
			}
		}
	}
	private: System::Void dgvPrestamos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void chLibreria_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chLibreria->Checked) {
			chRobot->Checked = false;

			// Mostrar opciones biblioteca
			cmbBibliotecas->Visible = true;
			lblBiblioteca->Visible = true;
			txtHorario->Visible = true;
			lblHorarioBiblioteca->Visible = true;

			// Ocultar opciones robot
			cmbRobots->Visible = false;
			lblRobot->Visible = false;
			lblCapacidadTotalRobot->Visible = false;
			txtCapacidadPesoRobot->Visible = false;

			FillLibrariesComboBox();
		}
		else {
			// Ocultar opciones biblioteca
			cmbBibliotecas->Visible = false;
			lblBiblioteca->Visible = false;
			txtHorario->Visible = false;
			lblHorarioBiblioteca->Visible = false;
		}
	}


	private: System::Void chRobot_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chRobot->Checked) {
			chLibreria->Checked = false;

			// Ocultar opciones biblioteca
			cmbBibliotecas->Visible = false;
			lblBiblioteca->Visible = false;
			txtHorario->Visible = false;
			lblHorarioBiblioteca->Visible = false;

			// Mostrar opciones robot
			cmbRobots->Visible = true;
			lblRobot->Visible = true;
			lblCapacidadTotalRobot->Visible = true;
			txtCapacidadPesoRobot->Visible = true;

			FillRobotsComboBox();
		}
		else {
			// Ocultar opciones robot
			cmbRobots->Visible = false;
			lblRobot->Visible = false;
			lblCapacidadTotalRobot->Visible = false;
			txtCapacidadPesoRobot->Visible = false;
		}
	}
	private: System::Void dgvPrestamos_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Se actualiza el peso total cuando se cambia la cantidad de un libro
		//if (dgvPrestamos->Columns[e->ColumnIndex]->Name == "Cantidad") {
		if (dgvPrestamos->Columns[e->ColumnIndex]->Name == "ColumnaCantidad") {
			int fila = e->RowIndex;

			// Intenta convertir la cantidad ingresada
			String^ textoCantidad = dgvPrestamos->Rows[fila]->Cells["ColumnaCantidad"]->Value->ToString();
			int cantidad = 0;

			if (!Int32::TryParse(textoCantidad, cantidad) || cantidad < 0) {
				MessageBox::Show("Ingrese una cantidad válida (entero positivo).");
				dgvPrestamos->Rows[fila]->Cells["ColumnaCantidad"]->Value = 1; // valor por defecto
				cantidad = 1;
			}

			// Actualiza la cantidad en el loan
			User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
			LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
			List<Loan^>^ loans = loanCart->Loans;

			//Quiero verificar que la cantidad que se modifica sea menor al stock de cada libro

			String^ bookName = loans[fila]->Book->Title;
			Book^ book = Controller::SearchBookByName(bookName);

			if (book != nullptr && book->Quantity < cantidad) {
				MessageBox::Show("La cantidad solicitada supera el stock disponible del libro.");
				dgvPrestamos->Rows[fila]->Cells["ColumnaCantidad"]->Value = book->Quantity; // valor por defecto
				cantidad = book->Quantity;
			}
			
			// Actualiza la cantidad en el objeto Loan
			loans[fila]->Quantity = cantidad;

			UpdateBooksWeight();
		}


	}
	private: System::Void btnConfirmarPrestamos_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
		LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
		LoanOrder^ loanOrder = gcnew LoanOrder();
		if (loanCart == nullptr || loanCart->Loans->Count == 0) {
			MessageBox::Show("El carrito de préstamos está vacío.");
			return;
		}

		if (!chLibreria->Checked && !chRobot->Checked) {
			MessageBox::Show("Debe seleccionar una opción de entrega (librería o robot).");
			return;
		}

		if (chRobot->Checked && cmbRobots->SelectedItem == nullptr) {
			MessageBox::Show("Debe seleccionar un robot para la entrega.");
			return;
		}

		if (chLibreria->Checked && cmbBibliotecas->SelectedItem == nullptr) {
			MessageBox::Show("Debe seleccionar una biblioteca para la entrega.");
			return;
		}

		
		double totalPesoLibros = Double::Parse(txtTotalPesoLibros->Text);

		if (chRobot->Checked && (txtCapacidadPesoRobot->Text != nullptr)) {
			double capacidadCargaRobot = Double::Parse(txtCapacidadPesoRobot->Text->Replace(" kg", ""));
			if (totalPesoLibros > capacidadCargaRobot) {
				MessageBox::Show("El peso total de los libros no debe superar la capacidad de carga del robot");
				return;
			}
			
		}


		int id = Int64::Parse(DateTime::Now.ToString("yyMMddHHmmss"));
		loanOrder->LoanOrderID = id;
		loanOrder->Client = loanCart->Client;
		loanOrder->Loans = loanCart->Loans;
		loanOrder->DeliveryPoint = loanCart->DeliveryPoint;
		loanOrder->Status = "Solicitado";
		loanOrder->LoanDate = DateTime::Today;
		Controller::AddLoanOrder(loanOrder);

		if (chRobot->Checked) {
			ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(cmbRobots->SelectedItem);
			if (selectedItem != nullptr) {
				DeliveryRobot^ robot = Controller::SearchRobotByName(selectedItem->Name);
				if (robot == nullptr) {
					MessageBox::Show("Robot no encontrado.");
					return;
				}
				loanOrder->DeliveryRobotID = robot->RobotID;
				loanOrder->IsDelivery = true;
				Controller::UpdateLoanOrder(loanOrder); // Actualiza el estado del pedido de préstamo con el robot seleccionado
			}
			
		}

		if (chLibreria->Checked) {
			ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(cmbBibliotecas->SelectedItem);
			if (selectedItem != nullptr) {
				String^ libraryName = selectedItem->Name;
				Library^ library = Controller::SearchLibrary(libraryName);
				if (library == nullptr) {
					MessageBox::Show("Robot no encontrado.");
					return;
				}
				loanOrder->Library = library->Name; 
				loanOrder->IsDelivery = false;
				Controller::UpdateLoanOrder(loanOrder);
				
			}
		}

		

		MessageBox::Show("Se solicitado el préstamo correctamente");
		dgvPrestamos->Rows->Clear();
		txtTotalPesoLibros->Text = "0.00";
		Controller::ClearLoanCart(user);

		

	}
	private: System::Void cmbBibliotecas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cmbBibliotecas->SelectedItem != nullptr) {
			ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(cmbBibliotecas->SelectedItem);
			if (selectedItem != nullptr) {
				String^ libraryName = selectedItem->Name;
				Library^ library = Controller::SearchLibrary(libraryName);
				if (library != nullptr) {
					txtHorario->Text = library->OpeningHour + "-" + library->CloseHour;
				}
			}
		}

	}
	private: System::Void cmbRobots_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cmbRobots->SelectedItem != nullptr) {
			ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(cmbRobots->SelectedItem);
			if (selectedItem != nullptr) {
				int robotId = selectedItem->Value;
				DeliveryRobot^ robot = Controller::SearchRobot(robotId);
				if (robot != nullptr) {
					txtCapacidadPesoRobot->Text = robot->MaxCapacity.ToString("F2") + " kg";
				}
			}
		}

	}

	private: System::Void btnVaciarCarrito_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("¿Estás seguro de que deseas vaciar el carrito?", "Confirmar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			dgvPrestamos->Rows->Clear();
			txtTotalPesoLibros->Text = "0.00";
			User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
			Controller::ClearLoanCart(user);
			MessageBox::Show("Carrito vaciado exitosamente.");
		}
		else {
			MessageBox::Show("Operación cancelada.");
		}
	}
};
}