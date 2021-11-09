/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa imprime en pantalla la suma de una seria de números dados por el
 * usuario hasta que este ingrese un 0.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 09-11-2021
 * Actividad: while12_08.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void sumar_numeros(int arg_suma, int *ptr_suma);
void imprimir_resultado(int arg_suma);


int main()
{

    // Declaración de variables:
    int suma = 0;

    // Ejecución de funciones:
    bienvenida();
    sumar_numeros(suma, &suma);
    imprimir_resultado(suma);

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 09-11-2021                                         ║\n");
    printf(" ║ Actividad: while12_08                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa se encarga de sumar los números  ║\n");
    printf(" ║ que el usuario vaya ingrensando hasta detectar un 0 e im- ║\n");
    printf(" ║ primir el resultado de la suma de dichos números.         ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");

    return;

}

void sumar_numeros(int arg_suma, int *ptr_suma)
{
    int i = arg_suma;
    printf("\n Ingrese un número: ");
    scanf("%d", &i);

    while (i != 0)
    {
        *ptr_suma = *ptr_suma + i;
        printf("\n Ingrese un número: ");
        scanf("%d", &i);
    }

}

void imprimir_resultado(arg_suma)
{
    printf("\n La suma de los números es: %d \n\n", arg_suma);
}