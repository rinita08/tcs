#include<stdio.h>
#include<math.h>
int main()
{
    double happy;
    scanf("%lf",&happy);
    double sad=0;
    double newhappy=0;
    double newsad=0;
    for(int i=0;i<4;i++)
    {
        newhappy=0.30 * happy + 0.50 * sad;
        newsad   = 0.70 * happy + 0.50 * sad;

        // Update
        happy = newhappy;
        sad = newsad;
    }
    printf("%d",(int)round(newhappy));
    printf(" %d",(int)round(newsad));
    return 0;
}