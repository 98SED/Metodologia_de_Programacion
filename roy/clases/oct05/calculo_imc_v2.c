/*
 * DESCRIPCIÓN DEL PROGRAMA:
 * El presente programa se encarga de convertir un valor establecido en horas
 * a minutos, por medio de una función encargada de realizar la conversión
 * y de los operadores de dirección e indirección.
 * 
 * Alumnos programadores:
 * José Daniel Hernández Ruiz
 * Luis Alberto Paz De La Rosa
 * Rodrigo Eduardo Delgadillo González
 * 
 * Fecha: 08-10-2021
 * Actividad: calculo_imc
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//Declaración de funciones
void bienvenida();
void solicitar_datos(double *ptr_peso, double *ptr_estatura);
double calcular_imc(double arg_peso, double arg_estatura);
void imprimir_resultado(double *ptr_peso, double *ptr_estatura, double *ptr_imc);

int main()
{
    //Declaración de variables:
    double peso = 0.0;
    double estatura = 0.0;
    double imc = 0.0;
    int opc;

    //Ejecución de funciones
    bienvenida();
    do //La función do ejecutara su bloque de código siempre que el argumento evaluado en while cumpla la condición.
    {

        printf("\n Seleccione la opción deseada:\n\n");
        printf(" 1. Calcular IMC\n");
        printf(" 2. Salir\n\n");
        scanf("%d", &opc);

        if (opc == 1) //La función if ejecuta su bloque de código, solo si se cumple la condición establecida, de lo contrario, se ejecutara el bloque de else.
        {             // == es el operador lógico de igualdad.
            solicitar_datos(&peso, &estatura);
            imc = calcular_imc(peso, estatura);
            imprimir_resultado(&peso, &estatura, &imc);
        }else if (opc != 1 && opc != 2) //&& es el operador lógico de conjunción y según las reglas lógicas de este operador, ambas proposicones deben ser ciertas
        {                               // para ejecutar el bloque de código, en este caso, si opc es distinto de 1 y de 2, se solicitara ingresar una opción valida
            printf("\n Ingrese una opción valida\n"); //y como el número es diferente de 2, se cumple la condición de while para continuar la ejecución.
        }else
        { 
            return 0; //El conjunto if - else if - else, ayuda controlar la ejecución, en este caso si opc es igual a 1 ejecutara el bloque de código, de no ser así,
        }             //se mostrata un mensaje para introducir una opción correcta, en caso de que la opción sea diferente a 1 y 2
                       // y si el valor de la variable opc es igual 2, se finaliza la ejecución.

    }while (opc != 2); // En este caso, siempre que opc sea diferente de 2 ejecutara el bloque de código, cuando opc sea = 2, finalizara la ejecución.
                       // != es el operador lógico de diferencia.
    return 0;

}

//Definición de funciones
void bienvenida()
{
    
    //Mensaje de bienvenida al usuario
    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumnos Programadores:                                    *\n");
    printf(" * José Daniel Hernández Ruiz                                *\n");
    printf(" * Luis Alberto Paz De La Rosa                               *\n");
    printf(" * Rodrigo Eduardo Delgadillo González                       *\n");
    printf(" *                                                           *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: calculo_imc                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de cáculcu-  *\n");
    printf(" * el IMC a partir de diversas funciones y operadores.       *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

void solicitar_datos(double *ptr_peso, double *ptr_estatura)
{
    //Solicitud de datos por medio de apuntadores, direcciones de memoria y operadores de dirección.
    printf(" Ingrese su peso en kg: ");
    scanf("%lf", ptr_peso);
    printf(" Ingrese su estatura en m: ");
    scanf("%lf", ptr_estatura);
}

double calcular_imc(double arg_peso, double arg_estatura)
{

    //Calculo del IMC a partir de argumentos dados.
    double imc = arg_peso / pow(arg_estatura, 2);
    return imc;

}

void imprimir_resultado(double *ptr_peso, double *ptr_estatura, double *ptr_imc)
{

    //Impresión de resultados por medio de operadores de indirección, apuntadores y operadores de dirección.
    printf("\n *************************************************************\n");
    printf("\n Datos ingresados:\n");
    printf("\n Peso: %.2lf [kg]\n", *ptr_peso);
    printf(" Estatura: %.2lf [m]\n", *ptr_estatura);
    printf("\n *************************************************************\n");
    if(*ptr_imc >= 30)
    {
        printf("\n IMC: %.3lf (Obesidad)\n\n", *ptr_imc);
    }else if(*ptr_imc >= 25.0 && *ptr_imc <= 29.9)
    {
        printf("\n IMC: %.3lf (Sobrepeso)\n\n", *ptr_imc);
    }else if(*ptr_imc >= 18.5 && *ptr_imc <= 24.9)
    {
        printf("\n IMC: %.3lf (Normal)\n\n", *ptr_imc);
    }else if(*ptr_imc < 18.5)
    {
        printf("\n IMC: %.3lf (Bajo de peso)\n\n", *ptr_imc);
    }

}