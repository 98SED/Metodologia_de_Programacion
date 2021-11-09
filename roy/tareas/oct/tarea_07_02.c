/* 
 * DESCRIPCIÓN DEL PROGRAMA
 * El presente programa se encarga de convertir un escalar dado en ºC a ºF,
 * además, también se encarga de convertir magnitudes escalares en ºF a ªC,
 * todo por medio de funciones.
 * 
 * Autor del Código: Rodrigo Eduardo Delgadillo González
 * Fecha: 05-10-2021
 * Actividad: tarea_07_02
 */

#include<stdio.h>


//Declaración de funciones:
void bienvenida();
double conversion_c_a_f(double arg_celcius);
double conversion_f_a_c(double arg_fahrenheit);

int main(void)
{

    //Declaración de variables:
    double c1 = 0.0, c2 = 0.0, c3 = 0.0, c4 = 0.0, c5 = 0.0;
    double f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;

    //Mensajes al usuario:
    bienvenida();

    //Solicitud de valores
    printf("\n");
    printf(" Formato para ingresar datos: cantidad1,cantidad 2,cantidadn\n");
    printf("\n Ingrese 5 escalares en ºC: ");
    scanf("%lf,%lf,%lf,%lf,%lf", &c1, &c2, &c3, &c4, &c5);
    printf("\n\n Ingrese 5 escalares en ºF: ");
    scanf("%lf,%lf,%lf,%lf,%lf", &f1, &f2, &f3, &f4, &f5);

    //Impresión de resultados
    printf("\n\n");
    printf(" *********************************\n");
    printf(" *     Conversiones ºC a ºF      *\n");
    printf(" *********************************\n");
    printf(" *      ºC      **       ºF      *\n");
    printf(" *********************************\n");
    printf(" *     %.2lf     **     %.2lf     *\n", c1, conversion_c_a_f(c1));
    printf(" *     %.2lf     **     %.2lf     *\n", c2, conversion_c_a_f(c2));
    printf(" *     %.2lf     **     %.2lf     *\n", c3, conversion_c_a_f(c3));
    printf(" *     %.2lf     **     %.2lf     *\n", c4, conversion_c_a_f(c4));
    printf(" *     %.2lf     **     %.2lf     *\n", c5, conversion_c_a_f(c5));
    printf(" *********************************\n");
    printf("\n");

    printf("\n");
    printf(" *********************************\n");
    printf(" *     Conversiones ºF a ºC      *\n");
    printf(" *********************************\n");
    printf(" *      ºF      **       ºC      *\n");
    printf(" *********************************\n");
    printf(" *     %.2lf     **     %.2lf     *\n", f1, conversion_f_a_c(f1));
    printf(" *     %.2lf     **     %.2lf     *\n", f2, conversion_f_a_c(f2));
    printf(" *     %.2lf     **     %.2lf     *\n", f3, conversion_f_a_c(f3));
    printf(" *     %.2lf     **     %.2lf     *\n", f4, conversion_f_a_c(f4));
    printf(" *     %.2lf     **     %.2lf     *\n", f5, conversion_f_a_c(f5));
    printf(" *********************************\n");
    printf("\n");

    /*
     * Explicación correspondiente al reto:
     *
     * Según Jeff Szuhay (2020) en Learn C Programming Packt Publishing:
     * 
     * Para modificar el formato de salida, el primer paso es colocar el 
     * inicio de la especificación, seguido de las marcas, seguido del tamaño
     * mínimo, seguido de la presición, seguido del modificador de tamaño,
     * para al final colocar el especificador de conversión.
     * 
     * En este sentido y como la única necesidad es modificar la cantidad
     * de digitos en la parte dfraccionaria de los resultados, se comienza
     * con el inicio de la especificación, seguido de la precisión (como
     * se desea mostrar solo 2 digitos en la parte fraccionaria se usa .2)
     * y se termina colocando el especificador de conversión, lf para el
     * presente ejercicio.
     * 
     * Resultando lo siguiente:
     * 
     * %.2lf
     * 
     * % (inicio de la especificación).
     * .2 (precisión).
     * lf (especificador de conversión).
     */
    return 0;

}

//Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: tarea_07_02                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones se realizará la conv- *\n");
    printf(" * versión de 5 escalares en ºC a ºF y de 5 escañares en ºF  *\n");
    printf(" * a ºC por medio de funciones.                              *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

double conversion_c_a_f(double arg_celcius)
{

    double fahrenheit = (arg_celcius * 9/5) + 32;

    return fahrenheit;

}

double conversion_f_a_c(double arg_fahrenheit)
{

    double celcius = (arg_fahrenheit - 32) * 5/9;

    return celcius;

}
