// C02EX13.CPP

#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
  auto numero = 42;
  auto pi     =  3.1416;
  auto letra = 'a';

  cout << "Numero: " << numero;
  cout << " - Tipo: " << typeid(numero).name() << endl;

  cout << "Pi: " << pi;
  cout << " - Tipo: " << typeid(pi).name() << endl;
  
  cout << "Letra a: " << pi;
  cout << " - Tipo: " << typeid(letra).name() << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
