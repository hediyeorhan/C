#include <stdio.h>
#include <stdlib.h>

int main()
{

int sayi,icbosluk,disbosluk,i,j;
printf("Boyut giriniz:");
scanf("%d",&sayi);
icbosluk=-1;
disbosluk=sayi-1;

for(i=1;i<=sayi-1;i++)
{
    if(i!=sayi)
    {
    for(j=1;j<=disbosluk;j++)
    printf(" ");
    printf("*");
    }
    if(i!=1)
    {
        for(j=1;j<=icbosluk;j++)

            printf(" ");
            printf("*");

    }

    icbosluk+=2;
    disbosluk--;
     printf("\n");

}
icbosluk+=2;
    for(i=1; i<=icbosluk; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
