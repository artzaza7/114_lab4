#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char name[1000];
    gets(name);
    int len=strlen(name);
    for(int i=0;i<len+1;i++)
    {
        if(i==0)
        {
            printf("%c",toupper(name[0]));
        }
        else if(name[i]==' ')
        {
            printf("Yes");
            break;
        }
    }
    return 0;
}