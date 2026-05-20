#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct transaction
{
    char sender[50], receiver[50];
    double amt;
    long long time;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct transaction t[n];
    int fraud[n];

    for(int i = 0; i < n; i++)
    {
        fraud[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %lf %lld",
              t[i].sender,
              t[i].receiver,
              &t[i].amt,
              &t[i].time);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(t[i].sender, t[j].sender) == 0 &&
               strcmp(t[i].receiver, t[j].receiver) == 0 &&
               t[i].amt == t[j].amt &&
               llabs(t[i].time - t[j].time) <= 60)
            {
                fraud[i] = 1;
                fraud[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(fraud[i] == 1)
        {
            printf("%s %s %.2lf %lld\n",
                   t[i].sender,
                   t[i].receiver,
                   t[i].amt,
                   t[i].time);
        }
    }

    return 0;
}