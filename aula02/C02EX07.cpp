#include <iostream>
#include <cwchar>

using namespace std;

int main(void)
{
	int32_t a, b, r;
	
	cout << "Informe valor para a variavel <A>: "; cin >> a;
	cin.ignore(80, '\n');
		
	cout << "Informe valor para a variavel <B>: "; cin >> b;
	cin.ignore(80, '\n');
	
	r = a + b;
	
	cout << "Resultado: " <<  r << endl;
	cout << endl;
	
	cout << "Tecla <Enter> para encerrar...";
	cin.get();
	return 0;
}

