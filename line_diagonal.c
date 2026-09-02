// Input : 9 [For Odd number]
// Output: 
// \*******/
// *\*****/*
// **\***/**
// ***\*/***
// ****/****
// ***/*\***
// **/***\**
// */*****\*
// /*******\

// Input : 8 [For Even number]
// Output :
// \******/
// *\****/*
// **\**/**
// ***\/***
// ***/\***
// **/**\**
// */****\*
// /******\

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("\\");
            }
            else if(i+j==n+1)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}