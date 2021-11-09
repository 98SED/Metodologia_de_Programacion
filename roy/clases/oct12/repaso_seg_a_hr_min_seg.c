/* Este programa solicita al usuario cierto número de segundos y muestra como
   salida las horas, minutos y segundos equivalentes.
   Ejemplo: Entrada 3600
                  Salida: 1hora 0 minutos 0 segundos

                   Entrada: 3663
                   Salida: 1hora 1minuto 3segundos
*/

#include <stdio.h>

//Declaración de funciones
void solicita_segundos ( int *ptr_segundos)

void segundos_hr_min(int segundos_a_ingresar, 
                                      int *ptr_hr, 
                                      int *ptr_min, 
                                      int *ptr_seg);

void imprime_resultado ( int arg_segundos_introducidos ,
                               int arg_horas_resultado,
                               int arg_minutos_resultado,
                               int arg_segundos_resultados);
                           
                                        

int main()
{
    // Entradas segundos.
    int segundos_a_ingresar = 0;

    //Ejemplo de tarea sin funciones
    //printf(“INgresa el número de segundos: “);
    //scanf(“%d”, & segundos_a_ingresar);


    // Salidas 
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    solicita_segundos(&segundos_a_ingresar);

    segundos_hr_min(segundos_a_ingresar, &horas, &minutos, &segundos);

   imprime_resultado (segundos_a_ingresar, horas, minutos, segundos);

    
    return 0;
}

//Implementación de funciones

void solicita_segundos( int *ptr_segundos)
{
    printf(“Introduce los segundos a convertir:\n”);
    scanf(“%d”, ptr_segundos);
    return;
}



void segundos_hr_min( int arg_segundos_a_ingresar, 
                                      int *ptr_hr, 
                                      int *ptr_min, 
                                      int *ptr_seg )
{
    int horas = arg_segundos_a_ingresar / 3600;
    int segundos_a_convertir_a_min = arg_segundos_a_ingresar % 3600;
    int min = segundos_a_convertir_a_min / 60;
    int segundos_sobrantes = segundos_a_convertir_a_min % 60;

    *ptr_hr = horas;
    *ptr_min = min;
    *ptr_seg = segundos_sobrantes;
    return;



void imprime_resultado ( int arg_segundos_introducidos ,
                               int arg_horas_resultado,
                               int arg_minutos_resultado,
                               int arg_segundos_resultado)
 {
    printf(“%d segundos son equivalentes a:”, arg_segundos_introducidos);
    printf(“%d horas\n”, arg_horas_resultado);
    printf(“%d minutos\n”, arg_minutos_resultado);
    printf(“%d segundo\n”, arg_segundos_resultado);
    return;
}
