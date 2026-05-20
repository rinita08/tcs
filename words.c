#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' '|| str[i]=='\0'|| str[i]=='\n')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}