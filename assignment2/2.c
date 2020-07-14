#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=10,b=20;
if((a && b++) && (a++ || ++b)){
printf("a : %d\n",a);
printf("b : %d\n",b);
}
printf("out of if");
	return 0;
}
/* as both condition of if are true hence 
a : 11
b: 21
