/**
 * Project Untitled
 */


#ifndef _CLIENT_H
#define _CLIENT_H

#include "User.h"
#include "Loan.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class Client : public User {
        public:
            int StudentCode;
            List<String^>^ Preferences;
			//List<Loan^>^ LoanHistory;

            void AddPreference();

            void ReviewBook();

            void AddBookToCart();

            void RemoveBookFromCart();

            void MakeLoanOrder();

            void SeeLoanHistory();

            void ReturnBook();
    };
}

#endif //_CLIENT_H