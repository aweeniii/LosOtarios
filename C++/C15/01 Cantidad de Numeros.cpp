#include <iostream>
using namespace std;

int main() {
	int a; int cont1; int cont2; int cont3; int c;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	cout << "Ingrese Los Numeros \n" << endl;
	for (c=0; c<=10; c=c+1){
		cin >> a;
		if (a<0)
		{
			cont1 = cont1 + 1;
}
		else
			if (a>50)
		{
				cont2 = cont2 + 1;
}
		else
			if (a>25 && a<45)
		{
				cont3 = cont3 + 1;
}
	}
		cout << "La cantidad de numeros menores a 0 son: " << cont1 << endl;
		cout << "La cantidad de numeros mayores a 50 son: " << cont2 << endl;
		cout << "La cantidad de numeros entre 25 y 45 son: " << cont3 << endl;
	return 0;
}
