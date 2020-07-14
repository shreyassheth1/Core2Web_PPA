#include <stdio.h>
int main(int argc, char const *argv[]){
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	if(a>=0||a<=5){
		switch(a){
			case 0:
				printf("zero\n");
				break;
			case 1:
				printf("one\n");
				break;
			case 2:
				printf("two\n");
				break;
				case 3:
				printf("three\n");
				break;
			case 4:
				printf("four\n");
				break;
			case 5:
				printf("five\n");
				break;
		}
	}else{
		printf("Number is greater than 5\n");
	}
}
