#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,icbosluk,disbosluk,i,j;
    printf("Boyut giriniz:");
    scanf("%d",&sayi);
    icbosluk=-1;
    disbosluk=sayi-1;
    for(i=1; i<=sayi; i++)
    {
        for(j=1; j<=disbosluk; j++)
            printf(" ");
        printf("*");

        if(i!=1)
        {
            for(j=1; j<=icbosluk; j++)

                printf(" ");
            printf("*");


        }
        printf("\n");
        icbosluk+=2;
        disbosluk--;
    }
    icbosluk-=4;
    disbosluk=1;
    for(i=1; i<sayi; i++)
    {
        for(j=1; j<=disbosluk; j++)
            printf(" ");
        printf("*");

        if(i!=sayi-1)
        {
            for(j=1; j<=icbosluk; j++)

                printf(" ");
            printf("*");


        }
        printf("\n");
        icbosluk-=2;
        disbosluk++;
    }
    /*int sayi,icBosluk,disBosluk;

        int i;

        int j;

        printf("enter the number:");

        scanf("%d",&sayi);

        icBosluk=-1;
        disBosluk=sayi-1;


        for (i=1; i<=sayi; i++)

        {

            for(j=1; j<=disBosluk; j++)

                printf(" ");

            printf("*");

            if(i!=1)

            {
                for(j=1; j<=icBosluk; j++)

                    printf(" ");

                printf("*");

            }

            printf("\n");

            icBosluk+=2;

            disBosluk--;


        }

        icBosluk-=4;

        disBosluk=1;


        for( i=1; i<sayi; i++)

        {

            for(j=1; j<=disBosluk; j++)

                printf(" ");

            printf("*");


            if(i!=sayi-1)

            {

                for(j=1; j<=icBosluk; j++)

                    printf(" ");

                printf("*");

            }
            printf("\n");
            icBosluk-=2;

            disBosluk++;


        }*/

    return 0;
}
