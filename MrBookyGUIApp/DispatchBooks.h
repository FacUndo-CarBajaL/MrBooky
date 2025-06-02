#pragma once

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

	/// <summary>
	/// Resumen de DispatchBooks
	/// </summary>
	public ref class DispatchBooks : public System::Windows::Forms::Form
	{
	public:
		DispatchBooks(void)
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
		~DispatchBooks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colName;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colStatus;
	private: System::Windows::Forms::Button^ button1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DispatchBooks::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colStatus = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colId,
					this->colName, this->colStatus
			});
			this->dataGridView1->Location = System::Drawing::Point(41, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(859, 361);
			this->dataGridView1->TabIndex = 0;
			// 
			// colId
			// 
			this->colId->HeaderText = L"Id";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->Width = 125;
			// 
			// colName
			// 
			this->colName->HeaderText = L"Nombre del Robot";
			this->colName->MinimumWidth = 6;
			this->colName->Name = L"colName";
			this->colName->Width = 125;
			// 
			// colStatus
			// 
			this->colStatus->HeaderText = L"Estados";
			this->colStatus->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"En camino", L"Llegó", L"Error", L"Cancelado" });
			this->colStatus->MinimumWidth = 6;
			this->colStatus->Name = L"colStatus";
			this->colStatus->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->colStatus->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->colStatus->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(339, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Guardar Cambios";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DispatchBooks::button1_Click);
			// 
			// DispatchBooks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"DispatchBooks";
			this->Text = L"DispatchBooks";
			this->Load += gcnew System::EventHandler(this, &DispatchBooks::DispatchBooks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void DispatchBooks_Load(System::Object^ sender, System::EventArgs^ e) {

	auto robots = MrBookyController::Controller::GetRobots();

	dataGridView1->Rows->Clear();
	for each (DeliveryRobot ^ robot in robots) {
		int rowIndex = dataGridView1->Rows->Add();
		dataGridView1->Rows[rowIndex]->Cells["colId"]->Value = robot->RobotID;
		dataGridView1->Rows[rowIndex]->Cells["colName"]->Value = robot->Name;
		dataGridView1->Rows[rowIndex]->Cells["colStatus"]->Value = robot->Status;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (dataGridView1->Rows[i]->IsNewRow) continue;

		int id = Convert::ToInt32(dataGridView1->Rows[i]->Cells["colId"]->Value);
		String^ newStatus = Convert::ToString(dataGridView1->Rows[i]->Cells["colStatus"]->Value);
		String^name = Convert::ToString(dataGridView1->Rows[i]->Cells["colName"]->Value);
		DeliveryRobot^ robot = gcnew DeliveryRobot(id,name,newStatus,5);

		MrBookyController::Controller::UpdateRobot(robot);
	}

	MessageBox::Show("Estados actualizados y guardados.");
}
};
}
