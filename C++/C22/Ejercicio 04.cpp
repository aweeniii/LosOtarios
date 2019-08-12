#include <iostream>
#define N 3
using namespace std;

int main() {
	int M[N][N];
	int i,j,cont=0;
	int F[N],C[N];
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<"Ingrese un numero para la posicion ["<<i+1<<"]["<<j+1<<"] ";
			cin>>M[i][j];
		}
	}
	//suma de filas
	for (i=0;i<N;i++)
	{
		cont=0;
		for (j=0;j<N;j++)
		{
			cont=cont+M[i][j];
		}
		F[i]=cont;
	}
	//suma de columnas
	for (j=0;j<N;j++)
	{
		cont=0;
		for (i=0;i<N;i++)
		{
			cont=cont+M[i][j];
		}
		C[j]=cont;
	}
	cout<<"Suma de las Filas: ";
	for (i=0;i<N;i++)
	{
	cout<<F[i]<<" ";
	}
	cout<<endl;
	cout<<"Suma de las Columnas: ";
	for (i=0;i<N;i++)
	{
		cout<<C[i]<<" ";
	}
	cout<<endl;
	cout<<"La matriz es: "<<endl;
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

