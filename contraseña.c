#include <stdio.h>
#include <string.h>
//VERSION2 EXAMEN PRACTICO 13-05-24//
int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    int articulos, precio, i, total;
   

    do {
        printf("Introduce tu nombre: ");
        scanf("%s", nombre);

        printf("Introduce tu contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(nombre, "OSVALDO") == 0 && strcmp(contrasena, "2B8") == 0) {          
            
                
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                printf("Nombre de usuario o contraseña incorrectos. Te quedan %d intentos.\n", intentos);
            } else {
                printf("Se ha superado el número de intentos permitido.\n");
                break;
            }          
       
        }
    } while (intentos > 0);
        printf("Bienvenido al sistema.\n");      
            printf("ingrese la cantidad vendida : ");
            scanf("%i", &articulos);
            printf("ingrese el precio : ");
            scanf("%i", &precio);
            total= articulos*precio;
            printf("el total a pagar es de : %i ", total );

    

    return 0;
}
