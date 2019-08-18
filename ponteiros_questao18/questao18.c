//Escreva uma função em c que escreva em um vetor 
//a soma dos elementos correspondentes de outros dois vetores 
//(os tamanhos dos vetores devem ser fornecidos pelo usuário). 
//Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, 
//e o segundo vetor contiver os elementos 3, 5, -3 e 1, 
//o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. 
//A função deve receber 4 argumentos: os nomes dos três vetores 
//e o número de elementos presentes em cada vetor.

#include <stdio.h>

void soma_vetor(int A[], int B[], int C[], int t){
    int i;

    for(i = 0; i<t; i++){
        C[i] = A[i]+B[i];
    }
}

int main(){
  int tam, i;
  printf("informe o tamanho do vetor: \n");
  scanf("%d",&tam);

  int A[tam], B[tam], C[tam];

    printf("informe os elementos do vetor A: \n");
    for(i = 0; i<tam; i++){
        scanf("%d",&A[i]);
    }
    printf("informe os elementos do vetor B: \n");
    for(i = 0; i<tam; i++){
        scanf("%d",&B[i]);
    }

    soma_vetor(A,B,C,tam);

    printf("os elementos do vetor C: \n");
    for(i = 0; i<tam; i++){
        printf("%d ",C[i]);
    }

  return 0;
}