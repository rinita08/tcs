#include<stdio.h>
int main()
{
    float a,r,n,sum=0;
    printf("Enter the first term: ");
    scanf("%f",&a);
    printf("Enter the common ratio: ");
    scanf("%f",&r);
    printf("Enter the number of terms: ");
    scanf("%f",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+a;
        a=a*r;
    }
    printf("The sum of the GP series is %.2f",sum);
    return 0;
}