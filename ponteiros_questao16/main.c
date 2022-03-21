#include <stdio.h>
#include<stdlib.h>

int compara_int(const void *a, const void *b)
{
    return (*(int*)a -*(int*)b);
}

void meu_qsort (int v[], size_t num, int (*compar)(const void*,const void*)){
    int aux;
    printf("compar :");
    for(int i=0; i<num-1; i++)
    {
        for(int j=num-1; j>i; j--)
        {
            if ((*compar)(v[j-1],v[j]) == 1)
            {
                aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
            }
            if (compar(v[j-1],v[j])==-1)
            {
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }
    }
}
int main()
{
    int n;
       printf("Digite o tamanho do vetor: ");

       scanf("%d",&n);
       int* v = (int *)malloc(n*sizeof(int));

       printf("Digite os valores do vetor: ");

       for(int i = 0; i < n; i++)
       {
           scanf("%d",&v[i]);
       }

       meu_qsort(v,n,compara_int);

       for(int i = 0; i < n; i++)
       {
           printf("%d ",v[i]);
       }
       return 0;
}
