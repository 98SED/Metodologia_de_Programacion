/*

El presente programa se encarga de determinar las soluciones de
una ecuación cuadrática por medio de formula general.

*/

#include<stdio.h>
#include<math.h>

int main()
{

    //Declaración de variables
    double a = 100.999, b = 250.2247, c = 48.98;
    double raiz1 = ( - b + sqrt( pow(b, 2) - 4 * a * c )) / ( 2 * a );
    double raiz2 = ( - b - sqrt( pow(b, 2) - 4 * a * c )) / ( 2 * a );

    //Mensajes al usuario
    printf("\nElaborado por el alumno Rodrigo Eduardo Delgadillo González el 21 de septiembre de 2021\n Actividad: tarea_05_03.c\n\n");
    printf("Este programa se encarga de resolver ecuaciones cuadráticas por medio de la fórmula general.\n\n");
    printf("La ecuación cuadratica dada es: %lfx^2 + %lfx + %lf = 0\n\n", a, b, c);

    //Resultados
    printf("La primera solución a la ecuación cuadrática dada es: x1 = %lf\n", raiz1);
    printf("La segunda solución a la ecuación cuadrática dada es: x2 = %lf\n\n", raiz2);

    return 0;

}
