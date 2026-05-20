#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct transaction
{
    char sender[50];
    char receiver[50];
    double amt;
    long long time;
};

int compare(const void *a, const void *b)
{
    struct transaction *t1 = (struct transaction*)a;
    struct transaction *t2 = (struct transaction*)b;

    int s = strcmp(t1->sender, t2->sender);
    if(s != 0) return s;

    s = strcmp(t1->receiver, t2->receiver);
    if(s != 0) return s;

    if(t1->amt < t2->amt) return -1;
    if(t1->amt > t2->amt) return 1;

    if(t1->time < t2->time) return -1;
    if(t1->time > t2->time) return 1;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    struct transaction t[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %lf %lld",
              t[i].sender,
              t[i].receiver,
              &t[i].amt,
              &t[i].time);
    }

    // Sort transactions
    qsort(t, n, sizeof(struct transaction), compare);

    // Check only nearby matching transactions
    for(int i = 1; i < n; i++)
    {
        if(strcmp(t[i].sender, t[i-1].sender) == 0 &&
           strcmp(t[i].receiver, t[i-1].receiver) == 0 &&
           t[i].amt == t[i-1].amt &&
           llabs(t[i].time - t[i-1].time) <= 60)
        {
            printf("%s %s %.2lf %lld\n",
                   t[i-1].sender,
                   t[i-1].receiver,
                   t[i-1].amt,
                   t[i-1].time);

            printf("%s %s %.2lf %lld\n",
                   t[i].sender,
                   t[i].receiver,
                   t[i].amt,
                   t[i].time);
        }
    }

    return 0;
}