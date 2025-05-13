#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace MrBookyModel {
    public ref class LibroResultadoDTO
    {
    public:
        String^ Titulo;
        String^ Descripcion;
        String^ Autor;
        String^ Estado;
    };
}