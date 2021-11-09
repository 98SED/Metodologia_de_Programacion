/* 
 *
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de mostrar el valor de distintos tipos de variables para
 * después modificar estos con el operador de indirección y mostrar el resultado 
 * de dichas modificaciones.
 * 
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 28-09-2021
 * Actividad: tarea_06_01
 *
 */

/*
 * Para el presente programa se utilizaran las funciones rand(), srand(), 
 * time(), drand48() y srand48, brevemente, la función rand() se encarga de
 * establecer un número aleatorio entre 0 y la constante RAND_MAX, definida
 * por el número 2147483647, si se desea, es posible establecer un limite
 * utilizando el operador % seguido del número limite.
 * 
 * En este caso, la función rand() parte de un número inicial sobre el
 * cual realiza sus calculos, numero que no cambia una vez que se define
 * para cambiar este número y evitar que nuestros números aleatorios sean
 * los mismos una vez que se ejecuta el programa por primer vez, debemos
 * utilizar la función srand() que se encarga de modificar este valor a
 * partir del valor dado, para que este número siempre cambie y por tanto
 * nuestros valores aleatorios sean siempre diferentes, una solución simple
 * es la función time() que se encargara de marcar segundos, de este modo,
 * sera posible generar números aleatorios cada que se ejecute el programa.
 * 
 * Finalmente, la función drand48() se encarga de asignar números aleatorios
 * con decimales.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

    //Inicio del código
    srand(time(0));
    srand48(time(0));

    //Declaración de variables
    int entero1 = rand(), entero2 = rand();
    double doble1 = drand48(), doble2 = drand48();
    char caracter1 = rand() % (90-65+1) + 65, caracter2 = rand() % (90-65+1) + 65;

    //Declaración directa de apuntadores
    int *ptr_entero1 = &entero1, *ptr_entero2 = &entero2;
    double *ptr_doble1 = &doble1, *ptr_doble2 = &doble2;
    char *ptr_caracter1 = &caracter1, *ptr_caracter2 = &caracter2;

    //Mensajes al usuario

    //Detalles
    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 28-09-2021                                         *\n");
    printf(" * Actividad: reto_06_02                                     *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de mostrar   *\n");
    printf(" * en pantalla valores de diversos tipos de variables para   *\n");
    printf(" * después modificarlos con el operador de indirección y     *\n");
    printf(" * mostrar los resultados en pantalla.                       *\n");
    printf(" *                                                           *\n");
    printf(" * NOTA: Los valores se asignan por medio de la función      *\n");
    printf(" * rand y srand.                                             *\n");
    printf(" *************************************************************\n");
    printf("\n");

    //Impresión de valores iniciales   
    printf(" Los valores iniciales son los siguientes:\n");
    printf("\n Entero 1 = %d\n", entero1);
    printf(" Dirección de memoria: %p\n", &entero1);
    printf("\n Entero 2 = %d\n", entero2);
    printf(" Dirección de memoria: %p\n", &entero2);
    printf("\n Double 1 = %lf\n", doble1);
    printf(" Dirección de memoria: %p\n", &doble1);
    printf("\n Double 2 = %lf\n", doble2);
    printf(" Dirección de memoria: %p\n", &doble2);
    printf("\n Carácter 1 = %c\n", caracter1);
    printf(" Dirección de memoria: %p\n", &caracter1);
    printf("\n Carácter 2 = %c\n", caracter2);
    printf(" Dirección de memoria: %p\n\n", &caracter2);

    
    //Modificación de valores
    *ptr_entero1 = rand(), *ptr_entero2 = rand();
    *ptr_doble1 = drand48(), *ptr_doble2 = drand48();
    *ptr_caracter1 = rand() % (90-65+1) + 65;
    *ptr_caracter2 = rand() % (90-65+1) + 65;

    //Impresión de valores modificados
    printf("\n *************************************************************");   
    printf("\n\n");  
    printf(" Los valores modificados son los siguientes:\n");
    printf("\n Entero 1 = %d\n", entero1);
    printf(" Dirección de memoria: %p\n", &entero1);
    printf("\n Entero 2 = %d\n", entero2);
    printf(" Dirección de memoria: %p\n", &entero2);
    printf("\n Double 1 = %lf\n", doble1);
    printf(" Dirección de memoria: %p\n", &doble1);
    printf("\n Double 2 = %lf\n", doble2);
    printf(" Dirección de memoria: %p\n", &doble2);
    printf("\n Carácter 1 = %c\n", caracter1);
    printf(" Dirección de memoria: %p\n", &caracter1);
    printf("\n Carácter 2 = %c\n", caracter2);
    printf(" Dirección de memoria: %p\n\n", &caracter2);

    return 0;
}
