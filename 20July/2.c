#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	for (int i = num; i >=1 ; --i)
	{
		for (int j = i; j >=1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}