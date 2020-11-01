#include <stdio.h>
#include <stdlib.h>

int mystr(char *p)
{
    int sonuc = 0;
    while(*(p+sonuc) != '\0')
    {
        sonuc++;
    }
    return sonuc;
}

int main()
{
char cumle[100],kelime[30];

char *c=cumle;
char *k=kelime;

int uzk,uzc,i,j,sayac = 0;

printf("Cumle giriniz  :");
gets(c);
printf("Kelime giriniz :");
gets(k);

uzk = mystr(k);

uzc = mystr(c);

for(i=0; i<uzc-uzk; i++)
{
    if(*(c+i) == *(k+0))
    {
        sayac = 1;

        for(j=1; j<uzk; j++)
        {
            if(*(c+i+j) == *(k+j))

                sayac++;
            else

                break;
        }
    }
}

if(sayac == uzk)
{
    printf("\nKelime Bulundu ! ..\n\n");
}
else
    printf("\nKelime Bulunamadi ! ..\n\n");

return 0;
}
