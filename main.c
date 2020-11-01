#include <stdio.h>
#include <stdlib.h>

/*

ailelerin soyadlarý ve her ailede kac cocuk oldugu cocuklarin adi ve yasi..

*/


typedef struct cocuklar
{
    char ad[30];
    int yas;

} cocuk;

typedef struct aile
{
    char aile_soyad[30];
    int csayi;
    cocuk *cocuklar;

} A;


A *bilgi_ekle(int aile_sayi)
{
    int i,j;

    A *b = (A*)malloc(aile_sayi*sizeof(A));

    for(i=0; i<aile_sayi; i++)
    {
        printf("%d.Aile'nin soyadi :",i+1);
        fflush(stdin);
        gets((b+i)->aile_soyad);

        printf("%d.Aile'nin cocuk sayisi :",i+1);
        scanf("%d",&(b+i)->csayi);

        (b+i)->cocuklar = (cocuk*)malloc((b+i)->csayi * sizeof(cocuk));

        for(j=0; j<(b+i)->csayi; j++)

        {
            printf("%d.Aile'nin %d.Cocugu'nun adi :",i+1,j+1);
            fflush(stdin);
            gets(((b+i)->cocuklar+j)->ad);

            printf("%d.Aile'nin %d.Cocugu'nun yasi :",i+1,j+1);
            scanf("%d",&((b+i)->cocuklar+j)->yas);

        }
        printf("\n\n---------------------------------\n\n");
    }
    return b;
}

void yazdir(A *b, int aile_sayi)
{
    int i,j;

    for(i=0; i<aile_sayi; i++)
    {
        printf("%d.Aile'nin soyadi : %s\n",i+1,(b+i)->aile_soyad);
        printf("%d.Aile'nin cocuk sayisi : %d\n",i+1,(b+i)->csayi);

        for(j=0; j<(b+i)->csayi; j++)
        {
            printf("%d.Aile'nin %d.Cocugu'nun adi : %s\n",i+1,j+1,((b+i)->cocuklar+j)->ad);
            printf("%d.Aile'nin %d.Cocugu'nun yasi : %d\n",i+1,j+1,((b+i)->cocuklar+j)->yas);
        }
        printf("\n\n---------------------------------\n\n");
    }
}

void yas_hesapla(A *b, int aile_sayi)
{
    int i, j, tcocuk = 0;
    double aile_yas_ort = 0, genel_ort = 0;

    for(i=0; i<aile_sayi; i++)
    {
        aile_yas_ort = 0;

        for(j=0; j<(b+i)->csayi; j++)

        {
            aile_yas_ort +=((b+i)->cocuklar+j)->yas;


        }

        aile_yas_ort = (double)aile_yas_ort/(b+i)->csayi;
        printf("%d.Ailedeki cocuklarin yas ortalamasi : %.2lf\n\n",i+1,aile_yas_ort);

        tcocuk +=(b+i)->csayi;

        genel_ort +=aile_yas_ort;

    }

    printf("Bu yapidaki toplam cocuk sayisi : %d\n\n",tcocuk);

    genel_ort = (double)genel_ort/aile_sayi;

    printf("Tum cocuklarin genel yas ortalamasi : %.2lf\n\n",genel_ort);
}

int main()
{
    int aile;

    A *bilgi;

    printf("Kac aile bilgisi girilecek :");
    scanf("%d",&aile);
    printf("\n\n---------------------------------\n\n");

    bilgi = bilgi_ekle(aile);

    yazdir(bilgi,aile);

    yas_hesapla(bilgi,aile);

    return 0;
}
