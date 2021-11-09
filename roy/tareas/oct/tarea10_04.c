/*
 * Descripción del programa
 * El programa se encarga de leer 3 números introducidos por el usuario y
 * determinar cual es ellos es el mayor.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 26-10-2021
 * Actividad: tarea10_04.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();
void solicitar_datos(double *ptr_numero1, 
                     double *ptr_numero2,
                     double *ptr_numero3);
void imprimir_resultados(double arg_numero1,
                         double arg_numero2,
                         double arg_numero3);

int main()
{

    // Declaración de variables:
    double numero1, numero2, numero3;

    // Ejecución de funciones
    bienvenida();
    solicitar_datos(&numero1, &numero2, &numero3);
    imprimir_resultados(numero1, numero2, numero3);

    return 0;

}

// Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 26-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea10_04                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa determina que número es mayor de ║\n");
    printf(" ║ un total de 3 números ingresados por el usuario.          ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    
    return;

}

void solicitar_datos(double *ptr_numero1, 
                     double *ptr_numero2,
                     double *ptr_numero3)
{

    printf(" ║ Ingrese tres números (n1,n2,n3): ");
    scanf("%lf,%lf,%lf", ptr_numero1, ptr_numero2, ptr_numero3);

    return;

}

void imprimir_resultados(double arg_numero1,
                         double arg_numero2,
                         double arg_numero3)
{

    if (arg_numero1 > arg_numero2)
    {

        if (arg_numero1 > arg_numero3)
        {
            
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %lf es mayor que %lf y %lf."
            "\n", arg_numero1, arg_numero2, arg_numero3);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");

            return;

        }

    }

    if (arg_numero2 > arg_numero1)
    {

        if (arg_numero2 > arg_numero3)
        {
            
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %lf es mayor que %lf y %lf."
            "\n", arg_numero2, arg_numero1, arg_numero3);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");

            return;

        }

    }

    if (arg_numero3 > arg_numero1)
    {

        if (arg_numero3 > arg_numero2)
        {
            
            printf(" ╠════════════════════════════════════════════════════════"
            "═══╣\n");
            printf(" ║ %lf es mayor que %lf y %lf."
            "\n", arg_numero3, arg_numero1, arg_numero2);
            printf(" ╚════════════════════════════════════════════════════════"
            "═══╝\n");
            printf("\n");

            return;

        }

    }
    else
    {

        printf(" ╠════════════════════════════════════════════════════════"
        "═══╣\n");
        printf(" ║ %lf, %lf y %lf son iguales."
        "\n", arg_numero1, arg_numero2, arg_numero3);
        printf(" ╚════════════════════════════════════════════════════════"
        "═══╝\n");
        printf("\n");

        return;

    }

}