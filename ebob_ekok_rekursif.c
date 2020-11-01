#include <stdio.h>
#include <stdlib.h>
int ebob(int x, int y)
{
    while(x != y)
    {
        if(x > y)
        {
            return ebob(x-y,y);
        }
        else
        {
            return ebob(x,y-x);
        }

    }
    return x;

}
int ekok(int x,int y)
{
	return (x*y)/ebob(x,y);
}

int main()
{
    int sayi1,sayi2;
    printf("Sayi giriniz:");
    scanf("%d",&sayi1);
    printf("Sayi giriniz:");
    scanf("%d",&sayi2);
    printf("Ebob(%d,%d) = %d\n",sayi1,sayi2,ebob(sayi1,sayi2));
     printf("Ekok(%d,%d) = %d",sayi1,sayi2,ekok(sayi1,sayi2));
    return 0;
}
