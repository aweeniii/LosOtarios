#include <iostream>
#define N 2
using namespace std;

int main() {
	int V[N][N]={15,10,5,6};
	int i, j, aux, xx, yy;
	i=0;
	j=0;
	aux=0;
	xx=0;
	yy=0;
	
	cout<<"Qué onda gente";
	
	for (i=0; i<N; i=i+1){
		for (j=0; j<N; j=j+1){
			if (V[i][j]>aux){
				aux=V[i][j];
				xx=xx+1;
				yy=yy+1;
			}
		}
	}
	cout<<"El valor mayor es "<<aux<<" en la ubicación "<<xx<<", "<<yy<<" de la matriz"<<endl;
	
	for (i=0; i<N; i=i+1){
		for (j=0; j<N; j=j+1){
			cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
