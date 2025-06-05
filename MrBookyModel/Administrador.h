#pragma once
#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H

#include "User.h"


using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class Administrador : public User {
    public:

        Administrador() {}
        Administrador(int id, String^ name, String^ password) : User(id, name, password) {}
    };
}

#endif //_CLIENT_H