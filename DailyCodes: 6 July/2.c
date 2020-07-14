#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b ;
	printf("Enter Number\n");
	scanf("%d %d",&a ,&b);
	printf("a = %d\n",a );
	printf("b = %d\n",b );
	//add
	printf("Ans = %d\n",a+b);
	//sub
	printf("Ans = %d\n",a-b);
	//mul
	printf("Ans = %d\n",a*b);
	//div
	printf("Ans = %d\n",a/b);
	return 0;
}