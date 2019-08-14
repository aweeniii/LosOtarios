#include <iostream>
#include <cstring>
#include <stdio.h>
#define N 20
using namespace std;

int main() {
	struct corredor
		{
		char nombre[N];
		int edad;
		char sexo[N];
		char club[N];
		char categoria[N];
	}juga;
	
	cout<<"Ingrese un corredor: ";
	cin.getline (juga.nombre,N-1,'\n');
	cout<<endl;
	cout<<"Ingrese la edad del corredor: ";
	cin>>(juga.edad);
	cout<<endl;
	cin.get();
	cout<<"Ingrese el sexo del corredor: ";
	cin.getline(juga.sexo,N-1,'\n');
	cout<<endl;
	cout<<"Ingrese el club del jugador: ";
	cin.getline(juga.club,N-1,'\n');
	
	
	if(juga.edad>0 && juga.edad<18)
	{
	strcpy(juga.categoria, "Juvenil");
	}
	else
	{
		if(juga.edad>=18 && juga.edad<40)
		{
		strcpy(juga.categoria, "Senior");
		}
		else
			  
		if(juga.edad>40)
		{cout<<"La categoria corredor es Veterano "<<endl;
			strcpy(juga.categoria, "Veterano");
		}
	}
	
	cout<<endl;
	cout<<"El nombre del corredor es: "<<(juga.nombre)<<endl;
	cout<<"La edad del corredor es: "<<(juga.edad)<<endl;
	cout<<"El sexo es: "<<(juga.sexo)<<endl;
	cout<<"Pertenece a la categoria: "<<(juga.categoria)<<endl;
	cout<<"Es hincha de: "<<(juga.club)<<endl;
	
	return 0;
}
