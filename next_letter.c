#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = (str[i]-'a'+1)%26 + 'a';
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = (str[i]-'A'+1)%26 + 'A';
        }
    }
    printf("%s", str);
    return 0;
}