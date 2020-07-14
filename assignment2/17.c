#include <stdio.h>
int main(int argc, char const *argv[]){
	int n1, n2, n3,largest;

	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1 >= n2 && n1 >= n3){
		largest = n1;	
	}
	if(n2 >= n1 && n2 >= n3){
		largest = n2;
	}	
	if(n3 >= n1 && n3 >= n2) {
		largest = n3;
	}
	if (largest%2==0)
	{
		printf("its an even number\n");
	}
	else{
		printf("its an odd number\n");
	}
	printf("Largest number: %d\n",largest);
	return 0;
}
