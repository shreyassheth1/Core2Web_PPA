#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,n1;
	scanf("%d %d",&n,&n1);
	for (int i = n; i <= n1; ++i)
	{
		if(i%2==0)
			printf("%d\n",i*i);
		else
			printf("%d\n",i*i*i );
	}
}