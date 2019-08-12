#include <iostream>
#define N 5
using namespace std;

int main(int argc, char *argv[]) {
	float A[N],auxA;
	char P[N],auxB;
	int i,j;
	for (i=0;i<N;i++)
	{
		cout<<"Inicial del alumno: ";
		cin>>P[i];
		cout<<"Promedio del alumno "<<P[i]<<":";
		cin>>A[i];
	}
	for (j=0;j<5;j++)
	{
		for (i=0;i<4;i++)
		{
			if (A[i]<A[i+1])
			{	auxA=A[i];
			A[i]=A[i+1];
			A[i+1]=auxA;
			auxB=P[i];
			P[i]=P[i+1];
			P[i+1]=auxB;
			
			}	
		}
	}
	for (i=0;i<N;i++)
	{
		cout<<P[i]<<"|"<<A[i]<<endl;
	}
	return 0;
}
