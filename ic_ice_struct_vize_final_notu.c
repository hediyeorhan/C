#include <stdio.h>
#include <stdlib.h>



typedef struct ders
{
    char ders_adi[30];
    int vize_notu;
    int final_notu;

} D;


typedef struct ogrenci
{

    char numara[20];
    char ad[30];
    char soyad[30];
    int ders_sayisi;
    D *dersler;

} OG;


OG *bilgi_al(int a_sayisi)
{
    int i,j,ders_sayisi;
    OG *ogrenciler = (OG*)malloc(a_sayisi*sizeof(OG));

    if(ogrenciler == NULL)
    {
        printf("\nBellek tahsisi yapilamadi..\n");
    }


    for(i=0; i<a_sayisi; i++)
    {
        printf("%d.Ogrenci Numara : ",i+1);
        scanf("%s",(ogrenciler+i)->numara);
        printf("\n");

        printf("%d.Ogrenci Ad : ",i+1);
        fflush (stdin);
        gets((ogrenciler+i)->ad);
        printf("\n");

        printf("%d.Ogrenci Soyad : ",i+1);
        fflush (stdin);
        gets((ogrenciler+i)->soyad);
        printf("\n");

        printf("%d.Ogrenci Ders Sayisi : ",i+1);
        scanf("%d",&ders_sayisi);
        printf("\n");

        (ogrenciler+i)->ders_sayisi = ders_sayisi;

        (ogrenciler+i)->dersler = (D*)malloc(ders_sayisi*sizeof(D));

        if(((ogrenciler+i)->dersler) == NULL)
        {
            printf("\nBellek tahsisi yapilamadi .. \n");

        }



        for(j=0; j<ders_sayisi; j++)
        {


            printf("%d.Ogrenci'nin %d.dersi : ",i+1,j+1);
            fflush (stdin);
            gets((((ogrenciler+i)->dersler)+j)->ders_adi);
            printf("\n");


            printf("%d.Ogrenci'nin %d.dersi vize notu : ",i+1,j+1);
            scanf("%d",&(((ogrenciler+i)->dersler)+j)->vize_notu);
            printf("\n");


            printf("%d.Ogrenci'nin %d.dersi final notu : ",i+1,j+1);
            scanf("%d",&(((ogrenciler+i)->dersler)+j)->final_notu);
            printf("\n");


        }




        printf("----------------------------\n\n");
    }


    return ogrenciler;



}


void ogrenci_listele(OG *ogrenciler,int a_sayisi)
{
    int i,j;

    for(i=0; i<a_sayisi; i++)
    {

        printf("\n%d.Ogrenci Bilgileri :\n",i+1);
        printf("\n----------------------------\n");
        printf("Numara : %s\n",(ogrenciler+i)->numara);
        printf("Ad : %s\n",(ogrenciler+i)->ad);
        printf("Soyad : %s\n",(ogrenciler+i)->soyad);
        printf("Ders Sayisi : %d\n",(ogrenciler+i)->ders_sayisi);

        for(j=0; j<(ogrenciler+i)->ders_sayisi; j++)
        {

            printf("%d.dersi : %s\n",j+1,(((ogrenciler+i)->dersler)+j)->ders_adi);
            printf("%d.ders vize notu : %d\n",j+1,(((ogrenciler+i)->dersler)+j)->vize_notu);
            printf("%d.ders final notu : %d\n",j+1,(((ogrenciler+i)->dersler)+j)->final_notu);

        }

        printf("\n----------------------------\n\n");

    }


}

int kelime_karsilastir(char *A, char *B)
{
    int i=0,sayac=0;

    while(*(A+i)!= '\0' && *(B+i)!= '\0')
    {
        if(*(A+i) != *(B+i))
        {

            sayac=1;

            break;
        }

        i++;
    }

    if (sayac == 0 && *(A+i) == '\0' && *(B+i) == '\0')

        return 1;

    else

        return -1;
}


