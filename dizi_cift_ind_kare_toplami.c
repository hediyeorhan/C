#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[]={5,12,8,4,6,7};
   int toplam=0,i;
   int boyut=sizeof(dizi)/sizeof(int);
   for(i=0;i<boyut;i++)
   {
       if(i%2==0)
       {
           toplam=toplam+(dizi[i]*dizi[i]);
           printf("dizi[%d]=%d\n",i,dizi[i]);
       }
       //veya for döngüsünde i=i+2 diyerek if kullanmadan çift indisleri alabiliriz.
   }
   printf("Toplam=%d",toplam);
    return 0;
}
