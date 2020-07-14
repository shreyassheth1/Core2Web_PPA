#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int x=10;
	switch(x){
		
		case 5+5:
			printf("%d\n",x+y);
			break;
		case 6+4:
			printf("%d\n",x-y);
			break;
		case 7+3:
			printf("%d\n",x/y);
			break;
		case 8+2:
			printf("%d\n",x*y);
			break;
		default:
			printf("default");
			break;
	}
	
	return 0;
}