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
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            continue;
        }
        else
        {
            new[j] = str[i];
            j++;
        }
    }
    printf("String after removing vowels: %s\n", new);
    return 0;
}