#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum=0,num=0,rem=0;
    scanf("%d",&num);
    while(num!=0){
        rem = num%10;
        sum+=rem;
        num = num/10;
    }
    printf("%d\n",sum );
    return 0;
}
