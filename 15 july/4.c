#include <stdio.h>
int main(int argc, char const *argv[])
{
    //int i,n;
    // scanf("%d %d",&i,&n);
    // int sum=0;
    // int i-0;
    int n;
    for (i = 1; i <= 10; ++i)
    {
        scanf("%d ",&n);
        if(n%2==0){
            printf("%d is even\n",n );
        }else{
            break;
        }
    }

    printf("out of loop\n" );
    return 0;
}
