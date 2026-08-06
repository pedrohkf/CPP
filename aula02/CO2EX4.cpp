#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string nome;
	
	cout << "Ola, \nQual sua graca? ";
	getline(cin, nome);
	
	cout << endl;
	cout << "Oi " << nome << ", vamos estudar. " << endl;
	cout << endl;
	
	cout << "Tecla <Enter> para encerrar...";
	cin.get();
	return 0;
}
