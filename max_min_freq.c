#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[201]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        hash[arr[i]+100]++;
    }
    int max=0,min=n;
    int maxi,mini;
    for(int i=0;i<n;i++)
    {
        if(hash[arr[i]+100]>max)
        {
            max=hash[arr[i]+100];
            maxi=arr[i];
        }
        if(hash[arr[i]+100]<min)
        {
            min=hash[arr[i]+100];
            mini=arr[i];
        }
    }
    printf("\n%d %d",maxi,max);
    printf("\n%d %d",mini,min);
    return 0;
}