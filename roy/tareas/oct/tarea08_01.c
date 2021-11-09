/*
 * TAREA <numero>: Metodología de la programación - TSU en Software
 * Archivo: <nombre_archivo>
 * Fecha: dd/mes/año
 * Tema: <tema(s) relacionado>
 */

#include <stdio.h>

/*
 * Función: bienvenida
 * -------------------
 * Descripción: Muestra en pantalla el nombre del programador
 *              la fecha en que se terminó el programa y
 *              el nombre del archivo, una breve descripción del
                programa y el tema que cubre.
 *
 * Regresa: void
 *
 * Parámetros: void
 */
void bienvenida();

/* Otras declaraciones de funciones */

/*
 * Función solicita_punto
 *______________________
 * Descripción: Obtiene del usuario las coordenadas x,y 
 *              por medio del teclado.
 *
 * Regresa: void
 *
 * Parámetros:
 * ptr_coord_x: La dirección de memoria de la variable donde
 *              se almacenará el valor introducido por el usuario
 *              para la coordenada x.
 *
 * ptr_coord_y: La dirección de memoria de la variable donde
 *              se almacenará el valor introducido por el usuario
 *              para la coordenada y.
*/
void solicita_punto(double *ptr_coord_x, double *ptr_coord_y);


/*
 * Función punto_medio
 *______________________
 * Descripción: Calula el punto medio de dos puntos aplicando la 
 *              fórmula (x1 + x2) /2 para la coordenada X y
 *              (y1 + y2) / 2 para la coordenada Y.
 *
 * Parámetros:
 * x1:                Coordenada X del primer punto
 * y1:                Coordenada Y del primer punto
 * x2:                Coordenada X del segundo punto
 * y2:                Coordenada Y del segundo punto
 *
 * ptr_punto_medio_x: La dirección de memoria de la variable donde
 *                    se almacenará el valor calculado de la coor-
 *                    denada X del punto medio.
 *
 * ptr_punto_medio_y: La dirección de memoria de la variable donde
 *                    se almacenará el valor calculado de la coor- 
 *                    denada Y del punto medio. 
 *
*/
void punto_medio(double x1, double y1,
                 double x2, double y2,
                 double *ptr_punto_medio_x, 
                 double *ptr_punto_medio_y);

/*
 * Función imprime_punto_medio
 *______________________
 * Descripción: Muestra en pantalla las coordenadas x, y del punto
 *              medio.
 *
 * Parámetros:
 * arg_pto_medio_x: La coordenada X del punto medio
 * arg_pto_medio_y: La coordenada Y del punto medio
*/
void imprime_punto_medio(double arg_pto_medio_x,
                         double arg_pto_medio_y);

int main()
{

    //Llamar a la función bienvenida:
    bienvenida();

    //declaración de variables
    //Variables para las coordenadas del primer punto:
    double coord_x1 = 0;
    double coord_y1 = 0;

    //Variables para las coordenadas del segundo punto:
    double coord_x2 = 0;
    double coord_y2 = 0;

    //Variables para las coordenadas del punto medio:
    double coord_pto_medio_x = 0;
    double coord_pto_medio_y = 0;

    //Lógica del programa, llamadas a funciones
    //Solicta primer punto al usuario: ejecuta función solicita_punto
    printf("\n Ingrese los valores de x y y del punto 1: \n");
    solicita_punto(&coord_x1, &coord_y1);

    //Solicita segundo punto al usuario: ejecuta función solicta_punto
    printf("\n Ingrese los valores de x y y del punto 2: \n");
    solicita_punto(&coord_x2, &coord_y2);

    //Calcula el punto medio: ejecuta función punto_medio
    punto_medio(coord_x1, coord_y1, coord_x2, coord_y2, &coord_pto_medio_x, &coord_pto_medio_y);

    //Imprime el punto medio: ejecuta función imprime_punto_medio
    imprime_punto_medio(coord_pto_medio_x, coord_pto_medio_y);

    return 0;
}

/* Implementación de funciones */

void bienvenida()
{
    printf("----------------------------------------------------------");
    printf("\n\n");
    printf("Nombre programador: Rodrigo Eduardo Delgadillo González\n");
    printf("Fecha: 08-10-2021\n");
    printf("Archivo: tarea08_01\n");
    printf("Tema: Funciones\n");
    printf("Descripción: El programa solicita al usuario coordebadas\n");
    printf("de dos puntos para calcular el punto medio mediante funciones.\n");
    printf("----------------------------------------------------------");
    printf("\n\n");
    return;
}

void solicita_punto(double *ptr_coord_x, double *ptr_coord_y)
{

    printf("\n El formato para ingresar los valores es: valorx,valory (enter): ");
    scanf("%lf,%lf", ptr_coord_x, ptr_coord_y);


    return;
}

void punto_medio(double x1, double y1,
                 double x2, double y2,
                 double *ptr_punto_medio_x,
                 double *ptr_punto_medio_y)
{

    double pmedio_x = (x1 + x2) / 2;
    double pmedio_y = (y1 + y2) / 2;

    *ptr_punto_medio_x = pmedio_x;
    *ptr_punto_medio_y = pmedio_y;

    return;
}

void imprime_punto_medio(double arg_pto_medio_x,
                         double arg_pto_medio_y)
{

    printf("\n\n El punto medio es: (%.2lf,%.2lf)\n\n", arg_pto_medio_x, arg_pto_medio_y);


    return;
}
