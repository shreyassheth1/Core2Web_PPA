#include <stdio.h>
int main(int argc, char const *argv[])
{   int i=1;
    while(i<=100){
        if(i%8==0)
            printf("%d is divisible by 8\n",i);
        i++;
    }
    return 0;
}
