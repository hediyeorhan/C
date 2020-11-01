#include <stdio.h>
#include <stdlib.h>
int fact(int x)
{
    int i,fak=1;
    for(i=1; i<=x; i++)
    {
        fak *=i;
    }

    return fak;
}
void paskal(int satir)
{
    int i,j,islem;
    for(i=0; i<=satir; i++)
    {

        for(j=0; j<=i; j++)
        {
            islem =fact(i)/(fact(j)*fact(i-j));

            printf("%d\t",islem);
        }

        printf("\n");
    }

}

int main()
{
    int satir;
    printf("Satir giriniz:");
    scanf("%d",&satir);
    paskal(satir);

    return 0;
}
