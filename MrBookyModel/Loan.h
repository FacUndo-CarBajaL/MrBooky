/**
 * Project Untitled
 */


#ifndef _LOAN_H
#define _LOAN_H

#include "Book.h"
#include "Client.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace MrBookyModel {
    [Serializable]
    public ref class Loan {
        public:
            int LoanID;
            int Quantity;
            Book^ Book;
            Client^ Client;
            DateTime^ DateLoan;
            DateTime^ ReturnDate;
            String^ Status;

            Loan() {};
            void GetStatus();
            void ReturnBook();
    };
}

#endif //_LOAN_H