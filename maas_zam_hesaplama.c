#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Bir �irket personel maa� zamlar�n�n hesaplanmas�n� istemektedir.
��irket maa� zamm� hesaplamas� esnas�nda mevcut maa�, �ocuk say�s� ve �nceki zam miktar�n� dikkate almaktad�r.
�Zam oran�;
�Maa�� 2000�den k���k olanlar i�in %20,
�2000 ve 3000 aras�nda olanlar i�in %15,
�3000� den b�y�k olanlar i�in %10
Belirlenmektedir.
�Ayr�ca �irket, personele her bir �ocuk i�in 30 TL ekstra zam vermektedir.
��irket, personele yap�lan yeni zam miktar� eski zam miktar�ndan daha az olmas� durumda eski maa� zamm�n� dikkate almaktad�r.
�Bilgileri verilen personel i�in maa� zam miktar�n� ve yeni maa��n� hesaplayan C kodunu yaz�n�z */

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
