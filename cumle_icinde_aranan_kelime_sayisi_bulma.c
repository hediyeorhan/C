#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cumle[100];
    char kelime[10];     //derleyici bize 10 karakterin tutulacagi bellek tahsisi yaptý.

    printf("cumleyi giriniz:");
    gets(cumle);        //scanf ile bosluga kadar alabildigi için gets ile aldik.
    printf("aranacak kelimeyi giriniz:");
    gets(kelime);

    int karaktersayisi = kelimeAra(cumle, kelime);

    printf("\n\nbulunan karakter sayisi:%d\n",karaktersayisi);
    return 0;
}

int MystrLen(char A[])
{
    int boyut=0;
    while(A[boyut] != 0)
    {
        boyut++;
    }
    
    return boyut;
}

int kelimeAra(char cum[], char kel[])
{
    int i, j, sayac=0;

    int l1= Mystrlen(cum);
    int l2= Mystrlen(kel);
    printf("  cumle uzunlugu:%d\n\n  kelime uzunlugu:%d\n",l1, l2);

    for(i=0; i<=l1-l2; i++)
    {
        if(cum[i] == kel[0])
        {
            //ilk karakterler esit ise
            sayac=1;
            for(j=1; j<l2; j++)
            {
                if(cum[i+j]== kel[j])
                {
                    sayac++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if(sayac==l2)
    {
        printf("\n %s kelimesi bulundu.\n",kel);
    }

    return sayac;

}
