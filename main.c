#include <stdio.h>
#include <stdlib.h>

typedef struct fatura
{
    int ftip;
    int fborc;
    int fno;
}F;

typedef struct musteri
{
    int abone_no;
    char ad[30];
    char ilce[30];
    int tborc;
    int fsayi;
    F *faturalar;
}M;



M *bilgial(int msayi)
{
    M *m = (M*)malloc(msayi*sizeof(M));

    int i,j;
    for(i=0;i<msayi;i++)
    {
        printf("%d.Musteri abone no :",i+1);
        scanf("%d",&(m+i)->abone_no);

        printf("%d.Musteri ad :",i+1);
        fflush(stdin);
        gets((m+i)->ad);

         printf("%d.Musteri kayitli oldugu ilce :",i+1);
        fflush(stdin);
        gets((m+i)->ilce);

        printf("%d.Musteri fatura sayisi :",i+1);
        scanf("%d",&(m+i)->fsayi);

        (m+i)->faturalar = (F*)malloc((m+i)->fsayi * sizeof(F));

        for(j=0;j<(m+i)->fsayi;j++)
        {
            printf("%d.Musteri %d.Fatura tip :",i+1,j+1);
            scanf("%d",&((m+i)->faturalar+j)->ftip);

            printf("%d.Musteri %d.Fatura borc :",i+1,j+1);
            scanf("%d",&((m+i)->faturalar+j)->fborc);

            printf("%d.Musteri %d.Fatura abone no :",i+1,j+1);
            scanf("%d",&((m+i)->faturalar+j)->fno);
        }
        printf("\n\n**************************************\n\n");
    }

    return m;
}

void borc_hesapla(M *m, int msayi)
{
    int i,j;
    for(i=0; i<msayi; i++)
    {
        (m+i)->tborc = 0;

        for(j=0; j<(m+i)->fsayi; j++)
        {
            (m+i)->tborc += ((m+i)->faturalar+j)->fborc;
        }

    }
}

void listele(M *m, int msayi)
{
    int i,j,abone;

    printf("Aranacak abone no giriniz :");
    scanf("%d",&abone);

    for(i=0; i<msayi; i++)
    {
        if(abone == (m+i)->abone_no)
        {
            for(j=0; j<(m+i)->fsayi; j++)
            {
               printf("%d.Musteri %d.Fatura tip : %d  -  Borc : %d\n",i+1,j+1,((m+i)->faturalar+j)->ftip,((m+i)->faturalar+j)->fborc);
            }
            printf("%d.Musteri toplam borc : %d\n\n",i+1,(m+i)->tborc);
        }
    }
}

int main()
{
    int musteri_sayisi;

    printf("Kac musteri girilecek :");
    scanf("%d",&musteri_sayisi);

    M *musteriler = bilgial(musteri_sayisi);

    borc_hesapla(musteriler,musteri_sayisi);

    listele(musteriler,musteri_sayisi);

    return 0;
}
