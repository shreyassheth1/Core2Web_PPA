#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n =4;
    for(int i=n;i>=1;i--){
        int j = i-1;
        int ch =1;
        for(int k=i-1;k>=1;k--){
            printf("  ");

        }
        for(j;j<n;j++){
            printf("%d ",ch);
            ch++;
        }
        printf("\n");
    }
}
