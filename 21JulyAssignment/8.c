#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i==j){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
		}
		printf("\n");
	}
	return 0;
}