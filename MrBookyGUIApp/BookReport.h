#pragma once

namespace MrBookyGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BookReport
	/// </summary>
	public ref class BookReport : public System::Windows::Forms::Form
	{
	public:
		BookReport(void)
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
		~BookReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtIdBook;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lbAuthor;
	private: System::Windows::Forms::Label^ lbEditorial;
	private: System::Windows::Forms::Label^ lbStock;
	private: System::Windows::Forms::Label^ lbHistorial;
	private: System::Windows::Forms::Panel^ pnHistorial;
	protected:

	protected:








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
			this->txtIdBook = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->lbAuthor = (gcnew System::Windows::Forms::Label());
			this->lbEditorial = (gcnew System::Windows::Forms::Label());
			this->lbStock = (gcnew System::Windows::Forms::Label());
			this->lbHistorial = (gcnew System::Windows::Forms::Label());
			this->pnHistorial = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// txtIdBook
			// 
			this->txtIdBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdBook->ForeColor = System::Drawing::Color::DarkGray;
			this->txtIdBook->Location = System::Drawing::Point(48, 24);
			this->txtIdBook->Name = L"txtIdBook";
			this->txtIdBook->Size = System::Drawing::Size(334, 30);
			this->txtIdBook->TabIndex = 0;
			this->txtIdBook->Text = L"Ingrese Id del LIbro ";
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->btnSearch->Location = System::Drawing::Point(425, 20);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(97, 37);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &BookReport::btnSearch_Click);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lbTitle->Location = System::Drawing::Point(44, 81);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(71, 25);
			this->lbTitle->TabIndex = 2;
			this->lbTitle->Text = L"T�tulo :";
			// 
			// lbAuthor
			// 
			this->lbAuthor->AutoSize = true;
			this->lbAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAuthor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lbAuthor->Location = System::Drawing::Point(44, 137);
			this->lbAuthor->Name = L"lbAuthor";
			this->lbAuthor->Size = System::Drawing::Size(70, 25);
			this->lbAuthor->TabIndex = 3;
			this->lbAuthor->Text = L"Autor :";
			// 
			// lbEditorial
			// 
			this->lbEditorial->AutoSize = true;
			this->lbEditorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEditorial->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lbEditorial->Location = System::Drawing::Point(44, 197);
			this->lbEditorial->Name = L"lbEditorial";
			this->lbEditorial->Size = System::Drawing::Size(92, 25);
			this->lbEditorial->TabIndex = 4;
			this->lbEditorial->Text = L"Editorial :";
			// 
			// lbStock
			// 
			this->lbStock->AutoSize = true;
			this->lbStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lbStock->Location = System::Drawing::Point(526, 197);
			this->lbStock->Name = L"lbStock";
			this->lbStock->Size = System::Drawing::Size(73, 25);
			this->lbStock->TabIndex = 5;
			this->lbStock->Text = L"Stock :";
			// 
			// lbHistorial
			// 
			this->lbHistorial->AutoSize = true;
			this->lbHistorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHistorial->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->lbHistorial->Location = System::Drawing::Point(431, 249);
			this->lbHistorial->Name = L"lbHistorial";
			this->lbHistorial->Size = System::Drawing::Size(81, 25);
			this->lbHistorial->TabIndex = 6;
			this->lbHistorial->Text = L"Historial";
			// 
			// pnHistorial
			// 
			this->pnHistorial->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnHistorial->Location = System::Drawing::Point(34, 284);
			this->pnHistorial->Name = L"pnHistorial";
			this->pnHistorial->Size = System::Drawing::Size(871, 184);
			this->pnHistorial->TabIndex = 7;
			// 
			// BookReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->pnHistorial);
			this->Controls->Add(this->lbHistorial);
			this->Controls->Add(this->lbStock);
			this->Controls->Add(this->lbEditorial);
			this->Controls->Add(this->lbAuthor);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtIdBook);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BookReport";
			this->Text = L"BookReport";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ IdBook = txtIdBook->Text;
	}
};
}
