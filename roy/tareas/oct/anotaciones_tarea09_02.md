# Tarea 09 Programa 2

## Necesidades

Recibir del usuario una cantidad entre 100 y 999.

Imprimir en pantalla la cantidad de unidades, decenas y centenas de la entrada.

## Solución

Por medio de una función se solicito al usuario "una" cantidad entre 100 y 999, aunque
considerando que era necesario desplegar las unidades, decenas y centeneas de la cantidad,
se determino que la mejor solución era asignar cada cifra de la cantidad dada a una variable
distinta cada una, para finalmente imprimir en pantalla lo almacenado en cada una de las
variables en tres printf() distintos, con su respectiva indicación (unidades, decenas o
centenas).

Respecto a la entrada de datos, la pecualiaridad fue que para asignar cada cifra a una variable
distinta de modo que para el usuario fuera como insertar una sola cantidad, se tuvo que modificar
el tamaño de entrada de la siguiente manera:

scanf("%1d%1d%1d", ...);

Pues de esa manera se especifica que se van a introducir 3 datos de tipo entero con una longitud de
1 (%1d%1d%1d), pues de no especificar la longitud, es decir algo como %d%d%d, provocaria que al 
insertar la cantidad y presionar enter, se tomaria como un solo %d, solicitando al usuario el segundo 
entero.

Una solución alternativa sería colocar un espacio entre cada %d (%d %d %d), pero esto provocaria que 
para el usuario parecieran 3 cantidades y no 1, pues sería necesario que el usuario hiciera algo como 
esto: 9 9 8 (enter).

Por ello y considerando lo visto hasta el momento, la solución más viable es limitar la longitud de cada
entero a 1

Finalmente, para mostrar lo almacenado en las 3 variables como una sola cantidad desde la perspectiva del
usuario se hace más o menos lo siguiente:

printf("%d%d%d", ...);

Aqui no es necesario limitar la longitud pues simplemente de imprimiran 3 enteros almacendos (con una
longitud ya determinada desde la entrada).

## Bibliografía

Szuhay, J. (2020). 21 Exploring Formatted Input [Libro electrónico]. En Learn C
        Programming (1.a ed., pp. 478–496). Packt Publishing.