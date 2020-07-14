#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch ='+';
	int x=10,y=5;
	switch(ch){
		
		case '+':
			printf("%d\n",x+y);
			break;
		case '-':
			printf("%d\n",x-y);
			break;
		case '/':
			printf("%d\n",x/y);
			break;
		case '*':
			printf("%d\n",x*y);
			break;
		default:
			printf("default");
			break;
	}
	
	return 0;
}