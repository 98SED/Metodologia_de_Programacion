/*
 * Descripción del programa: El programa se encarga de determinar si un número
 * es igual, menor o mayor a 100.
 * 
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 23-10-2021
 * Actividad: tarea10_01.c
 */

#include <stdio.h>

// Declaración de funciones
void bienvenida();
void solicitar_datos(double *ptr_numero);
void imprimir_resultados(double arg_numero
                    /* , double arg_mayor, 
                         double arg_menor, 
                         double arg_igual */);

int main()
{

    // Declaración de variables 
    double numero = 0.0;

    // Prueba
    /* double mayor = 0.0; 
    double menor = 0.0;
    double igual = 0.0; */

    // Ejecución de funciones
    bienvenida();
    solicitar_datos(&numero);

    /* calcular(numero, &mayor, &menor, &igual); */

    imprimir_resultados(numero/* , mayor, menor, igual */);
    

}

// Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 23-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea10_01                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa determina si un número ingresado ║\n");
    printf(" ║ es mayor, igual o menor a 100.                            ║\n");
    printf(" ╚═══════════════════════════════════════════════════════════╝\n");
    printf("\n");
    
    return;

}

void solicitar_datos(double *ptr_numero)
{

    printf("\n Ingrese un número: ");
    scanf("%lf", ptr_numero);

    return;

}

// Prueba
/* void calcular(double arg_numero, double *ptr_mayor, double *ptr_menor,
                 double *ptr_igual)
{

    *ptr_mayor = arg_numero > 100;
    *ptr_menor = arg_numero < 100;
    *ptr_igual = arg_numero == 100;

} */

void imprimir_resultados(double arg_numero
                    /* , double arg_mayor, 
                         double arg_menor, 
                         double arg_igual */)
{

    if (arg_numero > 100)
    {
        printf("\n\n %.2lf es mayor a 100.\n\n", arg_numero);

        return;
    }
    if (arg_numero == 100)
    {
        printf ("\n\n %.2lf es igual que 100.\n\n", arg_numero);
    } 
    else
    {
        printf("\n\n %.2lf es menor que 100.\n\n", arg_numero);
    }

    
    // Prueba

    /* if (arg_mayor)
    {
        printf("\n\n %.2lf es mayor a 100\n\n", arg_numero);

        return;
    }
    if (arg_menor)
    {
        printf("\n\n %.2lf es menor a 100\n\n", arg_numero);

        return;
    }
    if (arg_igual)
    {
        printf("\n\n %.2lf es igual a 100\n\n", arg_numero);

        return;
    } */

    return;

}
