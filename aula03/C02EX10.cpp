#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.141592; // ou #define PI 3.141592

// snake_case -> valor_de_desconto
// PascalCase -> ValorDeDesconto
// camelCase -> valorDeDesconto

int main(void)
{
	float v, h, r;
	
	cout << "Entre com a altura ...: ";
	cin >> h;
	cin.ignore(80, '\n');
	
	cout << "Entre com o raio ...: ";
	cin >> r;
	cin.ignore(80, '\n');
	
	v = h * PI * pow(r, 2);
	cout << "Area do Cilindro ...: " << v << endl;
	
	cout << endl;
	cout << "Tecla <Enter> para encerrar...";
	cin.get();
	return 0;
}
