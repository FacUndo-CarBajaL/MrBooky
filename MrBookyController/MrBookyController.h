#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace MrBookyModel;

namespace MrBookyController {
	public ref class MrBookyController
	{
		private:
			static List<Book^>^ books = gcnew List<Book^>();
		// TODO: Agregue aquí los métodos de esta clase.
		public:
			// Métodos CRUD para Book
			static int AddBook(Book^ book);
			static List<Book^>^ GetBooks();
			static Book^ SearchBook(int index);
			static int UpdateBook(Book^ book);
			static int DeleteBook(int index);
	};
}
