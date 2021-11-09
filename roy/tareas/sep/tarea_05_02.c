/*

 El presente programa se encarga de realizar la conversión de una magnitud escalar dada en metros [m]
 a cetímetros [cm], milímetros [mm] y kilómetros [km].
 
 Elaborado por el alumno: Rodrigo Eduardo Delgadillo González
 Grupo: B
 Fecha: 21-09-2021

*/

#include<stdio.h>
#include<math.h>

int main()
{
    //Declaración de variables
    double metros = 58.4898;

    //Mensajes al usuario
    printf("\n Elaborado por el alumno Rodrigo Eduardo Delgadillo González el 21 de septiembre de 2021\n Archivo: tarea_05_02.c\n");
    printf("\n El presente programa se encarga de realizar la conversión de una magnitud escalar dada en metros [m]\n");
    printf(" a centímetros [cm], milímetros [mm] y kilómetros [km].\n");
    printf("\n El valor de la magnitud escalar es = %f [m]\n", metros);

    //Resultados
    printf("\n %f [m] equivale a %f [cm]\n", metros, metros * 100);
    printf(" %f [m] equivale a %f [mm]\n", metros, metros * 1000);
    printf(" %f [m] equivale a %f [km]\n\n", metros, metros / 1000);

    return 0;

}

