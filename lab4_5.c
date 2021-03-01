#include<stdio.h>
int main()
{
    int number;
    int l[4]={1,0,0,0};
    int temp,temp2;
    scanf("%d",&number);
    char n[number][50];
    for(int i=0;i<number;i++)
    {
        scanf("%s",n[i]);
        for(int j=0;n[i][j]!='\0';j++)
        {
            switch (n[i][j])
            {
            case 'A':
                temp=l[1];
                l[1]=l[2];
                l[2]=temp;
                break;
            case 'B':
                temp=l[0];
                l[0]=l[3];
                l[3]=temp;
                break;
            case 'C':
                temp=l[0];
                l[0]=l[2];
                l[2]=temp;
                temp2=l[1];
                l[1]=l[3];
                l[3]=temp2;
                break;
            case 'D':
                temp=l[0];
                l[0]=l[1];
                l[1]=temp;
                temp2=l[3];
                l[3]=l[2];
                l[2]=temp2;
                break;
            case 'E':
                temp=l[0];
                l[0]=l[3];
                l[3]=temp;
                temp2=l[1];
                l[1]=l[2];
                l[2]=temp2;
                break;
            }
        }
        for(int j=0;j<4;j++)
        {
            if(l[j]==1)
            {
                printf("%d\n",j+1);
                l[j]=0;
                break;
            }
        }
        l[0]=1;
    }
    return 0;
}