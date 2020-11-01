#include <stdio.h>
#include <stdlib.h>
int uzunluk(char kelime[])
{
    int uzunluk=0,i;
    for(i=0;kelime[i]!='\0';i++)
    {
        uzunluk++;
    }
    return uzunluk;
}
void ters(char ters_yazi[])

{
int i,uz=0;
uz=uzunluk(ters_yazi) ;
printf("Yazinin ters hali");
for(i=uz;i>=0;i--)
{
    printf("%c\n",ters_yazi[i]);
}
}
int main()
{
   char metin1[50];
   gets(metin1);
   char metin2[50];
   gets(metin2);
   int u1,u2;
   u1=uzunluk(metin1);
   u2=uzunluk(metin2);
   if(u1>u2)
   {
       printf("1. metin daha uzun..\n");
       ters(metin1);
   }
   else if(u2>u1)
   {
       printf("2. metin daha uzun..\n");
       ters(metin2);
   }
   else
   {
       printf("Metinler esittir..\n");
       ters(metin1);
       ters(metin2);
   }
    return 0;
}
