#include "pch.h"
#include "MrBookyPersistance.h"
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

SqlConnection^ MrBookyPersistance::Persistance::GetConnection()
{
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "YkvBHsafVKf7$"; // "1INF53_POO#123";
	String^ serverName = "200.16.7.140";
	conn->ConnectionString = "Server=" + serverName + ";Database = a20222014;User ID = a20222014; Password = " +
		password + ";";
	conn->Open();
	return conn;
}

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

void MrBookyPersistance::Persistance::PersistBinaryFileUsers(String^ fileName, Object^ persistObject)
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

Object^ MrBookyPersistance::Persistance::LoadBinaryFileUsers(String^ fileName)
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

void MrBookyPersistance::Persistance::PersistBinaryFileRobots(String^ fileName, Object^ persistObject)
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

Object^ MrBookyPersistance::Persistance::LoadBinaryFileRobots(String^ fileName)
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

void MrBookyPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
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

Object^ MrBookyPersistance::Persistance::LoadBinaryFile(String^ fileName)
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

void MrBookyPersistance::Persistance::UserRAMBinaryFile(String^ fileName, Object^ persistObject)
{
	FileStream^ UserRAMfile = nullptr;
	BinaryFormatter^ UserRAMformatter = gcnew BinaryFormatter();
	try {
		UserRAMfile = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		UserRAMformatter->Serialize(UserRAMfile, persistObject);
	}
	catch (Exception^ ex) { throw ex; }
	finally {
		if (UserRAMfile != nullptr) UserRAMfile->Close();
	}
}

void MrBookyPersistance::Persistance::AddBooksSQL(Book^ book)
{
	SqlConnection^ conn = GetConnection();
	try {
		conn = GetConnection();

		String^ sqlStr = "dbo.usp_AddBook";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value=book->BookID;
		cmd->Parameters->Add("@Title", System::Data::SqlDbType::VarChar,500)->Value = book->Title;
		cmd->Parameters->Add("@Author", System::Data::SqlDbType::VarChar,500)->Value = book->Author;
		cmd->Parameters->Add("@Publisher", System::Data::SqlDbType::VarChar,500)->Value = book->Publisher;
		cmd->Parameters->Add("@Release_YEAR", System::Data::SqlDbType::Int)->Value = book->ReleaseYear;
		cmd->Parameters->Add("@Genre", System::Data::SqlDbType::VarChar, 500)->Value = book->Genre;
		cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int)->Value = book->Quantity;
		cmd->Parameters->Add("@GENRE", System::Data::SqlDbType::VarChar, 50)->Value = book->Genre;
		cmd->Parameters->Add("@DESCRIPTION_BOOK", System::Data::SqlDbType::VarChar, 500)->Value = book->Description;
		cmd->Parameters->Add("@AVAILABILITY_BOOK", System::Data::SqlDbType::VarChar, 50)->Value = book->Availability;
		cmd->Parameters->Add("@LOAN_TIME", System::Data::SqlDbType::Int)->Value = book->LoanTime;
		cmd->Parameters->Add("@WEIGHT_BOOK", System::Data::SqlDbType::Decimal)->Value = Decimal(book->Weight);
		cmd->Parameters["@WEIGHT_BOOK"]->Precision = 5;
		cmd->Parameters["@WEIGHT_BOOK"]->Scale = 2;

		if (book->Photo != nullptr)
			cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = book->Photo;
		else
			cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image)->Value = DBNull::Value;

		cmd->ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
		delete conn;
	}
}

void MrBookyPersistance::Persistance::RAMBinaryFile(String^ fileName, Object^ persistObject)
{
	FileStream^ RAMfile = nullptr;
	BinaryFormatter^ RAMformatter = gcnew BinaryFormatter();
	try {
		RAMfile = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
		RAMformatter->Serialize(RAMfile, persistObject);
	}
	catch (Exception^ ex) { throw ex; }
	finally {
		if (RAMfile != nullptr) RAMfile->Close();
	}
}

