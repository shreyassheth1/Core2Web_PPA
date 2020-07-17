#include <stdio.h>
int main(int argc, char const *argv[])
{
    //int i,n;
    scanf("%d %d",&i,&n);
    int sum=0;
    int i=0;
    while(i<=1000){
        if(i%5==0){
            sum = sum + i;
        }
        i++;
    }

    printf("%d\n",sum );
    return 0;
}
