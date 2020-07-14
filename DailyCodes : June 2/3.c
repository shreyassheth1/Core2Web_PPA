#include <stdio.h>
void main(int argc, char const *argv[])
{
	int a =5,b=6,ans =0;
	ans = a++ + a++ + a++;
	printf("%d %d\n",a,ans );

	return 0;
}