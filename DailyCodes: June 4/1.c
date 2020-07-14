#include <stdio.h>
int  main(int argc, char const *argv[])
{
	int x =8,ans=0;
	ans = ++x + x++;
	printf("%d %d\n",x,ans );
	return 0;
}
