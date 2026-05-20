#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int freq[256]={0};
    int n1=strlen(str1);
    int n2=strlen(str2);
    if(n1!=n2)
    {
        printf("Not an anagram\n");
        return 0;
    }
    for(int i=0;i<n1;i++)
    {
        freq[str1[i]]++;
        freq[str2[i]]++;
    }
    for(int i=65;i<256;i++)
    {
        if(freq[i]%2!=0)
        {
            printf("Not an anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
return 0;
}
