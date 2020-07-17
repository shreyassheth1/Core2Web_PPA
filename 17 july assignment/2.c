#include <stdio.h>
int main(int argc, char const *argv[])
{
	char ch,ch1;
	scanf("%c %c",&ch,&ch1);
	for(char i=ch;i<=ch1;i++){
		if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
			printf("%c is vowel\n", i);
		}else{
			printf("%c is consonant\n", i);
		}
	}


}