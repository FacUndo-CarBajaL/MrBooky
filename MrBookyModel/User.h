/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public enum class UserType {Client, Librarian, Administrador};
    [Serializable]
    public ref class User {
        public:
            int UserID;
            String^ Password;
            String^ Email;
            String^ Name;
            String^ FormalName;
            int PhoneNumber;
            int UserType; // '0' for Client, '1' for Librarian, '2' for Administrator
            void Register();

            void Login();

            void Logout();

        User(){}
        User(int id, String^ name, String^ password) {
            this->UserID = id;
            this->Name = name;
            this->Password = password;

        }
    };
}

#endif //_USER_H