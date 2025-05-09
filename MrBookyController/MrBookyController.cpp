#include "pch.h"

#include "MrBookyController.h"

int MrBookyController::MrBookyController::AddBook(Book^ book)
{
	// Agrega el libro a la lista de libros
    try {
        books->Add(book);
		return 1;
    }
	catch (Exception^ ex) {
		throw ex;
	}
    return 0;
}

List<Book^>^ MrBookyController::MrBookyController::GetBooks()
{
	// Devuelve la lista de libros
    return books;
}

Book^ MrBookyController::MrBookyController::SearchBook(int index)
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

int MrBookyController::MrBookyController::UpdateBook(Book^ book)
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

int MrBookyController::MrBookyController::DeleteBook(int index)
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

int MrBookyController::MrBookyController::AddRobot(DeliveryRobot^ robot)
{
	// Agrega el robot a la lista de robots
	try {
		robots->Add(robot);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<DeliveryRobot^>^ MrBookyController::MrBookyController::GetRobots()
{
	// TODO: Insertar una instrucción "return" aquí
	return robots;
}

DeliveryRobot^ MrBookyController::MrBookyController::SearchRobot(int robotId)
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

int MrBookyController::MrBookyController::UpdateRobot(DeliveryRobot^ robot)
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

int MrBookyController::MrBookyController::DeleteRobot(int robotId)
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

int MrBookyController::MrBookyController::AddLibrary(Library^ library)
{
	try {
		// Agrega la biblioteca a la lista de bibliotecas
		libraries->Add(library);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<Library^>^ MrBookyController::MrBookyController::GetLibraries()
{
	// TODO: Insertar una instrucción "return" aquí
	return libraries;
}

Library^ MrBookyController::MrBookyController::SearchLibrary(int libraryId)
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

int MrBookyController::MrBookyController::UpdateLibrary(Library^ library)
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

int MrBookyController::MrBookyController::DeleteLibrary(int libraryId)
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

int MrBookyController::MrBookyController::AddUser(User^ user)
{
	try {
		// Agrega el usuario a la lista de usuarios
		users->Add(user);
		return 1;
	}
	catch (Exception^ ex) {
		throw ex;
	}
	return 0;
}

List<User^>^ MrBookyController::MrBookyController::GetUsers()
{
	// TODO: Insertar una instrucción "return" aquí
	return users;
}

User^ MrBookyController::MrBookyController::SearchUser(int userId)
{
	// TODO: Insertar una instrucción "return" aquí
	for each (User ^ user in users)
	{
		if (user->UserID == userId)
		{
			return user;
		}
	}
}

int MrBookyController::MrBookyController::UpdateUser(User^ user)
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

int MrBookyController::MrBookyController::DeleteUser(int userId)
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

int MrBookyController::MrBookyController::AddLoan(Loan^ loan)
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

List<Loan^>^ MrBookyController::MrBookyController::GetLoans()
{
	// TODO: Insertar una instrucción "return" aquí
	return loans;
}

Loan^ MrBookyController::MrBookyController::SearchLoan(int loanId)
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

int MrBookyController::MrBookyController::UpdateLoan(Loan^ loan)
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

int MrBookyController::MrBookyController::DeleteLoan(int loanId)
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

int MrBookyController::MrBookyController::AddCartItem(CartItem^ cartItem)
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

List<CartItem^>^ MrBookyController::MrBookyController::GetCartItems()
{
	// TODO: Insertar una instrucción "return" aquí
	return cartItems;
}

CartItem^ MrBookyController::MrBookyController::SearchCartItem(int cartItemId)
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

int MrBookyController::MrBookyController::UpdateCartItem(CartItem^ cartItem)
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

int MrBookyController::MrBookyController::DeleteCartItem(int cartItemId)
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
