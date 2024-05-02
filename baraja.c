#include "stdio.h"
int main()
{
	int numero;
	printf("ingresa el numero de la carta: ");

	scanf("%d", &numero);

    switch(numero) {
        case 1:
        	printf("AZ");
        case 10:
        	printf("SOTA");
        case 11:
        	printf("CABALLO");
        case 12: 
        	printf("REY");
        case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        	printf("no es ninguna figura");       
        
            
            break;
        default:
            printf("este no pertenece a la baraja española");
    }



 return 0;
}