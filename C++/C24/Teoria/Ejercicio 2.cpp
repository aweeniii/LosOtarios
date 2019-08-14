#include <iostream>
#include <cstring>
#include <stdio.h>
#define N 20
#define M 3
using namespace std;

int main() {
	int i,cont=0;
	float promediomayor;
	struct alumno
	{
		char nombre[N];
		int edad;
		float promedio;
		
	}alu[M];
	
	for (i=0;i<M;i++)
	{
		cout<<"Ingrese el nombre del alumno "<<i+1<<": ";
		cin.getline(alu[i].nombre,N-1,'\n');
		cout<<endl;
		cout<<"Ingrese la edad del alumno "<<i+1<<": ";
		cin>>(alu[i].edad);
		cin.get();
		cout<<endl;
		cout<<"Ingrese el promedio del alumno "<<i+1<<": ";
		cin>>(alu[i].promedio);
		cout<<endl;
		cin.get();
	}
	cout<<endl;
	
	for(i=0;i<M;i++)
	{
		if(i==0)
		{
			promediomayor = (alu[i].promedio);
			cont=i;
		}
		else
		if((alu[i].promedio)>promediomayor)
		{
			promediomayor = (alu[i].promedio);
			cont=i;
		}
	}
	
	cout<<"El promedio mayor es: "<<promediomayor<<" Le corresponde al alumno: "<<cont+1<<endl;
	return 0;
}
