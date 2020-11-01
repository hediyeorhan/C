#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s,boyut;
    printf("Boyut giriniz:");
    scanf("%d",&boyut);
    int bosluk=boyut-1;
    int yildiz=1;
    for(i=0; i<boyut; i++)
    {
        for(s=0; s<bosluk; s++)
        {
            printf(" ");
        }
        for(s=0; s<yildiz; s++)
        {
            printf("*");
        }
        printf("\n");
        bosluk--;
        yildiz++;
    }

    return 0;
}
