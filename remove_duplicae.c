#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int freq[256]={0};
    char new[100];
    int j=0;
    for(int i=0;str[i];i++)
    {
        freq[str[i]]++;
        if(freq[str[i]]==1)
        {
            new[j++]=str[i];
        }
    }
    new[j]='\0';
    printf("%s",new);
    return 0;
}