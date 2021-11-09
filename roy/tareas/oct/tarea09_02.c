/*
 * El presente programa lee una cantidad dada por el usuario entre 100 y 99
 * para mostrar al usuario en pantalla cuantas unidades, decenas y centenas
 * tiene.
 * 
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 17-10-2021
 * Actividad: tarea09_02
 */

#include<stdio.h>

void bienvenida();

void solicitar_datos(int *ptr_centenas, int *ptr_decenas, int *ptr_unidades);

void imprimir_resultados(int arg_centenas, int arg_decenas, int arg_unidades);

int main()
{

    // Declaración de variables:
    int centenas = 0, decenas = 0, unidades = 0;

    // Ejecución de funciones:
    bienvenida();

    solicitar_datos(&centenas, &decenas, &unidades);

    imprimir_resultados(centenas, decenas, unidades);

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 17-10-2021                                         *\n");
    printf(" * Actividad: tarea_09_02                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones se leera una cantidad *\n");
    printf(" * dada por el usuario y se imprimira en pantalla las cente- *\n");
    printf(" * nas, decenas y unidades que tiene.                        *\n");
    printf(" *************************************************************\n");
    printf("\n");

    return;

}

void solicitar_datos(int *ptr_centenas, int *ptr_decenas, int *ptr_unidades)
{

    printf(" Ingrese una cantidad entre 100 y 999: ");
    scanf("%1d%1d%1d", ptr_centenas, ptr_decenas, ptr_unidades);

    return;

}

void imprimir_resultados(int arg_centenas, int arg_decenas, int arg_unidades)
{

    printf("\n El número %d%d%d tiene:\n", arg_centenas, arg_decenas,
                                           arg_unidades);
    printf("\n %d unidades", arg_unidades);
    printf("\n %d decenas", arg_decenas);
    printf("\n %d centenas\n\n", arg_centenas);

    return;

}