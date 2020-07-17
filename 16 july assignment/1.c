#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int sum=0,mul=0;
	for (int i = 1; i <= n; ++i)
	{
		if(n%i==0){
			sum+=i;
		}else{
			mul+=i;
		}
	}
	printf("%d %d\n",sum,mul);
	return 0;
}