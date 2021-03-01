#include<stdio.h>
int main()
{
    int number;
    int wow[2][2]={{1,2},{3,4}};
    int save[2][2]={{1,2},{3,4}};
    scanf("%d",&number);
    fflush(stdin);
    int check=0;
    char view[number][50];
    for(int i=0;i<number;i++)
    {
        scanf("%s",&view[i]);
        fflush(stdin);
    }
    for(int i=0;i<number;i++)
    {
        if(check==0)
        {
            for(int j=0;j<50;j++)
            {
                if(view[i][j]=='\0')
                {
                    check=1;
                    break;
                }
                else
                {
                    if(view[i][j]=='A'||view[i][j]=='a')
                    {
                        int temp=wow[0][1];
                        wow[0][1]=wow[1][0];
                        wow[1][0]=temp;
                    }
                    if(view[i][j]=='B'||view[i][j]=='b')
                    {
                        int temp=wow[0][0];
                        wow[0][0]=wow[1][1];
                        wow[1][1]=temp;
                    }
                    if(view[i][j]=='C'||view[i][j]=='c')
                    {
                        int temp1=wow[0][0],temp2=wow[0][1];
                        wow[0][0]=wow[1][0];
                        wow[0][1]=wow[1][1];
                        wow[1][0]=temp1;
                        wow[1][1]=temp2;
                    }
                    if(view[i][j]=='D'||view[i][j]=='d')
                    {
                        int temp1=wow[0][0],temp2=wow[1][0];
                        wow[0][0]=wow[0][1];
                        wow[1][0]=wow[1][1];
                        wow[0][1]=temp1;
                        wow[1][1]=temp2;
                    }
                    if(view[i][j]=='E'||view[i][j]=='e')
                    {
                        int temp1=wow[0][0],temp2=wow[0][1];
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
            printf("%d\n",wow[0][0]);
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