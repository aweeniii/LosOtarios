#include <iostream>
#define N 3
using namespace std;

int main() {
	
	int mat[N][N];
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<"Ingrese el elemento ["<<i<<"]["<<j<<"]: ";
			cin>>mat[i][j];
		}
	}
	
	cout << endl;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i+j==(N-1))
			{
				mat[i][j]=0;
			}
		}
		cout<<endl;
	}
	
	cout << endl;
	
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i+j==(N-1))
			{
				cout<<mat[i][j]<<" ";
			}
			else 
					cout<<"- ";
		}
		cout<<endl;
	}
	
	cout << endl;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout << mat[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}
