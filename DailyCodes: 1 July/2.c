#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a =2;
	switch(a){
		printf("without case\n");
		case 1:
			printf("1\n");
		case 2:
			printf("2\n");
		case 3:
			printf("3\n");
	}
		printf("outside switch\n");

	
	
	return 0;
}