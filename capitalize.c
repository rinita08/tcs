#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);
    for(int i=0; i<n; i++)
    {
        if(i==0 )
        {
            str[i]=str[i]-32;
        }
        else if(str[i-1]==' ')
        {
            str[i]=str[i]-32;
        }
        else if(str[i+1]==' ' )
        {
            str[i]=str[i]-32;
        }
        else if(i==n-2)
        {
            str[i]=str[i]-32;
        }
    }
    printf("Capitalized string: %s", str);
    return 0;
}