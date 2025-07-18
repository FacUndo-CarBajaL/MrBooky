/**
 * Project Untitled
 */


#ifndef _DELIVERYROBOT_H
#define _DELIVERYROBOT_H

#include "Loan.h"
#include "Point.h"


using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace MrBookyModel {
    [Serializable]
    public ref class DeliveryRobot {
    public:
        property int RobotID;
        property String^ Name;
        property String^ Status;
        property Point^ Position;
        property int MaxCapacity;
        property List<Loan^>^ Loans;
        property int Battery;
 
        DeliveryRobot() {};
		DeliveryRobot(int id, String^ name, String^ status, int maxCapacity) {
			this->RobotID = id;
			this->Name = name;
			this->Status = status;
			this->MaxCapacity = maxCapacity;
			this->Battery = 100;
            this->Status = "Disponible";
        }

        void AssignLoan();

        void UpdateStatus();

        void ShowPosition();

        void BeginDelivery();

        void DeliverBook();

        void ReturnToLibrary();

        void ShowStatus();

        void Recharge();

        void MoveToPoint();

        void ConfirmDelivery();
    };
}

#endif //_DELIVERYROBOT_H