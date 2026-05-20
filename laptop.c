#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int min,count=0;
    scanf("%d", &min);
    getchar();
    
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char *token=strtok(str,",");
    int n=0;
    int a[1000];
    while(token!=NULL)
    {
        a[n]=atoi(token);
        n++;
        token=strtok(NULL,",");
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=min)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}