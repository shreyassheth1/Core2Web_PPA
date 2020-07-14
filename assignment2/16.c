#include <stdio.h>
int main(int argc, char const *argv[]){
	char n;
	scanf("%c",&n);
	if(n>='A'&&n<='Z')
		printf("uppercase\n");
	else if(n>='a'&&n<='z')
		printf("lowercase\n");
	else
		printf("special char\n");
	return 0;
}