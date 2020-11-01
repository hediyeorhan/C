#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int i,toplam=0;
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsaydık. 4 boşluk olurdu yan yana yazardık - sola dayalı yazması için.

            toplam=toplam+i;
        }
    }*/
    //WHİLE DÖNGÜSÜ İLE YAPIMI!:
    int i=1,toplam=0;
    while(i<=100)
    {
          if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsaydık. 4 boşluk olurdu yan yana yazardık - sola dayalı yazması için.

            toplam=toplam+i;
        }
        i++;

    }
    printf("Toplam=%d",toplam);
    return 0;
}
