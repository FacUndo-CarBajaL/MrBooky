#pragma once  
 

#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h" 

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
	[Serializable]
	public ref class Admin : public User {
	public:
		
		Admin() {}
		Admin(int id, String^ name, String^ password) : User(id, name, password) {}
	};
}


#endif //_ADMIN_H
