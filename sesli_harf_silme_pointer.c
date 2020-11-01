#include<stdio.h>
#include<string.h>
void harf_sil(char *s, char *t)
{
    int i,j;
    for(i=0; i<=strlen(s); i++)
    {
        for(j=0; j<=strlen(t); j++)
        {
            if(s[i] != t[j])
            {
                printf("%s",s[i]);
            }
        }
    }
}

void main()
{
	char *s="Hediye";
	char *t="aeiýouüö";
    harf_sil(s,t);
}
