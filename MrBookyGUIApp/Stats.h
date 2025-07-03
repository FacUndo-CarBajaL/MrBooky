#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MrBookyController;
	using namespace MrBookyModel;
	using namespace MrBookyPersistance;

	/// <summary>
	/// Resumen de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
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
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtIdStock;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::RadioButton^ rbtnBook;


	private: System::Windows::Forms::RadioButton^ rbtnUser;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnGenerarReporte;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnGroup;
	private: System::Windows::Forms::RadioButton^ rbtnIndividual;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stats::typeid));
			this->txtIdStock = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbtnBook = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnUser = (gcnew System::Windows::Forms::RadioButton());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnGenerarReporte = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnGroup = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnIndividual = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtIdStock
			// 
			this->txtIdStock->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
			this->txtIdStock->Location = System::Drawing::Point(47, 58);
			this->txtIdStock->Name = L"txtIdStock";
			this->txtIdStock->Size = System::Drawing::Size(383, 34);
			this->txtIdStock->TabIndex = 1;
			this->txtIdStock->Text = L"Ingrese Id";
			this->txtIdStock->Enter += gcnew System::EventHandler(this, &Stats::txtIdStock_Enter);
			this->txtIdStock->Leave += gcnew System::EventHandler(this, &Stats::txtIdStock_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(42, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gráficas";
			// 
			// rbtnBook
			// 
			this->rbtnBook->AutoSize = true;
			this->rbtnBook->BackColor = System::Drawing::Color::Transparent;
			this->rbtnBook->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnBook->ForeColor = System::Drawing::Color::White;
			this->rbtnBook->Location = System::Drawing::Point(601, 74);
			this->rbtnBook->Name = L"rbtnBook";
			this->rbtnBook->Size = System::Drawing::Size(77, 26);
			this->rbtnBook->TabIndex = 6;
			this->rbtnBook->TabStop = true;
			this->rbtnBook->Text = L"Libro";
			this->rbtnBook->UseVisualStyleBackColor = false;
			this->rbtnBook->CheckedChanged += gcnew System::EventHandler(this, &Stats::rbtnBook_CheckedChanged);
			// 
			// rbtnUser
			// 
			this->rbtnUser->AutoSize = true;
			this->rbtnUser->BackColor = System::Drawing::Color::Transparent;
			this->rbtnUser->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnUser->ForeColor = System::Drawing::Color::White;
			this->rbtnUser->Location = System::Drawing::Point(601, 42);
			this->rbtnUser->Name = L"rbtnUser";
			this->rbtnUser->Size = System::Drawing::Size(94, 26);
			this->rbtnUser->TabIndex = 5;
			this->rbtnUser->TabStop = true;
			this->rbtnUser->Text = L"Usuario";
			this->rbtnUser->UseVisualStyleBackColor = false;
			this->rbtnUser->CheckedChanged += gcnew System::EventHandler(this, &Stats::rbtnUser_CheckedChanged);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::White;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ForeColor = System::Drawing::Color::Black;
			this->btnSearch->Location = System::Drawing::Point(446, 56);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(111, 32);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Stats::btnSearch_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->label2->Location = System::Drawing::Point(122, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Inicio:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(205, 169);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(147, 29);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->Value = System::DateTime(2025, 5, 26, 13, 44, 0, 0);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(601, 169);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker2->Size = System::Drawing::Size(147, 29);
			this->dateTimePicker2->TabIndex = 11;
			this->dateTimePicker2->Value = System::DateTime(2025, 5, 26, 13, 44, 0, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->label3->Location = System::Drawing::Point(518, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Fin:";
			// 
			// btnGenerarReporte
			// 
			this->btnGenerarReporte->BackColor = System::Drawing::Color::White;
			this->btnGenerarReporte->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerarReporte->ForeColor = System::Drawing::Color::Black;
			this->btnGenerarReporte->Location = System::Drawing::Point(345, 511);
			this->btnGenerarReporte->Name = L"btnGenerarReporte";
			this->btnGenerarReporte->Size = System::Drawing::Size(226, 32);
			this->btnGenerarReporte->TabIndex = 12;
			this->btnGenerarReporte->Text = L"Generar Reporte";
			this->btnGenerarReporte->UseVisualStyleBackColor = false;
			this->btnGenerarReporte->Click += gcnew System::EventHandler(this, &Stats::btnGenerarReporte_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(47, 235);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(879, 245);
			this->chart1->TabIndex = 13;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->rbtnGroup);
			this->groupBox1->Controls->Add(this->rbtnIndividual);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Wheat;
			this->groupBox1->Location = System::Drawing::Point(758, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(168, 98);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipos de reporte";
			// 
			// rbtnGroup
			// 
			this->rbtnGroup->AutoSize = true;
			this->rbtnGroup->BackColor = System::Drawing::Color::Transparent;
			this->rbtnGroup->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnGroup->ForeColor = System::Drawing::Color::White;
			this->rbtnGroup->Location = System::Drawing::Point(26, 60);
			this->rbtnGroup->Name = L"rbtnGroup";
			this->rbtnGroup->Size = System::Drawing::Size(87, 26);
			this->rbtnGroup->TabIndex = 6;
			this->rbtnGroup->TabStop = true;
			this->rbtnGroup->Text = L"Grupal";
			this->rbtnGroup->UseVisualStyleBackColor = false;
			// 
			// rbtnIndividual
			// 
			this->rbtnIndividual->AutoSize = true;
			this->rbtnIndividual->BackColor = System::Drawing::Color::Transparent;
			this->rbtnIndividual->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnIndividual->ForeColor = System::Drawing::Color::White;
			this->rbtnIndividual->Location = System::Drawing::Point(26, 32);
			this->rbtnIndividual->Name = L"rbtnIndividual";
			this->rbtnIndividual->Size = System::Drawing::Size(116, 26);
			this->rbtnIndividual->TabIndex = 5;
			this->rbtnIndividual->TabStop = true;
			this->rbtnIndividual->Text = L"Individual";
			this->rbtnIndividual->UseVisualStyleBackColor = false;
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 593);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->btnGenerarReporte);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->rbtnBook);
			this->Controls->Add(this->rbtnUser);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtIdStock);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Stats";
			this->Text = L"Stats";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void rbtnUser_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnUser->Checked) {
		rbtnBook->Checked = false;
	}
	CheckEnableSearchButton();
}

