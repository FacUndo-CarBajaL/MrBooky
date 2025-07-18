/**
 * Project Untitled
 */


#ifndef _LIBRARIAN_H
#define _LIBRARIAN_H

#include "User.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
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

        Librarian(){
            UserType = 1;
        }
        Librarian(int id, String^ name, String^ password) : User(id, name, password) {
            UserType = 1;
        }
    };
}

#endif //_LIBRARIAN_H