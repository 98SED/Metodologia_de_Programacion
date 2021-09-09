#include<stdio.h>
#include<math.h>

int main()
{

    // Declaración de variables (r = radio, p = perimetro, a = área).
    float r = 10;
    double p = 2 * M_PI * r;
    double a = M_PI * pow(r, 2);

    // Impresión del resultado y mensajes al usuario
    printf("\nEste programa se encarga de determinar el perímetro y área de un círculo a partir de su radio.\n");
    printf("En este caso, el círculo consta de un radio de %f, dando los siguientes resultados:\n", r);
    printf("\nPerímetro = %lf\n", p);
    printf("Área = %lf\n\n", a);



    return 0;
}
