/**
 * Project Untitled
 */


#ifndef _LIBRARY_H
#define _LIBRARY_H

#include "Book.h"
#include "Loan.h"
#include "DeliveryRobot.h"
#include "Librarian.h"
#include "StockItem.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace MrBookyModel {
    [Serializable]
    public ref class Library {
    public:
        int LibraryID;
        String^ Name;
        String^ ContactEmail;
        String^ OpeningHour;
        String^ CloseHour;
        Double X;
        Double Y;
        List<Book^>^ Catalogue;
        List<Librarian^>^ Staff;
        List<Loan^>^ Loans;
        List<DeliveryRobot^> Robots;

        Library() {};
        Library(String^ name, String^ email, String^ openHour, String^ closeHour, Double x, Double y) {
			this->Name = name;
			this->ContactEmail = email;
			this->OpeningHour = openHour;
			this->CloseHour = closeHour;
            this->X = x;
            this->Y = y;
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