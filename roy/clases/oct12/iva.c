/*
 * Detalles del programa: El presente programa se encarga de leer el precio de
 * de 3 articulos para determinar el IVA total, el subtotal y el total de la
 * cuenta, todo lo anterior por medio de funciones.
 * 
 * Alumnos programadores:
 * Ismael Uribe
 * Ana Camila Vazquez Velazquez
 * José Luis Luna Toxqui
 * Rodrigo Eduardo Delgadillo González
 * 
 * Fecha: 12-10-2021
 * Actividad: Ejercicio en grupo - Calculo de IVA
 */

#include<stdio.h>

//Declaración de funciones
void solicitar_precios(double *ptr_precio1, double *ptr_precio2, double *ptr_precio3);
void calcular_iva(double arg_precio1, double arg_precio2, double arg_precio3, 
                  double *ptr_subtotal, double *ptr_iva_total, double *ptr_total);
void imprimir_resultado(double arg_subtotal, double arg_iva_total, double arg_total);

int main()
{

    //Declaración de variables
    double precio1 = 0;
    double precio2 = 0;
    double precio3 = 0;
    double subtotal = 0;
    double iva_total = 0;
    double total = 0;
    
    //Ejecución de funciones
    bienvenida();
    solicitar_precios(&precio1, &precio2, &precio3);
    calcular_iva(precio1, precio2, precio3, &subtotal, &iva_total, &total);
    imprimir_resultado(subtotal, iva_total, total);

    return 0;

}

//Definición de funciones
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumnos Programadores:                                    *\n");
    printf(" * José Luis Luna Toxqui                                     *\n");
    printf(" * Ana Camila Vazquez Velazquez                              *\n");
    printf(" * Ismael Uribe                                              *\n");
    printf(" * Rodrigo Eduardo Delgadillo González                       *\n");
    printf(" *                                                           *\n");
    printf(" * Fecha: 12-10-2021                                         *\n");
    printf(" * Actividad: Ejercicio en equipo - IVA                      *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones, apuntadores, opera-  *\n");
    printf(" * dores de dirección y de indirección, se realizara el      *\n");
    printf(" * calculo del subtotal, iva total y total de la cuenta del  *\n");
    printf(" * precio de 3 productos.                                    *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

void solicitar_precios(double *ptr_precio1, double *ptr_precio2, double *ptr_precio3)
{

    printf("\n Ingrese el precio sin IVA de 3 articulos (de la forma: precio1,precio2,precio3 enter):\n");
    scanf(" %lf,%lf,%lf", ptr_precio1, ptr_precio2, ptr_precio3);

    return;

}

void calcular_iva(double arg_precio1, double arg_precio2, double arg_precio3, 
                  double *ptr_subtotal, double *ptr_iva_total, double *ptr_total)
{

    *ptr_subtotal = arg_precio1 + arg_precio2 + arg_precio3;
    *ptr_iva_total = (arg_precio1 + arg_precio2 + arg_precio3) * 0.16;
    *ptr_total = *ptr_subtotal + *ptr_iva_total;

    return;

}

void imprimir_resultado(double arg_subtotal, double arg_iva_total, double arg_total)
{

    printf("\n");
    printf(" *************************************************************");
    printf("\n\n Subtotal: %.3lf", arg_subtotal);
    printf("\n IVA total: %.3lf", arg_iva_total);
    printf("\n Total: %.3lf\n\n", arg_total);

    return;

}

