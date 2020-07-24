#include <stdio.h>
int main(){
    int i,j,k;

    for(int i=0;i<=4;i++){
        int n =5;
        for(j=4;j>i;j--){
            printf("  ");
            n--;
        }
        for(k=0;k<=i;k++){
            printf("%d ",n);
            n--;
        }
        printf("\n");
    }
}
