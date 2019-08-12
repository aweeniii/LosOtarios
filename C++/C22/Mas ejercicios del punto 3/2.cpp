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
			if(i==0 or j==0)
			{
				mat[i][j]=0;
			}
			if(i==(N-1) or j==(N-1))
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
			cout << mat[i][j]<<" ";
		}
		cout << endl;
	}

	return 0;
}
