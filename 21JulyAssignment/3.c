#include <stdio.h>
int main(int argc, char const *argv[])
{
	int m =1;
	int i =5;
	while(i>0){
		int j = i;
		while(j>0){
			printf("%d ",(m*j));
			j--;
		}
		m++;
		i--;
		printf("\n");
	}
	return 0;
}