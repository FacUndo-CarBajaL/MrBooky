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
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MaintenanceRobot
	/// </summary>
	public ref class MaintenanceRobot : public System::Windows::Forms::Form
	{
	public:
		MaintenanceRobot(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MaintenanceRobot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnAddRobot;

	private: System::Windows::Forms::Button^ btnUpdateRobot;
	private: System::Windows::Forms::Button^ btnDeleteRobot;
	private: System::Windows::Forms::DataGridView^ dgvRobots;



	private: System::Windows::Forms::TextBox^ txtNameRobot;
	private: System::Windows::Forms::TextBox^ txtStatusRobot;


	private: System::Windows::Forms::TextBox^ txtIdRobot;
	private: System::Windows::Forms::TextBox^ txtCapacityRobot;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotCapacity;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MaintenanceRobot::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAddRobot = (gcnew System::Windows::Forms::Button());
			this->btnUpdateRobot = (gcnew System::Windows::Forms::Button());
			this->btnDeleteRobot = (gcnew System::Windows::Forms::Button());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->RobotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotCapacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtNameRobot = (gcnew System::Windows::Forms::TextBox());
			this->txtStatusRobot = (gcnew System::Windows::Forms::TextBox());
			this->txtIdRobot = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacityRobot = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(216, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos del robot:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(214, 51);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(214, 116);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Estado:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(216, 83);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ID";
			// 
			// btnAddRobot
			// 
			this->btnAddRobot->Location = System::Drawing::Point(149, 209);
			this->btnAddRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAddRobot->Name = L"btnAddRobot";
			this->btnAddRobot->Size = System::Drawing::Size(157, 25);
			this->btnAddRobot->TabIndex = 4;
			this->btnAddRobot->Text = L"Agregar Robot";
			this->btnAddRobot->UseVisualStyleBackColor = true;
			this->btnAddRobot->Click += gcnew System::EventHandler(this, &MaintenanceRobot::btnAddRobot_Click);
			// 
			// btnUpdateRobot
			// 
			this->btnUpdateRobot->Location = System::Drawing::Point(429, 209);
			this->btnUpdateRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnUpdateRobot->Name = L"btnUpdateRobot";
			this->btnUpdateRobot->Size = System::Drawing::Size(157, 25);
			this->btnUpdateRobot->TabIndex = 5;
			this->btnUpdateRobot->Text = L"Modificar robot";
			this->btnUpdateRobot->UseVisualStyleBackColor = true;
			this->btnUpdateRobot->Click += gcnew System::EventHandler(this, &MaintenanceRobot::btnUpdateRobot_Click);
			// 
			// btnDeleteRobot
			// 
			this->btnDeleteRobot->Location = System::Drawing::Point(701, 209);
			this->btnDeleteRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDeleteRobot->Name = L"btnDeleteRobot";
			this->btnDeleteRobot->Size = System::Drawing::Size(157, 25);
			this->btnDeleteRobot->TabIndex = 6;
			this->btnDeleteRobot->Text = L"Eliminar Robot";
			this->btnDeleteRobot->UseVisualStyleBackColor = true;
			this->btnDeleteRobot->Click += gcnew System::EventHandler(this, &MaintenanceRobot::btnDeleteRobot_Click);
			// 
			// dgvRobots
			// 
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->RobotId, this->RobotName,
					this->RobotStatus, this->RobotCapacity
			});
			this->dgvRobots->Location = System::Drawing::Point(50, 279);
			this->dgvRobots->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->RowHeadersWidth = 82;
			this->dgvRobots->RowTemplate->Height = 33;
			this->dgvRobots->Size = System::Drawing::Size(887, 182);
			this->dgvRobots->TabIndex = 7;
			this->dgvRobots->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenanceRobot::dgvRobots_CellContentClick);
			// 
			// RobotId
			// 
			this->RobotId->HeaderText = L"ID";
			this->RobotId->MinimumWidth = 10;
			this->RobotId->Name = L"RobotId";
			this->RobotId->Width = 200;
			// 
			// RobotName
			// 
			this->RobotName->HeaderText = L"Nombre";
			this->RobotName->MinimumWidth = 10;
			this->RobotName->Name = L"RobotName";
			this->RobotName->Width = 200;
			// 
			// RobotStatus
			// 
			this->RobotStatus->HeaderText = L"Estado";
			this->RobotStatus->MinimumWidth = 10;
			this->RobotStatus->Name = L"RobotStatus";
			this->RobotStatus->Width = 200;
			// 
			// RobotCapacity
			// 
			this->RobotCapacity->HeaderText = L"Capacidad (gr)";
			this->RobotCapacity->MinimumWidth = 10;
			this->RobotCapacity->Name = L"RobotCapacity";
			this->RobotCapacity->Width = 200;
			// 
			// txtNameRobot
			// 
			this->txtNameRobot->Location = System::Drawing::Point(387, 51);
			this->txtNameRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNameRobot->Name = L"txtNameRobot";
			this->txtNameRobot->Size = System::Drawing::Size(253, 22);
			this->txtNameRobot->TabIndex = 8;
			// 
			// txtStatusRobot
			// 
			this->txtStatusRobot->Location = System::Drawing::Point(387, 116);
			this->txtStatusRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtStatusRobot->Name = L"txtStatusRobot";
			this->txtStatusRobot->Size = System::Drawing::Size(253, 22);
			this->txtStatusRobot->TabIndex = 9;
			// 
			// txtIdRobot
			// 
			this->txtIdRobot->Location = System::Drawing::Point(387, 83);
			this->txtIdRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtIdRobot->Name = L"txtIdRobot";
			this->txtIdRobot->Size = System::Drawing::Size(253, 22);
			this->txtIdRobot->TabIndex = 10;
			// 
			// txtCapacityRobot
			// 
			this->txtCapacityRobot->Location = System::Drawing::Point(387, 150);
			this->txtCapacityRobot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCapacityRobot->Name = L"txtCapacityRobot";
			this->txtCapacityRobot->Size = System::Drawing::Size(253, 22);
			this->txtCapacityRobot->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(214, 150);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Máxima capacidad (gr):";
			// 
			// MaintenanceRobot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1193, 560);
			this->Controls->Add(this->txtCapacityRobot);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtIdRobot);
			this->Controls->Add(this->txtStatusRobot);
			this->Controls->Add(this->txtNameRobot);
			this->Controls->Add(this->dgvRobots);
			this->Controls->Add(this->btnDeleteRobot);
			this->Controls->Add(this->btnUpdateRobot);
			this->Controls->Add(this->btnAddRobot);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MaintenanceRobot";
			this->Text = L"MaintenanceRobot";
			this->Load += gcnew System::EventHandler(this, &MaintenanceRobot::MaintenanceRobot_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddRobot_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ name = txtNameRobot->Text;
			int id=Int32::Parse(txtIdRobot->Text);
			String^ status = txtStatusRobot->Text;
			int capacity = Int32::Parse(txtCapacityRobot->Text);

			if (name->Length == 0 || status->Length == 0 || capacity == 0 || id == 0 || name == nullptr) {
				MessageBox::Show("Complete los campos obligatorios.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			DeliveryRobot^ robot = gcnew DeliveryRobot(id, name, status, capacity);
			if (Controller::AddRobot(robot) >0) {
				ShowRobots();
				MessageBox::Show("Se ha agregado el robot " + name);
			}
			else {
				MessageBox::Show("No se ha podido agregar el robot " + name);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar el robot por el siguiente motivo:\n" +
				ex->Message);
		}

	}

		   void ShowRobots() {
			   List<DeliveryRobot^>^ robots = MrBookyController::Controller::GetRobots();
			   if (robots != nullptr) {
				   dgvRobots->Rows->Clear();
				   for (int i = 0; i < robots->Count; i++) {
					   dgvRobots->Rows->Add(gcnew array<String^>{
						   "" + robots[i]->RobotID,
						   robots[i]->Name,
							   robots[i]->Status,
							   "" + robots[i]->MaxCapacity,
					   }
					   );
				   }
			   }
		   }



private: System::Void btnUpdateRobot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = txtNameRobot->Text->Trim();
	if (name->Equals("")) {
		MessageBox::Show("Debe seleccionar un robot.");
		return;
	}
	try {
		String^ status = txtStatusRobot->Text->Trim();
		if (status->Length == 0) {
			MessageBox::Show("El estado del robot no debe estar vacío");
			return;
		}

		int id = Int32::Parse(txtIdRobot->Text);
		int capacity = Int32::Parse(txtCapacityRobot->Text);
		if (id<0 && capacity<0) {
			MessageBox::Show("El id o la capacidad del robot deben tener valores validos.");
			return;
		}
	
		DeliveryRobot^ robot1 = gcnew DeliveryRobot(id, name, status, capacity);
		if (MrBookyController::Controller::UpdateRobot(robot1) == 1) {
			MessageBox::Show("Se ha modificado el robot" + id + "-" + name);
			ShowRobots();
		}
		else {
			MessageBox::Show("No se ha podido modificar el robot" + id + "-" + name);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido modificar el robot por el siguiente motivo:\n" +
			ex->Message);
	}

}
private: System::Void btnDeleteRobot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtIdRobot->Text->Trim();
	if (id->Equals("")) {
		MessageBox::Show("Debe seleccionar un libro.");
		return;
	}
	try {
		System::Windows::Forms::DialogResult dlgResult = MessageBox::Show("¿Desea eliminar el libro?",
			"Confirmación", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		int idrobot = Int32::Parse(txtIdRobot->Text->Trim());
		if (dlgResult == System::Windows::Forms::DialogResult::Yes) {
			Controller::DeleteRobot(idrobot);
			ShowRobots();
			MessageBox::Show("Se ha eliminado el robot con id " + idrobot + " de manera exitosa.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No ha sido posible eliminar el robot por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void dgvRobots_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	int robotid = Int32::Parse(dgvRobots->Rows[dgvRobots->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	DeliveryRobot^ robot = Controller::SearchRobot(robotid);
	txtIdRobot->Text = "" + robot->RobotID;
	txtNameRobot->Text = robot->Name;
	txtStatusRobot->Text = robot->Status;
	txtCapacityRobot->Text = "" + robot->MaxCapacity;
}
private: System::Void MaintenanceRobot_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowRobots();
}
};
}
