#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Verilen bir sayi dizisinde kullanici tarafindan girilen
//sayinin olup olmadigini kontrol eden, varsa kacinci
//indisinde olduðunu bulan C kodunu yaziniz.
    int dizi[6]= {15,45,62,23,10,48};
    int i,deger;
    int boyut=sizeof(dizi)/sizeof(int);

    printf("Aranacak degeri giriniz:");
    scanf("%d",&deger);
    for(i=0; i<boyut; i++)
    {
        if(dizi[i]==deger)
        {

            printf("Sayi bulundu.Sayi=%d  indisi=%d",dizi[i],i);
            break;

        }

    }


    return 0;
}
