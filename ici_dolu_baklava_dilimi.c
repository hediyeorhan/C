#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,k,boyut;
printf("seklin boyutunu giriniz:");
scanf("%d",&boyut);
for(i=1;i<=boyut;i++)
{
    for(j=1;j<=boyut-i;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf(" *");
    }
    printf("\n");
}

for(i=boyut;i>=1;i--)
{
    for(j=boyut-i;j>=1;j--)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf(" *");
    }
    printf("\n");
}




    return 0;
}
