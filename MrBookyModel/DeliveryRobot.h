/**
 * Project Untitled
 */


#ifndef _DELIVERYROBOT_H
#define _DELIVERYROBOT_H

#include "LoanOrder.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class DeliveryRobot {
    public:
        int RobotID;
        String^ Name;
        String^ Status;
        Point^ Position;
        int MaxCapacity;
        List<Loan^> Loans;
        int Battery;
        LoanOrder Robot;

		DeliveryRobot(int id, String^ name, String^ status, int maxCapacity) {
			this->RobotID = id;
			this->Name = name;
			this->Status = status;
			this->MaxCapacity = maxCapacity;
			this->Battery = 100;
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