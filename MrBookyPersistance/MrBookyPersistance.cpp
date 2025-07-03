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

int MrBookyPersistance::Persistance::AddRobotBd(DeliveryRobot^ deliveryRobot, int pointId)
{
	int robotId;
	SqlConnection^ conn;
	try {
		//Paso 1: Abrir y obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Preparar la sentencia de BD
		String^ sqlStr = "dbo.usp_AddDeliveryRobot";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@POSITION_ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@MAX_CAPACITY", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@BATTERY", System::Data::SqlDbType::Int);
		SqlParameter^ outputIdParam = gcnew SqlParameter("@DELIVERY_ROBOT_ID", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		cmd->Parameters["@NAME"]->Value = deliveryRobot->Name;
		cmd->Parameters["@STATUS"]->Value = deliveryRobot->Status;
		//Aqui debo ponerle el positionId
		cmd->Parameters["@POSITION_ID"]->Value = pointId;
		cmd->Parameters["@MAX_CAPACITY"]->Value = deliveryRobot->MaxCapacity;
		cmd->Parameters["@BATTERY"]->Value = deliveryRobot->Battery;
		//Paso 3: Ejecutar la sentencia de BD
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		robotId = Convert::ToInt32(cmd->Parameters["@DELIVERY_ROBOT_ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
		return 0;
	}
	finally {
		//Paso 5: Cerrar los objetos de conexión de la BD.
		if (conn != nullptr) conn->Close();
	}
	return robotId;


}

int MrBookyPersistance::Persistance::DeleteRobotBd(int robotId)
{
	SqlConnection^ conn;
	try {
		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_DeleteDeliveryRobot";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@DELIVERY_ROBOT_ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@DELIVERY_ROBOT_ID"]->Value = robotId;

		//Paso 3: Se ejecuta las sentencia SQL
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		//robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

int MrBookyPersistance::Persistance::UpdateRobotBd(DeliveryRobot^ deliveryRobot)
{
	SqlConnection^ conn = nullptr;
	try {

		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_UpdateDeliveryRobot";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@DELIVERY_ROBOT_ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@STATUS", System::Data::SqlDbType::VarChar, 100);
		cmd->Parameters->Add("@POSITION_ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@MAX_CAPACITY", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@BATTERY", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@DELIVERY_ROBOT_ID"]->Value = deliveryRobot->RobotID;
		cmd->Parameters["@NAME"]->Value = deliveryRobot->Name;
		cmd->Parameters["@STATUS"]->Value = deliveryRobot->Status;
		cmd->Parameters["@POSITION_ID"]->Value = deliveryRobot->RobotID;
		cmd->Parameters["@MAX_CAPACITY"]->Value = deliveryRobot->MaxCapacity;
		cmd->Parameters["@BATTERY"]->Value = deliveryRobot->Battery;
		//Paso 3: Se ejecuta las sentncia SQL
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		//robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<DeliveryRobot^>^ MrBookyPersistance::Persistance::QueryAllRobotsBd()
{
	List<DeliveryRobot^>^ robotsList = gcnew List<DeliveryRobot^>();
	Point^ point = gcnew Point(0,0);
	SqlConnection^ conn;
	SqlDataReader^ reader;
	try {
		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Preparar la sentencia SQL
		String^ sqlStr = "dbo.usp_QueryAllDeliveryRobots";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Prepare();

		//Paso 3: Ejecutar la sentencia SQL
		reader = cmd->ExecuteReader();

		//Paso 4: Procesar los resultados
		while (reader->Read()) {
			DeliveryRobot^ deliveryRobot = gcnew DeliveryRobot();
			deliveryRobot->Position = point;
			deliveryRobot->RobotID = Convert::ToInt32(reader["DELIVERY_ROBOT_ID"]->ToString());
			deliveryRobot->Name = reader["NAME"]->ToString();
			deliveryRobot->Status = reader["STATUS"]->ToString();
			//Aqui tengo que traer el punto de ubicacion del robot
			//Se que el pointId es el mismo que el RobotId
			point = QueryPointByIdBd(Convert::ToInt32(reader["POSITION_ID"]->ToString()));
			deliveryRobot->Position->X = point->X;
			deliveryRobot->Position->Y = point->Y;
			deliveryRobot->MaxCapacity = Convert::ToInt32(reader["MAX_CAPACITY"]->ToString());
			deliveryRobot->Battery = Convert::ToInt32(reader["BATTERY"]->ToString());
			robotsList->Add(deliveryRobot);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		//Paso 5: Importante! Cerrar los objetos de conexión a la BD
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return robotsList;


}

DeliveryRobot^ MrBookyPersistance::Persistance::QueryRobotByIdBd(int robotId)
{
	DeliveryRobot^ deliveryRobot;
	Point^ point=gcnew Point(0,0);
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Preparar la sentencia SQL
		String^ sqlStr = "dbo.usp_QueryDeliveryRobotByID";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@DELIVERY_ROBOT_ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@DELIVERY_ROBOT_ID"]->Value = robotId;

		//Paso 3: Ejecutar la sentencia SQL
		reader = cmd->ExecuteReader();

		//Paso 4: Procesar los resultados
		if (reader->Read()) {
			deliveryRobot = gcnew DeliveryRobot();
			deliveryRobot->Position = point;
			deliveryRobot->RobotID = Convert::ToInt32(reader["DELIVERY_ROBOT_ID"]->ToString());
			deliveryRobot->Name = reader["NAME"]->ToString();
			deliveryRobot->Status = reader["STATUS"]->ToString();
			//Aqui tengo que traer el punto de ubicacion del robot
			//Se que el pointId es el mismo que el RobotId
			point = QueryPointByIdBd(Convert::ToInt32(reader["POSITION_ID"]->ToString()));
			deliveryRobot->Position->X = point->X;
			deliveryRobot->Position->Y = point->Y;
			deliveryRobot->MaxCapacity = Convert::ToInt32(reader["MAX_CAPACITY"]->ToString());
			deliveryRobot->Battery = Convert::ToInt32(reader["BATTERY"]->ToString());
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		//Paso 5: Importante! Cerrar los objetos de conexión a la BD
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return deliveryRobot;
	
}

int MrBookyPersistance::Persistance::AddPointBd()
{
	int pointId;
	int PositionId;
	SqlConnection^ conn;
	try {
		//Paso 1: Abrir y obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Preparar la sentencia de BD
		String^ sqlStr = "dbo.usp_AddPoint";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->Add("@X", System::Data::SqlDbType::Decimal);
		cmd->Parameters["@X"]->Precision = 10;
		cmd->Parameters["@X"]->Scale = 2;
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@Y", System::Data::SqlDbType::Decimal);
		cmd->Parameters["@Y"]->Precision = 10;
		cmd->Parameters["@Y"]->Scale = 2;
		SqlParameter^ outputIdParam = gcnew SqlParameter("@POINT_ID", System::Data::SqlDbType::Int);
		outputIdParam->Direction = System::Data::ParameterDirection::Output;
		cmd->Parameters->Add(outputIdParam);
		cmd->Prepare();
		//Por defectoo se crea la ubicacion de un robot en la posicion (0,0)
		cmd->Parameters["@X"]->Value = 0;
		cmd->Parameters["@Y"]->Value = 0;
		//Paso 3: Ejecutar la sentencia de BD
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		pointId = Convert::ToInt32(cmd->Parameters["@POINT_ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
		return 0;
	}
	finally {
		//Paso 5: Cerrar los objetos de conexión de la BD.
		if (conn != nullptr) conn->Close();
	}
	return pointId;
}

int MrBookyPersistance::Persistance::DeletePointBd(int robotId)
{
	SqlConnection^ conn;
	try {
		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_DeletePoint";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@POINT_ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@POINT_ID"]->Value = robotId;

		//Paso 3: Se ejecuta las sentencia SQL
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		//robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;


}

int MrBookyPersistance::Persistance::UpdatePointBd(DeliveryRobot^ deliveryRobot)
{
	SqlConnection^ conn = nullptr;
	try {

		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Se prepara la sentencia
		String^ sqlStr = "dbo.usp_UpdatePoint";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@POINT_ID", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@X", System::Data::SqlDbType::Int);
		cmd->Parameters->Add("@Y", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@POINT_ID"]->Value = deliveryRobot->RobotID;
		cmd->Parameters["@X"]->Value = deliveryRobot->Position->X;
		cmd->Parameters["@Y"]->Value = deliveryRobot->Position->Y;
		//Paso 3: Se ejecuta las sentncia SQL
		cmd->ExecuteNonQuery();

		//Paso 4: Se procesan los resultados
		//robotId = Convert::ToInt32(cmd->Parameters["@ID"]->Value);
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

Point^ MrBookyPersistance::Persistance::QueryPointByIdBd(int pointId)
{
	Point^ point;
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		//Paso 1: Obtener la conexión a la BD
		conn = GetConnection();

		//Paso 2: Preparar la sentencia SQL
		String^ sqlStr = "dbo.usp_QueryPointByID";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->CommandType = System::Data::CommandType::StoredProcedure;
		cmd->Parameters->Add("@POINT_ID", System::Data::SqlDbType::Int);
		cmd->Prepare();
		cmd->Parameters["@POINT_ID"]->Value = pointId;

		//Paso 3: Ejecutar la sentencia SQL
		reader = cmd->ExecuteReader();

		//Paso 4: Procesar los resultados
		if (reader->Read()) {
			point = gcnew Point();
			point->X = Convert::ToInt32(reader["X"]->ToString());
			point->Y = Convert::ToInt32(reader["Y"]->ToString());
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		//Paso 5: Importante! Cerrar los objetos de conexión a la BD
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return point;
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

