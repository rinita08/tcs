#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char *single_digits[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *two_digits[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens_multiple[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *tens_power[]={"hundred","thousand"};
    if(n==0)
    {
        printf("zero");
    }
    else if(n<10)
    {
        printf("%s", single_digits[n]);
    }
    else if(n<20)
    {
        printf("%s", two_digits[n-10]);
    }
    else if(n<100)
    {
        printf("%s", tens_multiple[n/10]);
        if(n%10!=0)
        {
            printf(" %s", single_digits[n%10]);
        }
    }
    else if(n<1000)
    {
        printf("%s %s", single_digits[n/100], tens_power[0]);
        if(n%100!=0)
        {
            printf(" and ");
            if((n%100)<10)
            {
                printf("%s", single_digits[n%100]);
            }
            else if((n%100)<20)
            {
                printf("%s", two_digits[(n%100)-10]);
            }
            else
            {
                printf("%s", tens_multiple[(n%100)/10]);
                if((n%100)%10!=0)
                {
                    printf(" %s", single_digits[(n%100)%10]);
                }
            }
        }
    }
    else if(n<10000)
    {
        printf("%s %s", single_digits[n/1000], tens_power[1]);
        if(n%1000!=0)
        {
            printf(" ");
            if((n%1000)<10)
            {
                printf("%s", single_digits[n%1000]);
            }
            else if((n%1000)<20)
            {
                printf("%s", two_digits[(n%1000)-10]);
            }
            else if((n%1000)<100)
            {
                printf("%s", tens_multiple[(n%1000)/10]);
                if((n%1000)%10!=0)
                {
                    printf(" %s", single_digits[(n%1000)%10]);
                }
            }
            else
            {
                printf("%s %s", single_digits[(n%1000)/100], tens_power[0]);
                if((n%100)!=0)
                {
                    printf(" and ");
                    if((n%100)<10)
                    {
                        printf("%s", single_digits[n%100]);
                    }
                    else if((n%100)<20)
                    {
                        printf("%s", two_digits[(n%100)-10]);
                    }
                    else
                    {
                        printf("%s", tens_multiple[(n%100)/10]);
                        if((n%100)%10!=0)
                        {
                            printf(" %s", single_digits[(n%100)%10]);
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Number out of range");
    }
    return 0;
}