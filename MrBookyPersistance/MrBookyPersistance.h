#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;
using namespace System::IO;
using namespace System::Xml::Serialization;

namespace MrBookyPersistance {
	public ref class Persistance
	{
		// TODO: Agregue aquí los métodos de esta clase.
	public:
		// Métodos para guardar y leer datos de libros en archivos XML
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBookFromXMLFile(String^ fileName);

		//Métodos para guardar y leer los datos de platos en archivos de texto plano
		static void PersistTextFile_User(String^ fileName, Object^ persistObject);
		static Object^ LoadUsersFromTextFile(String^ fileName);
	};
}
