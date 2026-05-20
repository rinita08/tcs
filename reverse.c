#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int l=0;
    int r=strlen(str)-1;
    while(l<=r)
    {
        char temp=str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
    printf("Reversed string: %s", str);
    return 0;
}