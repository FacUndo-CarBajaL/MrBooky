/**
 * Project Untitled
 */


#ifndef _BOOK_H
#define _BOOK_H
using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class Book {
        public:
            int BookID;
            String^ Title;
            String^ Author;
            String^ Publisher;
            int ReleaseYear;
            int Stock;
            String^ Genre;
            String^ Provider;
            List<String^>^ Reviews;
            List<int>^ Stars;
            String^ Description;
            String^ Availability;
            int AvailabilityTime;
            int LoanTime;
            double Weight;
            array<Byte>^ Photo;

            Book() {};

            void AddReview();

            void CalculateAverageStars();

            void ShowInformation();
    };
}

#endif //_BOOK_H