#include "stdio.h"

int main() 
{
    int numeros[5];
    int i, menor;
    
    printf("Ingrese 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    menor = numeros[0];
    
    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }    
    printf("El menor número ingresado es: %d\n", menor);

    return 0;
}
