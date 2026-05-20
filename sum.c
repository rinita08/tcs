#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    int sum=0,digit=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit=digit*10+str[i]-'0';
        }
        else
        {
            sum += digit;
            digit = 0;
        }
    }
    sum += digit; 
    printf("%d ", sum);
    return 0;
}