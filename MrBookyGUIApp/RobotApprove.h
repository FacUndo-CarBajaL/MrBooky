
#pragma once
#include "ComboBoxItem.h"

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
	/// Resumen de RobotApprove
	/// </summary>
	public ref class RobotApprove : public System::Windows::Forms::Form
	{
	public:
		int DeliveryPointQuantity;
		Dictionary<String^, int>^ DeliveryPointsDict = gcnew Dictionary<String^, int>();

		RobotApprove(int deliveryPointQuantity)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			DeliveryPointQuantity = deliveryPointQuantity;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RobotApprove()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbRobot;
	private: System::Windows::Forms::ComboBox^ cmbProtocol;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RobotApprove::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbRobot = (gcnew System::Windows::Forms::ComboBox());
			this->cmbProtocol = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Robot";
			this->label1->Click += gcnew System::EventHandler(this, &RobotApprove::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(404, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Seleccionar";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(517, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Protocolo";
			// 
			// cmbRobot
			// 
			this->cmbRobot->FormattingEnabled = true;
			this->cmbRobot->Location = System::Drawing::Point(162, 39);
			this->cmbRobot->Name = L"cmbRobot";
			this->cmbRobot->Size = System::Drawing::Size(221, 33);
			this->cmbRobot->TabIndex = 4;
			// 
			// cmbProtocol
			// 
			this->cmbProtocol->FormattingEnabled = true;
			this->cmbProtocol->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"UART", L"NMEA" });
			this->cmbProtocol->Location = System::Drawing::Point(670, 43);
			this->cmbProtocol->Name = L"cmbProtocol";
			this->cmbProtocol->Size = System::Drawing::Size(202, 33);
			this->cmbProtocol->TabIndex = 5;
			// 
			// RobotApprove
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(942, 493);
			this->Controls->Add(this->cmbProtocol);
			this->Controls->Add(this->cmbRobot);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"RobotApprove";
			this->Text = L"Enviar Robot a Delivery";
			this->Load += gcnew System::EventHandler(this, &RobotApprove::RobotApprove_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   void CreatePictureBox(String^ name, int x, int y, int ancho, int alto, String^ rutaImagen) {
			   PictureBox^ pictureBox = gcnew PictureBox();
			   pictureBox->Location = System::Drawing::Point(x, y);
			   pictureBox->Name = name;
			   pictureBox->Size = System::Drawing::Size(ancho, alto);
			   pictureBox->ImageLocation = rutaImagen;
			   pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   pictureBox->Click += gcnew System::EventHandler(this, &RobotApprove::pbDeliveryPoint_Click);
			   this->Controls->Add(pictureBox); // Agrega el PictureBox al formulario			
		   }

		   bool ValidateForm() {
			   if (cmbRobot->SelectedIndex < 0) {
				   MessageBox::Show("Debe seleccionar un robot");
				   return false;
			   }
			   return true;
		   }
	private: System::Void RobotApprove_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadRobotsInComboBox();
		cmbProtocol->SelectedIndex = 1; //Protocolo NMEA seleccionado por defecto.
		int x, y = 180;
		for (int i = 0; i < DeliveryPointQuantity; i++) {
			int index = i + 1;
			if (i % 5 == 0) {
				x = 10;
				y += (i / 5) * 100;
			}
			else {
				x = 10 + (i % 5) * 100;
			}
			String^ DeliveryPointName = "pbDeliveryPoint" + index;
			DeliveryPointsDict->Add(DeliveryPointName, index);
			CreatePictureBox(DeliveryPointName, x, y, 90, 90, "C:\\Users\\HP\\Downloads\\POO\\MrBooky\\Imagenes\\Diseño Iconos\\ImgDeliveryPoint.png");
		}
	}

		   void LoadRobotsInComboBox() {
			   cmbRobot->Items->Clear();
			   List<DeliveryRobot^>^ robotsList = MrBookyController::Controller::GetRobots();
			   for each (DeliveryRobot ^ robot in robotsList) {
				   ComboBoxItem^ item = gcnew ComboBoxItem(robot->RobotID, robot->Name + " - " + robot->MaxCapacity);
				   cmbRobot->Items->Add(item);
			   }
		   }

		   void ExecuteSendRobotToDelivery(int robotId, int deliveryPointNumber) {
			   try {
				   String^ result;
				   String^ protocol = cmbProtocol->Items[cmbProtocol->SelectedIndex]->ToString();
				   if (Controller::protocolDictionary->ContainsKey(protocol)) {
					   MessageBox::Show("Se ha ordenado, mediante el protocolo " + protocol + ", al robot " + robotId + " ir al punto de delivery " + deliveryPointNumber);
					   //Comentar cuando se conecte al Arduino		
					   result = "Moviendo robot al punto de delivery " + deliveryPointNumber;
					   LoanOrder^ loanOrder = (LoanOrder^)Persistance::LoadBinaryFile("TempLoanOrder.bin");
					   if (loanOrder != nullptr) {
						   loanOrder->Status = "En Envío";
						   Controller::UpdateLoanOrder(loanOrder);
						   this->Close();
					   }
					   //Descomentar cuando se conecte al Arduino
					   //result = Controller::SendRobotToTable(Controller::protocolDictionary[protocol], robotId, tableNumber);
				   }
				   if (result == nullptr || result->Equals("")) {
					   MessageBox::Show("No se ha logrado realizar el envío");
				   }
				   else {
					   MessageBox::Show(result);
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }
		   }

	private: System::Void pbDeliveryPoint_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ValidateForm()) {
			PictureBox^ pictureBoxClicked = safe_cast<PictureBox^>(sender);
			String^ pictureBoxName = pictureBoxClicked->Name;
			ExecuteSendRobotToDelivery(((ComboBoxItem^)(cmbRobot->Items[cmbRobot->SelectedIndex]))->Value,
				DeliveryPointsDict[pictureBoxName]);
		}
	}
	};
}