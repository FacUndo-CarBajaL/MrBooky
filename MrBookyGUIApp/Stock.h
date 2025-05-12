#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtIdStock;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::GroupBox^ gbResults;
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lbEditorial;
	protected:





	private: System::Windows::Forms::Label^ lbAuthor;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbLocation;

	private: System::Windows::Forms::Label^ lbTime;

	private: System::Windows::Forms::Label^ lbQuantity;


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
			this->txtIdStock = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->gbResults = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbLocation = (gcnew System::Windows::Forms::Label());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbQuantity = (gcnew System::Windows::Forms::Label());
			this->lbEditorial = (gcnew System::Windows::Forms::Label());
			this->lbAuthor = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->gbResults->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtIdStock
			// 
			this->txtIdStock->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdStock->ForeColor = System::Drawing::Color::DarkGray;
			this->txtIdStock->Location = System::Drawing::Point(77, 56);
			this->txtIdStock->Name = L"txtIdStock";
			this->txtIdStock->Size = System::Drawing::Size(427, 29);
			this->txtIdStock->TabIndex = 0;
			this->txtIdStock->Text = L"Ingrese Id del libro";
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(548, 54);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(111, 32);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &Stock::btnSearch_Click);
			// 
			// gbResults
			// 
			this->gbResults->Controls->Add(this->pictureBox1);
			this->gbResults->Controls->Add(this->lbLocation);
			this->gbResults->Controls->Add(this->lbTime);
			this->gbResults->Controls->Add(this->lbQuantity);
			this->gbResults->Controls->Add(this->lbEditorial);
			this->gbResults->Controls->Add(this->lbAuthor);
			this->gbResults->Controls->Add(this->lbTitle);
			this->gbResults->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbResults->ForeColor = System::Drawing::Color::White;
			this->gbResults->Location = System::Drawing::Point(75, 111);
			this->gbResults->Name = L"gbResults";
			this->gbResults->Size = System::Drawing::Size(801, 344);
			this->gbResults->TabIndex = 2;
			this->gbResults->TabStop = false;
			this->gbResults->Text = L"Resultados";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(559, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(228, 297);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// lbLocation
			// 
			this->lbLocation->AutoSize = true;
			this->lbLocation->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLocation->Location = System::Drawing::Point(46, 275);
			this->lbLocation->Name = L"lbLocation";
			this->lbLocation->Size = System::Drawing::Size(115, 25);
			this->lbLocation->TabIndex = 5;
			this->lbLocation->Text = L"Ubicación :";
			// 
			// lbTime
			// 
			this->lbTime->AutoSize = true;
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTime->Location = System::Drawing::Point(46, 229);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(196, 25);
			this->lbTime->TabIndex = 4;
			this->lbTime->Text = L"Tiempo Disponible :";
			// 
			// lbQuantity
			// 
			this->lbQuantity->AutoSize = true;
			this->lbQuantity->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbQuantity->Location = System::Drawing::Point(46, 183);
			this->lbQuantity->Name = L"lbQuantity";
			this->lbQuantity->Size = System::Drawing::Size(106, 25);
			this->lbQuantity->TabIndex = 3;
			this->lbQuantity->Text = L"Cantidad :";
			// 
			// lbEditorial
			// 
			this->lbEditorial->AutoSize = true;
			this->lbEditorial->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEditorial->Location = System::Drawing::Point(46, 137);
			this->lbEditorial->Name = L"lbEditorial";
			this->lbEditorial->Size = System::Drawing::Size(108, 25);
			this->lbEditorial->TabIndex = 2;
			this->lbEditorial->Text = L"Editorial :";
			// 
			// lbAuthor
			// 
			this->lbAuthor->AutoSize = true;
			this->lbAuthor->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAuthor->Location = System::Drawing::Point(46, 96);
			this->lbAuthor->Name = L"lbAuthor";
			this->lbAuthor->Size = System::Drawing::Size(77, 25);
			this->lbAuthor->TabIndex = 1;
			this->lbAuthor->Text = L"Autor :";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(46, 53);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(80, 25);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Título :";
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->gbResults);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtIdStock);
			this->Name = L"Stock";
			this->Text = L"Stock";
			this->gbResults->ResumeLayout(false);
			this->gbResults->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = txtIdStock->Text;
}
};
}
