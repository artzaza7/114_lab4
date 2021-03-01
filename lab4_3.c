#include<stdio.h>
int main()
{
    char name[200];
    gets(name);
    char new[20];
    int index=0;
    for(int i=0;i<200;i++)
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
    new[index++]='\0';
    puts(new);
    return 0;
}