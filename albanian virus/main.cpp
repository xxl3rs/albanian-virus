#include <iostream>
#include <string>
#include <Windows.h>

void main() {
	FreeConsole();
    MessageBox(0,(LPCWSTR)L"Hi, I am an Albanian virus but because of poor technology in my country unfortunately I am not able to harm your computer. Please be so kind to delete one of your important files yourself and then forward me other users. Many thanks for your cooperation! Best regards, Albanian virus",(LPCWSTR)L"Virus Alert !",MB_ICONERROR|MB_YESNOCANCEL);
	return;
}