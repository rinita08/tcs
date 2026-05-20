#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a,const void *b)
{
    return *(char*)a - *(char*)b;
}

int main()
{
    char str[100];
    scanf("%s",str);
    qsort(str,strlen(str),sizeof(char),compare);
    printf("%s",str);
}