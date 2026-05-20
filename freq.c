#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);
    int vowel=0,consonant=0,space=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonant++;
        } 
    }
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Spaces: %d\n", space);
    return 0;
}