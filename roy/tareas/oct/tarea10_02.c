/*
 * Descripción del programa: El programa se encarga de determinar si un número 
 * es par o impar.
 * 
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 23-10-2021
 * Actividad: tarea10_02.c
 */

#include <stdio.h>

// Declaración de funciones
void bienvenida();
void solicitar_datos(int *ptr_numero);
void imprimir_resultados(int arg_numero);

int main()
{

    // Declaración de variables 
    int numero = 0.0;

    // Ejecución de funciones
    bienvenida();
    solicitar_datos(&numero);

    imprimir_resultados(numero);
    

}

// Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 23-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea10_02                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa determina si un número ingresado ║\n");
    printf(" ║ es par o impar.                                           ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");
    printf("\n");
    
    return;

}

void solicitar_datos(int *ptr_numero)
{

    printf("\n Ingrese un número: ");
    scanf("%d", ptr_numero);

    return;

}

void imprimir_resultados(int arg_numero)
{

    if ( arg_numero % 2 == 0)
    {

        printf("\n\n %d es par.\n\n", arg_numero);

    }
    else
    {

        printf("\n\n %d es impar\n\n", arg_numero);

    }

    return;

}
