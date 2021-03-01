#include<stdio.h>
int main()
{
    char name[200];
    char new[200];
    scanf("%s",name);
    int j=1;
    new[0]=name[0];
    for(int i=0;i<sizeof name;i++)
    {
        if(name[i]=='\0')
        {
            break;
        }
        if(name[i]!=name[i+1])
        {
            new[j]=name[i+1];
            j++;
        }
    }
    printf("%s",new);
    return 0;
}