#include "stdio.h"
int main() {
	int numero, suma= 0, cantidad_numeros= 0;

	do{
	    printf("Introduce un numero (introduce 0 para finalizar): ");
	    scanf("%d", &numero);

	    if(numero !=0){
	        printf("has introducido el termino %d.\n", numero);
	        suma += numero;
	        cantidad_numeros++;
	    }
	} while(numero != 0);

	printf("Finalizando: se ha introducido el numero 0.\n");
	printf("se han introducido el numero %d numeros .\n", cantidad_numeros);
	printf("la suma de los numeros introducidos es: %d\n", suma);

	return 0;

}