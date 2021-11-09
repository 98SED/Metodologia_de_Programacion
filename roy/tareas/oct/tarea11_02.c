/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa determina si el valor de un año dado por el usuario corresponde
 * al de un año bisiesto o no bisiesto, si y solo si el año se encuentre entre
 * 1582 y 2100.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 30-10-2021
 * Actividad: tarea11_02.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void solicitar_datos(int *ptr_anno);
void imprimir_resultados(int arg_anno);

int main()
{

    // Declaración de variables:
    int anno = 0;

    // Ejecución de funciones:
    bienvenida();
    solicitar_datos(&anno);
    imprimir_resultados(anno);

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 30-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea11_02                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa determina si el valor de un año  ║\n");
    printf(" ║ ingresado por el usuario es correspondiente a un año bi-  ║\n");
    printf(" ║ siesto o no bisiesto, siempre que este se encuentre en un ║\n");
    printf(" ║ rango de 1582 y 2100.                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    return;

}

void solicitar_datos(int *ptr_anno)
{

    printf(" ║ Ingrese un año entre 1582 y 2100: ");
    scanf("%d", ptr_anno);

    return;

}

void imprimir_resultados(int arg_anno)
{

    int validador = 0;

    if(arg_anno >= 1582 && arg_anno <= 2100)
    {

        if((arg_anno % 4 == 0 && arg_anno % 100 != 0) ||
           (arg_anno % 4 == 0 && arg_anno % 100 == 0 && arg_anno % 400 == 0))
        {

            validador = 1;

        }
        else
        {

            validador = 0;

        }

    }
    else
    {

        printf(" ╠════════════════════════════════════════════════════════"
               "═══╣\n");
        printf(" ║ %d no representa un valor valido, ingrese uno que lo sea║"
               "\n", arg_anno);
        printf(" ╚════════════════════════════════════════════════════════"
               "═══╝\n");
        printf("\n");

        return;

    }

    if(validador == 1)
    {

        printf(" ╠════════════════════════════════════════════════════════"
               "═══╣\n");
        printf(" ║ %d es un año bisiesto.                                  ║"
               "\n", arg_anno);
        printf(" ╚════════════════════════════════════════════════════════"
               "═══╝\n");
        printf("\n");

        return;

    }
    else
    {

        printf(" ╠════════════════════════════════════════════════════════"
               "═══╣\n");
        printf(" ║ %d es un año no bisiesto.                               ║"
               "\n", arg_anno);
        printf(" ╚════════════════════════════════════════════════════════"
               "═══╝\n");
        printf("\n");

        return;

    }

}