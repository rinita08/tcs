#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[10000];
    fgets(str, sizeof(str), stdin);
    int a[1000];
    int n=0;
    char *token= strtok(str,",");
    while(token!=NULL)
    {
        a[n]=atoi(token);
        n++;
        token=strtok(NULL,",");
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n %d",n);
}