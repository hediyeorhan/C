#include <stdio.h>
#include <stdlib.h>
/*Bankamatik:
–Kendisine parametre olarak gelen YTL cinsinden para miktarini 20, 10 ve 5 TL'lik birimler halinde hesaplar.
–Girilen miktar 5 YTL'nin bir kati degilse, ekrana uygun bir mesaj gönderir.
–Bankamatik fonksiyonunu yaziniz.*/
int banka(int para)
{

  if(para%5==0)
    {
    int beslik,onluk,yirmilik;
    yirmilik=para/20;
    para=para-(yirmilik*20);
    onluk=para/10;
    para=para-(onluk*10);
    beslik=para/5;
    para=para-(beslik*5);
    printf("Yirmilik = %d tane\n",yirmilik);
    printf("Onluk = %d tane\n",onluk);
    printf("Beslik = %d tane\n",beslik);
    }
      else
      {
      printf("Lutfen 5'in kati olan bir sayi giriniz.!");
      }
     return para;
}

int main()
{
    int x;
    printf("Cekilecek para miktarini giriniz:");
    scanf("%d",&x);
    printf("%d",banka(x));
    return 0;
}
