#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int count= 0;
	while(n!=0){
		n = n/10;
		count++;
	}
	printf("%d\n",count);
	return 0;
}