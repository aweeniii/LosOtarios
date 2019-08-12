/*9. Escribir un algoritmo que permita calcular el cuadrado de los 9 primeros
números enteros y cargarlos en una matriz de 3x3.*/

#include <iostream>
#include <math.h>
#define N 3
using namespace std;

int main() {
	int A[N][N]={1,2,3,4,5,6,7,8,9};
	int	B[N][N],i,j,cont;

	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			B[i][j]=pow(A[i][j],2);
		}
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}
