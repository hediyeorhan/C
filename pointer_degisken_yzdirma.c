#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Bir int de�i�ken ve pointer tan�mlayarak,
    de�i�ken adresini pointer�a atay�n�z ve t�m
    de�i�ken i�erik ve adreslerini yazd�r�n�z.
    */
    int *pk, p=15;
    printf(" P ' nin degeri = %d \n\n ", p);

    printf("p ' nin adresi = %p \n\n ", &p);

    pk=&p;

    printf("p ' nin degeri = %d \n\n ", *pk);

    printf("p ' nin adresi = %p \n\n ", pk);

    return 0;
}
