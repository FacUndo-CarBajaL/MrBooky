#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyPersistance;
	using namespace MrBookyModel;

	/// <summary>
	/// Resumen de FoundBookForm
	/// </summary>
	public ref class FoundBookForm : public System::Windows::Forms::Form
	{
	public:
		FoundBookForm(void)
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
		~FoundBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanelVerResultados;
	protected:


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
			this->flowLayoutPanelVerResultados = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanelVerResultados
			// 
			this->flowLayoutPanelVerResultados->AutoScroll = true;
			this->flowLayoutPanelVerResultados->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanelVerResultados->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanelVerResultados->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanelVerResultados->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanelVerResultados->Name = L"flowLayoutPanelVerResultados";
			this->flowLayoutPanelVerResultados->Size = System::Drawing::Size(1182, 524);
			this->flowLayoutPanelVerResultados->TabIndex = 0;
			this->flowLayoutPanelVerResultados->WrapContents = false;
			this->flowLayoutPanelVerResultados->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FoundBookForm::flowLayoutPanelVerResultados_Paint);
			// 
			// FoundBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1182, 524);
			this->Controls->Add(this->flowLayoutPanelVerResultados);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FoundBookForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FoundBookForm";
			this->Load += gcnew System::EventHandler(this, &FoundBookForm::FoundBookForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FoundBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Book^>^ resultado = (List<Book^>^)Persistance::LoadBinaryFile("ram.bin");
		ShowResults(resultado);
	}

	public:
		void ShowResults(List<Book^>^ resultado) {
			flowLayoutPanelVerResultados->Controls->Clear();
			for each (Book^ libro in resultado) {
				Panel^ tarjeta = gcnew Panel();
				tarjeta->Width = 800;
				tarjeta->Height = 200;
				tarjeta->Margin = System::Windows::Forms::Padding(50);
				tarjeta->BorderStyle = BorderStyle::FixedSingle;

				/*PictureBox^ imagen = gcnew PictureBox();
				imagen->Image = libro->Imagen;
				imagen->SizeMode = PictureBoxSizeMode::StretchImage;
				imagen->Location = Drawing::Point(10, 10);
				imagen->Size = Drawing::Size(100, 100);
				*/
				Label^ lblTitulo = gcnew Label();
				lblTitulo->Text = libro->Title;
				lblTitulo->Font = gcnew System::Drawing::Font("Arial", 12, FontStyle::Bold);
				lblTitulo->Location = Drawing::Point(120, 10);
				lblTitulo->AutoSize = true;

				/*Label^ lblDescripcion = gcnew Label();
				lblDescripcion->Text = "Descripción: " + libro->Descripcion;
				lblDescripcion->Location = Drawing::Point(120, 35);
				lblDescripcion->AutoSize = true;
				*/

				Label^ lblAutor = gcnew Label();
				lblAutor->Text = "Autor: " + libro->Author;
				lblAutor->Location = Drawing::Point(120, 55);
				lblAutor->AutoSize = true;

				/*Label^ lblEstado = gcnew Label();
				lblEstado->Text = "Estado: " + libro->Estado;
				lblEstado->Location = Drawing::Point(120, 75);
				lblEstado->AutoSize = true;

				Button^ btnSolicitar = gcnew Button();
				btnSolicitar->Text = "Solicitar";
				btnSolicitar->Location = Drawing::Point(500, 45);
				btnSolicitar->Size = Drawing::Size(80, 30);
				btnSolicitar->Click += gcnew EventHandler(this,
					[libro](Object^ sender, EventArgs^ e)
					{
						MessageBox::Show("Solicitaste: " + libro->Titulo);
					});
				*/

				//tarjeta->Controls->Add(imagen);
				tarjeta->Controls->Add(lblTitulo);
				//tarjeta->Controls->Add(lblDescripcion);
				tarjeta->Controls->Add(lblAutor);
				//tarjeta->Controls->Add(lblEstado);
				//tarjeta->Controls->Add(btnSolicitar);

				flowLayoutPanelVerResultados->Controls->Add(tarjeta);
			}

		}





















	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanelVerResultados_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
