#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int from_index=0, to_index=0, max=0, j=0;
    char largest[100];
    for(int i=0; i<=n; i++)
    {
        if(str[i]==' ' || str[i]=='\0' || str[i]=='\n')
        {
            if(i- from_index > max)
            {
                max = i - from_index;
                to_index = i-1;
            }
            from_index = i + 1;
        }
    }
    for(int i=to_index-max+1; i<=to_index; i++)
    {
        largest[j++] = str[i];
    }
    largest[j] = '\0';
    printf("%s", largest);
    return 0;
}