#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Acronym(char *s);
int main()
{
    char uname[100];
    gets(uname);
    Acronym(uname);
    return 0;
}
void Acronym(char *s)
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(i==0)
            printf("%c",toupper(s[i]));
        if(s[i]==' ')
        {
            switch (s[i+1])
            {
            case 'i' : if(s[i+2]=='n')
                        {
                            i=i+2;break;
                        }
                        else if (s[i+2]==' ')
                        {
                            i++;
                            break;
                        }
            case 'o' : if(s[i+2]=='f'||s[i+2]=='n')
                        if(s[i+3]=='l'||s[i+3]=='e')
                            printf("%c",toupper(s[i+1]));
                        {
                            i=i+2;
                            break;
                        }
            case 'f' : if(s[i+2]=='o')
                        if(s[i+3]=='r')
                        {
                            i=i+4;
                            break;
                        }
            case 'a' : if(s[i+2]=='n'||s[i+2]=='t')
                        {
                            if(s[i+3]=='d')
                                printf("%c",toupper(s[i+1]));
                            i=i+2;
                            break;
                        }
            case 'w' : if(s[i+2]=='i')
                        if(s[i+3]=='t')
                        {
                            i=i+4;
                            break;
                        }
            case 't' : if(s[i+2]=='h')
                        if(s[i+3]=='e')
                        {
                            i=i+3;
                            break;
                        }
            default:
                printf("%c",toupper(s[i+1]));
                break;
            }
        }
    }
}