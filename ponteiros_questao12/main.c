#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;



    aloha[2] = value; // é valido
    scanf("%f", &aloha); // é valido
    aloha = value"; // não é valido
    printf("%f", aloha); // é valido
    coisas[4][4] = aloha[3]; // é valido
    coisas[5] = aloha; // não é valido
    pf = value; // não é valido
    pf = aloha; // é valido

    return 0;
}
