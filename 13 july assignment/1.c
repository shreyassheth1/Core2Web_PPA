#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    float cir;
    scanf("%d",&r);
    //printf("%d\n",r);
    cir = 3.14 * r;
    printf("circumferrence is %d\n",(float)cir );
    printf("area is %d\n",(float)r*cir );
}
