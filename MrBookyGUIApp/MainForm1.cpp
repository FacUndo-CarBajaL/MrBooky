#include "MainForm1.h"

using namespace System;
using namespace MrBookyGUIApp;

[STAThreadAttribute]
int main() {
	MainForm^ mainForm = gcnew	MainForm();
	Application::Run(mainForm);

	return 0;
}