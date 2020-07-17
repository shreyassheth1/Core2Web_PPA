#include <stdio.h>
int main(int argc, char const *argv[])
{
    //int i,n;
    //scanf("%d %d",&i,&n);
    //int sum=0;
    int i=0;
    while(i<=20){
        scanf("%d",&n);
        if(i%5==0&&i%10==0){
            break;
        }else{
            printf("not divisible by 4 and 11\n");
        }

    }

    printf("out of while\n");
    return 0;
}
