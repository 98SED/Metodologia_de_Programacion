/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * A partir de un valor de inicio y uno de fin, el programa imprime al usuario
 * la serie de números entre el número inicial y el número final (siempre que
 * el número inicial sea menor que el final), los números pares de la serie y
 * finalmente, los números impares de la serie.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 06-11-2021
 * Actividad: while12_04.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void solicitar_datos(int *ptr_inicio, int *ptr_final);
void serie();
void serie_par();
void serie_impar();

int main()
{

    // Declaración de variables:
    int inicio = 0, final = 0;

    // Ejecución de funciones:
    bienvenida();
    solicitar_datos(&inicio, &final);
    serie(inicio, final);
    serie_par(inicio, final);
    serie_impar(inicio, final);
    printf("\n\n");

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 06-11-2021                                         ║\n");
    printf(" ║ Actividad: while12_04                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: A partir de un valor de inicio y uno de fin  ║\n");
    printf(" ║ ingresado por el usuario y siempre que el número de ini-  ║\n");
    printf(" ║ cio sea menor que el número final, el programa mostrara   ║\n");
    printf(" ║ en pantalla la serie de números entre los valores dados y ║\n");
    printf(" ║ además los números pares e impares de dicha serie.        ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf("\n");
    return;

}

void solicitar_datos(int *ptr_inicio, int *ptr_final)
{

    int validador = 0;

    while(validador == 0)
    {

        printf("\nIntroduzca el valor de inicio y fin de la serie:\n");
        printf("Formato: inicio,fin\n");
        scanf("%d,%d", ptr_inicio, ptr_final);

        if(*ptr_inicio < *ptr_final)
        {

            printf("\n");
            printf("Los valores introducidos son validos, el resultado es:");
            printf("\n");

            validador = 1;

        }
        else
        {

            printf("\n");
            printf("Los valores introducidos son invalidos, el valor inicial");
            printf(" debe ser menor que el final.");
            printf("\n");

            validador = 0;

        }

    }

}

void serie(int arg_inicio, int arg_final)
{

    printf("\n");
    printf("Serie de números:\n");

    while(arg_inicio < arg_final + 1)
    {

        printf("%d ", arg_inicio);
        arg_inicio = arg_inicio + 1;

    }

    printf("\n");

    return;

}

void serie_par(int arg_inicio, int arg_final)
{

    printf("\n");
    printf("Números pares:\n");

    while(arg_inicio < arg_final + 1)
    {

        if(arg_inicio % 2 == 0)
        {
            printf("%d ", arg_inicio);
        }

        arg_inicio = arg_inicio + 1;

    }

    printf("\n");

    return;

}

void serie_impar(int arg_inicio, int arg_final)
{

    printf("\n");
    printf("Números impares:\n");

    while(arg_inicio < arg_final + 1)
    {

        if(arg_inicio % 2 != 0)
        {
            printf("%d ", arg_inicio);
        }

        arg_inicio = arg_inicio + 1;

    }

    printf("\n");

    return;

}