#include "pch.h"

#include "MrBookyController.h"
#include "DuplicateBookException.h"
#include "NotFoundException.h"

void MrBookyController::Controller::AddBook(Book^ book)
{
	// Agrega el libro a la lista de libros

	for each (Book^ registeredBook in books) {
		if (registeredBook->Title == book->Title) {
			throw gcnew DuplicateBookException("El nombre de el libro ya existe en la base de datos.");
		}
	}
    books->Add(book);
	Persistance::PersistBinaryFile(BIN_BOOK_FILE_NAME, books);
}

List<Book^>^ MrBookyController::Controller::GetBooks()
{
	// Devuelve la lista de libros
    return books;
}

Book^ MrBookyController::Controller::SearchBook(int index)
{
	// Busca el libro en la lista de libros
	for each (Book^ book in books)
	{
		if (book->BookID == index)
		{
			return book;
		}
	}
    
}

int MrBookyController::Controller::UpdateBook(Book^ book)
{
	// Busca el libro en la lista de libros
	for (int i = 0; i < books->Count; i++)
	{
		if (books[i]->BookID == book->BookID)
		{
			// Actualiza el libro
			books[i] = book;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteBook(int index)
{
	for (int i = 0; i < books->Count; i++)
	{
		if (books[i]->BookID == index)
		{
			// Elimina el libro
			books->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

List<Book^>^ MrBookyController::Controller::AdvancedSearchBook(String^ title, String^ author, String^ publisher, String^ genre)
{
	List<Book^>^ foundBooks = gcnew List<Book^>();
	try {
		books = (List<Book^>^)Persistance::LoadBinaryFile(BIN_BOOK_FILE_NAME);
		for each (Book ^ book in books) {
			if (book != nullptr) {
				if (book->Title == title) foundBooks->Add(book);
				else if (book->Author == author) foundBooks->Add(book);
				else if (book->Publisher == publisher) foundBooks->Add(book);
				else if (book->Genre == genre) foundBooks->Add(book);
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return foundBooks;
}

int MrBookyController::Controller::AddRobot(DeliveryRobot^ robot)
{
	// Agrega el robot a la lista de robots
	try {
		robots->Add(robot);
		Persistance::PersistTextFile_Robot("robots.txt", robots);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<DeliveryRobot^>^ MrBookyController::Controller::GetRobots()
{
	// TODO: Insertar una instrucción "return" aquí
	return robots;
}

DeliveryRobot^ MrBookyController::Controller::SearchRobot(int robotId)
{
	// TODO: Insertar una instrucción "return" aquí
	for each (DeliveryRobot ^ robot in robots)
	{
		if (robot->RobotID == robotId)
		{
			return robot;
		}
	}
}

int MrBookyController::Controller::UpdateRobot(DeliveryRobot^ robot)
{
	// Busca el robot en la lista de robots
	for (int i = 0; i < robots->Count; i++)
	{
		if (robots[i]->RobotID == robot->RobotID)
		{
			// Actualiza el robot
			robots[i] = robot;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteRobot(int robotId)
{
	// Busca el robot en la lista de robots
	for (int i = 0; i < robots->Count; i++)
	{
		if (robots[i]->RobotID == robotId)
		{
			// Elimina el robot
			robots->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::AddLibrary(Library^ library)
{
	try {
		// Agrega la biblioteca a la lista de bibliotecas
		libraries->Add(library);
		Persistance::PersistTextFile_Library("libraries.txt", libraries);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Library^>^ MrBookyController::Controller::GetLibraries()
{
	// TODO: Insertar una instrucción "return" aquí
	return libraries;
}

Library^ MrBookyController::Controller::SearchLibrary(int libraryId)
{
	// TODO: Insertar una instrucción "return" aquí
	for each (Library ^ library in libraries)
	{
		if (library->LibraryID == libraryId)
		{
			return library;
		}
	}
}

int MrBookyController::Controller::UpdateLibrary(Library^ library)
{
	// Busca la biblioteca en la lista de bibliotecas
	for (int i = 0; i < libraries->Count; i++)
	{
		if (libraries[i]->LibraryID == library->LibraryID)
		{
			// Actualiza la biblioteca
			libraries[i] = library;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteLibrary(int libraryId)
{
	// Busca la biblioteca en la lista de bibliotecas
	for (int i = 0; i < libraries->Count; i++)
	{
		if (libraries[i]->LibraryID == libraryId)
		{
			// Elimina la biblioteca
			libraries->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

void MrBookyController::Controller::AddUser(User^ user)
{
	for each (User^ registeredUser in users) {
		if (registeredUser->Name == user->Name) {
			throw gcnew DuplicateBookException("El nombre de el usuario ya existe en la base de datos.");
		}
	}
    users->Add(user);
	Persistance::PersistBinaryFile(BIN_USER_FILE_NAME, users);
}

List<User^>^ MrBookyController::Controller::GetUsers()
{
	users = (List<User^>^)Persistance::LoadBinaryFile(BIN_USER_FILE_NAME);
	return users;
}

User^ MrBookyController::Controller::SearchUser(int userId)
{
	users = GetUsers();
	for each (User ^ user in users)
	{
		if (user->UserID == userId)
		{
			return user;
		}
	}
}



//Agregadoooo////////////////////////
User^ MrBookyController::Controller::SearchUserByNameAndPassword(String^ userName, String^ userPassword)
{
	
	users = (List<User^>^)Persistance::LoadBinaryFile(BIN_USER_FILE_NAME);
	for each (User ^ user in users)
	{
		if (user->Name == userName)
		{
			if (user->Password == userPassword) {
				return user;
			}
		}

	}

}
Book^ MrBookyController::Controller::SearchBookByName(String^ bookName)
{

	books = (List<Book^>^)Persistance::LoadBinaryFile(BIN_BOOK_FILE_NAME);
	for each (Book ^ book in books)
	{
		if (book->Title == bookName)
		{
			return book;
		}
	}
}
//



int MrBookyController::Controller::UpdateUser(User^ user)
{
	// Busca el usuario en la lista de usuarios
	for (int i = 0; i < users->Count; i++)
	{
		if (users[i]->UserID == user->UserID)
		{
			// Actualiza el usuario
			users[i] = user;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteUser(int userId)
{
	// Busca el usuario en la lista de usuarios
	for (int i = 0; i < users->Count; i++)
	{
		if (users[i]->UserID == userId)
		{
			// Elimina el usuario
			users->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::AddLoan(Loan^ loan)
{
	try {
		// Agrega el préstamo a la lista de préstamos
		loans->Add(loan);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Loan^>^ MrBookyController::Controller::GetLoans()
{
	// TODO: Insertar una instrucción "return" aquí
	return loans;
}

Loan^ MrBookyController::Controller::SearchLoan(int loanId)
{
	// TODO: Insertar una instrucción "return" aquí
	for each (Loan ^ loan in loans)
	{
		if (loan->LoanID == loanId)
		{
			return loan;
		}
	}
}

int MrBookyController::Controller::UpdateLoan(Loan^ loan)
{
	// Busca el préstamo en la lista de préstamos
	for (int i = 0; i < loans->Count; i++)
	{
		if (loans[i]->LoanID == loan->LoanID)
		{
			// Actualiza el préstamo
			loans[i] = loan;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteLoan(int loanId)
{
	// Busca el préstamo en la lista de préstamos
	for (int i = 0; i < loans->Count; i++)
	{
		if (loans[i]->LoanID == loanId)
		{
			// Elimina el préstamo
			loans->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::AddCartItem(CartItem^ cartItem)
{
	try {
		// Agrega el artículo al carrito a la lista de artículos del carrito
		cartItems->Add(cartItem);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<CartItem^>^ MrBookyController::Controller::GetCartItems()
{
	// TODO: Insertar una instrucción "return" aquí
	return cartItems;
}

CartItem^ MrBookyController::Controller::SearchCartItem(int cartItemId)
{
	// TODO: Insertar una instrucción "return" aquí
	for each (CartItem ^ cartItem in cartItems)
	{
		if (cartItem->CartItemID == cartItemId)
		{
			return cartItem;
		}
	}
}

int MrBookyController::Controller::UpdateCartItem(CartItem^ cartItem)
{
	// Busca el artículo en el carrito en la lista de artículos del carrito
	for (int i = 0; i < cartItems->Count; i++)
	{
		if (cartItems[i]->CartItemID == cartItem->CartItemID)
		{
			// Actualiza el artículo en el carrito
			cartItems[i] = cartItem;
			return 1;
		}
	}
	return 0;
}

int MrBookyController::Controller::DeleteCartItem(int cartItemId)
{
	// Busca el artículo en el carrito en la lista de artículos del carrito
	for (int i = 0; i < cartItems->Count; i++)
	{
		if (cartItems[i]->CartItemID == cartItemId)
		{
			// Elimina el artículo en el carrito
			cartItems->RemoveAt(i);
			return 1;
		}
	}
	return 0;
}

void MrBookyController::Controller::AddLoanOrder(LoanOrder^ loanOrder)
{
	/*for each (LoanOrder ^ registeredLoanOrder in loanOrders) {
		if (registeredLoanOrder->LoanOrderID == loanOrder->LoanOrderID) {
			throw gcnew DuplicateBookException("ID ya utilizado.");
		}
	}*/
	loanOrders->Add(loanOrder);
	Persistance::PersistBinaryFile(BIN_LOANORDER_FILE_NAME, loanOrders);
}

LoanOrder^ MrBookyController::Controller::SearchLoanOrderByUser(User^ user)
{
	loanOrders = (List<LoanOrder^>^) Persistance::LoadBinaryFile(BIN_LOANORDER_FILE_NAME);
	for each (LoanOrder ^ loanOrder in loanOrders) {
		if (loanOrder->Client->UserID == user->UserID) {
			return loanOrder;
		}
	}

	return nullptr;
}
