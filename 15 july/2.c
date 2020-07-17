#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    scanf("%d %d",&i,&n);
    int sum=0;
    for (i = 1; i <= n; ++i)
    {
        sum+=i;
    }
    printf("%d\n",sum );
    return 0;
}
