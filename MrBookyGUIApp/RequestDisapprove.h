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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RequestDisapprove::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnEnviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(44, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(688, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese una raz�n por la cual se desaprob� la solicitud:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(49, 94);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(916, 210);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// btnEnviar
			// 
			this->btnEnviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnviar->Location = System::Drawing::Point(391, 333);
			this->btnEnviar->Name = L"btnEnviar";
			this->btnEnviar->Size = System::Drawing::Size(255, 36);
			this->btnEnviar->TabIndex = 2;
			this->btnEnviar->Text = L"Enviar y desaprobar";
			this->btnEnviar->UseVisualStyleBackColor = true;
			this->btnEnviar->Click += gcnew System::EventHandler(this, &RequestDisapprove::btnEnviar_Click);
			// 
			// RequestDisapprove
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1004, 413);
			this->Controls->Add(this->btnEnviar);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"RequestDisapprove";
			this->Text = L"RequestDisapprove";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reason = richTextBox1->Text;
		if (String::IsNullOrWhiteSpace(reason)) {
			MessageBox::Show("Por favor, ingrese una raz�n v�lida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		LoanOrder^ order = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin"); // Obtener la orden de pr�stamo seleccionada
		order->Status = "Desaprobado"; // Cambiar el estado a desaprobado
		order->DisapprovalReason = reason; // Guardar la raz�n de desaprobaci�n
		Controller::UpdateLoanOrder(order); // Actualizar la orden de pr�stamo en el sistema
		MessageBox::Show("Solicitud desaprobada con �xito.", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close(); // Cerrar el formulario despu�s de enviar
	}
	};
}
