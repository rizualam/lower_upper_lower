#include <stdio.h>
int main(int argc, char *argv[])
{
    char ch[100];
    int i;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==' ')
        {
            i++;
        }
        if(ch[i]>='a'&& ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
        else
        {
         ch[i]=ch[i]+32;
        }
    }
    printf("%s\n",ch);
    return 0;

}

