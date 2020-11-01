#include <stdio.h>
#include <stdlib.h>
int ters(int dizi[],int uzunluk)
{
	printf("%d",dizi[uzunluk]);
	while(uzunluk > 0)
	{
	
	return ters(dizi[uzunluk-1]);
	
    }


}

int main()
{
    int sayi;
    printf("Dizi kac elemanli olacak ? ");
    scanf("%d",&sayi);
    int i,dizi[sayi];
    for(i=0; i<sayi; i++)
    {
        printf("\nEleman degeri giriniz : ");
        scanf("%d",&dizi[i]);
    }
    for(i=0; i<sayi; i++)
    {
        printf("%d\t",dizi[i]);


    }
    printf("\n\n-------DIZI'NIN TERS HALI-------\n\n");


        printf("%d",ters(dizi[sayi]));



    return 0;
}
