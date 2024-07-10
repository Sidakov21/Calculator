#include "MyForm.h"
#include<windows.h>

using namespace КалькуляторАмир; //Name project

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0; 
}
