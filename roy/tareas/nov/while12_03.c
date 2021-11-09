/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de mostrar en pantalla una seria de números del 0 al
 * 9 de la forma (x,y), donde 'x' se muestra en incremento y 'y' en decremento.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 06-11-2021
 * Actividad: while12_03.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void serie_3();


int main()
{

    // Ejecución de funciones:
    bienvenida();
    serie_3();
    printf("\n");

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 06-11-2021                                         ║\n");
    printf(" ║ Actividad: while12_03                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: Por medio del ciclo de repetición while, se  ║\n");
    printf(" ║ muestra en pantalla una serie de números de la forma      ║\n");
    printf(" ║ (x,y) de 0 a 9 con 'x' en incremento y 'y' en decremento. ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf("\n");
    return;

}

void serie_3()
{

    int i = 0;
    int j = 9;

    while(i < 10 && j > -1)
    {

        printf("(%d,%d)\n", i, j);
        i = i + 1;
        j = j - 1;

    }

    return;

}