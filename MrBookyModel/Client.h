/**
 * Project Untitled
 */


#ifndef _CLIENT_H
#define _CLIENT_H

#include "User.h"


using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class Client : public User {
        public:
            int StudentCode;
            List<String^>^ Preferences;


            void AddPreference();

            void ReviewBook();

            void AddBookToCart();

            void RemoveBookFromCart();

            void MakeLoanOrder();

            void SeeLoanHistory();

            void ReturnBook();

            Client(){
				UserType = '0'; // Client
            }
            Client(int id, String^ name, String^ password) : User(id, name, password){
                UserType = '0'; // Client
            }
    };
}

#endif //_CLIENT_H