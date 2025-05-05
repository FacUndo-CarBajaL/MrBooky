/**
 * Project Untitled
 */


#ifndef _LOAN_H
#define _LOAN_H

#include "Book.h"
#include "Client.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class Loan {
        public:
            int LoanID;
            Book^ Book;
            //Client^ Client;
            DateTime^ DateLoan;
            DateTime^ ReturnDate;
            String^ Status;

            void GetStatus();

            void ReturnBook();
    };
}

#endif //_LOAN_H