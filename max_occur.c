#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int freq[256]={0};
    int max=0;
    int index=0;
    for(int i=0;str[i];i++)
    {
        freq[str[i]]++;
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            index=i;
        }
    }
    printf("%c",str[index]);
    return 0;
}