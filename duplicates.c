#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int freq[256]={0};
    for(int i=0;str[i];i++)
    {
        freq[str[i]]++;
    }
    for(int i=65;i<256;i++)
    {
        if(freq[i]>1)
        {
            printf("%c: %d\n",i,freq[i]);
            freq[i]=0;
        }
    }
    return 0;
}
