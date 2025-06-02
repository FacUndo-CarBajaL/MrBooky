#pragma once

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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarritoPrestamoForm::typeid));
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(27, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(352, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Carrito de Prestamo";
			// 
			// lblRobot
			// 
			this->lblRobot->AutoSize = true;
			this->lblRobot->BackColor = System::Drawing::Color::Transparent;
			this->lblRobot->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRobot->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblRobot->Location = System::Drawing::Point(541, 61);
			this->lblRobot->Name = L"lblRobot";
			this->lblRobot->Size = System::Drawing::Size(120, 34);
			this->lblRobot->TabIndex = 1;
			this->lblRobot->Text = L"Robot :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(313, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total Peso de Libros (kg):";
			// 
			// lblCapacidadTotalRobot
			// 
			this->lblCapacidadTotalRobot->AutoSize = true;
			this->lblCapacidadTotalRobot->BackColor = System::Drawing::Color::Transparent;
			this->lblCapacidadTotalRobot->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCapacidadTotalRobot->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblCapacidadTotalRobot->Location = System::Drawing::Point(541, 108);
			this->lblCapacidadTotalRobot->Name = L"lblCapacidadTotalRobot";
			this->lblCapacidadTotalRobot->Size = System::Drawing::Size(205, 35);
			this->lblCapacidadTotalRobot->TabIndex = 3;
			this->lblCapacidadTotalRobot->Text = L"Capacidad Total:";
			// 
			// btnVaciarCarrito
			// 
			this->btnVaciarCarrito->Location = System::Drawing::Point(547, 163);
			this->btnVaciarCarrito->Name = L"btnVaciarCarrito";
			this->btnVaciarCarrito->Size = System::Drawing::Size(205, 39);
			this->btnVaciarCarrito->TabIndex = 4;
			this->btnVaciarCarrito->Text = L"Vaciar Carrito";
			this->btnVaciarCarrito->UseVisualStyleBackColor = true;
			// 
			// btnConfirmarPrestamos
			// 
			this->btnConfirmarPrestamos->Location = System::Drawing::Point(197, 163);
			this->btnConfirmarPrestamos->Name = L"btnConfirmarPrestamos";
			this->btnConfirmarPrestamos->Size = System::Drawing::Size(205, 39);
			this->btnConfirmarPrestamos->TabIndex = 5;
			this->btnConfirmarPrestamos->Text = L"Confirmar Préstamos";
			this->btnConfirmarPrestamos->UseVisualStyleBackColor = true;
			this->btnConfirmarPrestamos->Click += gcnew System::EventHandler(this, &CarritoPrestamoForm::btnConfirmarPrestamos_Click);
			// 
			// txtTotalPesoLibros
			// 
			this->txtTotalPesoLibros->Location = System::Drawing::Point(331, 112);
			this->txtTotalPesoLibros->Name = L"txtTotalPesoLibros";
			this->txtTotalPesoLibros->Size = System::Drawing::Size(118, 34);
			this->txtTotalPesoLibros->TabIndex = 6;
			this->txtTotalPesoLibros->Text = L"";
			// 
			// txtCapacidadPesoRobot
			// 
			this->txtCapacidadPesoRobot->Location = System::Drawing::Point(762, 108);
			this->txtCapacidadPesoRobot->Name = L"txtCapacidadPesoRobot";
			this->txtCapacidadPesoRobot->Size = System::Drawing::Size(132, 35);
			this->txtCapacidadPesoRobot->TabIndex = 7;
			this->txtCapacidadPesoRobot->Text = L"";
			// 
			// cmbRobots
			// 
			this->cmbRobots->FormattingEnabled = true;
			this->cmbRobots->Location = System::Drawing::Point(682, 71);
			this->cmbRobots->Name = L"cmbRobots";
			this->cmbRobots->Size = System::Drawing::Size(284, 24);
			this->cmbRobots->TabIndex = 8;
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
			this->dgvPrestamos->Location = System::Drawing::Point(39, 252);
			this->dgvPrestamos->Name = L"dgvPrestamos";
			this->dgvPrestamos->RowHeadersWidth = 51;
			this->dgvPrestamos->RowTemplate->Height = 110;
			this->dgvPrestamos->Size = System::Drawing::Size(1037, 549);
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
			this->ColumnaPeso->HeaderText = L"Peso (kg)";
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
			this->chLibreria->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chLibreria->Location = System::Drawing::Point(547, 22);
			this->chLibreria->Name = L"chLibreria";
			this->chLibreria->Size = System::Drawing::Size(139, 20);
			this->chLibreria->TabIndex = 10;
			this->chLibreria->Text = L"Recojo en Libreria";
			this->chLibreria->UseVisualStyleBackColor = false;
			this->chLibreria->CheckedChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::chLibreria_CheckedChanged);
			// 
			// chRobot
			// 
			this->chRobot->AutoSize = true;
			this->chRobot->BackColor = System::Drawing::Color::Transparent;
			this->chRobot->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->chRobot->Location = System::Drawing::Point(702, 22);
			this->chRobot->Name = L"chRobot";
			this->chRobot->Size = System::Drawing::Size(142, 20);
			this->chRobot->TabIndex = 11;
			this->chRobot->Text = L"Enviado por Robot";
			this->chRobot->UseVisualStyleBackColor = false;
			this->chRobot->CheckedChanged += gcnew System::EventHandler(this, &CarritoPrestamoForm::chRobot_CheckedChanged);
			// 
			// lblBiblioteca
			// 
			this->lblBiblioteca->AutoSize = true;
			this->lblBiblioteca->BackColor = System::Drawing::Color::Transparent;
			this->lblBiblioteca->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBiblioteca->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblBiblioteca->Location = System::Drawing::Point(541, 61);
			this->lblBiblioteca->Name = L"lblBiblioteca";
			this->lblBiblioteca->Size = System::Drawing::Size(163, 34);
			this->lblBiblioteca->TabIndex = 12;
			this->lblBiblioteca->Text = L"Biblioteca";
			// 
			// cmbBibliotecas
			// 
			this->cmbBibliotecas->FormattingEnabled = true;
			this->cmbBibliotecas->Location = System::Drawing::Point(724, 71);
			this->cmbBibliotecas->Name = L"cmbBibliotecas";
			this->cmbBibliotecas->Size = System::Drawing::Size(284, 24);
			this->cmbBibliotecas->TabIndex = 13;
			// 
			// lblHorarioBiblioteca
			// 
			this->lblHorarioBiblioteca->AutoSize = true;
			this->lblHorarioBiblioteca->BackColor = System::Drawing::Color::Transparent;
			this->lblHorarioBiblioteca->Font = (gcnew System::Drawing::Font(L"Artifakt Element", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHorarioBiblioteca->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lblHorarioBiblioteca->Location = System::Drawing::Point(541, 108);
			this->lblHorarioBiblioteca->Name = L"lblHorarioBiblioteca";
			this->lblHorarioBiblioteca->Size = System::Drawing::Size(229, 35);
			this->lblHorarioBiblioteca->TabIndex = 14;
			this->lblHorarioBiblioteca->Text = L"Horario Biblioteca";
			// 
			// txtHorario
			// 
			this->txtHorario->Location = System::Drawing::Point(781, 108);
			this->txtHorario->Name = L"txtHorario";
			this->txtHorario->Size = System::Drawing::Size(245, 38);
			this->txtHorario->TabIndex = 15;
			this->txtHorario->Text = L"";
			// 
			// CarritoPrestamoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1107, 813);
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
			this->MaximizeBox = false;
			this->Name = L"CarritoPrestamoForm";
			this->Text = L"CarritoPrestamoForm";
			this->Load += gcnew System::EventHandler(this, &CarritoPrestamoForm::CarritoPrestamoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPrestamos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void SimularLoanOrder() {
			LoanCart^ loanCart_1 = gcnew LoanCart();

			////////////////////////////////////////////////////////////
			Loan^ loan1 = gcnew Loan();
			Book^ book1 = gcnew Book();
			book1->Title = "Calculo Integral";
			book1->LoanTime = 12;
			book1->Weight = 0.98;
			book1->Author = "Cecilia Gaita";
			String^ path1 = "C:\\Users\\HP\\Downloads\\POO\\MrBooky\\Imagenes\\Portadas Libros\\CalculoIntegral.png";
			if (!System::IO::File::Exists(path1)) {
				MessageBox::Show("La imagen no se encontró en la ruta especificada.");
				return;
			}
			FileStream^ fs1 = gcnew FileStream(path1, FileMode::Open, FileAccess::Read);
			Bitmap^ original1 = gcnew Bitmap(fs1);
			Bitmap^ bmp1 = gcnew Bitmap(original1); // <- copia segura
			fs1->Close();
			MemoryStream^ ms1 = gcnew MemoryStream();
			bmp1->Save(ms1, ImageFormat::Jpeg); // ya no lanza error
			book1->Photo = ms1->ToArray();
			loan1->LoanID = 123;
			loan1->Status = "Disponible";
			loan1->Book = book1;
			loan1->Quantity = 4;
			loanCart_1->Loans->Add(loan1);
			////////////////////////////////////////////////////////////
			Loan^ loan2 = gcnew Loan();
			Book^ book2 = gcnew Book();
			book2->Title = "Fisica 3";
			book2->LoanTime = 20;
			book2->Weight = 0.5;
			book2->Author = "Hugo Medina";
			String^ path2 = "C:\\Users\\HP\\Downloads\\POO\\MrBooky\\Imagenes\\Portadas Libros\\Fisica3.jpg";
			if (!System::IO::File::Exists(path2)) {
				MessageBox::Show("La imagen no se encontró en la ruta especificada.");
				return;
			}
			FileStream^ fs2 = gcnew FileStream(path2, FileMode::Open, FileAccess::Read);
			Bitmap^ original2 = gcnew Bitmap(fs2);
			Bitmap^ bmp2 = gcnew Bitmap(original2); // <- copia segura
			fs2->Close();
			MemoryStream^ ms2 = gcnew MemoryStream();
			bmp2->Save(ms2, ImageFormat::Jpeg); // ya no lanza error
			book2->Photo = ms2->ToArray();
			loan2->LoanID = 1234;
			loan2->Status = "Disponible";
			loan2->Book = book2;
			loan2->Quantity = 5;
			loanCart_1->Loans->Add(loan2);
			////////////////////////////////////////////////////////////
			Loan^ loan3 = gcnew Loan();
			Book^ book3 = gcnew Book();
			book3->Title = "Dinamica";
			book3->LoanTime = 9999;
			book3->Weight = 1.2;
			book3->Author = "Jorge Rodriguez";
			String^ path3 = "C:\\Users\\HP\\Downloads\\POO\\MrBooky\\Imagenes\\Portadas Libros\\Dinamica.jpg";
			if (!System::IO::File::Exists(path3)) {
				MessageBox::Show("La imagen no se encontró en la ruta especificada.");
				return;
			}
			FileStream^ fs3 = gcnew FileStream(path3, FileMode::Open, FileAccess::Read);
			Bitmap^ original3 = gcnew Bitmap(fs3);
			Bitmap^ bmp3 = gcnew Bitmap(original3); // <- copia segura
			fs3->Close();
			MemoryStream^ ms3 = gcnew MemoryStream();
			bmp3->Save(ms3, ImageFormat::Jpeg); // ya no lanza error
			book3->Photo = ms3->ToArray();
			loan3->LoanID = 12345;
			loan3->Status = "Disponible";
			loan3->Book = book3;
			loan3->Quantity = 6;
			loanCart_1->Loans->Add(loan3);
			////////////////////////////////////////////////////////////


			Client^ user = (Client^)Persistance::LoadBinaryFile("TempUser.bin");
			loanCart_1->Client = user;
			Controller::AddLoanCart(loanCart_1);
		};

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
							""+ loans[i]->Quantity,
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

		SimularLoanOrder();
		ShowLoans();
		UpdateBooksWeight();
}

private: System::Void dgvPrestamos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->ColumnIndex == 7 && e->RowIndex >= 0) {  // Asegura que es una celda válida
		if (MessageBox::Show("¿Eliminar este préstamo?", "Confirmar", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			dgvPrestamos->Rows->RemoveAt(e->RowIndex);
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
		
		loans[fila]->Quantity = cantidad;

		UpdateBooksWeight();
	}


}
private: System::Void btnConfirmarPrestamos_Click(System::Object^ sender, System::EventArgs^ e) {
	User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
	LoanCart^ loanCart = Controller::SearchLoanCartByUser(user);
	LoanOrder^ loanOrder = gcnew LoanOrder();
	loanOrder->Client = loanCart->Client;
	loanOrder->Loans = loanCart->Loans;
	loanOrder->IsDelivery = loanCart->IsDelivery;
	loanOrder->DeliveryRobotID = loanCart->DeliveryRobotID;
	loanOrder->DeliveryPoint = loanCart->DeliveryPoint;
	loanOrder->Library = loanCart->Library;

}
};
}
