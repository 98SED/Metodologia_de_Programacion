/* 
 *
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de leer valores tipo double para guardarlos en 
 * variables y mostrarlos en pantalla como coordenadas, además de calcular
 * la distancia entre los puntos.
 *
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 28-09-2021
 * Actividad: tarea_06_03
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{

    //Inicio del código

    //Declaración de variables
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;

    //Declaración directa de apuntadores
    double *ptr_x1 = &x1, *ptr_y1 = &y1, *ptr_x2 = &x2, *ptr_y2 = &y2;

    //Mensajes al usuario y solicitud de información

    //Detalles
    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 28-09-2021                                         *\n");
    printf(" * Actividad: tarea_06_03                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de solicitar *\n");
    printf(" * al usuario valores tipo double, correspondientes a las    *\n");
    printf(" * coordenadas de dos puntos en el plano para mostrar dichos *\n");
    printf(" * valores en pantalla por medio de apuntadores y finalmente *\n");
    printf(" * realizar el calculo de la distancia entre dichos puntos.  *\n");
    printf(" *************************************************************\n");
    printf("\n");

    //Solicitud de información
    printf(" Formato para ingresar coordenadas: valorx,valory (enter)\n");
    printf("\n Ingrese las coordenadas del punto 1: ");
    scanf("%lf,%lf", ptr_x1, ptr_y1);
    printf(" Ingrese las coordenadas del punto 2: ");
    scanf("%lf,%lf", ptr_x2, ptr_y2);


    //Resultados
    printf("\n");
    printf("\n *************************************************************");
    printf("\n\n");
    printf(" Las coordenadas almacenadas son:");
    printf("\n\n Punto 1: (%lf,%lf)\n", x1, y1);
    printf(" Punto 2: (%lf,%lf)\n", x2, y2);
    printf("\n La distancia entre los puntos es: ");
    printf("%lf\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;

}