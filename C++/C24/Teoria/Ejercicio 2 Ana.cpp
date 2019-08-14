#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main() {
	int i, maxp, alux;

	struct alumno {
		char nombre [20];
		int edad, promedio;
	}
	alum[3];
	
	for (i=0; i<3; i++){
		cout<<"nombre: "<<endl;
		cin.getline(alum[i].nombre,20,'\n');
		cout<<"edad: "<<endl;
		cin>>alum[i].edad;
		cout<<"promedio: "<<endl;
		cin>>alum[i].promedio;
		if(maxp<alum[i].promedio){
			maxp=alum[i].promedio;
			alux=i;}
	}
	cout<<"El alumno con mayor promedio es "<<alum[alux].nombre<<" con "<<maxp<<endl;
	return 0;
}
