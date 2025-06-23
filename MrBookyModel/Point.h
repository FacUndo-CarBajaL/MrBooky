/**
 * Project Untitled
 */


#ifndef _POINT_H
#define _POINT_H

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace MrBookyModel {
    [Serializable]
    public ref class Point {
        public:
            int X;
            int Y;

        public:

            void ShowPosition();
            Point() {};
            Point(int x, int y) {
                this->X = x;
                this->Y = y;
            }
    };
}

#endif //_POINT_H'