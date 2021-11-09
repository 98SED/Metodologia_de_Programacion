/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de cálcular la distancia recorrida por un vehículo a
 * partir de los litros de gasolina cargados y del rendimiento del vehículo.
 *
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 19-10-2021
 * Actividad: distancia.c
 */


#include<stdio.h>

// Declaración de funciones:
void bienvenida();

void solicitar_datos(double *ptr_cambustible, double *ptr_rendimiento);

void calcular_distancia_recorrida(double arg_combustible,
                                  double arg_rendimiento,
                                  double *ptr_distancia_recorrida);

void imprimir_resultados(double arg_combustible,
                         double arg_rendimiento,
                         double arg_distancia_recorrida);

int main()
{

    //Declaración de variables:
    double combustible = 0.0;
    double rendimiento = 0.0;
    double distancia_recorrida = 0.0;

    //Ejecución de funciones:
    bienvenida();
    solicitar_datos(&combustible, &rendimiento);
    calcular_distancia_recorrida(combustible, rendimiento, &distancia_recorrida);
    imprimir_resultados(combustible, rendimiento, distancia_recorrida);

    return 0;

}

// Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf(" + Alumno Programador: Rodrigo Eduardo Delgadillo González   +\n");
    printf(" + Fecha: 19-10-2021                                         +\n");
    printf(" + Actividad: distancia                                      +\n");
    printf(" +                                                           +\n");
    printf(" + Descripción: Por medio de funciones, el programa se en-   +\n");
    printf(" + cargara de estimar la distancía que podría recorrer un    +\n");
    printf(" + vehículo a partir del combustible cargado y su rendimien- +\n");
    printf(" + to.                                                       +\n");
    printf(" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");

    return;

}

void solicitar_datos(double *ptr_cambustible, double *ptr_rendimiento)
{

    printf(" Ingrese el combustible cargado [L] en su vehículo: ");
    scanf("%lf", ptr_cambustible);
    printf(" Ingrese el rendimiento [km/L] de su vehículo: ");
    scanf("%lf", ptr_rendimiento);

    return;

}

void calcular_distancia_recorrida(double arg_combustible,
                                  double arg_rendimiento,
                                  double *ptr_distancia_recorrida)
{

    *ptr_distancia_recorrida = arg_combustible * arg_rendimiento;

    return;

}

void imprimir_resultados(double arg_combustible,
                         double arg_rendimiento,
                         double arg_distancia_recorrida)
{

    printf("\n");
    printf(" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n A partir de los datos ingresados");
    printf(", su vehículo recorrera %.2lf [km].\n", arg_distancia_recorrida);
    printf("\n Datos ingresados del vehículo:\n");
    printf(" %.3lf [L] de combustible cargado.", arg_combustible);
    printf("\n %.3lf [km/L] de rendimiento.\n\n", arg_rendimiento);

    return;

}
