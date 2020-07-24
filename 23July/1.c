#include <stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=1;i<=4;i++){
        for(int space=3;space>=i;space--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
