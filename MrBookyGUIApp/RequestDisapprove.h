#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyController;
	using namespace MrBookyModel;
	using namespace MrBookyPersistance;

	/// <summary>
	/// Resumen de RequestDisapprove
	/// </summary>
	public ref class RequestDisapprove : public System::Windows::Forms::Form
	{
	public:
		RequestDisapprove(void)
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
		~RequestDisapprove()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ btnEnviar;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(50, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(611, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motivo por el cual se desaprueba la solicitud:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(55, 118);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1030, 262);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// btnEnviar
			// 
			this->btnEnviar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnEnviar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnviar->Location = System::Drawing::Point(440, 416);
			this->btnEnviar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnEnviar->Name = L"btnEnviar";
			this->btnEnviar->Size = System::Drawing::Size(287, 45);
			this->btnEnviar->TabIndex = 2;
			this->btnEnviar->Text = L"Enviar y desaprobar";
			this->btnEnviar->UseVisualStyleBackColor = false;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &RequestDisapprove::btnEnviar_Click);
			// 
			// RequestDisapprove
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1130, 516);
			this->Controls->Add(this->btnEnviar);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"RequestDisapprove";
			this->Text = L"RequestDisapprove";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reason = richTextBox1->Text;
		if (String::IsNullOrWhiteSpace(reason)) {
			MessageBox::Show("Por favor, ingrese una razón válida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		LoanOrder^ order = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin"); // Obtener la orden de préstamo seleccionada
		order->Status = "Desaprobado"; // Cambiar el estado a desaprobado
		order->DisapprovalReason = reason; // Guardar la razón de desaprobación
		Controller::UpdateLoanOrder(order); // Actualizar la orden de préstamo en el sistema
		MessageBox::Show("Solicitud desaprobada con éxito.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close(); // Cerrar el formulario después de enviar
	}
	};
}
