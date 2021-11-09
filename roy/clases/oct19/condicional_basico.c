#include <stdio.h>

int main()
{

    int edad = 0;

    printf("\n Ingrese su edad: ");
    scanf("%d", &edad);

    // Estructuras de control

    // Condicional if

    printf("\n Prueba con condicional if\n");

    if(edad >= 18)
    {

        printf("\n Usted es mayor de edad\n");

    }

    printf("\n Fin de la prueba if\n");

    // Condicional if else

    printf("\n ===========================================================\n");
    printf("\n Prueba con condicional if else\n");

    if(edad >= 18)
    {

        printf("\n ¡Bienvenido! Usted es mayor de edad\n");

    }else 
    {
        printf("\n Regrese al cumplir 18 años\n");
    }

    printf("\n Fin de la prueba if else \n\n");

    

    return 0;

}