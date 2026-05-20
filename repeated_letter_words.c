#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int freq[256]={0};
    char new[100];
    int j=0;
    int left=0,right=0;
    int max=0;
    int count=0;
    while(right<strlen(str))
    {
        while(str[right]!=' ' && str[right]!='\n')
        {
            freq[str[right]]++;
            right++;
        } 
        for(int i=65;i<256;i++) 
        {
            if(freq[i]>1)
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            j=0;
            for(int i=left;i<right;i++)
            {
                new[j++]=str[i];
            }
            new[j]='\0';
        }
        for(int i=0; i<256; i++)
{
    freq[i] = 0;
}
        count=0;
        left=right+1;
        right++;
    }
    if(max==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%s\n", new);
    }
return 0;
}