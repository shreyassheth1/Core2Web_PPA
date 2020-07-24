#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x =10;
    int i =1;
    fordemo:
        printf("printing\n");
    for (; i < x;)
       {
           i++;
           goto fordemo;
       }
    return 0;
}
