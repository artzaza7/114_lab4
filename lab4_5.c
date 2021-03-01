#include<stdio.h>
int main()
{
    int number;
    int wow[2][2]={{1,2},{3,4}};
    int save[2][2]={{1,2},{3,4}};
    scanf("%d",&number);
    int temp1,temp2;
    int check=0;
    char view[number][50];
    for(int i=0;i<number;i++)
    {
        scanf("%s",&view[i]);
        if(check==0)
        {
            for(int j=0;j<50;j++)
            {
                if(view[i][j]=='\0')
                {
                    printf("%d\n",wow[0][0]);
                    check=1;
                    break;
                }
                else
                {
                    if(view[i][j]=='A')
                    {
                        temp1=wow[0][1];
                        wow[0][1]=wow[1][0];
                        wow[1][0]=temp1;
                    }
                    if(view[i][j]=='B')
                    {
                        temp1=wow[0][0];
                        wow[0][0]=wow[1][1];
                        wow[1][1]=temp1;
                    }
                    if(view[i][j]=='C')
                    {
                        temp1=wow[0][0],temp2=wow[0][1];
                        wow[0][0]=wow[1][0];
                        wow[0][1]=wow[1][1];
                        wow[1][0]=temp1;
                        wow[1][1]=temp2;
                    }
                    if(view[i][j]=='D')
                    {
                        temp1=wow[0][0],temp2=wow[1][0];
                        wow[0][0]=wow[0][1];
                        wow[1][0]=wow[1][1];
                        wow[0][1]=temp1;
                        wow[1][1]=temp2;
                    }
                    if(view[i][j]=='E')
                    {
                        temp1=wow[0][0],temp2=wow[0][1];
                        wow[0][0]=wow[1][1];
                        wow[0][1]=wow[1][0];
                        wow[1][1]=temp1;
                        wow[1][0]=temp2;
                    }
                }
            }
        }
        if(check==1)
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    wow[i][j]=save[i][j];
                }
            }
            check=0;
            continue;
        }
    }
    return 0;
}