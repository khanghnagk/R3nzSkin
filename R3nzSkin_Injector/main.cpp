#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <regex>
#include <msclr/marshal_cppstd.h>

#include "R3nzUI.hpp"
#include "Injector.hpp"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Threading;
using namespace System::Globalization;
using namespace System::Net;

int main([[maybe_unused]] array<String^>^ args)
{
	String^ exeDir = AppDomain::CurrentDomain->BaseDirectory;
	String^ dllPath = exeDir + "R3nzSkin.dll";
	if (!System::IO::File::Exists(dllPath)) {
		MessageBox::Show(
			"R3nzSkin.dll could not be found.\n\nExpected path:\n" + dllPath + "\n\nPlease make sure R3nzSkin.dll is in the same folder as the injector.",
			"R3nzSkin Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);
		return EXIT_FAILURE;
	}

	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	Injector::autoUpdate();
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	R3nzSkinInjector::R3nzUI form;

	auto thread{ std::thread(Injector::run) };
	auto screenThread{ gcnew Thread(gcnew ThreadStart(%form, &R3nzSkinInjector::R3nzUI::updateScreen)) };
	screenThread->Start();

	Application::Run(%form);

	thread.detach();
	screenThread->Abort();

	return EXIT_SUCCESS;
}
