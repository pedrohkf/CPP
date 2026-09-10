#include <iostream>
using namespace std;

int main(void){
	int x1 = 5;
	int y1 = ++x1 + 3;
	
	int y2 = 10;
	int x2 = y2-- + 5;
	
	int x4 = 7;
	x4++;
	int y4 = x4--;
	
	cout << "Valor de x: " << x1 << endl;
	cout << "Valor de y: " << y1 << endl;
	
	cout << "Valor de x: " << x2 << endl;
	cout << "Valor de y: " << y2 << endl;
	
	cout << "Valor de x: " << x4 << endl;
	cout << "Valor de y: " << y4 << endl;
	
	return 0;
}


