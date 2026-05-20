#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);
    char new[n];
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(' || str[i]==')')
        {
            continue;
        }
        else
        {
            new[j] = str[i];
            j++;
        }
    }
    printf("String after removing brackets: %s\n", new);
    return 0;
}