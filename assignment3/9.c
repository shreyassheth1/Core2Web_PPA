#include <stdio.h>
int main(int argc, char const *argv[]){
	int a;
	printf("Enter month\n");
	scanf("%d",&a);
	switch(a){
			case 6:
				printf("June 30\n");
				break;
			case 7:
				printf("July 31\n");
				break;
			case 8:
				printf("August 31\n");
				break;
			case 9:
				printf("Sept 30\n");
				break;
			case 10:
				printf("Oct 31\n");
				break;
			case 11:
				printf("Nov 30\n");
				break;
			case 12:
				printf("Dec 31\n");
				break;
			case 1:
				printf("Jan 31\n");
				break;
			case 2:
				printf("Feb 28\n");
				break;
				case 3:
				printf("Mar 31\n");
				break;
			case 4:
				printf("April 30\n");
				break;
			case 5:
				printf("May 31\n");
				break;
			}
	return 0;
}
// as first 3 conditions are true they get printed and as due to semicolon at last if. it also gets printed