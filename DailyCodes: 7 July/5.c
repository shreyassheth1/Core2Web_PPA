#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	float f;
	char ch,c ;
	printf("Enter char\n");
	scanf("%c",&ch);
	
	printf("Enter int\n");
	scanf("%d",&n);
	
	printf("Enter float\n");
	scanf("%f",&f);
	
	printf("Enter char\n");
	scanf("%c",&c);
	
	printf("%c\n",ch );
	printf("%d\n",n );
	printf("%f\n",f );
	printf("%c\n",c );
	
	return 0;
}