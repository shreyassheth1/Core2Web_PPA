#include<stdio.h>
void main(void) {
	int a,b ;
	printf("Enter 2 Number \n");
	scanf("%d %d",&a,&b);
	if(a>=0&&b>=0){
		int ans = a*b;
		if(ans%2==0){
			printf("even\n");
		}else{
			printf("odd\n");
		}
	}else{
		printf("negative\n");
	}
}