/**
 * Project Untitled
 */


#ifndef _LOANCART_H
#define _LOANCART_H
#include "CartItem.h"
#include "Loan.h"
#include "DeliveryPoint.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class LoanCart {
    public:
        int LoanCartID;
        Client^ Client;
        List<Loan^>^ Loans;
        Boolean IsDelivery;
        int DeliveryRobotID;
        DeliveryPoint^ DeliveryPoint;
        String^ Library;
        double DeliveryRobotMaxCapacity;

        /**
         * @param Book^ book
         * @param int quantity
         */

        LoanCart() {
            Loans = gcnew List<Loan^>();
        };

        void AddBook(Book^ book, int quantity);

        void RemoveBook();

        void UpdateQuantity();

        void FinishOrder();

        void CalculateTotalItems();

        void CalculateSumWeight();
    };
}

#endif //_LOANCART_H