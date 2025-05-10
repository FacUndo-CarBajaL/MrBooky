#include "pch.h"

#include "MrBookyPersistance.h"

void MrBookyPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
	StreamWriter^ writer;
    try {
		writer = gcnew StreamWriter(fileName);
		if (persistObject->GetType() == List<Book^>::typeid) {
			XmlSerializer^ serializer = gcnew XmlSerializer(List<Book^>::typeid);
			serializer->Serialize(writer, (List<Book^>^)persistObject);
		}
	}
	catch (Exception^ ex) {
		// Manejo de excepciones
		throw ex;
	}
	finally {
		if (writer != nullptr)
			writer->Close();
	}
}

Object^ MrBookyPersistance::Persistance::LoadBookFromXMLFile(String^ fileName)
{
    // TODO: Insertar una instrucción "return" aquí
	StreamReader^ reader;
	Object^ result = gcnew List<Book^>();
	XmlSerializer^ serializer;

	try {
		if (!File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			serializer = gcnew XmlSerializer(List<Book^>::typeid);
			result = (List<Book^>^) serializer->Deserialize(reader);
		}
	}
	catch (Exception^ ex) {
		// Manejo de excepciones
		throw ex;
	}
	finally {
		if (reader != nullptr)
			reader->Close();
	}
	return result;
}
