#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
  char metin[30];
  printf("Bir metin giriniz:");
  gets(metin);
int i;
for(i=0; i !='0'; i++)
{
    if(isupper(metin[i]))
    {
       metin[i] = tolower(metin[i]);

    }
    else
    {
       metin[i] = toupper(metin[i]);

    }

}
 printf("%s",metin);
      return 0;
}
