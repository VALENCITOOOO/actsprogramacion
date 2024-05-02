#include "stdio.h"
int main()
{
	int n1,n2,n3;
	printf("ingresa tus 3 numeros: \n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);  


	if(n1>n2){
		int temp =n1;
		n1=n2;
		n2=temp;


	}
	if(n2>n3){
		int temp=n2;
		n2=n3;
		n3=temp;
	}
	if(n1>n2){
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	printf ("Los numeros ordenados de menor a mayor son: %d,%d,%dn",n1,n2,n3);
	return 0;
}
