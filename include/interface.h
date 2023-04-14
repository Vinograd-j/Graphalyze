#pragma once

#include <string>
#include "Windows.h"

class Interface
{

private:

    HINSTANCE _hinstance;

    HWND _window {};

public:

    explicit Interface(HINSTANCE const &hinstance) : _hinstance(hinstance) {}

    HWND& CreateNewWindow(const std::string& title, DWORD style, const std::string& className, const HWND& parentWindow);
    HWND& SetButton(const std::string& title, DWORD style, int xCord, int yCord, int height, int wight) const;
    HWND& SetText(const std::string& text, DWORD style, int xCord, int yCord, int height, int wight) const;

    void Show();

    const HWND& getWindow() const;

    ~Interface() = default;

    Interface(Interface const &anInterface) = delete;

};