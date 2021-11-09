/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de realizar diversas pruebas con operadores lógicos
 * con la finalidad de identificar el comportamiento de estos.
 *
 * Alumno programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 03-11-2021
 * Actividad: tarea11_03.c
 */

#include <stdio.h>

// Declaración de funciones:
void bienvenida();


int main()
{

    // Declaración de variables:
    double num1 = 0.0, num2 = 0.0;
    char letra = '\0';

    // Ejecución de funciones:
    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 03-11-2021                                         ║\n");
    printf(" ║ Actividad: tarea11_03                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción:  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ║  ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese un número entre 0 y 100: ");
    scanf("%lf", &num1);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if(num1 >= 0 && num1 <= 100)
    {

        printf(" ║ %.3lf es un número entre 0 y 100.\n", num1);

    }
    else
    {

        printf(" ║ %.3lf no es un número entre 0 y 100.\n", num1);

    }

    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese un número entre -50 y 50: ");
    scanf("%lf", &num1);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if(num1 >= -50 && num1 <= 50)
    {

        printf(" ║ %.3lf es un número entre -50 y 50.\n", num1);

    }
    else
    {

        printf(" ║ %.3lf no es un número entre -50 y 500.\n", num1);

    }

    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese la letra C (mayúscula o minúscula): ");
    scanf(" %c", &letra);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if(letra == 'c' || letra == 'C')
    {

        printf(" ║ El valor (%c) ingresado es valido.\n", letra);

    }
    else
    {

        printf(" ║ El valor (%c) ingresado no es valido.\n", letra);

    }

    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese un valor inferior a 0 o mayor a 100: ");
    scanf("%lf", &num1);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if(num1 <= 0 || num1 >= 100)
    {

        printf(" ║ %.3lf cumple con la instrucción dada.\n", num1);

    }
    else
    {

        printf(" ║ %.3lf se encuentra entre 0 y 100.\n", num1);

    }

    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese un número entre 0 y 1: ");
    scanf("%lf", &num1);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if(num1 >= 0 && num1 <= 1)
    {

        printf(" ║ %.3lf es un número entre 0 y 1.\n", num1);

    }
    else
    {

        printf(" ║ %.3lf no es un número entre 0 y 1.\n", num1);

    }

    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Ingrese su edad y genero (M o F) Formato: edad,genero: ");
    scanf("%lf,%c", &num1, &letra);
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    if((letra == 'F' || letra == 'f') && num1 >= 18)
    {

        printf(" ║ El valor (%c) ingresado es valido.\n", letra);

    }
    else
    {

        printf(" ║ El valor (%c) ingresado no es valido.\n", letra);

    }

    printf(" ╚═══════════════════════════════════════════════════════════╝\n");
    printf("\n");



    return 0;

}
