#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for (int i = 1; i <= n/2+1; ++i)
	{
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("perfect number\n");
	}
	
	return 0;
}