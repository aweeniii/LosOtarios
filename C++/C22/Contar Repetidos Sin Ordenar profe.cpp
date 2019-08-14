#include <iostream>
using namespace std;
#define N 5

int main() {
	int V[N], R[N], C[N], l=0;
	bool band, band_2;
	cout<<"Cargue el Vector"<<endl;
	for(int i=0;i<N;i++)
		cin>>V[i];

	for(int i=0;i<N;i++)
		C[i]=1;

	for(int i=0;i<N-1;i++)
	{
		band=true;
		for(int j=0;j<l;j++)
			if(V[i]==R[j])
			band=false;
		if(band)
		{
			band_2=false;
			for(int j=i+1;j<N;j++)
				if(V[i]==V[j])
			{
				R[l]=V[i];
				C[l]=C[l]+1;
				band_2=true;
			}
				if(band_2)
					l++;
		}

	}
	cout<<"Numero \t  Cantidad "<<endl;
	for(int i=0;i<l;i++)
		cout<<"  "<<R[i]<<" \t     "<<C[i]<<endl;
	return 0;
}
