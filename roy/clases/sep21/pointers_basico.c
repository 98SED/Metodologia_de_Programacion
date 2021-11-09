
#include <stdio.h>
#include <math.h>

int main()
{
    //Declaración de variables
    double radio = 0;
    double perimetro = 0;
    double area = 0;

    //Calculos del perimetro y area
    perimetro = 2 * M_PI * radio;
    area = M_PI * pow(radio, 2);

    //Declaración de apuntador
    double *ptr_perimetro = NULL;

    //Declaración e inicialización de apuntador
    double *ptr_area = &area;

    //Asignación de dirección de memoria de la variable perimetro al apuntador ptr_perimetro
    ptr_perimetro = &perimetro;

    //Modifica el valor de la variable perimetro a través del apuntador y del operado de indirección.
    *ptr_perimetro = 10 *  M_PI * 2;
    *ptr_area = M_PI * pow(10, 2);

    printf("\nEl valor del perimetro es %lf\n", perimetro);
    printf("El valor del area es %lf\n\n", *ptr_area);

    return 0;

}
