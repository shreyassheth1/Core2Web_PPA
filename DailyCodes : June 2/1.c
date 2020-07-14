#include <stdio.h>
void main(int argc, char const *argv[])
{
	int a =5,b=6,ans =0;
	ans = ++a + ++a;
	printf("%d %d\n",a,ans );
	ans =0;
	ans = ++b + ++b + ++b;
	printf("%d %d\n",b,ans );
	return 0;
}