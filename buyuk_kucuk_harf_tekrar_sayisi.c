#include <stdio.h>
#include <stdlib.h>
int harf(char c)
{
    if(c<='Z' && c>='A')
        return 1;
    else if(c<='z' && c>='a')
        return 0;
    else
        return -1;
}

int uzunluk(char *p)
{
    int sonuc = 0;
    while(*(p+sonuc) !='\0')
    {
        sonuc++;
    }
    return sonuc;
}

int main()
{
    int sonuc,i,bs = 0,ks = 0,uz;
    char cumle[100];

    char *p=cumle;
    char *pb,*pk;

    printf("Cumle giriniz :");
    gets(p);

    uz=uzunluk(p);

    for(i=0; i<uz; i++)
    {
        sonuc = harf(*(p+i));
        if(sonuc == 1)
        {
            bs++;
            if(bs == 1)
                pb = (char*)malloc(sizeof(char)*1);
            else
                pb = (char*)realloc(pb,sizeof(char)*bs);

            *(pb+bs-1) = *(p+i);
        }

        else if(sonuc == 0)
        {
            ks++;
            if(ks == 1)
                pk = (char*)malloc(sizeof(char)*1);
            else
                pk = (char*)realloc(pk,sizeof(char)*ks);
            *(pk+ks-1) = *(p+i);
        }
    }

    *(pb+bs) = '\0';
    *(pk+ks) = '\0';

    printf("\n\nBuyuk harfler : %s\n\n",pb);
    printf("Kucuk harfler : %s\n\n",pk);
    return 0;
}