List<Book^>^ MrBookyPersistance::Persistance::GetAllBooksSQL()
{
	List<Book^>^ books = gcnew List<Book^>();
	SqlConnection^ conn = nullptr;

	try {
		conn = GetConnection();
		String^ sqlStr = "dbo.usp_QueryAllBooks";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		SqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Book^ book = gcnew Book();
			book->BookID = Convert::ToInt32(reader["ID"]);
			book->Title = reader["TITLE"]->ToString();
			book->Author = reader["AUTHOR"]->ToString();
			book->Publisher = reader["PUBLISHER"]->ToString();
			book->ReleaseYear = Convert::ToInt32(reader["RELEASE_YEAR"]);
			book->Quantity = Convert::ToInt32(reader["STOCK"]);
			book->Genre = reader["GENRE"]->ToString();
			book->Description = reader["DESCRIPTION_BOOK"]->ToString();
			book->Availability = reader["AVAILABILITY_BOOK"]->ToString();
			book->LoanTime = Convert::ToInt32(reader["LOAN_TIME"]);
			book->Weight = Convert::ToDouble(reader["WEIGHT_BOOK"]);

			if (!reader["PHOTO"]->Equals(DBNull::Value)) {
				array<Byte>^ photoData = (array<Byte>^)reader["PHOTO"];
				book->Photo = photoData;
			}
			else {
				book->Photo = nullptr;
			}

			books->Add(book);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return books;
}

int MrBookyPersistance::Persistance::UpdateBookSQL(Book^ book)
{
	int result = 0;
	SqlConnection^ conn = nullptr;

	try {
		// Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		// Paso 2: Preparar la sentencia
		String^ sqlStr = "dbo.usp_UpdateBook";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;

		// Paso 3: Agregar parámetros
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@TITLE", System::Data::SqlDbType::VarChar, 500);
		cmd->Parameters->Add("@AUTHOR", System::Data::SqlDbType::VarChar, 500);
		cmd->Parameters->Add("@PUBLISHER", System::Data::SqlDbType::VarChar, 500);
		cmd->Parameters->Add("@RELEASE_YEAR", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@STOCK", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@GENRE", System::Data::SqlDbType::VarChar, 50);
		cmd->Parameters->Add("@DESCRIPTION_BOOK", System::Data::SqlDbType::VarChar, 500);
		cmd->Parameters->Add("@AVAILABILITY_BOOK", System::Data::SqlDbType::VarChar, 50);
		cmd->Parameters->Add("@LOAN_TIME", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@WEIGHT_BOOK", System::Data::SqlDbType::Decimal);
		cmd->Parameters["@WEIGHT_BOOK"]->Precision = 5;
		cmd->Parameters["@WEIGHT_BOOK"]->Scale = 2;
		cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);

		// Paso 4: Asignar valores
		cmd->Parameters["@ID"]->Value = book->BookID;
		cmd->Parameters["@TITLE"]->Value = book->Title;
		cmd->Parameters["@AUTHOR"]->Value = book->Author;
		cmd->Parameters["@PUBLISHER"]->Value = book->Publisher;
		cmd->Parameters["@RELEASE_YEAR"]->Value = book->ReleaseYear;
		cmd->Parameters["@STOCK"]->Value = book->Quantity;
		cmd->Parameters["@GENRE"]->Value = book->Genre;
		cmd->Parameters["@DESCRIPTION_BOOK"]->Value = book->Description;
		cmd->Parameters["@AVAILABILITY_BOOK"]->Value = book->Availability;
		cmd->Parameters["@LOAN_TIME"]->Value = book->LoanTime;
		cmd->Parameters["@WEIGHT_BOOK"]->Value = Decimal(book->Weight);

		if (book->Photo == nullptr)
			cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
		else
			cmd->Parameters["@PHOTO"]->Value = book->Photo;

		// Paso 5: Ejecutar la sentencia
		cmd->ExecuteNonQuery();
		result = 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return result;
}


int MrBookyPersistance::Persistance::DeleteBookSQL(int bookId) {
	SqlConnection^ conn = nullptr;

	try {
		conn = GetConnection();
		String^ sqlStr = "dbo.usp_DeleteBook";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@BookID", System::Data::SqlDbType::Int)->Value = bookId;

		cmd->ExecuteNonQuery();
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return 0;
}

void MrBookyPersistance::Persistance::AddLibrarianSQL(User^ user)
{
	SqlConnection^ conn = nullptr;
	try {
		conn = GetConnection();

		String^ sqlStr = "dbo.usp_AddLibrarian";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;

		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int)->Value = user->UserID;
		cmd->Parameters->Add("@PASSWORD_USER", System::Data::SqlDbType::VarChar, 20)->Value = user->Password;
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 100)->Value = user->Email;
		cmd->Parameters->Add("@NAME_USER", System::Data::SqlDbType::VarChar, 100)->Value = user->Name;
		cmd->Parameters->Add("@FULL_NAME", System::Data::SqlDbType::VarChar, 200)->Value = user->FormalName;
		cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15)->Value = user->PhoneNumber.ToString();

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
}

List<Librarian^>^ MrBookyPersistance::Persistance::GetAllLibrariansSQL()
{
	List<Librarian^>^ librarians = gcnew List<Librarian^>();
	SqlConnection^ conn = nullptr;

	try {
		conn = GetConnection();
		String^ sqlStr = "dbo.usp_QueryAllLibrarians";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		SqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Librarian^ librarian = gcnew Librarian();
			librarian->UserID = Convert::ToInt32(reader["ID"]);
			librarian->Password = reader["PASSWORD_USER"]->ToString();
			librarian->Email = reader["EMAIL"]->ToString();
			librarian->Name = reader["NAME_USER"]->ToString();
			librarian->FormalName = reader["FULL_NAME"]->ToString();
			librarian->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]);
			librarians->Add(librarian);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return librarians;
}


