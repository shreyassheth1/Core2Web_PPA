#include <stdio.h>
int main(int argc, char const *argv[])
{
	int k =1;
	int i =0;
	while(i<5){
		int j =0;
		while(j<=i){
			printf("%d ",(k+j));
			j++;
		}
		printf("\n");
		k+=i;
		i++;
	}
	return 0;
}