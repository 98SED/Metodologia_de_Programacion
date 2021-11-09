/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa imprime la suma de cada uno de los números de una serie
 * determinada por el usuario, además, muestra la suma de los números
 * pares e impares de la serie numérica.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 09-11-2021
 * Actividad: while12_07.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void solicitar_datos(int *ptr_li, int *ptr_ls);
void suma();
void suma_par();
void suma_impar();

int main()
{

    // Declaración de variables:
    int li = 0, ls = 0;

    // Ejecución de funciones:
    bienvenida();
    solicitar_datos(&li, &ls);
    suma(li, ls);
    suma_par(li, ls);
    suma_impar(li, ls);
    printf("\n\n");

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 09-11-2021                                         ║\n");
    printf(" ║ Actividad: while12_07                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa imprime la suma de cada uno de   ║\n");
    printf(" ║ los números de una serie determinada por el usuario,      ║\n");
    printf(" ║ además, muestra la suma de los pares e impares de la se-  ║\n");
    printf(" ║ rie numérica.                                             ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");

    return;

}

void solicitar_datos(int *ptr_li, int *ptr_ls)
{

    int validador = 0;

    while(validador == 0)
    {

        printf("\nIntroduzca el valor de inicio y fin de la suma:\n");
        printf("Formato: inicio,fin\n");
        scanf("%d,%d", ptr_li, ptr_ls);

        if(*ptr_li < *ptr_ls)
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

void suma(int arg_li, int arg_ls)
{

    int acumulador = 0;
    printf("Suma de la serie:");
    printf("\n");

    while(arg_li < arg_ls + 1)
    {

        acumulador = acumulador + arg_li;

        arg_li = arg_li + 1;

    }

    printf("∑ = %d ", acumulador);
    printf("\n");

    return;

}

void suma_par(int arg_li, int arg_ls)
{

    int acumulador = 0;
    printf("Suma de pares:");
    printf("\n");

    while(arg_li < arg_ls + 1)
    {

        if(arg_li % 2 == 0)
        {
            acumulador = acumulador + arg_li;
        }

        arg_li = arg_li + 1;

    }

    printf("∑ = %d ", acumulador);
    printf("\n");

    return;

}

void suma_impar(int arg_li, int arg_ls)
{

    int acumulador = 0;
    printf("Suma de impares:");
    printf("\n");

    while(arg_li < arg_ls + 1)
    {

        if(arg_li % 2 != 0)
        {
            acumulador = acumulador + arg_li;
        }

        arg_li = arg_li + 1;

    }

    printf("∑ = %d ", acumulador);
    printf("\n");

    return;

}