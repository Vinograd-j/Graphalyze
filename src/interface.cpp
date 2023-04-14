#include "interface.h"


HWND& Interface::CreateNewWindow(const std::string& title, const DWORD style, const std::string& className, const HWND& parentWindow)
{

	return _window;
}

HWND& Interface::SetButton(const std::string& title, DWORD style, int xCord, int yCord, int height, int wight) const
{

}

HWND& Interface::SetText(const std::string& text, DWORD style, int xCord, int yCord, int height, int wight) const
{

}

void Interface::Show()
{

}

const HWND& Interface::getWindow() const
{

}
