#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch ='d';
	switch(ch){
		default:
			printf("default\n");
			
		case 'A':
			printf("1\n");
			break;
		case 'B':
			printf("2\n");
			break;
		case 'D':
			printf("3\n");
			break;
		
	}
	
	return 0;
}