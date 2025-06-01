#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::RadioButton^ rbtnIndividual;

	private: System::Windows::Forms::RadioButton^ rbtnGroup;
	private: System::Windows::Forms::RadioButton^ rbtnBook;


	private: System::Windows::Forms::RadioButton^ rbtnUser;

	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stats::typeid));
			this->txtIdStock = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbtnIndividual = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnGroup = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnBook = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnUser = (gcnew System::Windows::Forms::RadioButton());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtIdStock
			// 
			this->txtIdStock->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
			this->txtIdStock->Location = System::Drawing::Point(47, 58);
			this->txtIdStock->Name = L"txtIdStock";
			this->txtIdStock->Size = System::Drawing::Size(383, 29);
			this->txtIdStock->TabIndex = 1;
			this->txtIdStock->Text = L"Ingrese Id";
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
			// rbtnIndividual
			// 
			this->rbtnIndividual->AutoSize = true;
			this->rbtnIndividual->BackColor = System::Drawing::Color::Transparent;
			this->rbtnIndividual->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnIndividual->ForeColor = System::Drawing::Color::White;
			this->rbtnIndividual->Location = System::Drawing::Point(789, 42);
			this->rbtnIndividual->Name = L"rbtnIndividual";
			this->rbtnIndividual->Size = System::Drawing::Size(116, 26);
			this->rbtnIndividual->TabIndex = 3;
			this->rbtnIndividual->TabStop = true;
			this->rbtnIndividual->Text = L"Individual";
			this->rbtnIndividual->UseVisualStyleBackColor = false;
			this->rbtnIndividual->CheckedChanged += gcnew System::EventHandler(this, &Stats::rbtnIndividual_CheckedChanged);
			// 
			// rbtnGroup
			// 
			this->rbtnGroup->AutoSize = true;
			this->rbtnGroup->BackColor = System::Drawing::Color::Transparent;
			this->rbtnGroup->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12));
			this->rbtnGroup->ForeColor = System::Drawing::Color::White;
			this->rbtnGroup->Location = System::Drawing::Point(789, 74);
			this->rbtnGroup->Name = L"rbtnGroup";
			this->rbtnGroup->Size = System::Drawing::Size(87, 26);
			this->rbtnGroup->TabIndex = 4;
			this->rbtnGroup->TabStop = true;
			this->rbtnGroup->Text = L"Grupal";
			this->rbtnGroup->UseVisualStyleBackColor = false;
			this->rbtnGroup->CheckedChanged += gcnew System::EventHandler(this, &Stats::rbtnGroup_CheckedChanged);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(345, 449);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Generar Reporte";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->rbtnBook);
			this->Controls->Add(this->rbtnUser);
			this->Controls->Add(this->rbtnGroup);
			this->Controls->Add(this->rbtnIndividual);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtIdStock);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Stats";
			this->Text = L"Stats";
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
};
}
