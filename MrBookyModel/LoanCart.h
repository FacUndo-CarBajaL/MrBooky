/**
 * Project Untitled
 */


#ifndef _LOANCART_H
#define _LOANCART_H
#include "CartItem.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class LoanCart {
    public:
        int CartID;
        List<CartItem^>^ Items;
        int Library;
        int DeliveryRobotMaxCapacity;

        /**
         * @param Book^ book
         * @param int quantity
         */
        void AddBook(Book^ book, int quantity);

        void RemoveBook();

        void UpdateQuantity();

        void FinishOrder();

        void CalculateTotalItems();

        void CalculateSumWeight();
    };
}

#endif //_LOANCART_H