/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * A partir de la estrucutra de repetición while el programa imprime
 * en pantalla cierto patron de asteriscos.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 09-11-2021
 * Actividad: while12_06.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void imprimir_patron();
void imprimir_patron2(int arg_i);


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
    printf(" ║ Actividad: while12_06                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción:  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    return;

}

void imprimir_patron()
{

    // Declaración de variables:
    int i = 0;

    while(i < 10)
    {

        imprimir_patron2(i);
        ++i;
        printf("\n");

    }

    printf("\n");

    return;

}

void imprimir_patron2(int arg_i)
{

    int i = 10 - arg_i;  
    
    while(i > 0)
    {

        printf("*");
        --i;

    }

    return;

}

