#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int i,toplam=0;
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsayd�k. 4 bo�luk olurdu yan yana yazard�k - sola dayal� yazmas� i�in.

            toplam=toplam+i;
        }
    }*/
    //WH�LE D�NG�S� �LE YAPIMI!:
    int i=1,toplam=0;
    while(i<=100)
    {
          if(i%2==0)
        {

            printf("%d\n",i); // \n yerine %-4d yazsayd�k. 4 bo�luk olurdu yan yana yazard�k - sola dayal� yazmas� i�in.

            toplam=toplam+i;
        }
        i++;

    }
    printf("Toplam=%d",toplam);
    return 0;
}
