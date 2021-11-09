/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El presente programa se encarga de convertir un valor establecido en horas
 * a minutos, por medio de una función encargada de realizar la conversión
 * y de los operadores de dirección e indirección.
 * 
 * Alumnos programadores:
 * José Daniel Hernández Ruiz
 * Diego Villarreal Rodriguez
 * Rodrigo Eduardo Delgadillo González
 * 
 * Fecha: 08-10-2021
 * Actividad: horas_a_min
*/


#include<stdio.h>

//Declaración de funciones
void bienvenida();
void hrs_a_min(int arg_horas, int *ptr_minutos);

int main()
{

    //Declaración de variables
    int horas = 7450;
    int minutos = 0;

    //Mensajes al usuario
    bienvenida();

    //Impresión de valores iniciales
    printf("\n Los valores iniciales son:\n");
    printf("\n Horas: %d \n", horas);
    printf("\n Minutos: %d \n\n", minutos);

    //Ejecución de función
    hrs_a_min(horas, &minutos);

    //Impresión de resultados
    printf("\n %d horas = %d minutos\n\n", horas, minutos);

    return 0;

}

//Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumnos Programadores:                                    *\n");
    printf(" * José Daniel Hernández Ruiz                                *\n");
    printf(" * Diego Villarreal Rodriguez                                *\n");
    printf(" * Rodrigo Eduardo Delgadillo González                       *\n");
    printf(" *                                                           *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: horas_min                                      *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones, apuntadores, opera-  *\n");
    printf(" * dores de dirección y de indirección, se realizara la      *\n");
    printf(" * conversión de un valor en horas a minutos.                *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

void hrs_a_min(int arg_horas, int *ptr_minutos)
{
    int minutos = arg_horas * 60;
    *ptr_minutos = minutos;
}