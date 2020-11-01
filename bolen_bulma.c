#include <stdio.h>
#include <stdlib.h>

int main()
{ // 2,3 ve 5'e bölünen 300'den küçük sayýlar..
    //kýsayoldan ekoklarý olan 30'u bularak hesapladýk.
    int i;
   // for(i=0;i<300;i=i+30)
   /* {
        printf("%d\n",i);
    } */
    for(i=0;i<300;i++)
   /* {
        if(i%30==0)
        {
            printf("%d\n",i);
        }

    }*/
    if(i%3==0&&i%5==0&&i%2==0)
    {
        printf("%d\n",i);
    }
    return 0;
}
