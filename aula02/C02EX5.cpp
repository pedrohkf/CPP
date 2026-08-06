#include <iostream>
#include <locale> // para setLocale()
#include <windows.h> // para SetConsoleCP()
#include <string> // para usar std::wstring

using namespace std;

int main(void)
{
	wstring nome;
	
	setlocale(LC_ALL, "Portuguese_Brazil.1252"); 
	SetConsoleCP(1252);
	
	wcout << L"Olá, \nQual sua graça? ";
	getline(wcin, nome);
	
	cout << endl;
	wcout << "Oi " << nome << ", vamos estudar. " << endl;
	cout << endl;
	
	cout << "Tecla <Enter> para encerrar...";
	cin.get();
	return 0;
}

