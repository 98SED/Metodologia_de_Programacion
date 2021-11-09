#include<stdio.h>

double makm(double arg_metros);
void bienvenida();

int main()
{

    double metros = 0.0;

    bienvenida();

    printf("\n\n Ingrese un valor en metros: ");
    scanf("%lf", &metros);

    printf("\n El resultado es el siguiente: %lf [m] equivalen a %lf [km]\n\n", metros, makm(metros));

    return 0;

}

double makm(double arg_metros)
{

    double kilometros = arg_metros / 1000;

    return kilometros;

}

void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 28-09-2021                                         *\n");
    printf(" * Actividad: m_a_km                                         *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones se realizara la con-  *\n");
    printf(" * versión de una cantidad dada en metros a kilometros.      *\n");
    printf(" *************************************************************\n");
    printf("\n");

}