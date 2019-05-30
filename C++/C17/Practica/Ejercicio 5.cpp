#include<iostream>

using namespace std;

int main (){
	
	int i;
	int VEC[6];
	
	for (i=0;i<6;i++){
		cout<<"Introduzca un valor: ";
		cin>>VEC[i];
	}
	i=0;
	for (i=0; i<6; i++){
		if (VEC[i]==VEC[i-1] or VEC[i]==VEC[i+1])
			cout<<"El valor en VEC["<<i<<"] se repite"<<endl;
	}
	return (0);
}
