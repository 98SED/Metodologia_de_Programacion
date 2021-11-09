/* 
 *
 * DESCRIPCIÓN DEL PROGRAMA:
 * El programa se encarga de leer distintos tipos de datos mediante la función
 * scanf(), para posteriormente imprimirlos en pantalla.
 *
 * Alumno Programador: Rodrigo Eduardo Delgadillo González
 * Fecha: 28-09-2021
 * Actividad: tarea_06_01
 *
 */

#include<stdio.h>

int main()
{

    //Inicio del código

    //Declaración de variables
    int edad = 0;
    float estatura = 0.0;
    char inicial_apaterno = ' ', inicial_amaterno = ' ';

    //Declaración directa de apuntadores
    int *ptr_edad = &edad;
    float *ptr_estatura = &estatura;
    char *ptr_inicial_apaterno = &inicial_apaterno; 
    char *ptr_inicial_amaterno = &inicial_amaterno;

    //Mensajes al usuario y solicitud de información

    //Detalles
    printf("\n");
    printf(" *************************************************************\n");
    printf(" * Alumno Programador: Rodrigo Eduardo Delgadillo González   *\n");
    printf(" * Fecha: 28-09-2021                                         *\n");
    printf(" * Actividad: tarea_06_02                                    *\n");
    printf(" *                                                           *\n");
    printf(" * Descripción: El presente programa se encarga de solicitar *\n");
    printf(" * al usuario información personal, como su edad, estatura   *\n");
    printf(" * e inicial de sus apellidos con la finalidad de asignar    *\n");
    printf(" * los valores introducidos a las variables correspondientes *\n");
    printf(" * y mostrar en pantalla la información proporcionada.       *\n");
    printf(" *************************************************************\n");
    printf("\n");

    //Solicitud de información
    printf(" ¿Cuál es su edad? ");
    scanf("%d", ptr_edad);
    printf("\n ¿Cuál es su estatura en metros? ");
    scanf("%f", ptr_estatura);
    printf("\n ¿Cuál es la inicial de su apellido paterno? ");

     /*
      * Se usa un espacio antes del identificador de formato
      * ya que la función scanf reconoce al enter como un carácter.
      * 
      */

    scanf(" %c", ptr_inicial_apaterno);
    printf("\n ¿Cuál es la inicial de su apellido materno? ");
    scanf(" %c", ptr_inicial_amaterno);

    //Resultados
    printf("\n");
    printf("\n *************************************************************");
    printf("\n\n");
    printf(" Los datos almacenados son: \n");
    printf("\n Edad: %d años.\n", edad);
    //El .2 indica el número de digitos fraccionarios que se mostrarán.
    printf(" Estatura: %.2f [m].\n", estatura); 
    printf(" Inicial de su apellido paterno: %c\n", inicial_apaterno);
    printf(" Inicial de su apellido materno: %c\n\n", inicial_amaterno);

    return 0;

}



    