private: System::Void rbtnBook_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnBook->Checked) {
		rbtnUser->Checked = false;
	}
	CheckEnableSearchButton();
}

private: System::Void rbtnIndividual_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnIndividual->Checked) {
		rbtnGroup->Checked = false;
	}
	CheckEnableSearchButton();
}

private: System::Void rbtnGroup_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnGroup->Checked) {
		rbtnIndividual->Checked = false;
	}
	CheckEnableSearchButton();
}
private: void CheckEnableSearchButton() {
	bool SelectedType = (rbtnUser->Checked || rbtnBook->Checked);
	bool SelectedMode = (rbtnIndividual->Checked || rbtnGroup->Checked);
	btnSearch->Enabled = SelectedType && SelectedMode;
}

private: System::Void btnGenerarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
	// Limpiar gráfica
	chart1->Series["Series1"]->Points->Clear();
	chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
	

	DateTime startDate = dateTimePicker1->Value.Date;
	DateTime endDate = dateTimePicker2->Value.Date;

	if (startDate > endDate) {
		MessageBox::Show("La fecha de inicio no puede ser posterior a la fecha de fin.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!rbtnIndividual->Checked && !rbtnGroup->Checked) {
		MessageBox::Show("Por favor, seleccione un modo de reporte (Individual o Grupal).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (rbtnBook->Checked) {


		if (rbtnIndividual->Checked) {
			// Validar que se haya ingresado un ID de libro
			if (txtIdStock->Text->Length == 0) {
				MessageBox::Show("Por favor, ingrese un ID de libro .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			int bookId = Convert::ToInt32(txtIdStock->Text);

			if (bookId <= 0) {
				MessageBox::Show("Por favor, ingrese un ID de libro válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			List<Loan^>^ loans = Controller::GetLoansByBookID(bookId, startDate, endDate);

			Dictionary<DateTime, int>^ dateCount = gcnew Dictionary<DateTime, int>();
			for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {
				dateCount[date] = 0;
			}

			// Sumamos las cantidades por día
			for (int i = 0; i < loans->Count; i++) {
				DateTime date1 = *loans[i]->DateLoan;
				DateTime dateOnly = date1.Date;
				if (dateCount->ContainsKey(dateOnly)) {
					dateCount[dateOnly] += loans[i]->Quantity;
				}
			}

			// Agregamos al gráfico con etiquetas de fecha
			int index = 0;
			for each (KeyValuePair<DateTime, int> kvp in dateCount) {
				chart1->Series["Series1"]->Points->Add(kvp.Value);
				chart1->Series["Series1"]->Points[index]->AxisLabel = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->ToolTip = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->Label = "" + kvp.Value;
				index++;
			}

			chart1->Series["Series1"]->Name = "Cantidad de préstamos por día";
			chart1->ChartAreas[0]->AxisX->Title = "Fecha";
		}
		else if (rbtnGroup->Checked) {
			List<Loan^>^ loans = Controller::GetAllLoansByDates(startDate, endDate);
			Dictionary<DateTime, int>^ dateCount = gcnew Dictionary<DateTime, int>();

			for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {
				dateCount[date] = 0;
			}

			// Sumamos las cantidades por día
			for (int i = 0; i < loans->Count; i++) {
				DateTime date1 = *loans[i]->DateLoan;
				DateTime dateOnly = date1.Date;
				if (dateCount->ContainsKey(dateOnly)) {
					dateCount[dateOnly] += loans[i]->Quantity;
				}
			}

			// Agregamos al gráfico con etiquetas de fecha
			int index = 0;
			for each(KeyValuePair<DateTime, int> kvp in dateCount) {
				chart1->Series["Series1"]->Points->Add(kvp.Value);
				chart1->Series["Series1"]->Points[index]->AxisLabel = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->ToolTip = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->Label = "" + kvp.Value;
				index++;
			}

			chart1->Series["Series1"]->Name = "Cantidad de préstamos por día";
			chart1->ChartAreas[0]->AxisX->Title = "Fecha";

		}
	}
	else if (rbtnUser->Checked) {

		if (rbtnIndividual->Checked) {

			if (txtIdStock->Text->Length == 0) {
				MessageBox::Show("Por favor, ingrese un ID de usuario .", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			int userId = Convert::ToInt32(txtIdStock->Text);

			if (userId <= 0) {
				MessageBox::Show("Por favor, ingrese un ID de usuario válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			List<Loan^>^ loans = Controller::GetAllLoansByUserAndDates(userId, startDate, endDate);
			Dictionary<DateTime, int>^ dateCount = gcnew Dictionary<DateTime, int>();

			for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {
				dateCount[date] = 0;
			}

			// Sumamos las cantidades por día
			for (int i = 0; i < loans->Count; i++) {
				DateTime date1 = *loans[i]->DateLoan;
				DateTime dateOnly = date1.Date;
				if (dateCount->ContainsKey(dateOnly)) {
					dateCount[dateOnly] += loans[i]->Quantity;
				}
			}

			// Agregamos al gráfico con etiquetas de fecha
			int index = 0;
			for each(KeyValuePair<DateTime, int> kvp in dateCount) {
				chart1->Series["Series1"]->Points->Add(kvp.Value);
				chart1->Series["Series1"]->Points[index]->AxisLabel = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->ToolTip = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->Label = "" + kvp.Value;
				index++;
			}

			chart1->Series["Series1"]->Name = "Cantidad de préstamos por día";
			chart1->ChartAreas[0]->AxisX->Title = "Fecha";
			
		}
		else if (rbtnGroup->Checked) {

			List<Loan^>^ loans = Controller::GetAllLoansByDates(startDate, endDate);
			Dictionary<DateTime, int>^ dateCount = gcnew Dictionary<DateTime, int>();

			for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {
				dateCount[date] = 0;
			}

			// Sumamos las cantidades por día
			for (int i = 0; i < loans->Count; i++) {
				DateTime date1 = *loans[i]->DateLoan;
				DateTime dateOnly = date1.Date;
				if (dateCount->ContainsKey(dateOnly)) {
					dateCount[dateOnly] += loans[i]->Quantity;
				}
			}

			// Agregamos al gráfico con etiquetas de fecha
			int index = 0;
			for each(KeyValuePair<DateTime, int> kvp in dateCount) {
				chart1->Series["Series1"]->Points->Add(kvp.Value);
				chart1->Series["Series1"]->Points[index]->AxisLabel = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->ToolTip = kvp.Key.ToShortDateString();
				chart1->Series["Series1"]->Points[index]->Label = "" + kvp.Value;
				index++;
			}

			chart1->Series["Series1"]->Name = "Cantidad de préstamos por día";
			chart1->ChartAreas[0]->AxisX->Title = "Fecha";
			
		}
	}

	MessageBox::Show("Reporte generado con éxito.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void txtIdStock_Enter(System::Object^ sender, System::EventArgs^ e) {
	if (txtIdStock->Text == "Ingrese Id") {
		txtIdStock->Text = "";
		txtIdStock->ForeColor = System::Drawing::Color::Black;
	}
	else if (txtIdStock->Text == "") {
		txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
		txtIdStock->Text = "Ingrese Id";

	}
}
private: System::Void txtIdStock_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (txtIdStock->Text == "") {
		txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
		txtIdStock->Text = "Ingrese Id";
	}
	else {
		txtIdStock->ForeColor = System::Drawing::Color::Black;
	}
}
};
}
