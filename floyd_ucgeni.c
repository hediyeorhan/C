#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,row,number=1,j;
    printf("Satir sayisi:");
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d",number);
            ++number;
        }
           printf("\n");
    }

    return 0;
}
