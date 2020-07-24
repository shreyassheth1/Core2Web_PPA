#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("A\n");
    int k=0;
    for(int i=1;i<=4;i++){
        for(k=4-1;k>=i;k--){
            printf(" ");
        }
        char ch ='A';
        ch+=i;
        for (int j = 0; j <=i; j++,ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
