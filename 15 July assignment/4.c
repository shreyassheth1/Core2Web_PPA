#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i = 2; i <=(n/2)+1 ; ++i)
    {
        if(n%i==0){
            count++;
        }
    }
    // /printf("here\n");
    if(count){
        printf("not a prime number\n");
    }else{
        printf("prime number\n");
    }
    return 0;
}
