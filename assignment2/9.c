#include <stdio.h>
int main(int argc, char const *argv[]){
	int number=10;
	if(number!=0 && number>0){
		printf("%d is a positive no",number);
		number=-5;	
	}
	if(number<0 ){
		printf("%d is a negtive no",number);
		number=0;
	}
	if(number==0){
		printf("number is zero");
		number=15;
	}
	if(number%4==0);{
		printf("%d is divisible by 4",number);
}
	return 0;
}
// as first 3 conditions are true they get printed and as due to semicolon at last if. it also gets printed