#include <stdio.h>
int main(int argc, char const *argv[]){
	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);
	if (number1 >= number2) {
		if (number1 == number2) {
			printf(" %d = %d",number1,number2);
		}
		else {
			printf(" %d > %d", number1, number2);
		}
	}
	else {
		printf(" %d < %d",number1, number2);
	}
	return 0;
}