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
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Resumen de ReporteGraficaClienteForm
	/// </summary>
	public ref class ReporteGraficaClienteForm : public System::Windows::Forms::Form
	{
	public:
		ReporteGraficaClienteForm(void)
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
		~ReporteGraficaClienteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartBarras;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPastel;
	private: System::Windows::Forms::Button^ btnGenerarReporte;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->chartBarras = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartPastel = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnGenerarReporte = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBarras))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPastel))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(163, 20);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(247, 22);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(77, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inicio :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label2->Location = System::Drawing::Point(77, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fin :";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(163, 67);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(247, 22);
			this->dateTimePicker2->TabIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->checkBox1->Location = System::Drawing::Point(480, 10);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(258, 33);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Reporte de Pedidos";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ReporteGraficaClienteForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->checkBox2->Location = System::Drawing::Point(480, 49);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(308, 33);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Reporte de Preferencias";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ReporteGraficaClienteForm::checkBox2_CheckedChanged);
			// 
			// chartBarras
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartBarras->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartBarras->Legends->Add(legend3);
			this->chartBarras->Location = System::Drawing::Point(228, 144);
			this->chartBarras->Name = L"chartBarras";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chartBarras->Series->Add(series3);
			this->chartBarras->Size = System::Drawing::Size(676, 361);
			this->chartBarras->TabIndex = 6;
			this->chartBarras->Text = L"chartBarras";
			// 
			// chartPastel
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartPastel->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartPastel->Legends->Add(legend4);
			this->chartPastel->Location = System::Drawing::Point(228, 144);
			this->chartPastel->Name = L"chartPastel";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chartPastel->Series->Add(series4);
			this->chartPastel->Size = System::Drawing::Size(676, 361);
			this->chartPastel->TabIndex = 7;
			this->chartPastel->Text = L"chartPastel";
			// 
			// btnGenerarReporte
			// 
			this->btnGenerarReporte->Location = System::Drawing::Point(481, 101);
			this->btnGenerarReporte->Name = L"btnGenerarReporte";
			this->btnGenerarReporte->Size = System::Drawing::Size(242, 29);
			this->btnGenerarReporte->TabIndex = 8;
			this->btnGenerarReporte->Text = L"Generar Reporte";
			this->btnGenerarReporte->UseVisualStyleBackColor = true;
			this->btnGenerarReporte->Click += gcnew System::EventHandler(this, &ReporteGraficaClienteForm::btnGenerarReporte_Click);
			// 
			// ReporteGraficaClienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1083, 559);
			this->Controls->Add(this->btnGenerarReporte);
			this->Controls->Add(this->chartPastel);
			this->Controls->Add(this->chartBarras);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"ReporteGraficaClienteForm";
			this->Text = L"ReporteGraficaClienteForm";
			this->Load += gcnew System::EventHandler(this, &ReporteGraficaClienteForm::ReporteGraficaClienteForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBarras))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPastel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReporteGraficaClienteForm_Load(System::Object^ sender, System::EventArgs^ e) {
		chartBarras->Visible = false;
		chartPastel->Visible = false;;
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		chartBarras->Visible = true;
		chartPastel->Visible = false;
		checkBox2->Checked = false;
	}
	else {
		chartBarras->Visible = false;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		chartPastel->Visible = true;
		chartBarras->Visible = false;
		checkBox1->Checked = false;
	}
	else {
		chartPastel->Visible = false;
	}
}
private: System::Void btnGenerarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime startDate = dateTimePicker1->Value.Date;
	DateTime endDate = dateTimePicker2->Value.Date;

	if (startDate > endDate) {
		MessageBox::Show("La fecha de inicio no puede ser posterior a la fecha de fin.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (!checkBox1->Checked && !checkBox2->Checked) {
		MessageBox::Show("Por favor, seleccione un modo de reporte (Individual o Grupal).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (checkBox1->Checked) { //Generar reporte de pedidos

		User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
		List<Loan^>^ loans = Controller::GetAllLoansByUserAndDates(user->UserID, startDate, endDate);
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
			chartBarras->Series["Series1"]->Points->Add(kvp.Value);
			chartBarras->Series["Series1"]->Points[index]->AxisLabel = kvp.Key.ToShortDateString();
			chartBarras->Series["Series1"]->Points[index]->ToolTip = kvp.Key.ToShortDateString();
			chartBarras->Series["Series1"]->Points[index]->Label = "" + kvp.Value;
			index++;
		}

		chartBarras->Series["Series1"]->Name = "Cantidad de préstamos por día";
		chartBarras->ChartAreas[0]->AxisX->Title = "Fecha";
	}
	else if (checkBox2->Checked) { //Generar reporte de preferencias

		User^ user = (User^)Persistance::LoadBinaryFile("TempUser.bin");
		List<Loan^>^ loans = Controller::GetAllLoansByUserAndDates(user->UserID, startDate, endDate);

		// Contar préstamos por género
		Dictionary<String^, int>^ genreCounts = gcnew Dictionary<String^, int>();

		for each (Loan ^ loan in loans) {
			String^ genre = loan->Book->Genre;

			if (genreCounts->ContainsKey(genre))
				genreCounts[genre]++;
			else
				genreCounts->Add(genre, 1);
		}

		// Configurar gráfico de pastel
		chartPastel->Series["Series1"]->Points->Clear();
		chartPastel->Series["Series1"]->IsValueShownAsLabel = true;
		chartPastel->Series["Series1"]->CustomProperties = "PieLabelStyle=Outside";

		// Cargar datos al gráfico
		for each (KeyValuePair<String^, int> kvp in genreCounts) {
			DataPoint^ point = gcnew DataPoint();
			point->YValues[0] = kvp.Value;
			point->AxisLabel = kvp.Key;         // Texto si se muestra dentro
			point->LegendText = kvp.Key;        // Texto en la leyenda
			point->Label = "#PERCENT{P1} - " + kvp.Key; // Etiqueta fuera: "25.00% - Drama"
			chartPastel->Series["Series1"]->Points->Add(point);
		}


	}

	MessageBox::Show("Reporte generado con éxito.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
