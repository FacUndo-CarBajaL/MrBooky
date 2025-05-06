#include "pch.h"

#include "MrBookyController.h"

int MrBookyController::MrBookyController::AddBook(Book^ book)
{
	// Agrega el libro a la lista de libros
    try {
        books->Add(book);
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
