#include<stdio.h>
void main(void) {
	int a;
	printf("Enter Number \n");
	scanf("%d",&a);
	for (int i = 1; i < 11; ++i)
	{
		printf("%d ",i*a);
	}
}