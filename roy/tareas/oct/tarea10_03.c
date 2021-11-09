/*
 * Descripción del programa: El programa se encarga de determinar si un carác- 
 * ter es vocal o consonante.
 * 
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 23-10-2021
 * Actividad: tarea10_03.c
 */

#include <stdio.h>

// Declaración de funciones
void bienvenida();
void solicitar_datos(int *ptr_caracter);
void imprimir_resultados(int arg_caracter);

int main()
{

    // Declaración de variables 
    int caracter = 0;

    // Ejecución de funciones
    bienvenida();
    solicitar_datos(&caracter);

    imprimir_resultados(caracter);
    

}

// Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" ╔═══════════════════════════════════════════════════════════╗\n");
    printf(" ║ Alumno Programador: Rodrigo Eduardo Delgadillo González   ║\n");
    printf(" ║ Fecha: 23-10-2021                                         ║\n");
    printf(" ║ Actividad: tarea10_03                                     ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");
    printf(" ║ Descripción: El programa determina si un carácter ingre-  ║\n");
    printf(" ║ sado es vocal o consonante.                               ║\n");
    printf(" ╠═══════════════════════════════════════════════════════════╣\n");

    
    return;

}

void solicitar_datos(int *ptr_caracter)
{

    printf(" ║ Ingrese un carácter: ");
    scanf(" %c", ptr_caracter);

    return;

}

void imprimir_resultados(int arg_caracter)
{

    if ( arg_caracter == 'a')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'e')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'i')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'o')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'u')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'A')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'E')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'I')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'O')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    if ( arg_caracter == 'U')
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es vocal                                                ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");
        
        return;

    }
    else
    {

        printf(" ╠═══════════════════════════════════════════════════════════╣\n");
        printf(" ║ %c es consonante o es carácter invalido                    ║"
            "\n", arg_caracter);
        printf(" ╚═══════════════════════════════════════════════════════════╝\n");
        printf("\n");

    }

    return;

}
