#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int martix[size][3];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&martix[i][j]);
        }
    }
    int max=0,min=2000,killmin=0,killmax=0,sum=0;
     for(int i=0;i<size-2;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum=sum+(martix[j][0]*4)+(martix[j][1]*2)+(martix[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            killmax=i;
        }
        if(min>sum)
        {
            min=sum;
            killmin=i;
        }
        sum=0;
    }
    printf("%d %d",killmax+1,killmin+1);
    return 0;
}