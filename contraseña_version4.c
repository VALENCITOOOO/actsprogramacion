#include <stdio.h>
#include <string.h>
//VERSION3 EXAMEN PRACTICO 13-05-24//
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
        printf("Bienvenido a el sistema.\n");
            printf("cuando hayas terminado introduce 0 para finalizar");
            printf("ingrese la cantidad vendida : ");
            scanf("%i", &articulos);
            while (articulos !=0) {
              printf("ingrese el precio : ");
              scanf("%i", &precio);
                if (articulos < 0 || precio < 0) {
                    printf("la cantidad y precio deben ser numeros positivos");
                } else {                    
                  total= articulos*precio;
                }
                printf("el total  es de : %i ", total );            
           
     return 0;
}
}