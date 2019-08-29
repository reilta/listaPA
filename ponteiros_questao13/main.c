#include <stdio.h>
#include<stdlib.h>

/* ponteiros para função é exatamento o que é ponteiros para um inteiros, ele guarda
 * endereço de uma função, sendo possivel acessa-lo atravez de uma variavel do tipo ponteiro para função
 * ponteiro para funcao pode ser passado como argumentos para outras funções. */

// ============= EXEMPLO ============ // pego do Cplusplus

int values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
      int n;
      qsort (values, 6, sizeof(int), compare);
      for (n=0; n<6; n++)
         printf ("%d ",values[n]);
      return 0;
    }
