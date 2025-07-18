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
	/// Resumen de MaintenanceBook
	/// </summary>
	public ref class MaintenanceBook : public System::Windows::Forms::Form
	{
	public:
		MaintenanceBook(void)
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
		~MaintenanceBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ txtTitulo;
	private: System::Windows::Forms::RichTextBox^ txtAutor;
	private: System::Windows::Forms::RichTextBox^ txtGenero;
	private: System::Windows::Forms::RichTextBox^ txtEditorial;
	private: System::Windows::Forms::RichTextBox^ txtCantidad;
	private: System::Windows::Forms::RichTextBox^ txtDescripcion;






	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnActualizarFoto;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::DataGridView^ dgvlibros;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaTitulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaAutor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaEditorial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaCantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnaDescripción;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RichTextBox^ txtID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ txtDisponibilidad;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RichTextBox^ txtPeso;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RichTextBox^ txtAño;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ txtTiempoPrestamo;















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
			this->txtTitulo = (gcnew System::Windows::Forms::RichTextBox());
			this->txtAutor = (gcnew System::Windows::Forms::RichTextBox());
			this->txtGenero = (gcnew System::Windows::Forms::RichTextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::RichTextBox());
			this->txtCantidad = (gcnew System::Windows::Forms::RichTextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnActualizarFoto = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->dgvlibros = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnaID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaTitulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaEditorial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnaDescripción = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::RichTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtDisponibilidad = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPeso = (gcnew System::Windows::Forms::RichTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtAño = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtTiempoPrestamo = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvlibros))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos del libro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(61, 120);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Titulo :";
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(124, 111);
			this->txtTitulo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(272, 29);
			this->txtTitulo->TabIndex = 2;
			this->txtTitulo->Text = L"";
			// 
			// txtAutor
			// 
			this->txtAutor->Location = System::Drawing::Point(124, 165);
			this->txtAutor->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtAutor->Name = L"txtAutor";
			this->txtAutor->Size = System::Drawing::Size(464, 28);
			this->txtAutor->TabIndex = 3;
			this->txtAutor->Text = L"";
			// 
			// txtGenero
			// 
			this->txtGenero->Location = System::Drawing::Point(124, 203);
			this->txtGenero->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(201, 27);
			this->txtGenero->TabIndex = 4;
			this->txtGenero->Text = L"";
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(124, 240);
			this->txtEditorial->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(201, 29);
			this->txtEditorial->TabIndex = 5;
			this->txtEditorial->Text = L"";
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(124, 279);
			this->txtCantidad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(126, 29);
			this->txtCantidad->TabIndex = 6;
			this->txtCantidad->Text = L"";
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(124, 316);
			this->txtDescripcion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(407, 96);
			this->txtDescripcion->TabIndex = 7;
			this->txtDescripcion->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label3->Location = System::Drawing::Point(60, 165);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Autor :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label4->Location = System::Drawing::Point(45, 210);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Genero :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label5->Location = System::Drawing::Point(45, 249);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Editorial :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label6->Location = System::Drawing::Point(35, 288);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Cantidad :";
			this->label6->Click += gcnew System::EventHandler(this, &MaintenanceBook::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label7->Location = System::Drawing::Point(16, 326);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Descripción :";
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(611, 57);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(187, 206);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 13;
			this->pbPhoto->TabStop = false;
			// 
			// btnActualizarFoto
			// 
			this->btnActualizarFoto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnActualizarFoto->Location = System::Drawing::Point(611, 279);
			this->btnActualizarFoto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnActualizarFoto->Name = L"btnActualizarFoto";
			this->btnActualizarFoto->Size = System::Drawing::Size(187, 38);
			this->btnActualizarFoto->TabIndex = 14;
			this->btnActualizarFoto->Text = L"Actualizar Foto";
			this->btnActualizarFoto->UseVisualStyleBackColor = false;
			this->btnActualizarFoto->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnActualizarFoto_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnRegistrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrar->Location = System::Drawing::Point(411, 433);
			this->btnRegistrar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(154, 38);
			this->btnRegistrar->TabIndex = 15;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnRegistrar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModificar->Location = System::Drawing::Point(573, 433);
			this->btnModificar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(154, 38);
			this->btnModificar->TabIndex = 16;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = false;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliminar->Location = System::Drawing::Point(735, 433);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(154, 38);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MaintenanceBook::btnEliminar_Click);
			// 
			// dgvlibros
			// 
			this->dgvlibros->AllowUserToAddRows = false;
			this->dgvlibros->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvlibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvlibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumnaID,
					this->ColumnaTitulo, this->ColumnaAutor, this->ColumnaGenero, this->ColumnaEditorial, this->ColumnaCantidad, this->ColumnaDescripción
			});
			this->dgvlibros->Location = System::Drawing::Point(13, 481);
			this->dgvlibros->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgvlibros->Name = L"dgvlibros";
			this->dgvlibros->RowHeadersWidth = 51;
			this->dgvlibros->Size = System::Drawing::Size(876, 195);
			this->dgvlibros->TabIndex = 18;
			this->dgvlibros->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceBook::dgvlibros_CellClick);
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
			// ColumnaAutor
			// 
			this->ColumnaAutor->HeaderText = L"Autor";
			this->ColumnaAutor->MinimumWidth = 6;
			this->ColumnaAutor->Name = L"ColumnaAutor";
			// 
			// ColumnaGenero
			// 
			this->ColumnaGenero->HeaderText = L"Genero";
			this->ColumnaGenero->MinimumWidth = 6;
			this->ColumnaGenero->Name = L"ColumnaGenero";
			// 
			// ColumnaEditorial
			// 
			this->ColumnaEditorial->HeaderText = L"Editorial";
			this->ColumnaEditorial->MinimumWidth = 6;
			this->ColumnaEditorial->Name = L"ColumnaEditorial";
			// 
			// ColumnaCantidad
			// 
			this->ColumnaCantidad->HeaderText = L"Cantidad";
			this->ColumnaCantidad->MinimumWidth = 6;
			this->ColumnaCantidad->Name = L"ColumnaCantidad";
			// 
			// ColumnaDescripción
			// 
			this->ColumnaDescripción->HeaderText = L"Descripción";
			this->ColumnaDescripción->MinimumWidth = 6;
			this->ColumnaDescripción->Name = L"ColumnaDescripción";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label8->Location = System::Drawing::Point(82, 66);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ID :";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(124, 66);
			this->txtID->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(72, 28);
			this->txtID->TabIndex = 19;
			this->txtID->Text = L"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label9->Location = System::Drawing::Point(348, 206);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(115, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Disponibilidad :";
			// 
			// txtDisponibilidad
			// 
			this->txtDisponibilidad->Location = System::Drawing::Point(471, 203);
			this->txtDisponibilidad->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDisponibilidad->Name = L"txtDisponibilidad";
			this->txtDisponibilidad->Size = System::Drawing::Size(117, 27);
			this->txtDisponibilidad->TabIndex = 21;
			this->txtDisponibilidad->Text = L"";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label10->Location = System::Drawing::Point(348, 243);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Peso : ";
			// 
			// txtPeso
			// 
			this->txtPeso->Location = System::Drawing::Point(471, 240);
			this->txtPeso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPeso->Name = L"txtPeso";
			this->txtPeso->Size = System::Drawing::Size(117, 29);
			this->txtPeso->TabIndex = 23;
			this->txtPeso->Text = L"";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label11->Location = System::Drawing::Point(227, 69);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Año de realización :";
			// 
			// txtAño
			// 
			this->txtAño->Location = System::Drawing::Point(382, 63);
			this->txtAño->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(201, 31);
			this->txtAño->TabIndex = 25;
			this->txtAño->Text = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label12->Location = System::Drawing::Point(16, 442);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 20);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Tiempo de Prestamo :";
			// 
			// txtTiempoPrestamo
			// 
			this->txtTiempoPrestamo->Location = System::Drawing::Point(187, 439);
			this->txtTiempoPrestamo->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTiempoPrestamo->Name = L"txtTiempoPrestamo";
			this->txtTiempoPrestamo->Size = System::Drawing::Size(201, 31);
			this->txtTiempoPrestamo->TabIndex = 27;
			this->txtTiempoPrestamo->Text = L"";
			// 
			// MaintenanceBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(932, 696);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtTiempoPrestamo);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtAño);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtPeso);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtDisponibilidad);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->dgvlibros);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->btnActualizarFoto);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtDescripcion);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->txtAutor);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MaintenanceBook";
			this->Text = L"MaintenanceBook";
			this->Load += gcnew System::EventHandler(this, &MaintenanceBook::MaintenanceBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvlibros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowBooks() {
			List<Book^>^ bookList = Controller::GetBooks();
			if (bookList != nullptr) {
				dgvlibros->Rows->Clear();
				for (int i = 0; i < bookList->Count; i++) {
					dgvlibros->Rows->Add(gcnew array<String^> { "" + bookList[i]->BookID,
						bookList[i]->Title,
						bookList[i]->Author,
						bookList[i]->Genre,
						bookList[i]->Publisher,
					    ""+ bookList[i]->Quantity,
					    bookList[i]->Description});
				}
			}
			
		}

		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Image = nullptr;
					dynamic_cast<PictureBox^>(control)->Invalidate();
				}
			}
		}


	private: System::Void MaintenanceBook_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowBooks();

	}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		if (txtID->Text->Length == 0 || txtTitulo->Text->Length == 0 || txtAutor->Text->Length == 0 || txtGenero->Text->Length == 0
			|| txtEditorial->Text->Length == 0 || txtDescripcion->Text->Length == 0 || txtCantidad->Text->Length == 0
			|| txtAño->Text->Length == 0 || txtTiempoPrestamo->Text->Length == 0 || txtDisponibilidad->Text->Length == 0
			|| txtPeso->Text->Length == 0) {
			MessageBox::Show("El campo Año de realización es obligatorio.");
			return;
		}

		int entero;
		double decimal;
		if (!Int32::TryParse(txtCantidad->Text, entero) && !Int32::TryParse(txtID->Text, entero) &&
			!Int32::TryParse(txtAño->Text, entero) && !Int32::TryParse(txtTiempoPrestamo->Text, entero) &&
			!Double::TryParse(txtPeso->Text, decimal)) {
			MessageBox::Show("Los campos Cantidad, ID, Año de realización, Tiempo de préstamo y Peso deben ser numéricos, enteros o decimales según correspondan.");
			return;
		}


		Book^ book = gcnew Book();

		book->BookID = Int32::Parse(txtID->Text);
		book->Title = txtTitulo->Text;
		book->Author = txtAutor->Text;
		book->Genre = txtGenero->Text;
		book->Publisher = txtEditorial->Text;
		book->Description = txtDescripcion->Text;
		book->Quantity = Int32::Parse(txtCantidad->Text);
		book->ReleaseYear = Int32::Parse(txtAño->Text);
		book->LoanTime = Int32::Parse(txtTiempoPrestamo->Text);
		book->Availability = txtDisponibilidad->Text;
		book->Weight = Double::Parse(txtPeso->Text);
		
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			book->Photo = ms->ToArray();
		}

		Controller::AddBook(book);
		ShowBooks();
		MessageBox::Show("Se ha agregado el libro " + book->BookID + " - " + book->Title);
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookId = txtID->Text->Trim();
	if (bookId->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro");
		return;
	}
	try {

		if (txtID->Text->Length == 0 || txtTitulo->Text->Length == 0 || txtAutor->Text->Length == 0 || txtGenero->Text->Length == 0
			|| txtEditorial->Text->Length == 0 || txtDescripcion->Text->Length == 0 || txtCantidad->Text->Length == 0
			|| txtAño->Text->Length == 0 || txtTiempoPrestamo->Text->Length == 0 || txtDisponibilidad->Text->Length == 0
			|| txtPeso->Text->Length == 0) {
			MessageBox::Show("El campo Año de realización es obligatorio.");
			return;
		}

		int entero;
		double decimal;
		if (!Int32::TryParse(txtCantidad->Text, entero ) && !Int32::TryParse(txtID->Text, entero) &&
			!Int32::TryParse(txtAño->Text, entero) && !Int32::TryParse(txtTiempoPrestamo->Text, entero) &&
			!Double::TryParse(txtPeso->Text, decimal)) {
			MessageBox::Show("Los campos Cantidad, ID, Año de realización, Tiempo de préstamo y Peso deben ser numéricos, enteros o decimales según correspondan.");
			return;
		}


		Book^ book = gcnew Book();
		
		book->BookID = Int32::Parse(txtID->Text);
		book->Title = txtTitulo->Text;
		book->Author = txtAutor->Text;
		book->Genre = txtGenero->Text;
		book->Publisher = txtEditorial->Text;
		book->Description = txtDescripcion->Text;
		book->Quantity = Int32::Parse(txtCantidad->Text);
		book->ReleaseYear = Int32::Parse(txtAño->Text);
		book->LoanTime = Int32::Parse(txtTiempoPrestamo->Text);
		book->Availability = txtDisponibilidad->Text;
		book->Weight = Double::Parse(txtPeso->Text);


		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			book->Photo = ms->ToArray();
		}
		Controller::UpdateBook(book);
		ShowBooks();
		MessageBox::Show("Se ha modificado el libro " + book->BookID + " - " + book->Title);
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ bookName = txtTitulo->Text->Trim();
	if (bookName->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el libro?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteBook(bookName);
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
			ShowBooks();
			ClearControls();
			MessageBox::Show("Se ha eliminado el libro  " + bookName + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el libro por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void btnActualizarFoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhoto->Image = gcnew Bitmap(ofd->FileName);
	}
}
private: System::Void dgvlibros_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0 || e->ColumnIndex < 0) return; // Evita errores si se hace clic en el encabezado
	String^ bookName = dgvlibros->Rows[e->RowIndex]->Cells["ColumnaTitulo"]->Value->ToString();
	Book^ book = Controller::SearchBookByName(bookName);
	txtTitulo->Text = book->Title;
	txtAutor->Text = book->Author;
	txtGenero->Text = book->Genre;
	txtEditorial->Text = book->Publisher;
	txtID->Text = "" + book->BookID;
	txtCantidad->Text = "" + book->Quantity;
	txtDescripcion->Text = book->Description;

	if (book->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(book->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}

}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
