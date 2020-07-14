
#include <stdio.h>
int main(int argc, char const *argv[]){
	int a,b,c,d,e ;
	printf("Enter marks of 5 subject \n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int total=0;
	if(a>=35&&b>=35&&c>=35&&d>=35&&e>=35){
		total = (a+b+c+d+e)/50;
	}
	else{
		printf("Fail\n");
		total =0;
	}
	switch(total){
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 5:
			printf("E\n");
			break;
		case 4:
			printf("F\n");
			break;	
	}

	return 0;
}
// as weigt is equal to 50 "you are well maintained" is printed and due to semicolon after 3rd condition last printf is printed