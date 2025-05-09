#include "AddBook.h"
using namespace System;
using namespace MrBookyGUIApp;

int main() {
	AddBook^ addbook = gcnew AddBook();
	Application::Run(addbook);
	return 0;
}