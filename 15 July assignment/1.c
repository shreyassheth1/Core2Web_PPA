#include <stdio.h>
int main(int argc, char const *argv[])
{
    double first,second;
    scanf("%lf %lf",&first,&second);
    printf("two numbers are %0.2f %0.2f \n",first,second);
    printf("addition is %0.2f\n",first+second);
    printf("subtraction is %0.2f\n",first-second);
    printf("division is %0.2f\n",first/second);
    printf("multiplication  is %0.2f\n",first*second);
    return 0;
}
