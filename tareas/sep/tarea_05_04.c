/*

 Este programa se encarga de mostrar al usuario la dirección de memoria de una variable tipo int, char, float y double
 Programa elaborado por el alumno Rodrigo Eduardo Delgadillo González el 21 de septiembre de 2021
 Actividad: tarea_05_04.c

*/

#include<stdio.h>

int main()
{

    //Declaración de variables
    int entero = 82;
    char caracter = 'R';
    float flotante = 82.001;
    double doble = 82.000000001;

    //Mensajes al usuario
    printf("\n Programa elaborado por el alumno Rodrigo Eduardo Delgadillo González el 21 de septiembre de 2021\n Actividad: tarea_05_04.c\n");
    printf("\n Este programa se encarga de mostrar la dirección de memoria de una variable tipo int, otra tipo char, una tipo float y finalmente una variable tipo double\n");

    //Resultados
    printf("\n La dirección de momoria de la variable tipo int es: %p \n", &entero);
    printf(" La dirección de momoria de la variable tipo char es: %p \n", &caracter);
    printf(" La dirección de momoria de la variable tipo float es: %p \n", &flotante);
    printf(" La dirección de momoria de la variable tipo double es: %p \n\n", &doble);

    return 0;

}
