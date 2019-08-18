#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i); //mostra o valor do i durante o for
    printf("vet[%d] = %.1f ",i, vet[i]); //valor da variável i e os valores guardados no vetor
    printf("*(f + %d) = %.1f ",i, *(f+i)); ////valor da variável i e os valores guardados no vetor acessados 
    //pelo ponteiro
    printf("&vet[%d] = %X ",i, &vet[i]); //valor da variável i e os endereços das posições do vetor
    printf("(f + %d) = %X ",i, f+i); //valor da variável i e os endereços das posições do vetor
  }
}