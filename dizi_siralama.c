#include <stdio.h>
#include <stdlib.h>

int main()
{
    //10 elemanl� bir diziyi k���kten b�y��e do�ru s�ralay�p g�steren C kodunu yaz�n�z.
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

            if(dizi[i]>dizi[j]) // dizi[i]<dizi[j] olursa da b�y�kten k����e do�ru s�ralar.!
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
