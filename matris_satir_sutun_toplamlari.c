#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][4];
    int i,j,k,gecici,A[i],sayi,ind;
    double ort;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Sayi giriniz:");
            scanf("%d",&sayi);
            if(sayi%2 ==0 && i%2==0 && j%2==0)
            {
                matris[i][j]=sayi;
            }
            else if(sayi%2 !=0 && i%2!=0 && j%2!=0)
            {
                matris[i][j]=sayi;
            }

        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%4d",matris[i][j]);

        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        A[i]=0;
        for(j=0; j<4; j++)
        {
            A[i]+=matris[i][j];

        }
    }
    for(i=0; i<4; i++)
    {
        for(k=i; k<4; k++)
        {
            if(A[i]>A[k])
            {
                gecici=A[i];
                A[i]=A[k];
                A[k]=gecici;
            }
        }
        ort =A[i]/4;
        ind=i;
    }
    printf("satir= %d \n ort= %.1lf",ind,ort);
    return 0;
}
