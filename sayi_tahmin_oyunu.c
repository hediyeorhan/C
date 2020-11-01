#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Sayı Bulma Oyunu ()
    –1-100 arasında rasgele bir pozitif tam sayı belirleyin. (rand() % 100)
    –Kullanıcıya 5 seçim hakkı vererek onu aşağı-yukarı şeklinde yönlendirin.
    –Kullanıcı sayıyı doğru tahmin ederse «Tebrikler» mesajı, tüm haklarını kullanıp bilemediyse «Üzgünüz, kaybettiniz.
    Sayı : XX ‘di» mesajını ekrana yazdırın.*/
    int sayi=rand()%100;
    int hak=5;
    int tahmin;

    while(tahmin!=sayi)
    {
        printf("tahmin giriniz:");
        scanf("%d",&tahmin);

        if(tahmin<sayi )
        {
            printf("Daha yuksek bir sayi soyleyin!\n");
            hak--;
        }
        else if(tahmin>sayi )
        {
            printf("Daha dusuk bir sayi soyleyin!\n");
            hak--;
        }
        else
        {
            printf("Tebrikler!!\n");
        }
        if(hak==0)
        {
            printf("Tahmin hakkiniz bitti.\nSayiniz=%d\n",sayi);
            break;
        }


    }


    return 0;
}
