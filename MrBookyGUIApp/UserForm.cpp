#include "UserForm.h"

using namespace System;
using namespace MrBookyGUIApp;

int main() {
	UserForm^ userForm = gcnew	UserForm();
	Application::Run(userForm);

	return 0;
}