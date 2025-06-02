/**
 * Project Untitled
 */


#ifndef _BOOK_H
#define _BOOK_H
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace MrBookyModel {
    [Serializable]
    public ref class Book {
        public:
            int BookID;
            String^ Title;
            String^ Author;
            String^ Publisher;
            int ReleaseYear;
            int Quantity;
            String^ Genre;
            List<String^>^ Reviews;
            List<int>^ Stars;
            String^ Description;
            String^ Availability;
            String^ Provider;
            int AvailabilityTime;
            int LoanTime;
            int Weight;

            void AddReview();

            void CalculateAverageStars();

            void ShowInformation();

            Book() {};
            Book(String^ title, String^ author, String^ genre, String^ publisher, int quantity, String^ provider, String^ description) {
                this->Title = title;
                this->Genre = genre;
                this->Author = author;
                this->Publisher = publisher;
                this->Quantity = quantity;
                this->Provider = provider;
                this->Description = description;
            }

    };
}

#endif //_BOOK_H