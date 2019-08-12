#include <iostream>
#define N 10
#define M 2
using namespace std;

int main() {
	
	int prem[N][M];
	int i, j,a,b,c,d;
	
		for (j=0;j<N;j++){
			do {
			cout<<"ingresar numero de sorteo "<<endl;
			cin>>a;
			prem[j][0] = a;
	        } while (a<=0 or a>=1000);
		}
		for (j=0;j<N;j++){
			do {
				cout<<"ingresar premio "<<endl;
				cin>>a;
				prem[j][1] = a;
			} while (a<1 or a>100000);
		}
		do {
			cout<<"ingrese un numero para el sorteo "<<endl;
			cin>>b;
		} while(b<0 or b>1000);
		
		
		for (j=0;j<N;j++){
			if (b==prem[j][0]){
				cout<<"el numero ganador es "<<b<<" y le correspende el premio de "<<prem[j][1]<<endl;
			}
			
		}
		for (j=0;j<N-1;j++) {
			if (prem[j][1] > prem[j+1][1]){
				c=prem[j][1];
				d=j;
			}
		}
		cout<<"el premio mayor es de "<<c<<" y le corresponde al numero "<<d<<endl;
	return 0;
}
