#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x =10,y=5,z=0;
	if (x&&y)
	{
		printf("apple\n");
	}
	if (y&&z)
	{
		printf("google\n");
	}
	if (x||y)
	{
		printf("amazon\n");
	}
	
	return 0;
}