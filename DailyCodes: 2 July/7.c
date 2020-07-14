#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	char ch ='>';
	switch(ch){
		
		case '<':
			{
				int a=5;
				int b=0;
				switch(a&&b){
					case 0:
						printf("false\n");
						break;
					case 1:
						printf("true\n");
						break;
				}
			}
			break;
		case '>':
			{
				int p=5;
				int q=0;
				switch(p || q){
					case 0:
						printf("false\n");
						break;
					case 1:
						printf("true\n");
						break;
				}
			}
			break;
		default:
			printf("default");
			break;
	}
	
	return 0;
}