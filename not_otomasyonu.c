#include <stdio.h>
#include <stdlib.h>
int ogr[100][3]= {{1,100,90},{2,89,50},{3,65,60},{4,10,20},{5,40,80}};
int satir=sizeof(ogr)/sizeof(ogr[0]);
int sutun=sizeof(ogr[0])/sizeof(ogr[0][0]);
int i,j;
int ogr_sayi=5;

double not(int numara)
{
    double ort;
    for(i=0; i<satir; i++)
    {
        if(ogr[i][0]==numara)
        {
            ort=(ogr[i][1]*0.4)+(ogr[i][2]*0.6);
            ogr[i][3]=ort;

        }

    }
    return ogr[i][3];
}
void bilgiler(int numara)
{
    for(i=0; i<satir; i++)
    {
        if(ogr[i][0]==numara)
        {
            printf("Numara = %d , Vize = %d , Final = %d , Ort = %d\n",ogr[i][0],ogr[i][1],ogr[i][2],ogr[i][3]);
            return 0;
        }
    }
    for(i=0; i<satir; i++)
    {
        if(ogr[i][0]!=numara)
        {
            printf("Boyle bir ogrenci bulunmamaktadir..");
            break;
        }
    }
}

void harf_notu(int numara)
{
    printf("Harf notunuz:");
    for(i=0; i<satir; i++)

    {
        if(ogr[i][0]==numara)
        {
            if(ogr[i][3]>=85 && ogr[i][3]<100)
                printf("AA\n");
            else if(ogr[i][3]>=80 && ogr[i][3]<85  )
                printf("BA\n");
            else if(ogr[i][3]>=75 && ogr[i][3]<80  )
                printf("BB\n");
            else if(ogr[i][3]>=70 && ogr[i][3]<75 )
                printf("CB\n");
            else if(ogr[i][3]>=65 && ogr[i][3]<70 )
                printf("CC\n");
            else if(ogr[i][3]>=60 && ogr[i][3]<65)
                printf("DC\n");
            else if(ogr[i][3]>=55 && ogr[i][3]<60 )
                printf("DD\n");
            else
                printf("FF\n");

        }
    }
}
void gecen_kalan(int num)
{

    for(i=0; i<ogr_sayi; i++)
    {
        if(ogr[i][3]>55)
        {
            printf("\nGectiniz..\n");
return 0;
        }


    }
     for(i=0; i<ogr_sayi; i++)
    {
        if(ogr[i][3]<55)
        {
  printf("\nKaldiniz..\n");
            break;
        }
    }


}
int main()
{
    int num;
    printf("Num :");
    scanf("%d",&num);
    not(num);
    harf_notu(num);
    bilgiler(num);
    gecen_kalan(num);
    return 0;
}
