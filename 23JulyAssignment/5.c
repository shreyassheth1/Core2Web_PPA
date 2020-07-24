#include <stdio.h>
int main(){
    int i,j,k;

    for(int i=0;i<=4;i++){
        char n ='A';
        for(j=4;j>i;j--){
            printf("  ");
            n++;
        }
        for(k=0;k<=i;k++){
            printf("%c ",n);
            n++;
        }
        printf("\n");
    }
}
