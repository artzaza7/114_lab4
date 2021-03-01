#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    gets(name);
    char new[20];
    int len=strlen(name);
    int index=0;
    if (len<=0)
    {
        puts(name);
    }
    else{
    for(int i=0;i<len+1;i++)
    {
        if (i==0)
        {
            new[index]=name[i];
            index++;
        } 
        else 
        {
            if(name[i]==new[index-1])
        {
            continue;
        }
        else
        {
            new[index]=name[i];
            index++;
        }
        }
    }
    }
    new[index++]='\0';
    puts(new);
    return 0;
}