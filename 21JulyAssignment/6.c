#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n =5;
	while(n!=0){
		int k =5;
		int b =0;
		while(k!=0){

			if(n==5||n==1){
				if(b==0){
					printf(" ");
					b++;
				}
				printf("* ");
			}else{
				if(k==1||k==5){
					printf("* ");
				}
				printf("  ");
			}
			 k--;
		}
		printf("\n");
		n--;
	}
	return 0;
}