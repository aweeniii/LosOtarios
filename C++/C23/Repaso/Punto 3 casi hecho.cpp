#include <iostream>
#define N 11
#define M 6
using namespace std;

int main() {
	char voc1[M]={'a','e','i','o','u'};
	char voc2[M]={'A','E','I','O','U'};
	char caracter[N];
	int i,cont, lon;
	char L;
	int lef=0, lef2=0;
	
	cout<<"Ingrese una palabra de 10 digitos. "<<endl;
	cin.get(caracter,N);
	
	cout<<"Ingrese una letra a buscar: "<<endl;
	cin>>L;
	
	for(i=0;i<N;i++)
	{
		if (caracter[i]==L)
		{
			cont++;
		}
	}
	cout<<endl;
	
	if (cont>0)
	{
		cout<<"La letra se repite: "<<cont<<" veces. ";
	}
	else
	{
		cout<<"La letra no se repite ninguna ves.";
	}
	
	
	for (i=0;i<N;i++)
	{
		if (caracter[i]!=0)
		{
			lon++;
		}
	}
	cout<<endl;
	
	if (lon>0)
	{
		cout<<"El vector tiene: "<<lon<<" digitos de longitud, sin contar los espacios. "<<endl;
	}
	cout<<endl;
	
	for (i=0;i<N;i++)
	{
		if (caracter[i]==voc1[i])
		{
			lef++;
		}
	}
	for (i=0;i<N;i++)
	{
		if (caracter[i]==voc2[i])
		{
			lef2++;
		}
	}
	cout<<endl;
	
	cout<<"El vector tiene: "<<lef+lef2<<" vocales. "<<endl;
	return 0;
}
