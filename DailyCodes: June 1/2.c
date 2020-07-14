#include <stdio.h>
int int main(int argc, char const *argv[])
{
	int a =10,b=6,c=7,ans=0;
	ans = ++a;
	printf("%d\n",a,ans );
	ans = a++;
	printf("%d\n",a,ans );
	ans = a--;
	printf("%d\n",a,ans );
	ans = --a;
	return 0;
}