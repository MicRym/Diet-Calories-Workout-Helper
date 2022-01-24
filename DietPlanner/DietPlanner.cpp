#include "DietPlanner.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DietPlanner::DietPlanner oFormDietPlanner;
	Application::Run(% oFormDietPlanner);



	return 0;
}