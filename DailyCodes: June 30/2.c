#include <stdio.h>
int main(int argc, char const *argv[])
{
	int marks=80,compMarks = 90;
	if(marks>70){
		printf("FC/Modern\n");
		if(compMarks>0){
			printf("FC\n");
		}else{
			printf("Modern\n");
		}
	}else{
		printf("Sportsman\n");
	}

	
	
	return 0;
}