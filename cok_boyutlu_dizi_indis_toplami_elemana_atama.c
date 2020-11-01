#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*3x2x2 boyutlu bir dizinin her elemanýna, ilgili
elemanýn indislerinin toplamlarýný aktaran ve
diziyi görüntüleyen C kodunu yazýnýz.
–
Örn: x[2][1][1] = 2+1+1*/
  int i,j,k;
  int dizi[3][2][2];
  for(i=0;i<3;i++)
  {
      for(j=0;j<2;j++)
      {
          for(k=0;k<2;k++)
          {
              dizi[i][j][k]=i+k+j;
               printf("dizi[%d][%d][%d]=%d\n",i,j,k,dizi[i][j][k]);
          }

      }

  }

    return 0;
}
