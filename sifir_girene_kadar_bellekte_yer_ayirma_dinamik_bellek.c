#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p, sayac=0, secim=1,i;
   p=malloc(1*sizeof(int));
   if(p==NULL)
   {
       printf("Yer tahsis edilemedi .. \n");
   }

   while(secim != 0)
   {
       printf("Bir deger giriniz :");
       scanf("%d",&secim);

       p[sayac]=secim;
       sayac++;

       p=realloc(p,(sayac+1)*sizeof(int));
   }
printf("\n------------------------------\n\n");
   for(i=0; i<sayac; i++)
   {
       printf("dizi[%d] = %d\n\n",i,*(p+i));
   }
   printf("\n\n");

   free(p);
    return 0;
}
