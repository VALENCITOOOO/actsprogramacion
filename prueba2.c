#include <stdio.h>

int main() {
    int i = 0;
    int num;
    int suma = 0;
    int menor, mayor;

    // Pedir 10 números
    while (i < 10) {
        printf("Introduce el número %d: ", i + 1);
        scanf("%d", &num);
        
        
        suma += num;

        
        if (i == 0) {
            mayor = menor = num;
        } else {
            
            if (num > mayor) {
                mayor = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
        
        i++;
    }

    
    printf("La suma de los números es: %d\n", suma);
    printf("El mayor número es: %d\n", mayor);
    printf("El menor número es: %d\n", menor);

    return 0;
}
