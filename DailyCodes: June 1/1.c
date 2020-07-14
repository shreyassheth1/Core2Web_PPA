#include <stdio.h>
int int main(int argc, char const *argv[])
{
	int a =5,b=6,c=7,ans=0;
	ans = a+b-c;
	printf("%d\n",ans );
	ans = a *b/c;
	printf("%d\n",ans );
	ans = a+b/c - a*b;
	printf("%d\n",ans );
	return 0;
}