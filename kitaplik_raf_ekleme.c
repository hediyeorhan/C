#include <stdio.h>
#include <stdlib.h>

typedef struct kitap
{
    char kad[30];
    double fiyat;
} K;

typedef struct raf
{
    int rkod;
    char rtur[30];
    int ksayi;
    K *kitaplar;
} R;

R *bilgi_al(R *k, int raf)
{
    int i;
    if(raf == 1)
        k = (R*)malloc(sizeof(R)*1);
    else
        k = (R*)realloc(k,raf*sizeof(R));

    printf("%-2d.Raf kodu :",raf);
    scanf("%d",&(k+raf-1)->rkod);

    printf("%-2d.Raf tur :",raf);
    fflush(stdin);
    gets((k+raf-1)->rtur);

    printf("%-2d.Raf kitap sayisi :",raf);
    scanf("%d",&(k+raf-1)->ksayi);

    (k+raf-1)->kitaplar = (K*)malloc(sizeof(K)*(k+raf-1)->ksayi);

    for(i=0; i<(k+raf-1)->ksayi; i++)
    {
        printf("%-2d.Raf %-2d.Kitap ad :",raf,i+1);
        fflush(stdin);
        gets(((k+raf-1)->kitaplar+i)->kad);

        printf("%-2d.Raf %-2d.Kitap fiyat :",raf,i+1);
        scanf("%lf",&((k+raf-1)->kitaplar+i)->fiyat);
    }

    printf("\n\n*****************************************\n\n");
    return k;
}

void listele(R *k, int raf)
{
    int i,j;

    for(i=0; i<raf; i++)
    {
        printf("%-2d.Raf Kodu : %d - Turu : %s - Kitap Sayisi : %d\n\n",i+1,(k+i)->rkod,(k+i)->rtur,(k+i)->ksayi);

        for(j=0; j<(k+i)->ksayi; j++)
        {
            printf("%-2d.Kitap ad : %s - Fiyat : %.2lf TL\n\n",j+1,((k+i)->kitaplar+j)->kad,((k+i)->kitaplar+j)->fiyat);
        }

        printf("\n\n*****************************************\n\n");
    }
}



int main()
{
    int adet = 0,secim =1;
    R *kitap_bilgi;
    while(secim != 2)
    {
        printf("1)**Raf Ekle**\n\n2)**Listele ve Cikis**\n\nSecim :");
        scanf("%d",&secim);
        printf("\n");
        switch(secim)
        {
        case 1:
            adet++;
            kitap_bilgi = bilgi_al(kitap_bilgi,adet);
            break;

        case 2:
            listele(kitap_bilgi,adet);
            break;

        default:
            printf("\nGecersiz islem !..\n");
            //break;
        }
    }

}
