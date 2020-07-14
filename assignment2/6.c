
#include <stdio.h>
int main(int argc, char const *argv[]){
	int subVal=15;
	if(subVal++ && subVal--){
		printf("SubVal : %d\n",subVal);
	}
	if(subVal-- || ++subVal){
		printf("SubVal : %d\n",subVal);
	}
	if(subVal > subVal);{
		printf("SubVal : %d\n",subVal);
	}
	return 0;
}
