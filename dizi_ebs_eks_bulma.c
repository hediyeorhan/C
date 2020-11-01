#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[8]={14,15,78,62,2,3,52,23};
    int ebs=dizi[0];
    int eks=dizi[0];
    int i,ind,kind;
    int boyut=sizeof(dizi)/sizeof(int);
    for(i=0;i<boyut;i++)
    {
        if(dizi[i]>ebs)
        {
            ebs=dizi[i];
            ind=i;

        }
        if(dizi[i]<eks)
        {
            eks=dizi[i];
            kind=i;
        }
    }
     printf("Dizinin en buyuk sayisi=%d\n indisi=%d\n",ebs,ind);
     printf("Dizinin en kucuk sayisi=%d\n indisi=%d\n",eks,kind);
    return 0;
}
