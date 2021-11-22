/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * Por medio de las funciones rand, srand, time y una función del presente
 * programa, se muestra al usuario un arreglo de 50 elementos conformado por
 * números aleatorios entrw 1 y 6.
 * 
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 12-11-2021
 * Actividad: array13_01.c
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Declaración de funciones:
void bienvenida();
int aleatorio_rango(int arg_inicio, int arg_final);


int main()
{
    srand(time(NULL));

    // Declaración de variables:
    int inicio = 1;
    int final = 6;
    int numeros_aleatorios [50];

    // Ejecución de funciones:
    bienvenida();

    for(int i = 0; i < 50; ++i)
    {

        numeros_aleatorios [i] = aleatorio_rango(inicio, final);

        if(i % 5 == 0)
        {
            printf("\n");
        }
        //else if(i % )
        printf("%d ", numeros_aleatorios[i]);

    }

    /* for(int i = 0; i < 50; ++i)
    {

        if(i % 5 == 0)
        {
            printf("\n");
        }
        //else if(i % )
        printf("%d ", numeros_aleatorios[i]);

    } */

    printf("\n\n");

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 12-11-2021                                         ║\n");
    printf(" ║ Actividad: array13_01                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: Por medio de funciones, el programa genera   ║\n");
    printf(" ║ números aleatorios entre 1 y 6 en un arreglo de 50 ele-   ║\n");
    printf(" ║ mentos auxiliandose de las funciones srand, rand y time   ║\n");
    printf(" ║ para generar números aleatorios en cada ejecución         ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");
    
    return;

}

int aleatorio_rango(int arg_inicio, int arg_final)
{

    return (rand() % arg_final) + arg_inicio;

}