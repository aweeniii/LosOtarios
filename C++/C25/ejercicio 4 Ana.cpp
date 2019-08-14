#include <iostream>
using namespace std;
/*Realice un programa en lenguaje C que permita cargar un vector de seis elementos e
intercambie las posiciones de sus elementos, de tal forma que el primer elemento pase a
ser el último y el último el primero, el segundo el penúltimo y así sucesivamente, e
imprima ese vector.*/
int main() {
	int V[6], *ptro, i,aux;
	ptro=&V[6];
	for (i=0; i<6; i++){
		cin>>ptro[i];
	}
	for(i=0; i<5;i++){
		aux=ptro[i];
		ptro[i]=ptro[i+1];
		ptro[i+1]=aux;
	}
	for (i=0; i<6; i++){
		cout<<ptro[i];
	}
	return 0;
}
