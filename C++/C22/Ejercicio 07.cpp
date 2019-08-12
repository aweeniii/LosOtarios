/*7. Realice un código que lea un vector de seis elementos e
intercambie las posiciones de sus elementos, de tal forma que
el primer elemento pase a ser el último y el último el primero
el segundo el penúltimo y así sucesivamente, e imprima ese
vector.*/
#include <iostream>
#define N 6
using namespace std;

int main() {
	int A[N],B[N],i,j=0;
	for (i=0;i<N;i++)
	{
		cout<<"ingrese valores: ";
		cin>>A[i];
	}
	for (i=N-1;i>=0;i--)
	{
		B[j]=A[i];
		j++;
	}
	for (i=0;i<N;i++)
	{
		cout<<B[i]<<" ";
	}

	return 0;
}
