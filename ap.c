#include<stdio.h>
int main()
{
    int n,a,d,sum,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Enter the first term: ");
    scanf("%d",&a);
    printf("Enter the common difference: ");
    scanf("%d",&d);
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum=sum+a;
        a=a+d;
    }
    printf("The sum of the AP series is: %d",sum);
    return 0;
}