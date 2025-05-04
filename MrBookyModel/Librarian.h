/**
 * Project Untitled
 */


#ifndef _LIBRARIAN_H
#define _LIBRARIAN_H

#include "User.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class Librarian : public User {
    public:

        void ProcessLoanOrder();

        void RegisterBook();

        void RemoveBook();

        void CheckUserHistory();

        void CheckBookAvailability();

        void UpdateBookStatus();

        void UpdateStock();

        void CheckStock();

        void RegisterEmployee();

        void MakeDailyReport();
    };
}

#endif //_LIBRARIAN_H