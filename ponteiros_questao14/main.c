#include <stdio.h>
#include <stdlib.h>


void ord_crescente (int n, float v[])
{
    float aux;
    for(int i=0; i<n-1; i++)
    {
        for(int j=n-1; j>i; j--)
        {
            if (v[j-1]>v[j])
            {
                aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    float *v = (float *)malloc(n*sizeof(float));

    printf("Digite os valores do vetor: ");
    for(int i=0; i<n; i++)
    {
        scanf("%f", &v[i]);
    }

    ord_crescente(n,v);

    for(int i = 0; i<n; i++)
    {
        printf(" %f",v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}
