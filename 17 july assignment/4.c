#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int n;
	scanf("%d",&n);
	for (int i = n; i >= 1; --i)
	{
		printf("%d days remaining\n",i );
	}
	printf("0 days assignment is over due\n");
}