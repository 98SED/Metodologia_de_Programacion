#include <stdio.h>
#include <math.h>

int main()
{
    //Declaración de variable tip double
    double raiz = 0, operando = 7364.837; //Double a diferencia de float puede contener una mayor cantidad de digitos en la parte fraccionaria. Es posible declarar más de una variable de un mismo tipo de dato.
    float total_compra = 0;
    float precio_articulo = 0;
    float tasa_iva = 0.16;

    precio_articulo = 37.8;
    total_compra = precio_articulo * 10 * (1 + tasa_iva);

    printf("El total de la compra es %lf\n", total_compra);
    raiz = sqrt(operando);
    printf("El resultado de la raíz cuadrada de %lf es: %lf\n", operando, raiz);

    return 0;
}
