#include <stdio.h>
#include <stdlib.h>

int main()
{
    //10 elemanlý bir diziyi küçükten büyüðe doðru sýralayýp gösteren C kodunu yazýnýz.
    int dizi[10];
    int i,gecici,j;
    int boyut=sizeof(dizi)/sizeof(int);
    for(i=0; i<boyut; i++)
    {
        printf("%d. degeri giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
    for(i=0; i<boyut; i++)
    {

        for(j=i; j<boyut; j++)
        {

            if(dizi[i]>dizi[j]) // dizi[i]<dizi[j] olursa da büyükten küçüðe doðru sýralar.!
            {
                gecici=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=gecici;
            }
        }
        printf("%d < ",dizi[i]);
    }

    return 0;
}
