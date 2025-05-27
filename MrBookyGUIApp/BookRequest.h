#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BookRequest
	/// </summary>
	public ref class BookRequest : public System::Windows::Forms::Form
	{
	public:
		BookRequest(void)
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
		~BookRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rbtnApprove;

	private: System::Windows::Forms::RadioButton^ rbtnReturn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnRegister;

	private: System::Windows::Forms::Button^ btnApprove;
	private: System::Windows::Forms::Button^ btnDisapprove;
	private: System::Windows::Forms::Button^ btnReturn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookRequest::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbtnApprove = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnReturn = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnApprove = (gcnew System::Windows::Forms::Button());
			this->btnDisapprove = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(57, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Resultados";
			// 
			// rbtnApprove
			// 
			this->rbtnApprove->AutoSize = true;
			this->rbtnApprove->BackColor = System::Drawing::Color::Transparent;
			this->rbtnApprove->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnApprove->Location = System::Drawing::Point(571, 37);
			this->rbtnApprove->Name = L"rbtnApprove";
			this->rbtnApprove->Size = System::Drawing::Size(145, 29);
			this->rbtnApprove->TabIndex = 1;
			this->rbtnApprove->Text = L"Por aprobar";
			this->rbtnApprove->UseVisualStyleBackColor = false;
			this->rbtnApprove->CheckedChanged += gcnew System::EventHandler(this, &BookRequest::rbtnApprove_CheckedChanged);
			// 
			// rbtnReturn
			// 
			this->rbtnReturn->AutoSize = true;
			this->rbtnReturn->BackColor = System::Drawing::Color::Transparent;
			this->rbtnReturn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnReturn->Location = System::Drawing::Point(756, 37);
			this->rbtnReturn->Name = L"rbtnReturn";
			this->rbtnReturn->Size = System::Drawing::Size(148, 29);
			this->rbtnReturn->TabIndex = 2;
			this->rbtnReturn->Text = L"Por devolver";
			this->rbtnReturn->UseVisualStyleBackColor = false;
			this->rbtnReturn->CheckedChanged += gcnew System::EventHandler(this, &BookRequest::rbtnReturn_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(31, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(873, 253);
			this->dataGridView1->TabIndex = 3;
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnRegister->Location = System::Drawing::Point(97, 372);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(223, 35);
			this->btnRegister->TabIndex = 4;
			this->btnRegister->Text = L"Registrar";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Visible = false;
			// 
			// btnApprove
			// 
			this->btnApprove->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnApprove->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnApprove->Location = System::Drawing::Point(363, 372);
			this->btnApprove->Name = L"btnApprove";
			this->btnApprove->Size = System::Drawing::Size(223, 35);
			this->btnApprove->TabIndex = 5;
			this->btnApprove->Text = L"Aprobar";
			this->btnApprove->UseVisualStyleBackColor = true;
			this->btnApprove->Visible = false;
			// 
			// btnDisapprove
			// 
			this->btnDisapprove->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnDisapprove->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnDisapprove->Location = System::Drawing::Point(634, 372);
			this->btnDisapprove->Name = L"btnDisapprove";
			this->btnDisapprove->Size = System::Drawing::Size(223, 35);
			this->btnDisapprove->TabIndex = 6;
			this->btnDisapprove->Text = L"Desaprobar";
			this->btnDisapprove->UseVisualStyleBackColor = true;
			this->btnDisapprove->Visible = false;
			// 
			// btnReturn
			// 
			this->btnReturn->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->btnReturn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnReturn->Location = System::Drawing::Point(363, 373);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(223, 35);
			this->btnReturn->TabIndex = 7;
			this->btnReturn->Text = L"Devuelto";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Visible = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &BookRequest::button2_Click);
			// 
			// BookRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnDisapprove);
			this->Controls->Add(this->btnApprove);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->rbtnReturn);
			this->Controls->Add(this->rbtnApprove);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"BookRequest";
			this->Text = L"BookRequest";
			this->Load += gcnew System::EventHandler(this, &BookRequest::BookRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BookRequest_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rbtnApprove_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnApprove->Checked) {
		btnRegister->Visible = true;
		btnApprove->Visible = true;
		btnDisapprove->Visible = true;
		btnReturn->Visible = false;
	}
}
private: System::Void rbtnReturn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnReturn->Checked) {
		btnRegister->Visible = false;
		btnApprove->Visible = false;
		btnDisapprove->Visible = false;
		btnReturn->Visible = true;
	}
}
};
}
