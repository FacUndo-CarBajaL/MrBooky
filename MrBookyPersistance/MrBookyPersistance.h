#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Data::SqlClient;

namespace MrBookyPersistance {
	public ref class Persistance
	{
	private:
		static SqlConnection^ GetConnection();
	public:
		// Métodos para guardar y leer datos de libros en archivos XML
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBookFromXMLFile(String^ fileName);

		//Métodos para guardar y leer los datos de usuarios en archivos de texto plano
		static void PersistTextFile_User(String^ fileName, Object^ persistObject);
		static Object^ LoadUsersFromTextFile(String^ fileName);
		//Métodos para guardar y leer los datos de usuarios en archivos binarios
		static void PersistBinaryFileUsers(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFileUsers(String^ fileName);



		// Métodos para guardar y leer los datos de robots en archivos de texto plano
		static void PersistTextFile_Robot(String^ fileName, Object^ persistObject);
		static Object^ LoadRobotsFromTextFile(String^ fileName);
		// Métodos para guardar y leer los datos de robots en archivos binarios
		static void PersistBinaryFileRobots(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFileRobots(String^ fileName);


		// Métodos para guardar y leer los datos de bibliotecas en archivos xml
		static void PersistLibrariesXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadLibrariesFromXMLFile(String^ fileName);
		// Métodos para guardar y leer los datos de bibliotecas en archivos binarios
		static void PersistBinaryFileLibraries(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFileLibraries(String^ fileName);


		//Métodos para guardar y leer los datos de libros en archivos de texto plano
		static void PersistTextFile_Book(String^ fileName, Object^ persistObject);
		static Object^ LoadBooksFromTextFile(String^ fileName);

		//Métodos para guardar y leer elementos en archivos binarios
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);

		//Memoria RAM
		static void RAMBinaryFile(String^ fileName, Object^ persistObject);
		static void UserRAMBinaryFile(String^ fileName, Object^ persistObject);

		//para bookrequest: tener en cuenta la cantidad y los prestamos de un dia
		//static void PersistLoanOrdersTodayToXMLFile(String^ fileName, List<LoanOrder^>^ loanOrders);
		//static List<LoanOrder^>^ LoadLoanOrdersTodayFromXMLFile(String^ fileName);

		static void AddBooksSQL(Book^ book);
		static List<Book^>^ GetAllBooksSQL();
		static int UpdateBookSQL(Book^ book);
		static int DeleteBookSQL(int bookId);
		static Book^ GetBookByIdSQL(int bookId);

		static void AddLibrarianSQL(User^ user);
		static List<Librarian^>^ GetAllLibrariansSQL();
		static int UpdateLibrarianSQL(Librarian^ librarian);
		static int DeleteLibrarianSQL(int librarianId);
		static Librarian^ GetLibrarianByIdSQL(int librarianId);

		static void AddClientSQL(Client^ user);
		static List<Client^>^ GetAllClientsSQL();
		static int UpdateClientSQL(Client^ client);
		static int DeleteClientSQL(int clientId);
		static Client^ GetClientByIdSQL(int clientId);

		static void AddLibrarySQL(Library^ library);
		static List<Library^>^ GetAllLibrariesSQL();
		static int DeleteLibrarySQL(int libraryId);
		static int UpdateLibrarySQL(Library^ library);
		static Library^ GetLibraryByIdSQL(int libraryId);

		//Persistencia  de robot con babse de datos
		static int AddRobotBd(DeliveryRobot^ deliveryRobot, int pointId);
		static int DeleteRobotBd(int robotId);
		static int UpdateRobotBd(DeliveryRobot^ deliveryRobot);
		static List <DeliveryRobot^>^ QueryAllRobotsBd();
		static DeliveryRobot^ QueryRobotByIdBd(int robotId);


		//Persistencia  de Punto de ubicacion del robot con base de datos
		static int AddPointBd();
		static int DeletePointBd(int robotId);
		static int UpdatePointBd(DeliveryRobot^ deliveryRobot);
		static Point^ QueryPointByIdBd(int pointId);
	};
}