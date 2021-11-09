/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de mostrar en pantalla una serie de números del 0 al
 * 9 por medio de la estructura de repetición while.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 06-11-2021
 * Actividad: while12_01.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void serie_1();


int main()
{

    // Ejecución de funciones:
    bienvenida();
    serie_1();
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
    printf(" ║ Actividad: while12_01                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: Por medio del ciclo de repetición while, se  ║\n");
    printf(" ║ muestra en pantalla una serie de números del 0 al 9.      ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf("\n");

    return;

}

void serie_1()
{

    int i = 0;

    while(i < 10)
    {

        printf("%d\n", i);

        i = i + 1;

    }

    return;

}