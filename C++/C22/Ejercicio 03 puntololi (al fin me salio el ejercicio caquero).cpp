#include <iostream>
#define M 3
#define N 3
//los valores de M y N se pueden modificar para corroborar el funcionamiento del algoritmo, but 100pre debe ser matriz CUA DRA DA
using namespace std;

int main (){
	//variables necesarias
	int V[M][N];
	int auxi, auxj;
	int fila1[M], fila2[M];
	int i, j;
	i=0;
	j=0;
	
	//necesario para cargar la matriz:
	cout<<"Ingrese los números de la matriz:"<<endl;
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			cin>>V[i][j];
		}
	}
	
	//mostrando la matriz cargada:
	cout<<"MATRIZ ORIGINAL"<<endl;
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//cargando las filas de la matriz que se van a permutar:
	cout<<"Ingrese la primera fila a permutar: ";
	cin>>auxi;
	auxi=auxi-1;
	cout<<"Ingrese la segunda fila a permutar: ";
	cin>>auxj;
	auxj=auxj-1;
	cout<<endl;
	
	//bucles para guardar en vectores auxiliares las filas a permutar:
	
		for (j=0;j<N;j++){
			fila1[j]=V[auxi][j];}
	
		for (j=0;j<N;j++){
			fila2[j]=V[auxj][j];}
	
	cout<<"Filas que se van a permutar: "<<endl;
	cout<<"Fila 1: "<<endl;
	for (i=0;i<M;i++){
		cout<<fila1[i]<<" ";
	}
	cout<<endl;
	cout<<"Fila 2: "<<endl;
	for (i=0;i<M;i++){
		cout<<fila2[i]<<" ";
	}
	cout<<endl;
	
	
	//modificando la matriz original por la invertida:
	
	//for (i=0;i<M;i++){
		for (j=0;j<N;j++){
				V[auxj][j]=fila1[j];}
	
	//for (i=0;i<M;i++){
		for (j=0;j<N;j++){
				V[auxi][j]=fila2[j];}
	
	//mostrando la matriz modificada:
	
	cout<<endl;
	cout<<"NUEVA MATRIZ"<<endl;
	
	for (i=0; i<M; i++){
		for (j=0; j<N; j++){
			cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}

	return (0);
}
