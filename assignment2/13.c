#include <stdio.h>
int main(int argc, char const *argv[]){
	float n1, n2, n3;
	if(n1 >= n2 && n1 >= n3){
		printf("Largest number: %d",n1);
	}
	if(n2 >= n1 && n2 >= n3){
		printf("Largest number: %d",n2);
	}	
	if(n3 >= n1 && n3 >= n2) {
		printf("Largest number: %d",n3);
	}
	return 0;
}
///as they are undefined garbage value is taken