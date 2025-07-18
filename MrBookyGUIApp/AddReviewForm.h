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
	using namespace MrBookyPersistance;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de AddReviewForm
	/// </summary>
	public ref class AddReviewForm : public System::Windows::Forms::Form
	{
	public:
		AddReviewForm(void)
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
		~AddReviewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ btnPublicar;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnPublicar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->label1->Location = System::Drawing::Point(22, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su reseña:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(34, 88);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(735, 278);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// btnPublicar
			// 
			this->btnPublicar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnPublicar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPublicar->Location = System::Drawing::Point(333, 400);
			this->btnPublicar->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnPublicar->Name = L"btnPublicar";
			this->btnPublicar->Size = System::Drawing::Size(136, 30);
			this->btnPublicar->TabIndex = 2;
			this->btnPublicar->Text = L"Publicar Reseña";
			this->btnPublicar->UseVisualStyleBackColor = false;
			this->btnPublicar->Click += gcnew System::EventHandler(this, &AddReviewForm::btnPublicar_Click);
			// 
			// AddReviewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(803, 485);
			this->Controls->Add(this->btnPublicar);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"AddReviewForm";
			this->Text = L"AddReviewForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPublicar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reviewText = richTextBox1->Text;
		if (String::IsNullOrWhiteSpace(reviewText)) {
			MessageBox::Show("Por favor, ingrese una reseña antes de publicar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// Aquí se puede agregar la lógica para guardar la reseña
		Book^ book = (Book^)Persistance::LoadBinaryFile("TempBook.bin");
		if (book->Reviews == nullptr) {
			book->Reviews = gcnew List<String^>();
		}
		book->Reviews->Add(reviewText); // Agregar la reseña al libro
		Controller::UpdateBook(book); // Actualizar el libro con la nueva reseña
		MessageBox::Show("Reseña publicada exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close(); // Cerrar el formulario después de publicar
	}
	};
}
