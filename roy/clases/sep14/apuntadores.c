
/*

   Este programa  muestra como usar el operador "&" para direcciones de memoria
   el mismo, evalua la dirección de memoria de un operando

*/

#include<stdio.h>
#include<math.h>

int main()
{

    int a = 89;
    double pi = M_PI;

    printf("%s", "\n Este programa se encarga de imprimir las direcciones de memoria de las variables 'a' y 'pi' por medio del identificador de formato '%p' y del operador '&'\n");
    printf(" La dirección de memoria de la variable 'a' es: %p\n", &a);
    printf(" La dirección de memoria de la variable 'pi' es: %p\n\n", &pi);


    return 0;

}

