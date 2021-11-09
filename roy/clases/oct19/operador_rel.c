#include <stdio.h>
//prueba ssh

int main ()
{

    int resultado = 4 < 3;
    int a = 1;
    int b = 5;
    char c = 'a';
    int resultado_variables = 0;

    // Operadores relacionales con valores literales:

    // Títulos:
    printf("\n Pruebas de operadores relacionales con valores literales: \n");

    // Menor que:
    printf("\n ■ Menor que:\n");
    printf("\n La expresión 4 < 3 se evalua a: %d \n", resultado);
    resultado = 10 < 20;
    printf(" La expresión 10 < 20 se evalua a: %d \n\n", resultado);

    // Igualdad (igual que):
    printf("\n ■ Igualdad (Igual que):\n");
    printf("\n La expresión 29 == 29 se evalua a: %d \n", 29 == 29);
    printf(" La expresión 12 == 15 se evalua a: %d \n", 12 == 15);

    // Operadores relacionales con variables:

    // Títulos:
    printf("\n ===========================================================\n");
    printf("\n Pruebas de operadores relacionales con variables: \n");

    // Mayor que
    resultado_variables = a > 5;
    printf("\n ■ Mayor que:\n");
    printf ("\n %d > 5 es: %d \n", a, resultado_variables);

    // Igualdad (igual que):
    printf("\n ■ Igualdad (Igual que):\n");
    printf ("\n %d == 5 es: %d \n", b, b == 5);

    // Diferencia (Diferente de):
    printf("\n ■ Diferencia (Diferente de):\n");
    printf ("\n %d != %d es: %d \n", a, b, a != b);

    // Operadores relacionales con variables y valores literales:

    // Títulos:
    printf("\n ===========================================================\n");
    printf("\n Pruebas de operadores relacionales con variables y valores literales: \n");

    // Menor o igual que:
    resultado_variables = a > 5;
    printf("\n ■ Menor o igual que:\n");
    printf ("\n %d <= %d * 3 + 4 es: %d \n", a, b, a <= b * 3 + 4);

    // Operadores relacionales con el tipo de dato char:

    // Títulos:
    printf("\n ===========================================================\n");
    printf("\n Pruebas de operadores relacionales con el tipo de dato char: \n");

    // Igualdad (igual que):
    printf("\n ■ Igualdad (Igual que):\n");
    printf ("\n %c == a es: %d \n", c, c == 'a');
    printf ("\n %c == x es: %d \n", c, c == 'x');
    printf ("\n %c == 97 es: %d \n", c, c == 97);

    // Diferencia (Diferente de):
    printf("\n ■ Diferencia (Diferente de):\n");
    printf ("\n %c != t es: %d \n", c, c != 't');

    return 0;

}