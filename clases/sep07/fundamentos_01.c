
#include <stdio.h>

int main()
{
    // Sentencia de declaración de variable e inicialización.
    int lado1 = 58;
    int lado2 = 15;
    int lado3 = 12;
    int lado4 = 20;
    int perimetro = 58 + 15 + 12 + 20;
    int perimetro2 = lado1 + lado2 + lado3 + lado4;    // Expresión = Variables/Constantes + Operadores + Funciones  -> Operar = Valor
    char opcion_usuario = 'a'; // Sentencia = nExpresiones que terminan en ;

    //Calculo del area de un rectangulo de base = 58 y altura = 23
    //base * altura
    int base = 58;
    int altura = 23;

    //Expresión con valores literales.
    int area = 58 * 23;

    //Expresión con variables
    area = base * altura;

    //Función para imprimir mensaje
    printf("El area del rectangulo de base %d y altura %d es: %d\n", base, altura, area);
    printf("El area del rectangulo de base %d y altura %d es: %d\n", 74, 89, 74 * 89);

    return 0 ;
}
