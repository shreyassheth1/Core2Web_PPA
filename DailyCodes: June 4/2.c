#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x=12,y=13,ans=0;
	printf("%d %d\n",x,y );
	ans = x>y;
	printf("%d\n"ans );
	ans = x<y;
	printf("%d\n"ans );
	ans = x>=y;
	printf("%d\n"ans );
	ans = x<=y;
	printf("%d\n"ans );
	ans = x!=y;
	printf("%d\n"ans );
	
	return 0;
}
