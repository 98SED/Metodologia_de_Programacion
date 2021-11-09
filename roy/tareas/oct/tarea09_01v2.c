/*
 * DESCRIPCIÒN: El presente programa se encarga de leer 5 datos tipo double,
 * almacenarlos en variables y posteriormente calcular el promedio de dichas
 * catidades para finalmente mostrar al usuario los resultados en pantalla.
 * 
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 16/10/2021
 * Actividad: tarea09_01.c
 */

#include <stdio.h>
#include <math.h>

// Declaración de funciones:
void bienvenida();

void solicitar_datos(double *ptr_calificacion_1, double *ptr_calificacion_2,
                     double *ptr_calificacion_3, double *ptr_calificacion_4,
                     double *ptr_calificacion_5);

void calcular_promedio(double arg_calificacion_1, double arg_calificacion_2,
                       double arg_calificacion_3, double arg_calificacion_4,
                       double arg_calificacion_5, double *ptr_promedio);

void calcular_desviacion(double arg_calificacion_1, double arg_calificacion_2,
                         double arg_calificacion_3, double arg_calificacion_4,
                         double arg_calificacion_5, double arg_promedio,
                         double *ptr_desviacion);

void imprimir_resultados(double arg_calificacion_1, double arg_calificacion_2,
                         double arg_calificacion_3, double arg_calificacion_4,
                         double arg_calificacion_5, double arg_promedio,
                         double arg_desviacion);

int main()
{

    //Declaración de variables:
    double calificacion_1, calificacion_2, calificacion_3,
           calificacion_4, calificacion_5, promedio, desviacion;

    //Ejecución de funciones:
    bienvenida();

    solicitar_datos(&calificacion_1, &calificacion_2, &calificacion_3,
                    &calificacion_4, &calificacion_5);

    calcular_promedio(calificacion_1, calificacion_2, calificacion_3,
                      calificacion_4, calificacion_5, &promedio);

    calcular_desviacion(calificacion_1, calificacion_2, calificacion_3,
                        calificacion_4, calificacion_5, promedio, &desviacion);

    imprimir_resultados(calificacion_1, calificacion_2, calificacion_3,
                        calificacion_4, calificacion_5, promedio,
                        desviacion);

    return 0;

}

//Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 16-10-2021                                         *\n");
    printf(" * Actividad: tarea_09_01                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones se realizará el       *\n");
    printf(" * cálculo del promedio de 5 valores tipo double correspon-  *\n");
    printf(" * dientes a 5 calificaciones dadas por el usurio.           *\n");
    printf(" *************************************************************\n");
    printf("\n");

    return;

}

void solicitar_datos(double *ptr_calificacion_1, double *ptr_calificacion_2,
                     double *ptr_calificacion_3, double *ptr_calificacion_4,
                     double *ptr_calificacion_5)
{

    printf(" Ingrese las 5 calificaciones que desea promediar:\n\n");
    printf(" Calificación 1: ");
    scanf("%lf", ptr_calificacion_1);
    printf(" Calificación 2: ");
    scanf("%lf", ptr_calificacion_2);
    printf(" Calificación 3: ");
    scanf("%lf", ptr_calificacion_3);
    printf(" Calificación 4: ");
    scanf("%lf", ptr_calificacion_4);
    printf(" Calificación 5: ");
    scanf("%lf", ptr_calificacion_5);

    return;

}
                    

void calcular_promedio(double arg_calificacion_1, double arg_calificacion_2,
                       double arg_calificacion_3, double arg_calificacion_4,
                       double arg_calificacion_5, double *ptr_promedio)
{

    *ptr_promedio = (arg_calificacion_1 + arg_calificacion_2 + arg_calificacion_3
                     + arg_calificacion_4 + arg_calificacion_5) / 5;

    return;

}

void calcular_desviacion(double arg_calificacion_1, double arg_calificacion_2,
                         double arg_calificacion_3, double arg_calificacion_4,
                         double arg_calificacion_5, double arg_promedio,
                         double *ptr_desviacion)
{

    *ptr_desviacion = sqrt((pow((arg_calificacion_1 - arg_promedio), 2) +
                               pow((arg_calificacion_2 - arg_promedio), 2) +
                               pow((arg_calificacion_3 - arg_promedio), 2) +
                               pow((arg_calificacion_4 - arg_promedio), 2) +
                               pow((arg_calificacion_5 - arg_promedio), 2)) /
                               4);

    return;

}

void imprimir_resultados(double arg_calificacion_1, double arg_calificacion_2,
                         double arg_calificacion_3, double arg_calificacion_4,
                         double arg_calificacion_5, double arg_promedio,
                         double arg_desviacion)
{

    printf("\n\n **************************");
    printf("\n *     Calificaciones     *");
    printf("\n **************************");
    printf("\n *  Calificación 1  * %.3lf", arg_calificacion_1);
    printf("\n *  Calificación 2  * %.3lf", arg_calificacion_2);
    printf("\n *  Calificación 3  * %.3lf", arg_calificacion_3);
    printf("\n *  Calificación 4  * %.3lf", arg_calificacion_4);
    printf("\n *  Calificación 5  * %.3lf", arg_calificacion_5);
    printf("\n **************************");
    printf("\n *     Promedio     * %.3lf", arg_promedio);
    printf("\n *    Desviación    *      ");
    printf("\n *     Estandar     * %.3lf", arg_desviacion);
    printf("\n **************************\n\n");

    return;

}