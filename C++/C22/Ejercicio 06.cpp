/*6. Cierta empresa requiere controlar la existencia de diez
productos, los cuales se almacenan en un vector A, mientras que
los pedidos de los clientes de estos productos se almacenan en 
un vector B. Se requiere generar un tercer vector C con base en
los anteriores que represente lo que se requiere comprar para
mantener el stock de inventario, para esto se considera lo
siguiente: si los valores correspondientes de lo vectores A y B
son iguales se almacena este mismo valor, si el valor de B es
mayor que el de A se almacena el doble de la diferencia entre B
y A, si se da el caso de que A es mayor que B, se almacena B,
que indica lo que requiere comprar para mantener el stock de
inventario. Realice el código correspondiente.*/
#include <iostream>
#define P 5 //P es la cantidad de Productos
using namespace std;

int main() {
	int A[P],B[P],C[P],i;
	for (i=0;i<P;i++)
	{
		cout<<"Cantidad del producto "<<i+1<<" que hay en stock ";
		cin>>A[i];
	}
	for (i=0;i<P;i++)
	{
		cout<<"Cantidad del producto "<<i+1<<" que se compró ";
		cin>>B[i];
	}
	for (i=0;i<P;i++)
	{
		if (A[i]==B[i])
		{
			C[i]=A[i];
		}
		else
		{
			if (B[i]>A[i])
			{
				C[i]=(B[i]-A[i])*2;
			}
			else
			{
				C[i]=B[i];
			}
		}
	}
	for (i=0;i<P;i++)
	{
		cout<<"La cantidad del Producto "<<i+1<<" que se debe comprar para mantener el stock es: "<<C[i]<<endl;
	}
	return 0;
}
