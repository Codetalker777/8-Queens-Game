#include "loncareStart.h"

using namespace System;
using namespace System::Windows::Forms;

int main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	loncareAssignment2::loncareStart form;
	Application::Run(%form);

	return 0;
}
