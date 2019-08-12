/*1. Se dispone de una lista de cien numeros enteros guardados en una matriz
	de 10x10. Calcular y mostrar su valor maximo y la ubicacion que ocupa en la
	matriz.*/

#include <iostream>
#define N 3
using namespace std;

int main() {
	int vec[N][N];
	int i,j,maxi=0,a=0,b=0,c=0,d=0;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>vec[i][j];
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if (i==0 && j==0)
			{
				maxi=vec[i][j];
				a++;
				b++;
			}
			if (vec[i][j]>maxi)
			{
				maxi=vec[i][j];
				c++;
				d++;
			}
		}
	}	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			if (vec[i][j]==maxi)
			{
				cout << "El valor maximo es: "<< maxi << " en la posicion: ["<<i<<"]["<<j<<"]: ";	
			}
		}
	}
	return 0;
}
