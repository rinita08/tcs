#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int hash[256] = {0};
    char new[100];
    for(int i=0; str2[i]; i++)
    {
        hash[str2[i]]++;
    }
    int j=0;
    for(int i=0; str1[i]; i++)
    {
        if(hash[str1[i]] == 0)
        {
            new[j++] = str1[i];
        }
    }
    new[j] = '\0';
    printf("%s", new);
    return 0;
}