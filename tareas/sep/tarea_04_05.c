#include<stdio.h>
#include<math.h>

int main()
{

	// Declaración de variables (r = radio, p = perimetro, a = área).
	float r = 10; //Nombrar las variables de acuerdo a lo que representan.
	double p = 2 * M_PI * r;
	double a = M_PI * pow(r, 2); //La función pow acepta variables tipo double, por tanto, es más recomendable que sus variables sean double.

	// Impresión del resultado y mensajes al usuario
	printf("\nAlumno: Rodrigo Eduardo Delgadillo González\nFecha: 14-09-2021\nActividad: tarea_04_05.c\n");
	printf("\nEste programa se encarga de determinar el perímetro y área de un círculo a partir de su radio.\n");
	printf("En este caso, el círculo consta de un radio de %f, dando los siguientes resultados:\n", r);
	printf("\nPerímetro = %lf\n", p);
	printf("Área = %lf\n\n", a);



	return 0;
}
