/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * A partir de la estrucutura de repetición while el programa imprime en
 * pantalla cierto patron de asteriscos.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 09-11-2021
 * Actividad: while12_05.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void imprimir_patron();


int main()
{

    // Ejecución de funciones:
    bienvenida();
    imprimir_patron();

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 09-11-2021                                         ║\n");
    printf(" ║ Actividad: while12_05                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: Por medio del ciclo de repetición while, el  ║\n");
    printf(" ║ programa se encarga de imprimir el seguiente patron:      ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");
    printf("\n");

    return;

}

void imprimir_patron()
{

    // Declaración de variables:
    int i = 0;

    while(i < 10)
    {

        printf("**********\n");

        i = i + 1;

    }

    printf("\n");

    return;

}