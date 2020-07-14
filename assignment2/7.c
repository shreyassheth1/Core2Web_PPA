
#include <stdio.h>
int main(int argc, char const *argv[]){
	int weight=50;
	if(weight<50 && weight >30){
		printf("You are under weight");	
	}
	if(weight>=50 && weight <= 70){
		printf("you are well maintained");
	}
	if(weight > 70);{
		printf("you are overweight you have to work hard");
	}
	return 0;
}
// as weigt is equal to 50 "you are well maintained" is printed and due to semicolon after 3rd condition last printf is printed