int MrBookyPersistance::Persistance::UpdateLibrarianSQL(Librarian^ librarian)
{
	int result = 0;
	SqlConnection^ conn = nullptr;

	try {
		// Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		// Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_UpdateLibrarian";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;

		// Paso 3: Agregar parámetros
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@PASSWORD_USER", System::Data::SqlDbType::VarChar, 20);
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@NAME_USER", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@FULL_NAME", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15);

		cmd->Prepare();

		// Paso 4: Asignar valores
		cmd->Parameters["@ID"]->Value = librarian->UserID;
		cmd->Parameters["@PASSWORD_USER"]->Value = librarian->Password;
		cmd->Parameters["@EMAIL"]->Value = librarian->Email;
		cmd->Parameters["@NAME_USER"]->Value = librarian->Name;
		cmd->Parameters["@FULL_NAME"]->Value = librarian->FormalName;
		cmd->Parameters["@PHONE_NUMBER"]->Value = librarian->PhoneNumber.ToString();

		// Paso 5: Ejecutar sentencia
		cmd->ExecuteNonQuery();
		result = 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return result;
}

void MrBookyPersistance::Persistance::AddClientSQL(Client^ client)
{
	SqlConnection^ conn = nullptr;

	try {
		// Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		// Paso 2: Preparar la sentencia
		String^ sqlStr = "dbo.usp_AddClient";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;

		// Paso 3: Agregar parámetros
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@PASSWORD_USER", System::Data::SqlDbType::VarChar, 20);
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@NAME_USER", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@FULL_NAME", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15);
		cmd->Parameters->Add("@STUDENT_CODE", System::Data::SqlDbType::Int);

		cmd->Prepare();

		// Paso 4: Asignar valores
		cmd->Parameters["@ID"]->Value = client->UserID;
		cmd->Parameters["@PASSWORD_USER"]->Value = client->Password;
		cmd->Parameters["@EMAIL"]->Value = client->Email;
		cmd->Parameters["@NAME_USER"]->Value = client->Name;
		cmd->Parameters["@FULL_NAME"]->Value = client->FormalName;
		cmd->Parameters["@PHONE_NUMBER"]->Value = client->PhoneNumber.ToString();
		cmd->Parameters["@STUDENT_CODE"]->Value = client->StudentCode;

		// Paso 5: Ejecutar sentencia
		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
}


List<Client^>^ MrBookyPersistance::Persistance::GetAllClientsSQL()
{
	List<Client^>^ clients = gcnew List<Client^>();
	SqlConnection^ conn = nullptr;
	SqlDataReader^ reader;

	try {
		// Paso 1: Obtener conexión
		conn = GetConnection();

		// Paso 2: Preparar sentencia
		String^ sqlStr = "dbo.usp_QueryAllClients";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);

		// Paso 3: Ejecutar y leer
		reader = cmd->ExecuteReader();
		while (reader->Read()) {
			Client^ client = gcnew Client();
			client->UserID = Convert::ToInt32(reader["ID"]);
			client->Password = reader["PASSWORD_USER"]->ToString();
			client->Email = reader["EMAIL"]->ToString();
			client->Name = reader["NAME_USER"]->ToString();
			client->FormalName = reader["FULL_NAME"]->ToString();
			client->PhoneNumber = Convert::ToInt32(reader["PHONE_NUMBER"]);
			client->StudentCode = Convert::ToInt32(reader["STUDENT_CODE"]);
			clients->Add(client);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return clients;
}

int MrBookyPersistance::Persistance::UpdateClientSQL(Client^ client)
{
	int result = 0;
	SqlConnection^ conn = nullptr;

	try {
		// Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		// Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_UpdateClient";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;

		// Paso 3: Agregar parámetros
		cmd->Parameters->Add("@ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@PASSWORD_USER", System::Data::SqlDbType::VarChar, 20);
		cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@NAME_USER", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@FULL_NAME", System::Data::SqlDbType::VarChar, 200);
		cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 15);
		cmd->Parameters->Add("@STUDENT_CODE", System::Data::SqlDbType::Int);

		cmd->Prepare();

		// Paso 4: Asignar valores
		cmd->Parameters["@ID"]->Value = client->UserID;
		cmd->Parameters["@PASSWORD_USER"]->Value = client->Password;
		cmd->Parameters["@EMAIL"]->Value = client->Email;
		cmd->Parameters["@NAME_USER"]->Value = client->Name;
		cmd->Parameters["@FULL_NAME"]->Value = client->FormalName;
		cmd->Parameters["@PHONE_NUMBER"]->Value = client->PhoneNumber.ToString();
		cmd->Parameters["@STUDENT_CODE"]->Value = client->StudentCode;

		// Paso 5: Ejecutar sentencia
		cmd->ExecuteNonQuery();
		result = 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return result;
}




