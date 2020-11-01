#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0,temp,fark=0,minfark=100000000;
    printf("Sayi giriniz :");
    scanf("%d",&sayi);
    printf("\n");
    temp=sayi;
    if(sayi<0)
    {
        printf("Negatif sayi!");
    }
    else
    {
        while(sayi>=0)
        {
            printf("Sayi giriniz :");
            scanf("%d",&sayi);
            printf("\n");
            if(sayi>=0)
            {
                fark=temp-sayi;

                if(fark<0)
                {
                    fark*=-1;
                }
                printf("Fark = %d\n",fark);
                if(fark<minfark)
                {
                    minfark=fark;
                }


                temp=sayi;
            }
        }
    }
    printf("Min fark = %d",minfark);
    return 0;
}
