#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("Multiplicaciones.txt", "w");

    if (archivo == NULL) {
        perror("Error al crear el archivo");
        return 1;
    }

    // Escribir valores del 0 al 100 en el archivo
    for (int i = 0; i <= 100; ++i) {
        fprintf(archivo, "%d\n", i);
    }

    fclose(archivo);

    // Abrir el archivo generado en modo lectura
    archivo = fopen("Multiplicaciones.txt", "r");

    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Solicitar al usuario que ingrese el número por el cual desea multiplicar
    int factor;
    printf("Ingrese el numero por el cual desea multiplicar: ");
    scanf("%d", &factor);

    int numero;
    while (fscanf(archivo, "%d", &numero) == 1) {
        // Realizar operacion de multiplicacion con el factor ingresado por el usuario
        int resultado = numero * factor;

        // Imprimir el resultado
        printf("El resultado de la multiplicacion de %d por %d es: %d\n", numero, factor, resultado);
    }

    fclose(archivo);

    return 0;
}

