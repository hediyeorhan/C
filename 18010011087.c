#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HEDIYE ORHAN - 18010011087
int main()
{
    printf("HESAP MAKINESI PROGRAMINA HOSGELDINIZ!\n\n");
    int menu,islem,n,i,a,b,sonuc=0,carpim=1;
    double sonuc2;


tekrar:
    printf("BASIT MENU icin 1'e tiklayiniz:\n\nBASIT MENU\n1=Toplama Islemi\n2=Cikarma Islemi\n3=Carpma Islemi\n4=Bolme Islemi\n0=Cikis\n\nGELISMIS MENU icin 2'ye tiklayiniz:\n\nGELISMIS MENU\n1=Mod Alma Islemi\n2=Us Alma Islemi\n3=Karekok Islemi\n4=Logaritmik Islem\n0=Cikis\n\nProgrami kapatmak icin 0'a tiklayiniz.\n\n");
    printf("Lutfen menu seciniz:");
    scanf("%d",&menu);
    if(menu==1)
    {
        while(1==1)
        {
            printf("BASIT MENU\n1=Toplama Islemi\n2=Cikarma Islemi\n3=Carpma Islemi\n4=Bolme Islemi\n0=Cikis\n\n");
            printf("Islem seciniz:");
            scanf("%d",&islem);

            switch(islem)
            {

            case 1:
            {

                printf("Kac sayi toplayacaksiniz:");
                scanf("%d",&n);
                for(i=0; i<n; i++)
                {
                    printf("sayi giriniz:");
                    scanf("%d",&a);
                    sonuc=sonuc+a;
                }
                printf("Toplam=%d\n",sonuc);
                printf("------------------\n\n");
                break;
            }

            case 2:
            {
                printf("1.sayi degeri:");
                scanf("%d",&a);
                printf("2.sayi degeri:");
                scanf("%d",&b);
                printf("%d - %d = %d\n",a,b,a-b);
                printf("------------------\n\n");
                break;
            }

            case 3:
            {
                printf("Kac sayi carpacaksiniz:");
                scanf("%d",&n);
                for(i=0; i<n; i++)
                {
                    printf("sayi giriniz:");
                    scanf("%d",&a);
                    carpim=carpim*a;
                }
                printf("Carpim=%d\n",carpim);
                printf("------------------\n\n");
                break;
            }

            case 4:
            {
                printf("1.sayi degeri:");
                scanf("%d",&a);
                printf("2.sayi degeri:");
                scanf("%d",&b);
                printf("Bolum=%.2lf\n",(double)a/b);
                printf("------------------\n\n");
                break;

            }

            case 0:
            {
                printf("----------------------\n\n");
                printf("ANA MENUYE DONULUYOR!!\n\n");
                printf("----------------------\n\n");
                goto tekrar;
                break;
            }
            default:
            {
                printf("-------------------------\n\n");
                printf("Gecersiz islem girdiniz!!\n\n");
                printf("-------------------------\n\n");
                break;
            }
            }

        }
    }
    else if(menu==2)
    {
        while(1==1)
        {
            printf("GELISMIS MENU\n1=Mod Alma Islemi\n2=Us Alma Islemi\n3=Karekok Islemi\n4=Logaritmik Islem\n0=Cikis\n\n");
            printf("Islem seciniz:");
            scanf("%d",&islem);
            switch(islem)
            {
            case 1:
            {
                printf("1.sayiyi giriniz:");
                scanf("%d",&a);
                printf("2.sayiyi giriniz:");
                scanf("%d",&b);
                printf("%d sayisinin %d sayisina gore modu=%d\n",a,b,a%b);
                printf("------------------\n\n");
                break;
            }
            case 2:
            {
                printf("Sayi giriniz:");
                scanf("%d",&a);
                printf("Us degeri giriniz:");
                scanf("%d",&b);
                sonuc2=pow(a,b);
                printf("%d uzeri %d = %.0lf\n",a,b,sonuc2);
                printf("------------------\n\n");
                break;
            }
            case 3:
            {
                printf("Karekoku alinacak sayi degerini giriniz:");
                scanf("%d",&a);
                sonuc2=sqrt(a);
                printf("Karekok=%.2lf\n",sonuc2);
                printf("------------------\n\n");
                break;
            }
            case 4:
            {
                printf("Sayi degeri giriniz:");
                scanf("%d",&a);
                sonuc2=log10(a);
                printf("Logaritma 10 tabaninda %d = %.2lf\n\n",a,sonuc2);
                printf("------------------\n\n");
                break;
            }
            case 0:
            {
                printf("----------------------\n\n");
                printf("ANA MENUYE DONULUYOR!!\n\n");
                printf("----------------------\n\n");
                goto tekrar;
                break;
            }
            default:
            {
                printf("-------------------------\n\n");
                printf("Gecersiz islem girdiniz!!\n");
                printf("-------------------------\n\n");
                break;
            }
            }
        }
    }

    else if(menu==0)
    {
        printf("------------------\n\n");
        printf("PROGRAM KAPANIYOR...\n\n");
        printf("------------------\n\n");
        return 0;
    }

    else
    {
        printf("-----------------------------\n\n");
        printf("Gecersiz menu degeri girdiniz!\n\n");
        printf("-----------------------------\n\n");
        goto tekrar;
    }
    return 0;
}
