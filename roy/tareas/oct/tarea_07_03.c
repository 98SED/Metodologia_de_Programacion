/* 
 * DESCRIPCIÓN DEL PROGRAMA
 * Por medio de una función se realizara el cálculo del monto ganado de 3
 * escenarios de inversión por medio de los datos ingresados por el usuario.
 * 
 * Autor del Código: Rodrigo Eduardo Delgadillo González
 * Fecha: 05-10-2021
 * Actividad: tarea_07_03
 */

#include<stdio.h>
#include<math.h>

void bienvenida();
double interes_ganado(double arg_capital_inicial, double arg_tasa_anual, int arg_meses_inversion);

int main(void)
{

    //Declaración de variables
    double capital_inicial = 0.0, tasa_anual = 0.0;
    int meses_inversion = 0.0;

    //Mensaje de bienvenida:
    bienvenida();

    //Solicitud de datos del escenario 1 de inversión:
    printf(" Ingrese la información solicitada de su primer plan de inversión: ");
    printf("\n  Capital inicial (mxn): ");
    scanf("%lf", &capital_inicial);
    printf("  Plazo en meses de la inversión: ");
    scanf("%d", &meses_inversion);
    printf("  Tasa anual de la inversión: ");
    scanf("%lf", &tasa_anual);

    //Impresión de resultados:
    printf("\n");
    printf(" *************************************************************\n");
    printf("\n Información proporcionada del primer plan de inversión: \n\n");
    printf("  Capital inicial: $%.4lf mxn\n", capital_inicial);
    printf("  Plazo de la inversión: %d meses\n", meses_inversion);
    printf("  Tasa anual de su inversión: %lf%% \n", tasa_anual);
    printf("\n   Monto de los intereses ganados: $%lf mxn\n\n", interes_ganado(capital_inicial, tasa_anual, meses_inversion));

    //Solicitud de datos del escenario 2 de inversión:
    printf(" Ingrese la información solicitada de su segundo plan de inversión: ");
    printf("\n  Capital inicial (mxn): ");
    scanf("%lf", &capital_inicial);
    printf("  Plazo en meses de la inversión: ");
    scanf("%d", &meses_inversion);
    printf("  Tasa anual de la inversión: ");
    scanf("%lf", &tasa_anual);

    //Impresión de resultados:
    printf("\n");
    printf(" *************************************************************\n");
    printf("\n Información proporcionada del segundo plan de inversión: \n\n");
    printf("  Capital inicial: $%.4lf mxn\n", capital_inicial);
    printf("  Plazo de la inversión: %d meses\n", meses_inversion);
    printf("  Tasa anual de su inversión: %lf%% \n", tasa_anual);
    printf("\n   Monto de los intereses ganados: $%lf mxn\n", interes_ganado(capital_inicial, tasa_anual, meses_inversion));
    printf(" *************************************************************\n");
    printf("\n");

    return 0;

}

void bienvenida()
{

    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 05-10-2021                                         *\n");
    printf(" * Actividad: tarea_07_03                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: Por medio de una función, se realizara el    *\n");
    printf(" * cálculo del monto ganado de 3 escenarios de inversión por *\n");
    printf(" * medio de los datos ingresados por el usuario.             *\n");
    printf(" *************************************************************\n");
    printf("\n");

}

double interes_ganado(double arg_capital_inicial, double arg_tasa_anual, int arg_meses_inversion)
{
    
    double capital_final = arg_capital_inicial * pow(1+((arg_tasa_anual/100)/12), arg_meses_inversion);
    double interes_ganado = capital_final - arg_capital_inicial;

    return interes_ganado;

}