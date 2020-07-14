#include <stdio.h>
int main(int argc, char const *argv[]){
	char n;
	scanf("%c",&n);
	if(n=='U'||n=='O'||n=='I'||n=='E'||n=='A'||n=='u'||n=='o'||n=='i'||n=='e'||n=='a'){
		printf("its an vowel %c\n",n);
	}else{
		printf("its an consonant %c\n",n);
	}
	return 0;
}