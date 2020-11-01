#include <stdio.h>
#include <stdlib.h>

/*

Calisanlar yerine calisan adi ve yasi eklenecek..
bolumler yerine bolum no, bolum ad, calisan sayisi, eklenecek ve ic ice struct yapisi ile calisanlarin adina ve yasina erisilecek..
bolum ekle, ekrana yazdirma ve ortalama yas hesaplama fonksiyonu yazilacak (bolumdeki calisanlarin yas ort ve genel yas ort)..

*/

typedef struct calisanlar
{
    char ad[20];
    int yas;

} calisan;

typedef struct bolumler
{
    char bolum_adi[30];
    int bolum_no;
    int csayisi;
    calisan *calisanlar;

} bolum;

int bolum_sayi;

bolum *bolum_ekle()
{
    int i,j;

    printf("Kac bolum bilgisi girilecek :");
    scanf("%d",&bolum_sayi);

    bolum *b = (bolum*)malloc(bolum_sayi*sizeof(bolum));

    for(i=0; i<bolum_sayi; i++)
    {
        printf("%d.Bolum no : ",i+1);
        scanf("%d",&(b+i)->bolum_no);

        printf("%d.Bolum'un adi : ",i+1);
        fflush(stdin);
        gets((b+i)->bolum_adi);

        printf("%d.Bolumun calisan sayisi : ",i+1);
        scanf("%d",&(b+i)->csayisi);

        (b+i)->calisanlar = (calisan*)malloc(sizeof(calisan)*(b+i)->csayisi);

        for(j=0; j<(b+i)->csayisi; j++)
        {
            printf("%d.Bolum'un %d.Calisani'nin adi : ",i+1,j+1);
            fflush(stdin);
            gets(((b+i)->calisanlar+j)->ad);

            printf("%d.Bolum'un %d.Calisani'nin yasi : ",i+1,j+1);
            scanf("%d",&(((b+i)->calisanlar+j)->yas));
        }

    }
    printf("\n\n**********************************************\n\n");
    return b;
}


void ekrana_yazdir(bolum *b)
{
    int i,j;

    for(i=0; i<bolum_sayi; i++)
    {
        printf("%d.Bolum no : %d\n",i+1,(b+i)->bolum_no);

        printf("%d.Bolum adi : %s\n",i+1,(b+i)->bolum_adi);

        printf("%d.Bolum calisan sayisi : %d\n",i+1,(b+i)->csayisi);

        for(j=0; j<(b+i)->csayisi; j++)
        {
            printf("%d.Bolumun %d.Calisani adi : %s\n",i+1,j+1,((b+i)->calisanlar+j)->ad);

            printf("%d.Bolumun %d.Calisani yasi : %d\n",i+1,j+1,((b+i)->calisanlar+j)->yas);
        }
        printf("\n\n**********************************************\n\n");
    }
   // printf("\n\n**********************************************\n\n");
}

void ortalama_yas_hesapla(bolum *b)
{
    int i,j;
    double bolum_ort=0, genel_ort=0;

    for(i=0; i<bolum_sayi; i++)
    {
        bolum_ort=0;

        for(j=0; j<(b+i)->csayisi; j++)

        {
            bolum_ort += ((b+i)->calisanlar+j)->yas;

        }
        bolum_ort = (double)bolum_ort/(b+i)->csayisi;

        printf("%d.Bolumun ortalamasi = %.2f\n\n",i+1,bolum_ort);

        genel_ort += bolum_ort;


    }

    genel_ort = (double)genel_ort/bolum_sayi;

    printf("Genel ortalama = %.2f\n\n",genel_ort);

}

int main()
{
    bolum *bilgiler;

    bilgiler = bolum_ekle();

    ekrana_yazdir(bilgiler);

    ortalama_yas_hesapla(bilgiler);

    return 0;
}
