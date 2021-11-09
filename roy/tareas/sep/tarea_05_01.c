/*

Este programa se encarga de realizar la suma del valor en código ASCII de 3 caracteres y el número 32.

*/


#include<stdio.h>

int main()
{

    // Declaración de variables
    char caracter1 = 'R', caracter2 = 'E', caracter3 = 'D';
    char suma1 = caracter1 + 32;
    char suma2 = caracter2 + 32;

    //Impresión de resultados en pantalla y mensajes al usuario

    //Información de la actividad
    printf("\n Alumno: Rodrigo Eduardo Delgadillo González\n");
    printf(" Fecha: 21-09-202\n");
    printf(" Actividad: tarea_05_01.c\n");

    //Descripción del programa
    printf("\n Este programa muestra tres variables de tipo carácter y muestra el resultado de sumar a dichos caracteres el número 32.\n");

    //Advertencia
    printf("\n *******************************************\n");
    printf(" *              ADVERTENCIA                *\n");
    printf(" *******************************************\n");
    printf(" *   Considerar que en C el tipo de dato   *\n");
    printf(" *  char se interpreta como un int, y que  *\n");
    printf(" *   el número 32 se sumará al valor del   *\n");
    printf(" *    código ASCII asignado al carácter.   *\n");
    printf(" *******************************************\n");

    //Impresión de resultados
    printf("\n El primer carácter es: %c y la suma de este carácter y 32 es: %d, por tanto, el carácter resultante es: %c según el código ASCII resultante.\n", caracter1, caracter1 + 32, suma1);
    printf(" El segundo carácter es: %c y la suma de este carácter y 32 es: %d, por tanto, el carácter resultante es: %c según el código ASCII resultante.\n", caracter2, suma2, suma2);
    printf(" El tercer carácter es: %c y la suma de este carácter y 32 es: %d, por tanto, el carácter resultante es: %c según el código ASCII resultante.\n\n", caracter3, caracter3 + 32, caracter3 + 32);

    return 0;
}
