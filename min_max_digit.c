#include<stdio.h>
int main()
{
    int n,max=0,min=9;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        int digit=n%10;
        if(digit>max)
            max=digit;
        if(digit<min)
            min=digit;
        n=n/10;
    }
    printf("Largest digit: %d\n",max);
    printf("Smallest digit: %d\n",min);
    return 0;
}