#include <stdio.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    int a, max = 0;
    for(i = 1; i<=N; i++)
    {
        scanf("%d", &a);
        if(a > max)
        {
            max = a;
        }
    }
    printf("%d\n", max);
 
    return 0;
 
}