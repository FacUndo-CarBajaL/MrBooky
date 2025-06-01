#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;
using namespace MrBookyPersistance;

namespace MrBookyController {
	public ref class Controller
	{
	public: 
		static String^ BIN_BOOK_FILE_NAME = "books.bin";
		static String^ BIN_USER_FILE_NAME = "users.bin";
		static String^ BIN_LOANORDER_FILE_NAME = "loanOrders.bin";

		private:
			static List<Book^>^ books = gcnew List<Book^>();
			static List<DeliveryRobot^>^ robots = gcnew List<DeliveryRobot^>();
			static List<Library^>^ libraries = gcnew List<Library^>();
			static List<User^>^ users = gcnew List<User^>();
			static List<Loan^>^ loans = gcnew List<Loan^>();
			static List<CartItem^>^ cartItems = gcnew List<CartItem^>();
			static List<LoanOrder^>^ loanOrders = gcnew List<LoanOrder^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			// Métodos CRUD para Book
			static void AddBook(Book^ book);
			static List<Book^>^ GetBooks();
			static Book^ SearchBook(int index);
			static int UpdateBook(Book^ book);
			static int DeleteBook(int index);
			static List<Book^>^ AdvancedSearchBook(String^ title, String^ author, String^ publisher, String^ genre);


			// M�todos CRUD para DeliveryRobot
			static int AddRobot(DeliveryRobot^ robot);
			static List<DeliveryRobot^>^ GetRobots();
			static DeliveryRobot^ SearchRobot(int robotId);
			static int UpdateRobot(DeliveryRobot^ robot);
			static int DeleteRobot(int robotId);

			// M�todos CRUD para Library
			static int AddLibrary(Library^ library);
			static List<Library^>^ GetLibraries();
			static Library^ SearchLibrary(int libraryId);
			static int UpdateLibrary(Library^ library);
			static int DeleteLibrary(int libraryId);

			// M�todos CRUD para User
			static void AddUser(User^ user);
			static List<User^>^ GetUsers();
			static User^ SearchUser(int userId);
			static int UpdateUser(User^ user);
			static int DeleteUser(int userId);
			static User^ SearchUserByNameAndPassword(String^ userName, String^ userPassword);

			static Book^ SearchBookByName(String^ bookName);

			// M�todos CRUD para Loan
			static int AddLoan(Loan^ loan);
			static List<Loan^>^ GetLoans();
			static Loan^ SearchLoan(int loanId);
			static int UpdateLoan(Loan^ loan);
			static int DeleteLoan(int loanId);

			// M�todos CRUD para CartItem
			static int AddCartItem(CartItem^ cartItem);
			static List<CartItem^>^ GetCartItems();
			static CartItem^ SearchCartItem(int cartItemId);
			static int UpdateCartItem(CartItem^ cartItem);
			static int DeleteCartItem(int cartItemId);

			//M�todos CRUD para LoanOrder
			static void AddLoanOrder(LoanOrder^ loanOrder);
			static LoanOrder^ SearchLoanOrderByUser(User^ user);
			//static void UpdateLoanOrder(LoanOrder^ loanOrder);
			//static void DeleteLoanOrder(LoanOrder^ loanOrder);

	};
}
