#include<stdio.h>

int main()
{
    int lb,ub,rev=0,rem,temp;
    printf("Enter lower bound: ");
    scanf("%d", &lb);
    printf("Enter upper bound: ");
    scanf("%d", &ub);
    for(int i=lb; i<=ub; i++)
    {
        temp = i;
        rev = 0;
        while(temp>0)
        {
            rem = temp%10;
            rev = rev*10 + rem;
            temp /= 10;
        }
        if(rev == i)
        {
            printf("%d is a palindrome.\n", i);
        }
    }
    return 0;
}