void ogrenci_ara(OG *ogrenciler, int a_sayisi,OG *aranan)
{

    int i,j;
    for(i=0; i<a_sayisi; i++)
    {
        if(kelime_karsilastir(aranan,(ogrenciler+i)->ad) == 1)
        {

            printf("\n----------------------------\n\n");
            printf("****Ogrenci Bulundu !!****\n");
            printf("\nOgrenci Bilgileri :\n");
            printf("\n----------------------------\n");
            printf("Numara : %s\n",(ogrenciler+i)->numara);
            printf("Ad : %s\n",(ogrenciler+i)->ad);
            printf("Soyad : %s\n",(ogrenciler+i)->soyad);
            printf("Ders Sayisi : %d\n",(ogrenciler+i)->ders_sayisi);
            for(j=0; j<(ogrenciler+i)->ders_sayisi; j++)
            {

                printf("%d.dersi : %s\n",j+1,(((ogrenciler+i)->dersler)+j)->ders_adi);
                printf("%d.ders vize notu : %d\n",j+1,(((ogrenciler+i)->dersler)+j)->vize_notu);
                printf("%d.ders final notu : %d\n",j+1,(((ogrenciler+i)->dersler)+j)->final_notu);


            }

            printf("\n----------------------------\n\n");

        }


    }

}



void durum_goster(OG *ogrenciler, int a_sayisi)
{
    int i, j, gecme_notu;

    printf("\nOgrencilerin Ders Basari Durumu :\n\n");
    printf("--------------------------------\n\n");
    for(i=0; i<a_sayisi; i++)
    {
        for(j=0; j<(ogrenciler+i)->ders_sayisi; j++)
        {
            gecme_notu = ((((ogrenciler+i)->dersler)+j)->vize_notu)*0.4 + ((((ogrenciler+i)->dersler)+j)->final_notu)*0.6;
            if(gecme_notu >= 60)
            {
                printf("%s %s : %d.dersi : %s dersinden BASARILI\n",((ogrenciler+i)->ad),((ogrenciler+i)->soyad),j+1,(((ogrenciler+i)->dersler)+j)->ders_adi);
                printf("\n---------------------------------------------------------------------------\n\n");
            }
            else
            {
                printf("%s %s : %d.dersi : %s dersinden BASARISIZ\n",((ogrenciler+i)->ad),((ogrenciler+i)->soyad),j+1,(((ogrenciler+i)->dersler)+j)->ders_adi);
                printf("\n----------------------------------------------------------------------------\n\n");
            }
        }
    }
}



int main()
{
    int ogr;
    OG *ogrenci;
    int menu;

    printf("Kac ogrenci bilgisi girilecek : ");
    scanf("%d",&ogr);

    printf("\n----------------------------\n\n");

    ogrenci = bilgi_al(ogr);
baslangic:
    printf(" ***MENU***\n1)Ogrenci Ara\n2)Durum Goster\n3)Listele\n4)Cikis\n");
    printf("\n----------------------------\n\n");
    printf("\nMenu seciniz : ");
    scanf("%d",&menu);
    printf("\n----------------------------\n\n");



    switch(menu)
    {
    case 1:
    {
        char ad[20];

        printf("Aranacak ogrencinin adini giriniz :");
        fflush (stdin);
        gets(ad);

        ogrenci_ara(ogrenci,ogr,ad);
        goto baslangic;
        break;

    }
    case 2:
    {
        durum_goster(ogrenci,ogr);
        goto baslangic;
        break;

    }
    case 3:
    {
        ogrenci_listele(ogrenci,ogr);
        goto baslangic;
        break;

    }
    case 4:
    {
        printf("\nCikis yapiliyor ..\n");
        return 0;
    }
    default:
    {

        printf("\nGecersiz islem girdiniz ..\n");
        printf("\n----------------------------\n\n");
        goto baslangic;
        break;

    }

    }

    return 0;
}
