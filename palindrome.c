#include<stdio.h>

int main()
{
    int n, rev=0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    int x=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==x)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}