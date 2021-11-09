/* 
 *
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de mostrar el valor de distintos tipos de variables
 * para después modificar estos con el operador de indirección y mostrar el 
 * resultado de dichas modificaciones.
 *
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 28-09-2021
 * Actividad: tarea_06_01
 *
 */

#include<stdio.h>

int main()
{
    //Inicio del código

    //Declaración de variables
    int entero1 = 6, entero2 = 1000;
    double doble1 = 56.784512, doble2 = 3.1416;
    char caracter1 = 'A', caracter2 = 'Z';

    //Declaración directa de apuntadores
    int *ptr_entero1 = &entero1, *ptr_entero2 = &entero2;
    double *ptr_doble1 = &doble1, *ptr_doble2 = &doble2;
    char *ptr_caracter1 = &caracter1, *ptr_caracter2 = &caracter2;

    //Mensajes al usuario

    //Detalles
    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 28-09-2021                                         *\n");
    printf(" * Actividad: tarea_06_01                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de mostrar   *\n");
    printf(" * en pantalla valores de diversos tipos de variables para   *\n");
    printf(" * después modificarlos con el operador de indirección y     *\n");
    printf(" * mostrar los resultados en pantalla.                       *\n");
    printf(" *************************************************************\n");
    printf("\n");

    //Impresión de valores iniciales   
    printf(" Los valores iniciales son los siguientes:\n");
    printf("\n Entero 1 = %d\n", entero1);
    printf(" Dirección de memoria: %p\n", &entero1);
    printf("\n Entero 2 = %d\n", entero2);
    printf(" Dirección de memoria: %p\n", &entero2);
    printf("\n Double 1 = %lf\n", doble1);
    printf(" Dirección de memoria: %p\n", &doble1);
    printf("\n Double 2 = %lf\n", doble2);
    printf(" Dirección de memoria: %p\n", &doble2);
    printf("\n Carácter 1 = %c\n", caracter1);
    printf(" Dirección de memoria: %p\n", &caracter1);
    printf("\n Carácter 2 = %c\n", caracter2);
    printf(" Dirección de memoria: %p\n\n", &caracter2);

    //Modificación de valores
    *ptr_entero1 = 4, *ptr_entero2 = 8;
    *ptr_doble1 = 48.98, *ptr_doble2 = 2.718281828;
    *ptr_caracter1 = 'R', *ptr_caracter2 = 'D';

    //Impresión de valores modificados
    printf("\n *************************************************************");
    printf("\n");
    printf("\n Los valores modificados son los siguientes:\n");
    printf("\n Entero 1 = %d\n", entero1);
    printf(" Dirección de memoria: %p\n", &entero1);
    printf("\n Entero 2 = %d\n", entero2);
    printf(" Dirección de memoria: %p\n", &entero2);
    printf("\n Double 1 = %lf\n", doble1);
    printf(" Dirección de memoria: %p\n", &doble1);
    printf("\n Double 2 = %lf\n", doble2);
    printf(" Dirección de memoria: %p\n", &doble2);
    printf("\n Carácter 1 = %c\n", caracter1);
    printf(" Dirección de memoria: %p\n", &caracter1);
    printf("\n Carácter 2 = %c\n", caracter2);
    printf(" Dirección de memoria: %p\n\n", &caracter2);

    return 0;
}
