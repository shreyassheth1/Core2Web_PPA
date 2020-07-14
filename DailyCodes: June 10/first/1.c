#include <stdio.h>
int  main(int argc, char const *argv[])
{
	int x =15;
	int ans =0;
	ans = x<<3;
	int ans1 = x<<4;
	int ans2 = ans <<2;
	printf("%d\n%d\n%d\n",ans,ans1,ans2);
	return 0;
}
