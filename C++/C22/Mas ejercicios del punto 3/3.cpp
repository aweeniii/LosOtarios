#include <iostream>
#define N 5
using namespace std;

int main() {
	
	int vec[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			vec[i][j]=(i+j); 
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
