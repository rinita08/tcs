#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    char *ptr ;
    ptr= strstr(str1,str2);
    printf("%ld",ptr-str1);
    return 0;
}