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
        int LoanOrderID;
        Client^ Client;
        DateTime^ LoanDate;
        DateTime^ DueDate;
        List<Loan^>^ Loans;
        Boolean IsDelivery;
        int DeliveryRobotID;
        DeliveryPoint^ DeliveryPoint;

        void AddLoan();

        void ReturnBooks();
    };
}

#endif //_LOANORDER_H