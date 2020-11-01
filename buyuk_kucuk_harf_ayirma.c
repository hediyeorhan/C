#include <stdio.h>
#include <stdlib.h>



int harf_ayirma(char c)
{

    if(c >= 'A' && c <= 'Z')
        return 1;

    else if(c >= 'a' && c <= 'z')
        return 0;

    else
        return -1;


}


int main()
{
    char kelime[100];

    int buyuk_sayisi = 0, kucuk_sayisi = 0, sonuc ;

    printf("Kelime giriniz :");
    scanf("%s",&kelime);

    char *p = kelime;
    char *bp, *kp;

    int i;

    for(i=0; *(p+i)!='\0'; i++)
    {
        sonuc = harf_ayirma(*(p+i));
        if(sonuc == 1)
        {
            buyuk_sayisi++;

            if(buyuk_sayisi == 1)
                bp = (char*)malloc(sizeof(char)*1);
            else
                bp = (char*)realloc(bp,sizeof(char)*buyuk_sayisi);

            *(bp+buyuk_sayisi-1) = *(p+i);
        }
        else if(sonuc == 0)
        {
            kucuk_sayisi++;

            if(kucuk_sayisi == 1)
                kp = (char*)malloc(sizeof(char)*1);
            else
                kp = (char*)realloc(kp,sizeof(char)*kucuk_sayisi);
            *(kp+kucuk_sayisi-1) = *(p+i);
        }

    }

    *(bp+buyuk_sayisi) = '\0' ;
    *(kp+kucuk_sayisi) = '\0' ;

    printf("\n\nBuyuk harfler :%s",bp);
    printf("\n\nKucuk harfler :%s\n\n",kp);

    return 0;
}
