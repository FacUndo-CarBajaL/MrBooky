/**
 * Project Untitled
 */


#ifndef _LIBRARY_H
#define _LIBRARY_H

#include "Book.h"
#include "Point.h"
#include "Loan.h"
#include "DeliveryRobot.h"
#include "Librarian.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class Library {
    public:
        int LibraryID;
        String^ Name;
        String^ ContactEmail;
        String^ OpeningHour;
        String^ CloseHour;
        Point^ Position;
        List<Book^>^ Catalogue;
        Dictionary<int, int>^ Stock;
        List<Librarian^>^ Staff;
        List<Loan^>^ Loans;
        List<DeliveryRobot^> Robots;

        Library(int id, String^ name, String^ email, String^ openHour, String^ closeHour) {
			this->LibraryID = id;
			this->Name = name;
			this->ContactEmail = email;
			this->OpeningHour = openHour;
			this->CloseHour = closeHour;
        }

        void ShowPosition();

        void AddBook();

        void SearchBook();

        void RemoveBook();

        void AddStaff();

        void RemoveStaff();

        void ManageLoans();

        void CheckBookAvilability();

        void RegisterNewLoan();

        void GenerateReport();

        void BeginDelivery();

        void ReturnBook();
    };
}

#endif //_LIBRARY_H