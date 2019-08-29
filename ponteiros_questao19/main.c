#include <stdio.h>
# include<stdlib.h>


void multi_matriz(int** A,int** B,int** C, int nl, int ncA, int ncB)
{
    int cont;
    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < ncB; j++)
        {
            cont = 0;
            for(int k = 0; k < ncA; k++)
            {
                cont = cont+A[i][k]*B[k][j];
            }
            C[i][j] = cont;
        }
    }

}


int main()
{
    int **A, **B, **C;
    int nl=2, ncA=2, ncB=2;

    A = (int**) malloc(nl*sizeof(int*));
    B = (int**) malloc(nl*sizeof(int*));
    C = (int**) malloc(nl*sizeof(int*));

    for(int i=0; i<nl; i++){
        A[i] = malloc(ncA*nl*sizeof(int));
        B[i] = malloc(ncB*nl*sizeof(int));
        C[i] = malloc(ncB*nl*sizeof(int));
      }

    A[0][0] = 1; A[0][1] = 2; A[1][0] = 3; A[1][1] = 4;
    B[0][0] = 1; B[0][1] = 2; B[1][0] = 3; B[1][1] = 4;

    multi_matriz(A,B,C,nl,ncA,ncB);

    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < ncB; j++)
        {
            printf("%2d ",C[i][j]);
        }
        printf(" \n");
    }

    free(A[0]);
    free(B[0]);
    free(A);
    free(B);

    return 0;
}
