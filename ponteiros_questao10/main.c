#include <stdio.h>

int main()
{

    // levando em concideração char ocupa 1 byte, int 2 bytes, float 4 byts, e double 8 bytes
    // e que o o endereço de memoria de x[0] é 4092

    char x[4];
    printf("x = %d \n", x+1); // saida de 4093
    printf("x = %d \n", x+2); // saida de 4094
    printf("x = %d \n", x+3); // saida de 4095

    int x[4];
    printf("x = %d \n", x+1); // saida de 4094
    printf("x = %d \n", x+2); // saida de 4096
    printf("x = %d \n", x+3); // saida de 4098

    float x[4];
    printf("x = %d \n", x+1); // saida de 4096
    printf("x = %d \n", x+2); // saida de 4100
    printf("x = %d \n", x+3); // saida de 4104

    double x[4];
    printf("x = %d \n", x+1); // saida de 4100
    printf("x = %d \n", x+2); // saida de 4108
    printf("x = %d \n", x+3); // saida de 4116

    return 0;
}
