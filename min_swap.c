#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char stra[1000],strb[1000];
    fgets(stra,sizeof(stra),stdin);
    fgets(strb,sizeof(strb),stdin);
    int a[1000],b[1000];
    int n=0,m=0;
    char *tokena=strtok(stra,",");
    while(tokena!=NULL)
    {
        a[n]=atoi(tokena);
        n++;
        tokena=strtok(NULL,",");
    }
    char *tokenb=strtok(strb,",");
    while(tokenb!=NULL)
    {
        b[m]=atoi(tokenb);
        m++;
        tokenb=strtok(NULL,",");
    }
    int count=0;
    int hash[10000]={0};
    int visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        hash[b[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==1 || hash[a[i]]==i)
        continue;

        int cycle=0;
        int j=i;
        while(visited[j]==0)
        {
            visited[j]=1;
            j=hash[a[j]];
            cycle++;
        }
        count=count+cycle-1;
    }
    printf("%d\n", count);
}
