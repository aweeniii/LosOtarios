#include<iostream>
using namespace std;
int main (){
	int A, B, ai, bi, N, den, coi;
	den=0;
	coi=0;
	do {
		cout<<"Introducir punto del intervalo A: "<<endl;
		cin>>A;
		cout<<"Introducir punto del intervalo B: "<<endl;
		cin>>B;
		if (A==B)
			cout<<"ERROR, valores iguales. Reingresarlos."<<endl;
	}while (A==B);
	if (A>B)
		{ai=B;
		bi=A;
		B=bi;
		A=ai;}
	do {
		cout<<"Ingrese un valor: ";
		cin>>N;
		if (N>A and N<B)
			den=den+1;
		if (N==A or N==B)
			coi=coi+1;
	} while(N!=0);
	cout<<"Los valores coincidentes con los puntos del intervalo son "<<coi<<endl;
	cout<<"Los valores dentro del intervalo son "<<den<<endl;
	return (0);
} 
