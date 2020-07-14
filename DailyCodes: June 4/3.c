#include <stdio.h>
int  main(int argc, char const *argv[])
{
	int a =5,b=6,c=7,ans=0;
	ans = ++a  && b++;
	printf("%d %d %d %d\n",a,b,c,ans );
	ans = ++a  || b++;
	printf("%d %d %d %d\n",a,b,c,ans );
	
	
	return 0;
}
