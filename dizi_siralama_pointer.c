#include <stdio.h>
#include <stdlib.h>
int *siralama(int a[], int boyut)
{
    int i,j,temp;
    int *p;
    for(i=0; i<boyut; i++)
    {
        for(j=i; j<boyut; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
p=a;
    return p;
}

int main()
{
    int a[5]= {12,58,69,74,36};
    int i,*p;
    p=siralama(a,5);
    for(i=0; i<5; i++)
    {

         printf("%d ",*(p+i));
    }
    return 0;
}
