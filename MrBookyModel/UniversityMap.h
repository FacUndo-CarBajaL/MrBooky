/**
 * Project Untitled
 */


#ifndef _UNIVERSITYMAP_H
#define _UNIVERSITYMAP_H

#include "Library.h"

using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    [Serializable]
    public ref class UniversityMap {
    public:
        List<Library^> Libraries;
        List<DeliveryPoint^> DeliveriesPoints;

        void AddLibrary();

        void AddDeliveryPoint();

        void ShowMap();
    };
}

#endif //_UNIVERSITYMAP_H