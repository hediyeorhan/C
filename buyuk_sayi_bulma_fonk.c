#include <stdio.h>
#include <stdlib.h>
//Verilen iki sayýdan büyük olaný bulan fonksiyonu yazýnýz.
int max(int x, int y)
{
    int result;
    if(x>y)
    {
        result=x;
    }
    else
        result=y;
    return result;
}

int main()
{
    int x,y;
    printf("Birinci sayiyi giriniz:");
    scanf("%d",&x);
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&y);
    int ret=max(x,y);
    printf("%d",ret);

    return 0;
}
