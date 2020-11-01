#include <stdio.h>
#include <stdlib.h>

typedef struct sarki
{
    char sarkiad[30];
    double sure;

} S;


typedef struct album
{
    char sarkiciad[30];
    char albumad[30];
    int sarkis;
    S *sarkilar;
} A;


A *bilgi_al(A *s,int sayi)
{
    int i;

    if(sayi == 1)
        s = (A*)malloc(sizeof(A)*1);
    else
        s = (A*)realloc(s,sizeof(A)*sayi);

    printf("%-2d.Sarkici ad :",sayi);
    fflush(stdin);
    gets((s+sayi-1)->sarkiciad);

    printf("%-2d.Sarkici album ad :",sayi);
    fflush(stdin);
    gets((s+sayi-1)->albumad);

    printf("%-2d.Sarkici sarki sayisi :",sayi);
    scanf("%d",&(s+sayi-1)->sarkis);

    (s+sayi-1)->sarkilar = (S*)malloc(sizeof(S)*(s+sayi-1)->sarkis);

    for(i=0; i<(s+sayi-1)->sarkis; i++)
    {
        printf("%-2d.Sarki ad :",i+1);
        fflush(stdin);
        gets(((s+sayi-1)->sarkilar+i)->sarkiad);


        printf("%-2d.Sarki sure :",i+1);
        scanf("%lf",&((s+sayi-1)->sarkilar+i)->sure);
    }

    printf("\n\n***************************************\n\n");

    return s;

}

void listele(A *s,int sayi)
{
    int i,j;

    for(i=0; i<sayi; i++)
    {
        printf("%-2d.Sarkici ad : %s - Album ad : %s - Sarki sayisi : %d\n\n",i+1,(s+i)->sarkiciad,(s+i)->albumad,(s+i)->sarkis);

        for(j=0; j<(s+i)->sarkis; j++)
        {
            printf("%-2d.Sarki ad : %s - Sure : %.2lf\n\n",j+1,((s+i)->sarkilar+j)->sarkiad,((s+i)->sarkilar+j)->sure);
        }

        printf("\n\n***************************************\n\n");
    }
}

int main()
{
    int sarki_sayisi = 0,secim = 1;

    A *bilgi;

    while(secim != 2)
    {
        printf("1)**Sarki Ekle**\n\n2)**Listele ve Cikis**\n\nSecim :");
        scanf("%d",&secim);
        printf("\n");

        switch(secim)
        {
        case 1:
            sarki_sayisi++;
            bilgi = bilgi_al(bilgi,sarki_sayisi);
            break;

        case 2:
            listele(bilgi,sarki_sayisi);
            break;

        default:
            printf("\nGecersiz islem !..\n");
            break;

        }
    }

    return 0;
}
