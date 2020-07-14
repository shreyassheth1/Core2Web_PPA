#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b ;
	printf("Enter 2 Number \n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d: is bigger\n",a );
	}
	printf("out of if\n");
	
	return 0;
}