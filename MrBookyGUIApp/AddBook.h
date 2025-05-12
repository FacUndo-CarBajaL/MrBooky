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
	/// Resumen de AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
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
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::TextBox^ txtGenre;
	private: System::Windows::Forms::TextBox^ txtEditorial;
	private: System::Windows::Forms::TextBox^ txtQuantity;
	private: System::Windows::Forms::TextBox^ txtProvider;
	private: System::Windows::Forms::RichTextBox^ rtxtDescription;
	private: System::Windows::Forms::Button^ btnAdd;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtProvider = (gcnew System::Windows::Forms::TextBox());
			this->rtxtDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(50, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar datos del libro :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Título :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Autor :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Género :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(51, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Editorial :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 277);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Cantidad :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 332);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Proveedor :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(51, 387);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 22);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Descripción :";
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(170, 61);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(500, 29);
			this->txtTitle->TabIndex = 8;
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(170, 111);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(500, 29);
			this->txtAuthor->TabIndex = 9;
			// 
			// txtGenre
			// 
			this->txtGenre->Location = System::Drawing::Point(170, 166);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(333, 29);
			this->txtGenre->TabIndex = 10;
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(170, 218);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(332, 29);
			this->txtEditorial->TabIndex = 11;
			// 
			// txtQuantity
			// 
			this->txtQuantity->Location = System::Drawing::Point(170, 270);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(113, 29);
			this->txtQuantity->TabIndex = 12;
			// 
			// txtProvider
			// 
			this->txtProvider->Location = System::Drawing::Point(170, 325);
			this->txtProvider->Name = L"txtProvider";
			this->txtProvider->Size = System::Drawing::Size(377, 29);
			this->txtProvider->TabIndex = 13;
			// 
			// rtxtDescription
			// 
			this->rtxtDescription->Location = System::Drawing::Point(170, 377);
			this->rtxtDescription->Name = L"rtxtDescription";
			this->rtxtDescription->Size = System::Drawing::Size(495, 57);
			this->rtxtDescription->TabIndex = 14;
			this->rtxtDescription->Text = L"";
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(404, 449);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(123, 32);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddBook::btnAdd_Click);
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->rtxtDescription);
			this->Controls->Add(this->txtProvider);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->txtEditorial);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddBook";
			this->Text = L"AddBook";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = txtTitle->Text;
	String^ author = txtAuthor->Text;
	String^ genre = txtGenre->Text;
	String^ editorial = txtEditorial->Text;
	int quantity = Int32::Parse(txtQuantity->Text);
	String^ provider = txtProvider->Text;
	String^ description = rtxtDescription->Text;

	if (title->Length == 0 || author->Length == 0 || editorial->Length == 0 || quantity == 0) {
		MessageBox::Show("Complete los campos obligatorios.","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	MessageBox::Show("Libro registrado","Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Book^ book = gcnew Book();
	book->Title = title;
	book->Author = author;
	book->Genre = genre;
	book->Publisher = editorial;
	book->Stock = quantity;
	book->Description = description;

	Controller::AddBook(book);
	txtTitle->Clear();
	txtAuthor->Clear();
	txtGenre->Clear();
	txtEditorial->Clear();
	txtQuantity->Clear();
	txtProvider->Clear();
	rtxtDescription->Clear();
}
};
}
