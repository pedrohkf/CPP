#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	float ht, pd, td, sb, vh, sl;
	int8_t p = 8;
	
	cout << setprecision(2) << fixed << right;
	
	cout << "Entre com a quantidade de horas trabalhadas ...: ";
	cin >> ht;
	cin.ignore(80, '\n');
	
	cout << "Entre com o valor da hora de trabalho ...: ";
	cin >> vh;
	cin.ignore(80, '\n');
	
	cout << "Entre com o porcentual de desconto ...: ";
	cin >> pd;
	cin.ignore(80, '\n');
	
	sb = ht * vh;
	td = (pd/100) * sb;
	sl = sb - td;
	
	cout << "\n";
	cout << "Salario Bruto ......: " << setw(p) << sb << endl;
	cout << "Salario Desconto ...: " << setw(p) << td << endl;
	cout << "Salario Liquido ....: " << setw(p) << sl << endl;
	cout << endl;
	
	cout << "Tecla <Enter> para encerrar...";
	cin.get();
	return 0;
	
}
