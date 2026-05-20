#include<stdio.h>

void bubblesort(int x[],int y)
{
	int i,j,f,t;
	for(i=0;i<y;i++)
	{
		for(j=0;j<(y-i-1);j++)
		{
			f=0;
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
				f=1;
			}
		}
		if(f==0)
		break;
	}
}

int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}