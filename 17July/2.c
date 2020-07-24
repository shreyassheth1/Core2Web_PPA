#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x =7;
    printf("goto statement\n");
    goodmorning:
        printf("goodmorning\n");
        printf("have a nice day\n");
        x--;
    if(x>5){
        goto goodmorning;
    }
    return 0;
}
