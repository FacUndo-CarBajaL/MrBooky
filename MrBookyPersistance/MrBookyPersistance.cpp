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

