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

    //Ejecución de funciones
    bienvenida();
    solicitar_datos(&peso, &estatura);
    imc = calcular_imc(peso, estatura);
    imprimir_resultado(&peso, &estatura, &imc);

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
    printf("\n IMC: %.3lf \n\n", *ptr_imc);

}