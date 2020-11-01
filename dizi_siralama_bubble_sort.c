#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[15];
   int i,j,gecici;
   int boyut=sizeof(dizi)/sizeof(int);
   for(i=0;i<boyut;i++)
   {
       printf("%d. degeri giriniz:",i+1);
        scanf("%d",&dizi[i]);
   }
   for(i=0;i<boyut;i++)
   {
       for(j=0;j<boyut;j++)
       {
           if(dizi[j]>dizi[j+1])
           {


            gecici=dizi[j+1];
            dizi[j+1]=dizi[j];
            dizi[j]=gecici;
           }

       }
      // printf("%d  ",dizi[i]);

   }
    for(i=0;i<boyut;i++){printf("%d  ",dizi[i]);}
    return 0;
    /*int gecici,i,j;


    int dizi[5];
    int adet=sizeof(dizi)/sizeof(int);

    for(i=0;i<adet;i++){
        printf("%d nci elemani girin: ",i+1);
        scanf("%d",&dizi[i]);
    }


 printf("\n Sayilarin Bubble Sort (Kabarcik Siralamasi) ile siralanmis hali; \n");

    //SIRALAMA KODU BASLANGICI

    for(i=0;i<adet;i++)
    {
        for(j=0;j<adet;j++)
        {

            if(dizi[j]>dizi[j+1]){
                                gecici=dizi[j+1];
                                dizi[j+1]=dizi[j];
                                dizi[j]=gecici;
                                }
        }
    }

    //SIRALAMA KODU SONU

    for(i=0;i<adet;i++){
        printf("-> %d",dizi[i]);
    }
    getch();
    return 0;*/
}
