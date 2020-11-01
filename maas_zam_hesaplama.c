#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Bir þirket personel maaþ zamlarýnýn hesaplanmasýný istemektedir.
•Þirket maaþ zammý hesaplamasý esnasýnda mevcut maaþ, çocuk sayýsý ve önceki zam miktarýný dikkate almaktadýr.
•Zam oraný;
–Maaþý 2000’den küçük olanlar için %20,
–2000 ve 3000 arasýnda olanlar için %15,
–3000’ den büyük olanlar için %10
Belirlenmektedir.
•Ayrýca þirket, personele her bir çocuk için 30 TL ekstra zam vermektedir.
•Þirket, personele yapýlan yeni zam miktarý eski zam miktarýndan daha az olmasý durumda eski maaþ zammýný dikkate almaktadýr.
•Bilgileri verilen personel için maaþ zam miktarýný ve yeni maaþýný hesaplayan C kodunu yazýnýz */

int mevcut_maas,cocuk_sayi,eski_zam,zam_oran,yeni_zam,yeni_maas;
printf("Mevcut maas:");
scanf("%d",&mevcut_maas);
printf("Cocuk sayisi:");
scanf("%d",&cocuk_sayi);
printf("Eski zam:");
scanf("%d",&eski_zam);
if(mevcut_maas<2000)
{
   yeni_zam=(mevcut_maas*2/10)+(cocuk_sayi*30);
}
else if(mevcut_maas<3000)
{
   yeni_zam=(mevcut_maas*15/100)+(cocuk_sayi*30);
}
else
{
    yeni_zam=(mevcut_maas*1/10)+(cocuk_sayi*30);
}

if(yeni_zam<eski_zam)
{
    yeni_zam=eski_zam;
}
yeni_maas=mevcut_maas+yeni_zam;
printf("Yeni maas=%d\nYeni zam=%d\n",yeni_maas,yeni_zam);



    return 0;
}
