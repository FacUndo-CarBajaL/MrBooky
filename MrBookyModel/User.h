/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class User {
        public:
            int UserID;
            String^ Password;
            String^ Email;
            String^ Name;

            void Register();

            void Login();

            void Logout();
    };
}

#endif //_USER_H