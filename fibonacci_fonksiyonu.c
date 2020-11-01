#include <stdio.h>
#include <stdlib.h>
int fibo(int sira)
{
    int a=0,b=1,c;
    int i;
    for(i=0;i<=sira;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }

}


int main()
{
    int sira;
    printf("Kac sira yazilsin ? : ");
    scanf("%d",&sira);
    fibo(sira);
    return 0;
}
