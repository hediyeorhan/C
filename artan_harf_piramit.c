#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
   char input,alfabe = 'A';

   printf("Son satirda yazdirmak istediginiz  karakteri girin:");
   scanf("%c",&input);
   for(i=1; i <= (input-'A'+1); ++i)
   {
       for(j=1;j<=i;++j)
       {
           printf("%c",alfabe);
       }
       ++alfabe;
       printf("\n");
   }

    return 0;
}
