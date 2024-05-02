#include "stdio.h"
int main() 
{
    int opcion;
    float base, altura, lado1, lado2, area;

    printf("1. Triángulo\n");
    printf("2. Trapecio\n");
    printf("3. Rectángulo\n");
    printf("Seleccione una opción (1-3): ");
    scanf("%d", &opcion);
    //hola//
    switch(opcion) {
        case 1:
            printf("Ingrese la base del triángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triángulo: ");
            scanf("%f", &altura);
            area = 0.5 * base * altura;
            printf("El área del triángulo es: %.2f\n", area);
            break;
        case 2:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%f", &base);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &lado1);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &altura);
            area = 0.5 * (base + lado1) * altura;
            printf("El área del trapecio es: %.2f\n", area);
            break;
        case 3:
            printf("Ingrese la base del rectángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectángulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("El área del rectángulo es: %.2f\n", area);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}