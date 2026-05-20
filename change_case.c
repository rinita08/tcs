#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
    }
    printf("%s\n", str);
    return 0;
}
