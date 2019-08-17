#include <stdio.h>

int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("%d", p == &i); //será impresso o valor 1 pois é uma comparação verdadeira. 
    //p aponta para o endereço de i
    
    //*p - *q; o valor dessa expressão seria -2, pois 3-5.

    //**&p; valor dessa é 3, pois o primeiro *& acessa o conteúdo
    // que está em p e o segundo * acessa o valor presente no endereço que o p está apontando
    //3 - *p/(*q) + 7; resulta no valor 10. pois a divisão (3/5) resulta no valor 0 pois é uma divisão de inteiros

    return 0;
}