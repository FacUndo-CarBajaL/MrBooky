/**
 * Project Untitled
 */


#ifndef _DELIVERYPOINT_H
#define _DELIVERYPOINT_H

#include "Point.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class DeliveryPoint {
    public:
        int DeliveryPointID;
        String^ Name;
        Point^ Position;
    };
}

#endif //_DELIVERYPOINT_H