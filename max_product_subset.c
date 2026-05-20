#include<stdio.h>
int main()
{
    int n,p=1,s=1,max=0,count=0,min=-1000000;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        p=p*a[i];
        if(p>max)
        {
            max=p;
        }
        if(p==0)
        {
            p=1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        s=s*a[i];
        if(s>max)
        {
            max=s;
        }
        if(s==0)
        {
            s=1;
        }
    }
    printf("%d",max);
}