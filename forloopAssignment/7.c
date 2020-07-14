
#include <stdio.h>
int main(int argc, char const *argv[]){
	int a,b;
	printf("Enter Number and limit \n");
	scanf("%d%d",&a,&b);
	for (int i = 1; i <= b/a; ++i)
	{
		printf("%d\n",i*a);
	}

	return 0;
}
