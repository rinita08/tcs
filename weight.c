#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n,y;
    scanf("%d",&n);
    int w[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    scanf("%d",&y);
    int count=0;
    int sum=0;
    qsort(w,n,sizeof(int),compare);
    for(int i=0;i<n;i++)
    {
        sum=sum+w[i];
        if(sum<y)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
}

