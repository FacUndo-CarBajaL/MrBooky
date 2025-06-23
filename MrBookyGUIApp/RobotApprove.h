#pragma once
#include "MapSelector.h"
namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MrBookyModel;
	using namespace MrBookyController;
	using namespace MrBookyPersistance;


	/// <summary>
	/// Resumen de RobotApprove
	/// </summary>
	public ref class RobotApprove : public System::Windows::Forms::Form
	{
	public:
		RobotApprove(void)
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
		~RobotApprove()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblLatitud;
	private: System::Windows::Forms::Label^ lblLongitud;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RobotApprove::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblLatitud = (gcnew System::Windows::Forms::Label());
			this->lblLongitud = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(511, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selección de Robots Disponible para entrega";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(404, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Seleccionar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RobotApprove::button1_Click);
			// 
			// lblLatitud
			// 
			this->lblLatitud->AutoSize = true;
			this->lblLatitud->BackColor = System::Drawing::Color::Transparent;
			this->lblLatitud->Location = System::Drawing::Point(170, 108);
			this->lblLatitud->Name = L"lblLatitud";
			this->lblLatitud->Size = System::Drawing::Size(67, 25);
			this->lblLatitud->TabIndex = 3;
			this->lblLatitud->Text = L"label2";
			// 
			// lblLongitud
			// 
			this->lblLongitud->AutoSize = true;
			this->lblLongitud->BackColor = System::Drawing::Color::Transparent;
			this->lblLongitud->Location = System::Drawing::Point(170, 151);
			this->lblLongitud->Name = L"lblLongitud";
			this->lblLongitud->Size = System::Drawing::Size(67, 25);
			this->lblLongitud->TabIndex = 4;
			this->lblLongitud->Text = L"label2";
			// 
			// RobotApprove
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->lblLongitud);
			this->Controls->Add(this->lblLatitud);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"RobotApprove";
			this->Text = L"RobotApprove";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MapSelector^ selector = gcnew MapSelector();
	selector->ShowDialog();

	Coordenada^ destino = selector->CoordenadaSeleccionada;
	if (destino != nullptr) {
		double lat = selector->CoordenadaSeleccionada->Latitude;
		double lng = selector->CoordenadaSeleccionada->Longitude;

		// Mostrar o guardar resultado
		MessageBox::Show("Coordenadas seleccionadas:\nLatitud: " + lat + "\nLongitud: " + lng);
		// Puedes guardar en variables, etiquetas, campos de texto, etc.
		lblLatitud->Text = lat.ToString();
		lblLongitud->Text = lng.ToString();
	}
}
};
}
