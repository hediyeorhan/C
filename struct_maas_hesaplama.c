#include <stdio.h>
#include <stdlib.h>

/*
calisanlar ve bilgileri verilsin calisanlarin adini soyadini ve departmanini al.Daha sonra mevcut maasini al zam miktarini al
calisanlara uygulanan ortalama zamý bul..
*/

typedef struct bilgi
{
    char ad[30];
    double mevcut_maas;
    double zam;

} bilgi;

typedef struct calisanlar
{

    char departman[30];
    int d_sayi;
    bilgi *calisan;

} C;

C *bilgi_ekle(int calisan_sayisi)
{
    int i,j;
    C *b = (C*)malloc(sizeof(C)*calisan_sayisi);

    for(i=0; i<calisan_sayisi; i++)
    {


        printf("%d.departman : ",i+1);
        fflush(stdin);
        gets((b+i)->departman);

        printf("%d.departmandaki calisan sayisi : ",i+1);
        scanf("%d",&(b+i)->d_sayi);

        (b+i)->calisan = (bilgi*)malloc(sizeof(bilgi)*(b+i)->d_sayi);

        for(j=0; j<(b+i)->d_sayi; j++)
        {
            printf("%d.calisan'nin adi : ",j+1);
            fflush(stdin);
            gets(((b+i)->calisan+j)->ad);

            printf("%d.calisan'nin mevcut maasi : ",j+1);
            scanf("%lf",&((b+i)->calisan+j)->mevcut_maas);

            printf("%d.calisan'nin zam orani : ",j+1);
            scanf("%lf",&((b+i)->calisan+j)->zam);
        }

        printf("\n\n***********************************************\n\n");
    }
    return b;

}
void yazdir(C *b,int csayi)
{
    int i,j;

    for(i=0; i<csayi; i++)
    {

        printf("%d.departman : %s\n\n",i+1,(b+i)->departman);

        for(j=0; j<(b+i)->d_sayi; j++)
        {
            printf("%d.calisan'nin mevcut maasi : %.2lf TL\n",j+1,((b+i)->calisan+j)->mevcut_maas);
        }
    }
}

void maas_hesapla(C *b,int csayi)

{
    int i,j,t=0;
    double yeni_maas=0;

    for(i=0; i<csayi; i++)
    {


        for(j=0; j<(b+i)->d_sayi; j++)
        {
            yeni_maas = ((((b+i)->calisan+j)->mevcut_maas )  *(((b+i)->calisan+j)->zam))+(((b+i)->calisan+j)->mevcut_maas );

            printf("%d.calisan'nin departmani:%s -- yeni maasi :%.2lf\n\n",j+1,(b+i)->departman,yeni_maas);


        }

    }


}


int main()
{
    int csayi;

    printf("Kac departman bilgisi girilecek :");
    scanf("%d",&csayi);

    C *bilgi = bilgi_ekle(csayi);

    yazdir(bilgi,csayi);

    maas_hesapla(bilgi,csayi);

    return 0;
}
