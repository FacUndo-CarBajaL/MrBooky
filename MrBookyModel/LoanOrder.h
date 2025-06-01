/**
 * Project Untitled
 */


#ifndef _LOANORDER_H
#define _LOANORDER_H

#include "DeliveryPoint.h"
#include "Loan.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class LoanOrder {
    public:
        property int LoanOrderID;
        property Client^ Client;
        property DateTime^ LoanDate;
        property DateTime^ DueDate;
        property List<Loan^>^ Loans;
        property Boolean IsDelivery;
        property int DeliveryRobotID;
        property DeliveryPoint^ DeliveryPoint;

        LoanOrder() {
            Loans = gcnew List<Loan^>();
        };
        void AddLoan();

        void ReturnBooks();
    };
}

#endif //_LOANORDER_H