#include <stdio.h>
#include <stdlib.h>
struct bugun
{
    int bgun,bay,byil;
    char ad[30];
    int dgun,day,dyil;
} b;

int main()
{
    int yasg,yasa,yasy;
    printf("Bugun'un tarihi : ");
    scanf("%d%d%d",&(b).bgun,&(b).bay,&(b).byil);
    printf("\n\n");

    printf("Kullanici ad : ");
    scanf("%s",(b).ad);
    printf("\n\n");

    printf("Dogum tarihi : ");
    scanf("%d%d%d",&(b).dgun,&(b).day,&(b).dyil);
    printf("\n\n");


    yasg = b.dgun-b.bgun;
    if(yasg<0)
    {
        yasg *=-1;
    }
    yasa = b.day-b.bay;
    if(yasa<0)
    {
        yasa *=-1;
    }
    yasy = b.dyil-b.byil;
    if(yasy<0)
    {
        yasy *=-1;
    }

    printf("Kullanici ad : %s\n\n",(b).ad);

    printf("GUN/AY/YIL\n\n");

    printf("Bugun'un tarihi : %d/%d/%d\n\n",(b).bgun,(b).bay,(b).byil);

    printf("Dogum tarihi : %d/%d/%d\n\n",(b).dgun,(b).day,(b).dyil);


    printf("Kullanicinin yasi : %d/%d/%d\n\n",yasg,yasa,yasy);

    return 0;
}
