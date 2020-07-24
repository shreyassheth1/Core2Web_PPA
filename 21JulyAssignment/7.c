#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n!=0){
		int k =1;
		while(k!=11){
			printf("%d ",n*k);
			k++;
		}
		printf("\n");
		n--;
	}
	return 0;
}