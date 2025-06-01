/**
 * Project Untitled
 */


#ifndef _CARTITEM_H
#define _CARTITEM_H

#include "Book.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class CartItem {
    public:
		int CartItemID;
        Book^ book;
        int Quantity;

        void UpdateQuantity();
    };
}

#endif //_CARTITEM_H