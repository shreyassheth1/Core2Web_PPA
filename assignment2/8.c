#include <stdio.h>
int main(int argc, char const *argv[]){
	int year=2020;
	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year",year);
	}
	return 0;
}
//as first two condition in if are true it gets executed