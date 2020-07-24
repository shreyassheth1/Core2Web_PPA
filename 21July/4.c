#include <stdio.h>
int main(int argc, char const *argv[])
{
	char a = 'A';
	for(int i=5;i>0;i--){
		for(int j=0;j<i;j++){
			if(i==5||j==0)
				printf("* ");
			else
				printf("= ");
		}
		printf("\n");
	}
	return 0;
}