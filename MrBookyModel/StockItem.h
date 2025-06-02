#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace MrBookymodel {
    [Serializable]
    public ref class StockItem
    {
        public:
            int BookID;
            int Quantity;
    };
}

