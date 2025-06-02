#include "pch.h"
#include "MrBookyPersistance.h"
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

void MrBookyPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
	StreamWriter^ writer;
	try {

		// Cargar libros anteriores si existen
		List<Book^>^ allBooks = gcnew List<Book^>();

		// Agregar los nuevos libros
		List<Book^>^ newBooks = safe_cast<List<Book^>^>(persistObject);
		for each (Book ^ book in newBooks) {
			allBooks->Add(book);
		}

		// Guardar la lista completa
		writer = gcnew StreamWriter(fileName);
		XmlSerializer^ serializer = gcnew XmlSerializer(List<Book^>::typeid);
		serializer->Serialize(writer, allBooks);


	}
	catch (Exception^ ex) {
		// Manejo de excepciones
		throw ex;
	}
	finally {
		if (writer != nullptr) {
			writer->Close();
		}
	}
}

Object^ MrBookyPersistance::Persistance::LoadBookFromXMLFile(String^ fileName)
{
	StreamReader^ reader;
	Object^ result = gcnew List<Book^>();
	XmlSerializer^ serializer;

	try {
		if (File::Exists(fileName)) {
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
		if (reader != nullptr) {
			reader->Close();
		}
	}
	return result;
}

void MrBookyPersistance::Persistance::PersistTextFile_User(String^ fileName, Object^ persistObject)
{
	FileStream^ file = nullptr;
	StreamWriter^ writer = nullptr;
	try {
		file = gcnew FileStream(fileName, FileMode::Append, FileAccess::Write);
		writer = gcnew StreamWriter(file);
		if (persistObject->GetType() == List<User^>::typeid) {
			List<User^>^ users = (List<User^>^) persistObject;
			int type = -1;
			for (int i = 0; i < users->Count; i++) {
				User^ user = users[i];
				if (user->GetType() == Client::typeid)
                    type = static_cast<int>(UserType::Client);
				if (user->GetType() == Librarian::typeid)
					type = static_cast<int>(UserType::Librarian);

				writer->WriteLine("{0}|{1}|{2}|{3}",
					user->UserID, user->Name, user->Password, type);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (writer != nullptr) writer->Close();
		if (file != nullptr) file->Close();
	}
}

Object^ MrBookyPersistance::Persistance::LoadUsersFromTextFile(String^ fileName)
{
	FileStream^ file;
	StreamReader^ reader;
	Object^ result = gcnew List<User^>();
	try {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		while (!reader->EndOfStream) {
			String^ line = reader->ReadLine();
			array<String^>^ record = line->Split('|');
			int type = Int32::Parse(record[3]);
			UserType userType = static_cast<UserType>(type);
			User^ user = nullptr;
			switch (userType) {
			case UserType::Client:
				user = gcnew Client(Int32::Parse(record[0]), record[1], record[2]);
				break;
			case UserType::Librarian:
				user = gcnew Librarian(Int32::Parse(record[0]), record[1], record[2]);
				break;
			}
			((List<User^>^)result)->Add(user);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}

void MrBookyPersistance::Persistance::PersistTextFile_Robot(String^ fileName, Object^ persistObject)
{
	FileStream^ file = nullptr;
	StreamWriter^ writer = nullptr;
	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		writer = gcnew StreamWriter(file);
		if (persistObject->GetType() == List<DeliveryRobot^>::typeid) {
			List<DeliveryRobot^>^ robots = (List<DeliveryRobot^>^) persistObject;
			for (int i = 0; i < robots->Count; i++) {
				DeliveryRobot^ robot = robots[i];
				writer->WriteLine("{0}|{1}|{2}|{3}",
					robot->RobotID, robot->Name, robot->Status, robot->MaxCapacity);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (writer != nullptr) writer->Close();
		if (file != nullptr) file->Close();
	}
}

Object^ MrBookyPersistance::Persistance::LoadRobotsFromTextFile(String^ fileName)
{
	// TODO: Insertar una instrucción "return" aquí
	FileStream^ file;
	StreamReader^ reader;
	Object^ result = gcnew List<DeliveryRobot^>();
	try {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		while (!reader->EndOfStream) {
			String^ line = reader->ReadLine();
			array<String^>^ record = line->Split('|');
            DeliveryRobot^ robot = gcnew DeliveryRobot(Int32::Parse(record[0]), record[1], record[2], Int32::Parse(record[3]));
			((List<DeliveryRobot^>^)result)->Add(robot);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}

void MrBookyPersistance::Persistance::PersistLibrariesXMLFile(String^ fileName, Object^ persistObject)
{
	StreamWriter^ writer;
	try {

		// Cargar librerias anteriores si existen
		List<Library^>^ allLibraries = gcnew List<Library^>();

		// Agregar las nuevas bibliotecas
		List<Library^>^ newLibraries = safe_cast<List<Library^>^>(persistObject);
		for each (Library ^ library in newLibraries) {
			allLibraries->Add(library);
		}

		// Guardar la lista completa
		writer = gcnew StreamWriter(fileName);
		XmlSerializer^ serializer = gcnew XmlSerializer(List<Book^>::typeid);
		serializer->Serialize(writer, allLibraries);


	}
	catch (Exception^ ex) {
		// Manejo de excepciones
		throw ex;
	}
	finally {
		if (writer != nullptr) {
			writer->Close();
		}
	}
}

Object^ MrBookyPersistance::Persistance::LoadLibrariesFromXMLFile(String^ fileName)
{
	StreamReader^ reader;
	Object^ result = gcnew List<Library^>();
	XmlSerializer^ serializer;

	try {
		if (File::Exists(fileName)) {
			reader = gcnew StreamReader(fileName);
			serializer = gcnew XmlSerializer(List<Library^>::typeid);
			result = (List<Library^>^) serializer->Deserialize(reader);
		}
	}
	catch (Exception^ ex) {
		// Manejo de excepciones
		throw ex;
	}
	finally {
		if (reader != nullptr) {
			reader->Close();
		}
	}
	return result;
}

void MrBookyPersistance::Persistance::PersistBinaryFileLibraries(String^ fileName, Object^ persistObject)
{
	FileStream^ file;
	BinaryFormatter^ formatter = gcnew BinaryFormatter();
	try {
		file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		formatter->Serialize(file, persistObject);
	}
	catch (Exception^ ex) { throw ex; }
	finally {
		if (file != nullptr) file->Close();
		delete file;
	}

}

Object^ MrBookyPersistance::Persistance::LoadBinaryFileLibraries(String^ fileName)
{
	FileStream^ file;
	Object^ result;
	BinaryFormatter^ formatter;
	try {
		if (File::Exists(fileName)) {
			file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
			formatter = gcnew BinaryFormatter();
			result = formatter->Deserialize(file);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (file != nullptr) file->Close();
		delete file;
	}
	return result;
}



void MrBookyPersistance::Persistance::PersistTextFile_Book(String^ fileName, Object^ persistObject)
{
	FileStream^ file = nullptr;
	StreamWriter^ writer = nullptr;
	try {
		file = gcnew FileStream(fileName, FileMode::Append, FileAccess::Write);
		writer = gcnew StreamWriter(file);
		if (persistObject->GetType() == List<Book^>::typeid) {
			List<Book^>^ books = (List<Book^>^) persistObject;
			for (int i = 0; i < books->Count; i++) {
				Book^ book = books[i];

				writer->WriteLine("{0}|{1}|{2}|{3}|{4}|{5}",
					book->BookID, book->Title, book->Author, book->Publisher, book->Genre, book->Quantity);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (writer != nullptr) writer->Close();
		if (file != nullptr) file->Close();
	}
}

Object^ MrBookyPersistance::Persistance::LoadBooksFromTextFile(String^ fileName)
{
	FileStream^ file;
	StreamReader^ reader;
	Object^ result = gcnew List<Book^>();
	try {
		file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
		reader = gcnew StreamReader(file);
		while (!reader->EndOfStream) {
			String^ line = reader->ReadLine();
			array<String^>^ record = line->Split('|');
			Book^ book = gcnew Book();
			book->BookID = Int32::Parse(record[0]);
			book->Title = record[1];
			book->Author = record[2];
			book->Publisher = record[3];
			book->Genre = record[4];
			book->Quantity = Int32::Parse(record[5]);
			((List<Book^>^)result)->Add(book);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (file != nullptr) file->Close();
	}
	return result;
}

