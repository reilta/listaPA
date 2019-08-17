//o que será impresso pelo programa 
//supondo que i ocupa o endereço 4094 na memória.

#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); 
    //será impresso o endereço de p
    //expressão *p+2 vale 7, pois 5+2.
    //expressão **&p resulta em 5.
    //expressão 3**p resulta em 15. pois será multiplicado por 3 
    //o valor da variável que o ponteiro aponta. (3*5)
    //expressão **&p+4 resulta em 9, pois 5+9

    return 0;
}

