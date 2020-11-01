#include <stdio.h>
#include <stdlib.h>
int faktoriyel_hesaplama (int x)
{
    int i,faktoriyel=1;
    for(i=1;i<=x;i++)
    {
        faktoriyel*=i;
    }
    printf("%d! = %d ",i-1,faktoriyel);
    return faktoriyel;
}
int main()
{
   int sayi;
   printf("Faktoriyel hesabi icin sayinizi giriniz:");
   scanf("%d",&sayi);
   faktoriyel_hesaplama(sayi);
    return 0;
}
