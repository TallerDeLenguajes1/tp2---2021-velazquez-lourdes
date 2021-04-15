#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main ()
{
   
    int f, c ,k ;
    int *p;
    double mt[N][M];
    double *puntero = &mt [0][0];
    for ( f = 0; f < N; f++)
    {
       for ( c = 0; c < M; c++)
       {
           *(puntero+k)=k;
           k++;
       }
       
    }
    for ( f = 0; f < N; f++)
    {
        for (c=0; c < M ; c++)
        {
            printf("  %.3f ", *(puntero+k));
            k++;
        }
        printf("\n");
    }
    

    getchar();  
    return 0;

}