#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int i,toplam=0;
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsaydýk. 4 boþluk olurdu yan yana yazardýk - sola dayalý yazmasý için.

            toplam=toplam+i;
        }
    }*/
    //WHÝLE DÖNGÜSÜ ÝLE YAPIMI!:
    int i=1,toplam=0;
    while(i<=100)
    {
          if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsaydýk. 4 boþluk olurdu yan yana yazardýk - sola dayalý yazmasý için.

            toplam=toplam+i;
        }
        i++;

    }
    printf("Toplam=%d",toplam);
    return 0;
}
