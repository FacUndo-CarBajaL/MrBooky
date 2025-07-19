#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;
using namespace MrBookyPersistance;
using namespace System::IO::Ports;

namespace MrBookyController {
	public enum class Protocol {
		UART,
		NMEA
	};

	public ref class Controller
	{


	public:
		static String^ BIN_BOOK_FILE_NAME = "books.bin";
		static String^ BIN_USER_FILE_NAME = "users.bin";
		static String^ BIN_LOANORDER_FILE_NAME = "loanOrders.bin";
		static String^ BIN_LOANCART_FILE_NAME = "loanCart.bin";

	private:
		static List<Book^>^ books = gcnew List<Book^>();
		static List<DeliveryRobot^>^ robots = gcnew List<DeliveryRobot^>();
		static List<Library^>^ libraries = gcnew List<Library^>();
		static List<User^>^ users = gcnew List<User^>();
		static List<Loan^>^ loans = gcnew List<Loan^>();
		static List<CartItem^>^ cartItems = gcnew List<CartItem^>();
		static List<LoanOrder^>^ loanOrders = gcnew List<LoanOrder^>();
		static List<LoanCart^>^ loanCarts = gcnew List<LoanCart^>();
		static SerialPort^ ArduinoPort;


		// TODO: Agregue aqu√≠ los m√©todos de esta clase.
	public:
		// M√©todos CRUD para Book
		static int AddBook(Book^ book);
		static List<Book^>^ GetBooks();
		static Book^ SearchBook(String^ title);
		static Book^ SearchBookById(int bookId);
		static List<Book^>^ AdvancedSearchBook1(String^ titleSearch, String^ authorSearch, String^ publisherSearch, String^ genreSearch);
		static int UpdateBook(Book^ book);
		static int DeleteBook(String^ title);
		static List<Book^>^ AdvancedSearchBook(String^ title, String^ author, String^ publisher, String^ genre);



		// MÈtodos CRUD para DeliveryRobot
		static int AddRobot(DeliveryRobot^ robot);
		static List<DeliveryRobot^>^ GetRobots();
		static DeliveryRobot^ SearchRobot(int robotId);
		static DeliveryRobot^ SearchRobotByName(String^ robotName);
		static int UpdateRobot(DeliveryRobot^ robot);
		static int DeleteRobot(int robotId);

		//Diccionario con los protocolos de comunicaciÛn UART y NMEA
		static Dictionary<String^, Protocol>^ protocolDictionary = gcnew Dictionary<String^, Protocol>();
		static Controller() {
			// Agrega elementos al diccionario
			protocolDictionary->Add("UART", Protocol::UART);
			protocolDictionary->Add("NMEA", Protocol::NMEA);
		}
		static String^ SendRobotToDelivery(Protocol protocol, int robotId, int deliveryPointNumber);
		static void OpenPort();
		static void ClosePort();




		// MÈtodos CRUD para Library
		static int AddLibrary(Library^ library);
		static List<Library^>^ GetLibraries();
		static Library^ SearchLibrary(String^ Name);
		static Library^ SearchLibrarybyID(int libraryId);
		static int UpdateLibrary(Library^ library);
		static int DeleteLibrary(String^ Name);

		// MÈtodos CRUD para User
		static int AddUser(User^ user);
		static List<User^>^ GetUsers();
		static User^ SearchUser(int userId);
		static int UpdateUser(User^ user);
		static int DeleteUser(int userId);
		static User^ SearchUserByNameAndPassword(String^ userName, String^ userPassword);

		static Book^ SearchBookByName(String^ bookName);

		// MÈtodos CRUD para Loan
		static int AddLoan(Loan^ loan);
		static List<Loan^>^ GetLoans();
		static Loan^ SearchLoan(int loanId);
		static int UpdateLoan(Loan^ loan);
		static int DeleteLoan(int loanId);
		static List<Loan^>^ GetLoanHistoryByUserID(int userid);

		// MÈtodos CRUD para CartItem
		static int AddCartItem(CartItem^ cartItem);
		static List<CartItem^>^ GetCartItems();
		static CartItem^ SearchCartItem(int cartItemId);
		static int UpdateCartItem(CartItem^ cartItem);
		static int DeleteCartItem(int cartItemId);

		//MÈtodos CRUD para LoanCart
		static void AddLoanCart(LoanCart^ loanCart);
		static void UpdateLoanCart(LoanCart^ loanCart);
		static List<LoanCart^>^ GetLoanCarts();
		static LoanCart^ SearchLoanCartByUser(User^ user);
		static void ClearLoanCart(User^ user);

		//MÈtodos CRUD para LoanOrder
		static List<LoanOrder^>^ GetLoanOrders();
		static void AddLoanOrder(LoanOrder^ loanOrder);
		static LoanOrder^ SearchLoanOrderById(int loanOrderId);
		static LoanOrder^ SearchLoanOrderByUser(User^ user);
		static List<LoanOrder^>^ GetAllLoanOrdersByUserID(int userid);
		static List<LoanOrder^>^ GetAllLoanOrdersByUser(User^ user);
		static int UpdateLoanOrder(LoanOrder^ loanOrder);


		//MÈtodos para gr·ficas
		static List<Loan^>^ GetLoansByBookID(int bookId, DateTime startDate, DateTime endDate);
		static List<Loan^>^ GetAllLoansByDates(DateTime startDate, DateTime endDate);
		static List<Loan^>^ GetAllLoansByUserAndDates(int userId, DateTime startDate, DateTime endDate);

	};
}
