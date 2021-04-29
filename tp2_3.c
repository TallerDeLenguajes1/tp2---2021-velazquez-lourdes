#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*3) Escribe un programa en el que se cargue una matriz de 15 filas con números enteros
aleatorios entre 100 y 999. Cada fila se cargará en FORMA DINAMICA. La cantidad de
columnas estará dada por un número aleatorio entre [5, 15]. Mostrar por pantalla la
matriz
a) Luego determinar para cada fila cuántos números son pares.
b) Por último, generar un nuevo vector dinámico de 15 elementos con la cantidad
de pares por fila obtenidos en el punto anterior.
c) Subir los cambios al repositorio remoto.*/
const int fila = 15; 
const int DIM2 = 5;

void funcion_par (int *matriz, int columna, int *vector)
{
    int *aux = matriz, contador = 0, i=0, j=0;
    for (i =0; i <fila ; i++)
    {
        for (j=0; j < columna; j++)
        {
            if ((int) *(matriz + i *columna + j) %2 == 0)
            {
                contador++;
            }
        }
        *(vector +i)  = contador;
        printf("la cantidad de numeros pares en la fila %d son: %d \n", i+1, *(vector +i));
        contador =0;
        
    }
}
int  main ()
{
int i, j, columna, pares; 
srand(time(NULL));
columna =   rand()% (15 -5 +1) + 5;
int *PunteroMatriz = (int *) malloc (sizeof (int) * fila * columna);
int *PunteroVector = (int *) malloc (sizeof (int) * 15);
 printf("cantidad de columanas: %d  \n", columna);
 printf("cantidad de fila %d\n", fila);

for (i =0; i < fila ; i++)
{
    for (j = 0; j < columna ; j++)
    {
        *(PunteroMatriz + i *columna + j) = 100 + rand () % (999+1-100);
        printf(" %d ", *(PunteroMatriz + i * columna + j));       
    }
    printf("\n");
}
funcion_par(PunteroMatriz, columna, PunteroVector);
getchar ();
return 0;
}