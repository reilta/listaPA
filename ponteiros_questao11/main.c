#include <stdio.h>

int main()
{
    //para roda o x com o TIPO que preferi é so descomentar;

    /*
    char x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +1 (1*1)
    printf("x = %d \n", x+2); // somou +2 (2*1)
    printf("x = %d \n", x+3); // somou +3 (3*1)
    */

    /*
    int x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +4 (1*4)
    printf("x = %d \n", x+2); // somou +8 (2*4)
    printf("x = %d \n", x+3); // somou +12 (3*4)
    */

    /*
    float x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +4 (1*4)
    printf("x = %d \n", x+2); // somou +8 (2*4)
    printf("x = %d \n", x+3); // somou +12 (3*4)
    */

    /*
    double x[4];
    printf("endereço inicial x= %d \n",x);
    printf("x = %d \n", x+1); // somou +8 (1*8)
    printf("x = %d \n", x+2); // somou +16 (2*8)
    printf("x = %d \n", x+3); // somou +24 (3*8)
    */


    //comparando o que foi idealizado na questao 10 com os resultados obtidos aqui
    //percebemos que char continua ocupando 1 byte, o int agora é 4 bytes
    //o float também é 4 bytes, e o double é 8 bytes

    return 0;
}

