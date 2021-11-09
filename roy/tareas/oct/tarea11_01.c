/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de leer un valor dado por el usuario interpetado como
 * una calificación y despliega en pantalla la equivalencia de dicha califica-
 * ción como una letra mayúscula.
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 30-10-2021
 * Actividad: tarea11_01.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void solicitar_datos(int *ptr_calificacion);
void calcular_calificacion(int arg_calificacion, int *ptr_validez, int *ptr_equivalencia);
void imprimir_resultados(int arg_calificacion, int arg_validez, char arg_equivalencia);

int main()
{

    // Declaración de variables:
    int calificacion = 0;
    int validez = 0;
    int equivalencia = 0;

    // Ejecución de funciones:
    bienvenida();
    solicitar_datos(&calificacion);
    calcular_calificacion(calificacion, &validez, &equivalencia);
    imprimir_resultados(calificacion, validez, equivalencia);
    

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 30-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea11_01                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa leera un número entero entre 0 y ║\n");
    printf(" ║ 100 interpretado como una calificación, para mostrar al   ║\n");
    printf(" ║ usuario la equivalencia de dicha calificación en letras   ║\n");
    printf(" ║ mayúsculas de la A a la D.                                ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    
    return;

}

void solicitar_datos(int *ptr_calificacion)
{

    printf(" ║ Ingrese un número entre 0 y 100: ");
    scanf("%d", ptr_calificacion);

    return;

}

void calcular_calificacion(int arg_calificacion, int *ptr_validez, int *ptr_equivalencia)
{

    if (arg_calificacion >= 0 && arg_calificacion <= 100)
    {
        *ptr_validez = 1;
    }
    else
    {
        *ptr_validez = 0;
    }

    if (*ptr_validez == 1)
    {

        if (arg_calificacion >= 0 && arg_calificacion <= 69)
        {

            *ptr_equivalencia = 68;

        }
        if (arg_calificacion >= 70 && arg_calificacion <= 79)
        {

            *ptr_equivalencia = 67;

        }
        if (arg_calificacion >= 80 && arg_calificacion <= 92)
        {

            *ptr_equivalencia = 66;

        }
        if (arg_calificacion >= 93 && arg_calificacion <= 100)
        {

            *ptr_equivalencia = 65;

        }

    }
    else
    {
        *ptr_equivalencia = 0;
    }

}

void imprimir_resultados(int arg_calificacion, int arg_validez, char arg_equivalencia)
{

    if (arg_validez == 1)
    {
        if (arg_equivalencia == 68)
        {
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %d es equivalente a una %c de calificación"
            "\n", arg_calificacion, arg_equivalencia);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");
            return;
        }
        if (arg_equivalencia == 67)
        {
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %d es equivalente a una %c de calificación"
            "\n", arg_calificacion, arg_equivalencia);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");
            return;
        }
        if (arg_equivalencia == 66)
        {
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %d es equivalente a una %c de calificación"
            "\n", arg_calificacion, arg_equivalencia);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");
            return;
        }
        if (arg_equivalencia == 65)
        {
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %d es equivalente a una %c de calificación"
            "\n", arg_calificacion, arg_equivalencia);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");
            return;
        }
        
    }
    if (arg_equivalencia == 0 && arg_validez == 0)
    {
        printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %d no es un valor valido, ingrese uno entre 0 y 100"
            "\n", arg_calificacion);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");
            return;
    }
    
}