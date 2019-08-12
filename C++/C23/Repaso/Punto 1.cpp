#include <iostream>
#define N 3
using namespace std;

int main() {
	
	int vec[N][N];
	int aux[N];
	int i, j, f=0, s=0, n, cont=0, acu=0;
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			vec[i][j]=0;
		}
	}
	
	do
	{
		cout<<"Ingrese una columna: ";
		cin>>f;
	} while(f<0 or f>2);
	
	for (j=0;j<N;j++)
	{
		for (i=0;i<N;i++)
		{
			if (j==f)
			{
				do
				{	
					cin>>vec[i][j];
				}
				while(vec[i][j]<1 or vec[i][j]>10);
			}
		}
	}
	cout<<endl;
	
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	do
	{
		cout<<"Ingrese una columna: ";
		cin>>f;
	} while(f<0 or f>2);
	
	for (j=0;j<N;j++)
	{
		for (i=0;i<N;i++)
		{
			if (j==f)
			{
				if (vec[i][j]!=0)
					s++;
			}
		}
	}
	
	if (s!=0)
	{
		cout<<"Esta fila fue cargada en el punto a."<<endl;
	}
	else
	{
		cout<<"Esta fila no fue cargada en el punto a."<<endl;
	}
	cout<<endl;
	
	cout<<"Ingrese un numero: ";
	cin>>n;
	cout<<endl;
	
	for (j=0;j<N;j++)
	{
		for (i=0;i<N;i++)
		{
			if (vec[i][j]==n)
			{
				cont++;
			}
		}
	}
	
	if (cont>0)
	{
		cout<<"Ese numero se repite: "<<cont<<" veces."<<endl;
	}
	else
	{
		cout<<"Ese numero no se repite.";
	}
	cout<<endl;
	
	for (j=0;j<N;j++)
	{
		for (i=0;i<N;i++)
		{
			acu=acu+vec[i][j];
			aux[i]=acu;
			acu=0;
		}
	}
	cout<<endl;
	
	for (j=0;j<N;j++)
	{
		cout<<aux[j]<<" ";
	}
	cout<<endl;
	
	return 0;
}
