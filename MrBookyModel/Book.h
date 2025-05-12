/**
 * Project Untitled
 */


#ifndef _BOOK_H
#define _BOOK_H
using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class Book {
        public:
            int BookID;
            String^ Title;
            String^ Author;
            String^ Publisher;
            int ReleaseYear;
            int Stock;
            String^ Genre;
            List<String^>^ Reviews;
            List<int>^ Stars;
            String^ Description;
            String^ Availability;
            int AvailabilityTime;
            int LoanTime;
            int Weight;

            Book() {};

            void AddReview();

            void CalculateAverageStars();

            void ShowInformation();
    };
}

#endif //_BOOK_H