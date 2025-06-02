#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MrBookyModel;
	using namespace MrBookyController;

	/// <summary>
	/// Resumen de AddDeliveryRobot
	/// </summary>
	public ref class AddDeliveryRobot : public System::Windows::Forms::Form
	{
	public:
		AddDeliveryRobot(void)
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
		~AddDeliveryRobot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::TextBox^ txtCapacity;
	private: System::Windows::Forms::Button^ btnAdd;








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
			this->ID = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacity = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Añadir Robot";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Location = System::Drawing::Point(82, 102);
			this->ID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(32, 25);
			this->ID->TabIndex = 1;
			this->ID->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 158);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 227);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Estado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(82, 286);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(228, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Maxima Capacidad (g)";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(366, 92);
			this->txtID->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(148, 31);
			this->txtID->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(366, 148);
			this->txtName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(148, 31);
			this->txtName->TabIndex = 7;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(366, 217);
			this->txtStatus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(148, 31);
			this->txtStatus->TabIndex = 8;
			// 
			// txtCapacity
			// 
			this->txtCapacity->Location = System::Drawing::Point(366, 277);
			this->txtCapacity->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCapacity->Name = L"txtCapacity";
			this->txtCapacity->Size = System::Drawing::Size(148, 31);
			this->txtCapacity->TabIndex = 9;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(87, 383);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(112, 36);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Añadir";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddDeliveryRobot::btnAdd_Click);
			// 
			// AddDeliveryRobot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(747, 540);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtCapacity);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AddDeliveryRobot";
			this->Text = L"AddDeliveryRobot";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(txtID->Text);
		String^ name = txtName->Text;
		String^ status = txtStatus->Text;
		int capacity = Int32::Parse(txtCapacity->Text);

		if (id <= 0 || name->Length == 0 || status->Length == 0 || capacity <= 0) {
			MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		DeliveryRobot^ robot = gcnew DeliveryRobot(id, name, status, capacity);
		if (Controller::AddRobot(robot) == 1) {
			MessageBox::Show("Robot registrado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else {
			MessageBox::Show("No se ha podido registrar el robot");
		}
	}
	};
}