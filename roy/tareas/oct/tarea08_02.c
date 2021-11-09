#include <stdio.h>

/* Declaración de funciones */

/* Esta función deberá solicitar al usuario el número de
   segundos que desea visualizar en horas, minutos, segundos.

   Asignará en la variable cuya dirección es pasada en el
   argumento ptr_segundos el valor de los segundos ingresados
   por el usuario del programa.
*/
void solicita_segundos( int *ptr_segundos);

/* Esta función deberá modificar a través de apuntadores, a
   las variables cuya dirección es pasada en la invocación.
   Debe calcular cuantas horas, minutos y segundos hay en
   los segundos del primer argumento (arg_segundos)

   Ejemplo: Si arg_segundos tiene el valor 23749, la función
   debe calcular 6 horas, 35 minutos, 49 segundos y asignarlos
   a las variables a través de sus apuntadores.

*/
void horas_minutos_segundos( int arg_segundos, int *ptr_horas,
                                               int *ptr_minutos,
                                               int *ptr_segundos);

/* Esta función despliega el mensaje al usurio con el resultado
   de la coversión de segundos a horas, minutos y segundos.
   Para el ejemplo de 23749 el mensaje de salida deberá ser:

   23749 segundos equivalen a 6 horas 35 minutos y 49 segundos.

*/
void imprime_resultado(int arg_segundos_solicitados, int arg_horas,
                                         int arg_minutos,
                                         int arg_segundos);

int main()
{

    //Declara las variables necesarias del programa:
    int segundos_solicitados = 0.0;
    int minutos = 0.0;
    int horas = 0.0;
    int segundos = 0.0;


    //Ejecuta la función que solicita los segundos a convertir:
    solicita_segundos(&segundos_solicitados);


    //Ejecuta la función que calcula las horas, minutos y segundos:
    horas_minutos_segundos(segundos_solicitados, &horas, &minutos, &segundos);


    //Ejecuta la función que imprime los resultados:
    imprime_resultado(segundos_solicitados, horas, minutos, segundos);

    return 0;
}

void solicita_segundos( int *ptr_segundos)
{
    //Implementa la función
    printf("\n Ingrese los segundos que se convertiran: ");
    scanf("%d", ptr_segundos);

    return;
}

void horas_minutos_segundos( int arg_segundos, int *ptr_horas,
                                               int *ptr_minutos,
                                               int *ptr_segundos)
{
    //Implementa la función
    int horas = arg_segundos / 3600;
    int minutos = ( arg_segundos % 3600 ) / 60;
    int segundos = ( arg_segundos % 3600 ) - (60 * minutos);

    *ptr_horas = horas;
    *ptr_minutos = minutos;
    *ptr_segundos = segundos;

    return;
}

void imprime_resultado(int arg_segundos_solicitados, int arg_horas,
                                         int arg_minutos,
                                         int arg_segundos)
{
    //Implementa la función
    printf("\n\n %d segundos equivalen a %d horas, %d minutos y %d segundos \n\n", arg_segundos_solicitados, arg_horas, arg_minutos, arg_segundos);

    return;
}
