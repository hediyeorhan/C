#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=10; i>=1; i--)
    {
        for(k=10-i; k>=1; k--)
        {
            printf(" ");

        }

        for(j=1; j<=i; j++)
        {
            printf(" *");
        }


        printf("\n");
    }



//ALT KISMINI VE �ST KISMINI �K� AYRI KOD �LE YAZDIM VE B�RLE�T�RD�M!!
//KUM SAAT�N�N ���N� NASIL BO�ALTIRIZ BAK!!


    int x,y,z;
    for(x=1; x<=10; x++)
    {
        for(z=1; z<=10-x; z++)
        {
            printf(" ");

        }

        for(y=1; y<=x; y++)
        {
            printf(" *");
        }


        printf("\n");
    }
    return 0;
}
