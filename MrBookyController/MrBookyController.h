#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;
using namespace MrBookyPersistance;

namespace MrBookyController {
	public ref class Controller
	{
		private:
	private:
		static List<Book^>^ books;
		static List<DeliveryRobot^>^ robots;
		static List<Library^>^ libraries;
		static List<User^>^ users;
		static List<Loan^>^ loans;
		static List<CartItem^>^ cartItems;

		static Controller() { // <-- Constructor est·tico
			books = gcnew List<Book^>();
			robots = gcnew List<DeliveryRobot^>();
			libraries = gcnew List<Library^>();
			users = gcnew List<User^>();
			loans = gcnew List<Loan^>();
			cartItems = gcnew List<CartItem^>();
		}

		// TODO: Agregue aqu√≠ los m√©todos de esta clase.
		public:
			static int AddBook(Book^ book);
			static List<Book^>^ GetBooks();
			static Book^ SearchBook(String^ title);
			static int UpdateBook(Book^ book);
			static int DeleteBook(String^ title);


			// MÈtodos CRUD para DeliveryRobot
			static int AddRobot(DeliveryRobot^ robot);
			static List<DeliveryRobot^>^ GetRobots();
			static DeliveryRobot^ SearchRobot(int robotId);
			static int UpdateRobot(DeliveryRobot^ robot);
			static int DeleteRobot(int robotId);

			// MÈtodos CRUD para Library
			static int AddLibrary(Library^ library);
			static List<Library^>^ GetLibraries();
			static Library^ SearchLibrary(String^ Name);
			static int UpdateLibrary(Library^ library);
			static int DeleteLibrary(String^ Name);

			// MÈtodos CRUD para User
			static int AddUser(User^ user);
			static List<User^>^ GetUsers();
			static User^ SearchUser(int userId);
			static int UpdateUser(User^ user);
			static int DeleteUser(int userId);

			static int SearchUserByNameAndPassword(String^ userName, String^ userPassword);
			static Book^ SearchBookByName(String^ bookName);

			// MÈtodos CRUD para Loan
			static int AddLoan(Loan^ loan);
			static List<Loan^>^ GetLoans();
			static Loan^ SearchLoan(int loanId);
			static int UpdateLoan(Loan^ loan);
			static int DeleteLoan(int loanId);

			// MÈtodos CRUD para CartItem
			static int AddCartItem(CartItem^ cartItem);
			static List<CartItem^>^ GetCartItems();
			static CartItem^ SearchCartItem(int cartItemId);
			static int UpdateCartItem(CartItem^ cartItem);
			static int DeleteCartItem(int cartItemId);

	};
}
