/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * 
 * 
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 00-10-2021
 * Actividad: tarea00_00.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();


int main()
{

    // Declaración de variables:
    

    // Ejecución de funciones:
    

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 00-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea00_00                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción:  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    
    return;

}

char solicitar_datos()
{

    char caracter;

    if((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122))
    {

        printf("Ingrese una letra: ");
        scanf(" %c", &caracter);

    }
    else
    {
        printf("Ingrese una letra diferente de ñ: ");
        scanf(" %c", &caracter);
    }


    
    return caracter;

}