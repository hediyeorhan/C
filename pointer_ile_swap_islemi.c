#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   Ýki deðiþkenin deðer deðiþtirme (swap) iþlemini
pointer kullanarak gerçekleþtiriniz.
*/
int *pa, *pb, a, b, temp;
printf("Enter for 'a' value : ");
scanf("%d",&a);
printf("Enter for 'b' value : ");
scanf("%d",&b);
printf("\n\n------------------------------------\n\n");
printf(" a = %d \n b = %d\n\n",a,b);
pa=&a;
pb=&b;
temp=*pa;
*pa=*pb;
*pb=temp;
printf("---------SWAP ISLEMI SONRASI--------\n\n");
printf(" a = %d \n b = %d\n\n",a,b);
printf("----GOSTERICILER ILE YAZDIRIRSAK----\n\n");
printf(" a = %d \n b = %d\n\n",*pa,*pb);
    return 0;
}
