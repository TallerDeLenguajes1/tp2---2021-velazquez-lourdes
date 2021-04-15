#include <stdio.h>
#include <stdlib.h>
int main ()
{
    #define N 4
    #define M 5
    int f,c;
    double mt[N][M];

    for(f = 0;f<N; f++)
    {
     for(f = 0;f<N; f++)
        {
        printf("%lf ", mt[f][c]);
        }
        printf("\n");
    }   
getchar();
return 0;
}