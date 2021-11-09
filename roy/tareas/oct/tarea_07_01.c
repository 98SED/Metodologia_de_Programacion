/* 
 * DESCRIPCIÓN DEL PROGRAMA
 * El presente programa se encarga de calcular el área y perimetro de tres
 * cincunferencias por medio de funciones.
 * 
 * Autor del Código: Rodrigo Eduardo Delgadillo González
 * Fecha: 05-10-2021
 * Actividad: tarea_07_01
 */

#include<stdio.h>
#include<math.h>


//Declaración de funciones:
void bienvenida();
double perimetro(double arg_radio);
double area(double arg_radio);

int main(void)
{

    //Declaración de variables:
    double radio = 0.0;

    //Mensajes al usuario:
    bienvenida();

    //Solicitud de radio para el círculo 1 e impresión de resultados:
    printf(" Introduzca el radio del círculo 1 en cm: ");
    scanf("%lf", &radio);
    printf("\n");
    printf(" Los resultados del círculo 1 de radio %lf [cm] son: \n", radio);
    printf(" Perímetro: %lf [cm]\n", perimetro(radio));
    printf(" Área: %lf [cm^2]\n", area(radio));
    printf("\n");
    printf(" *************************************************************\n");

    //Solicitud de radio para el círculo 2 e impresión de resultados:
    printf("\n Introduzca el radio del círculo 2 en cm: ");
    scanf("%lf", &radio);
    printf("\n");
    printf(" Los resultados del círculo 2 de radio %lf son: \n", radio);
    printf(" Perímetro: %lf [cm]\n", perimetro(radio));
    printf(" Área: %lf [cm^2]\n", area(radio));
    printf("\n");
    printf(" *************************************************************\n");

    //Solicitud de radio para el círculo 3 e impresión de resultados:
    printf("\n Introduzca el radio del círculo 3 en cm: ");
    scanf("%lf", &radio);
    printf("\n");
    printf(" Los resultados del círculo 3 de radio %lf son: \n", radio);
    printf(" Perímetro: %lf [cm]\n", perimetro(radio));
    printf(" Área: %lf [cm^2]\n", area(radio));
    printf("\n");
    printf(" *************************************************************\n");

    return 0;

}

//Definición de funciones:
void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: tarea_07_01                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de funciones se realizará el       *\n");
    printf(" * cálculo del perímetro y área de varios círculos usando su *\n");
    printf(" * radio.                                                    *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

double perimetro(double arg_radio)
{

    double perimetro = 2 * M_PI * arg_radio;

    return perimetro;

}

double area(double arg_radio)
{

    double area = M_PI * pow(arg_radio, 2);

    return area;

}