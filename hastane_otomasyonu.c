#include <stdio.h>
#include <stdlib.h>
int hasta[100][4]= {{101,0,4,1},{112,2,1,0},{107,4,3,0},{257,1,0,0},{158,3,4,1}};
int satir=sizeof(hasta)/sizeof(hasta[0]);
int sutun=sizeof(hasta[0])/sizeof(hasta[0][0]);

int i,j;


double muayene_ucreti_hesapla(int id)
{
    double ucret=0;
    for(i=0; i<satir; i++)
    {

        if(id==hasta[i][0])
        {


            if(hasta[i][3]==0)
            {
                ucret+=50;
            }
            else if(hasta[i][3]==1)
            {
                ucret+=150;
            }
            if(hasta[i][1]==2 || hasta[i][1]==4)
            {
                ucret=0;
            }
            else if(hasta[i][1]==0)
            {
                ucret*=2;

            }
            else if(hasta[i][1]==1)
            {
                if(ucret==0)
                {
                    ucret=0;
                }
                else
                    ucret-=(ucret*0.2);
            }
            else if(hasta[i][1]==3)
            {
                if(ucret==0)
                {
                    ucret=0;
                }
                else
                    ucret-=(ucret*0.1);
            }
            if(hasta[i][2]>=3)
            {
                if(ucret==0)
                {
                    ucret=0;
                }
                else
                    ucret-=10;
            }

            hasta[i][4]=ucret;
        }
    }

    return hasta[i][4];
}
void hasta_indis_bul(int id)
{


    for(i=0; i<satir; i++)
    {

        if(hasta[i][0]==id)

        {
            printf("Hasta id = %d , Saglik guvencesi = %d , Kardes = %d , Tedavi Sekli = %d , Ucret = %d\n",hasta[i][0],hasta[i][1],hasta[i][2],hasta[i][3],hasta[i][4]);
          return 0;
        }
        

    }

    for(i=0; i<satir; i++)
    {

        if(hasta[i][0]!=id)

        {
            printf("Boyle bir hasta yok!\n");
            break;
        }

    }1

}

int main()
{
    int id;
    printf("Hasta id:");
    scanf("%d",&id);
    muayene_ucreti_hesapla(id);
    hasta_indis_bul(id);



    return 0;
}
