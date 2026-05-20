#include<stdio.h>

int solve(int index,int arr[],int value[],int count,int n)
{
    if(index==n-1)
    {
        if(arr[index]!=arr[index-1])
        {
            count++;
        }
    return count;
    }
    for(int i=0;i<n;i++)
    {
        int val=value[i];
        if(val!=arr[index-1])
        {
            arr[index]=val;
            count=solve(index+1,arr,value,count,n);
        }
    }
    return count;
}


int main()
{
    int n,end;
    scanf("%d",&n);
    int value[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);
    }
    scanf("%d",&end);
    int arr[n];
    arr[0]=1;
    arr[n-1]=end;
    int count=0;
    count=solve(1,arr,value,count,n);
    printf("%d",count);
    return 0;    
}