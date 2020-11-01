#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Bir int deðiþken ve pointer tanýmlayarak,
    deðiþken adresini pointer’a atayýnýz ve tüm
    deðiþken içerik ve adreslerini yazdýrýnýz.
    */
    int *pk, p=15;
    printf(" P ' nin degeri = %d \n\n ", p);

    printf("p ' nin adresi = %p \n\n ", &p);

    pk=&p;

    printf("p ' nin degeri = %d \n\n ", *pk);

    printf("p ' nin adresi = %p \n\n ", pk);

    return 0;
}
