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
	/// Resumen de DispatchProblemForm
	/// </summary>
	public ref class DispatchProblemForm : public System::Windows::Forms::Form
	{
	public:
		DispatchProblemForm(void)
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
		~DispatchProblemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnReprogramar;



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
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnReprogramar = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Detalle el problema :";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(29, 49);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(640, 308);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelar->Location = System::Drawing::Point(42, 378);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(254, 39);
			this->btnCancelar->TabIndex = 2;
			this->btnCancelar->Text = L"Cancelar Entrega";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &DispatchProblemForm::btnCancelar_Click);
			// 
			// btnReprogramar
			// 
			this->btnReprogramar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnReprogramar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReprogramar->Location = System::Drawing::Point(398, 378);
			this->btnReprogramar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnReprogramar->Name = L"btnReprogramar";
			this->btnReprogramar->Size = System::Drawing::Size(254, 39);
			this->btnReprogramar->TabIndex = 3;
			this->btnReprogramar->Text = L"Reprogramar Entrega";
			this->btnReprogramar->UseVisualStyleBackColor = false;
			this->btnReprogramar->Click += gcnew System::EventHandler(this, &DispatchProblemForm::btnReprogramar_Click);
			// 
			// DispatchProblemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(707, 435);
			this->Controls->Add(this->btnReprogramar);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"DispatchProblemForm";
			this->Text = L"DispatchProblemForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reason = richTextBox1->Text;
		if (String::IsNullOrWhiteSpace(reason)) {
			MessageBox::Show("Por favor, ingrese una razón válida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		LoanOrder^ order = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin"); // Obtener la orden de préstamo seleccionada
		order->Status = "Cancelado"; // Cambiar el estado a desaprobado
		order->DisapprovalReason = reason; // Guardar la razón de desaprobación
		Controller::UpdateLoanOrder(order); // Actualizar la orden de préstamo en el sistema
		MessageBox::Show("Solicitud cancelada con éxito.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close(); // Cerrar el formulario después de enviar
	}


private: System::Void btnReprogramar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ reason = richTextBox1->Text;
	if (String::IsNullOrWhiteSpace(reason)) {
		MessageBox::Show("Por favor, ingrese una razón válida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	LoanOrder^ order = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin"); // Obtener la orden de préstamo seleccionada
	order->Status = "Reprogramado"; // Cambiar el estado a desaprobado
	order->DisapprovalReason = reason; // Guardar la razón de desaprobación
	Controller::UpdateLoanOrder(order); // Actualizar la orden de préstamo en el sistema
	MessageBox::Show("Solicitud reprogramada con éxito.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Close(); // Cerrar el formulario después de enviar
}
};
}
