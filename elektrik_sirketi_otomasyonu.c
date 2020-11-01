#include <stdio.h>
#include <stdlib.h>
/*Bir elektrik þirketi müþterilerine ait verilerin kontrolünü saðlayabilmek adýna bir otomasyon programý talep etmektedir.
•Programdan istenenler;
–Her müþteriye ait müþteri id, kayýt yýlý, güvence bedeli, tarife, sayaç deðeri, ödenmemiþ fatura miktarý gibi bilgiler
tutulmaktadýr.+
–Her müþteri için yeni sayaç deðeri girilerek tarifesine göre fatura miktarý hesaplanacaktýr.
–Girilen sayaç deðeri öncekinden küçükse hata mesajý verilerek yeni sayaç deðeri istenecektir.
–Müþteriler sistemden ödeme yapabileceklerdir.
–Sistem ödeme yapmayan müþterileri talep edildiði takdirde gösterecek, güvence bedeli kadar ödeme yapmayan müþteri varsa
 aboneliði sonlandýrýlacaktýr.
–Müþterilere ait genel bilgiler istenildiði zaman listenecektir.
–Ýnteraktif menü ile program etkili bir biçimde kullanýlabilecektir.
–Sisteme yeni müþteri kaydý yapýlabilecektir.
*/
int cust_data[100][6]= {{10,2000,500,3,3500,1200},{11,1999,550,2,2500,1000},{12,2018,440,1,1000,0},{13,2007,650,3,800,800},{14,2013,350,2,8600,5400}};
int satir=sizeof(cust_data)/sizeof(cust_data[0]);
int sutun=sizeof(cust_data[0])/sizeof(cust_data[0][0]);
int musteri_sayaci=5; // burada sistemde bilgisi olan müsteri sayisini yazmak istedik..

void menu()
{
    printf("1)Musteri bilgileri listeleme.\n2)Yeni sayac degeri ile fatura miktari belirleme.\n3)Sistemden odeme yapma\n4)Odemeye yapmayanlarin listesi\n5)Abonelik sonlandirma\n6)Cikis\n");
}
void List_cust()
{
    int i,j;
    for(i=0; i<musteri_sayaci; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf(" %6d",cust_data[i][j]);
        }

        printf("\n");
    }

}
int fatura_miktari_hesaplama(int cust_id,int sayac)
{
    int i,j;

    for(i=0; i<musteri_sayaci; i++)
    {
        if(cust_id!=cust_data[i][0])
        {
            printf("Bu id numarasi ile kayitli musteri bulunmamaktadir..");
            break;
        }
            else
        {
            printf("Yeni sayac degeri giriniz:");
            scanf("%d",&sayac);
            if(sayac<cust_data[i][4])
            {
                printf("Eski sayac degerinden kucuk.Lutfen yeniden giriniz!");
                break;
            }
            else
                cust_data[i][4]=sayac;

        }
    }
    for(i=0;i<musteri_sayaci;i++)
    {

        switch(cust_data[i][3])
        {
        case 1:
            sayac*=0.2;
            cust_data[i][5]=sayac;
            break;
        case 2:
            sayac*=0.3;
            cust_data[i][5]=sayac;
            break;
        case 3:
            sayac*=0.1;
            cust_data[i][5]=sayac;
            break;
        }
        }




    printf("%d id numarali musteri fatura miktari %d 'dir.",cust_data[i][0],cust_data[i][5]);
}
int odeme(int musteri,int miktar)
{
    int i;
    for(i=0; i<musteri_sayaci; i++)
    {
        if(musteri==cust_data[i][0])
        {

            cust_data[i][5]-=miktar;
            printf("%d. musteri icin Kalan Odeme = %d\n",i+1,cust_data[i][5]);
        }
    }
    printf("\n");
    return cust_data[i][5];
}
void odeme_yapmayanlar()
{
    int i,j;
     printf("Hic odeme yapmayan musteri bilgileri:\n");
    for(i=0; i<musteri_sayaci; i++)
    {
        for(j=0; j<sutun; j++)
        {
            if(cust_data[i][4]==cust_data[i][5])
            {

                printf("%d",cust_data[i][j]);
                printf("\n");
            }

        }

    }
}
void abonelik()
{
    int i;
    for(i=0; i<musteri_sayaci; i++)
    {
        if(cust_data[i][2]==cust_data[i][5])
        {
            printf("%d id numarali musterinin odemesi yapilmadigi icin abonelik sonlandiriliyor..",cust_data[i][0]);

        }
    }
}
int main()
{
    menu();
    int exit=1,number;
    int cust_id,sayac,miktar,i;
    while(exit==1)
    {
        printf("Menu seciniz:");
        scanf("%d",&number);
        switch(number)
        {

        case 1:
            List_cust();
             menu();
            break;
        case 2:

            printf("Musteri id giriniz:");
            scanf("%d",&cust_id);
            printf("Yeni sayac degeri giriniz:");
            scanf("%d",&sayac);
            fatura_miktari_hesaplama(cust_id,sayac);
            menu();
            break;
        case 3:
            printf("Musteri id giriniz:");
            scanf("%d",&cust_id);
            for(i=0; i<musteri_sayaci; i++)
            {

                printf("%d. musteri icin Odenecek miktari giriniz:",i+1);
                scanf("%d",&miktar);

            }
            odeme(cust_id,miktar);
             menu();
            break;
        case 4:
            odeme_yapmayanlar();
             menu();
            break;
        case 5:
            abonelik();
             menu();
            break;
        case 6:
            return 0;
            break;



        }
    }
}
