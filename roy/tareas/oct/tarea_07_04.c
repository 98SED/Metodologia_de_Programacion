/* 
 * DESCRIPCIÓN DEL PROGRAMA
 * El presente programa se encarga de convertir 5 valores tipo char en mayúscu-
 * las a minúsculas y viceversa.
 * 
 * Autor del Código: Rodrigo Eduardo Delgadillo González
 * Fecha: 05-10-2021
 * Actividad: tarea_07_04
 */

#include<stdio.h>


//Declaración de funciones:
void bienvenida();
char conversion_mayus_a_minus(char arg_mayus);
char conversion_minus_a_mayus(char arg_minus);

int main(void)
{

    //Declaración de variables:
    char mayus1 = '\0', mayus2 = '\0', mayus3 = '\0', mayus4 = '\0', mayus5 = '\0';
    char minus1 = '\0', minus2 = '\0', minus3 = '\0', minus4 = '\0', minus5 = '\0';

    //Mensajes al usuario:
    bienvenida();

    //Solicitud de valores
    printf("\n");
    printf(" Formato para ingresar datos: carácter1,carácter2,caráctern\n");
    printf("\n Ingrese 5 cáracteres en mayúsculas: ");
    scanf(" %c,%c,%c,%c,%c", &mayus1, &mayus2, &mayus3, &mayus4, &mayus5);
    printf("\n\n Ingrese 5 carácteres en minúsculas: ");
    scanf(" %c,%c,%c,%c,%c", &minus1, &minus2, &minus3, &minus4, &minus5);

    //Impresión de resultados
    printf("\n\n");
    printf(" ****************************************\n");
    printf(" * Conversiones Mayúsculas a Minúsculas *\n");
    printf(" ****************************************\n");
    printf(" *    Mayúsculas    ->    Minúsculas    *\n");
    printf(" ****************************************\n");
    printf(" *        %c         **        %c         *\n", mayus1, conversion_mayus_a_minus(mayus1));
    printf(" *        %c         **        %c         *\n", mayus2, conversion_mayus_a_minus(mayus2));
    printf(" *        %c         **        %c         *\n", mayus3, conversion_mayus_a_minus(mayus3));
    printf(" *        %c         **        %c         *\n", mayus4, conversion_mayus_a_minus(mayus4));
    printf(" *        %c         **        %c         *\n", mayus5, conversion_mayus_a_minus(mayus5));
    printf(" ****************************************\n");
    printf("\n");

    printf("\n\n");
    printf(" ****************************************\n");
    printf(" * Conversiones Mayúsculas a Minúsculas *\n");
    printf(" ****************************************\n");
    printf(" *    Minúsculas    ->    Mayúsculas    *\n");
    printf(" ****************************************\n");
    printf(" *        %c         **        %c         *\n", minus1, conversion_minus_a_mayus(minus1));
    printf(" *        %c         **        %c         *\n", minus2, conversion_minus_a_mayus(minus2));
    printf(" *        %c         **        %c         *\n", minus3, conversion_minus_a_mayus(minus3));
    printf(" *        %c         **        %c         *\n", minus4, conversion_minus_a_mayus(minus4));
    printf(" *        %c         **        %c         *\n", minus5, conversion_minus_a_mayus(minus5));
    printf(" ****************************************\n");
    printf("\n");

    return 0;

}

//Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: tarea_07_04                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de convertir *\n");
    printf(" * 5 valores tipo char en mayúscula a minúscula y viceversa. *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

char conversion_mayus_a_minus(char arg_mayus)
{

    char minus = arg_mayus + 32;

    return minus;

}

char conversion_minus_a_mayus(char arg_minus)
{

    char mayus = arg_minus - 32;

    return mayus;

}