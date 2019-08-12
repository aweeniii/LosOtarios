#include <iostream>
#define N 3
using namespace std;

int main(int argc, char *argv[]) {
	
	int vec[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if ((i+j)%2==0)
			{
				vec[i][j]=1+i;
			}
			else
			{
				vec[i][j]=(N-j);
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout << vec[i][j]<< " ";
		}
		cout << endl;
	}
	return 0;
}
