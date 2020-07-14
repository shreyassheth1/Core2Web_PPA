#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c ;
	printf("Enter 3 Number \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("%d: is bigger\n",a);
		}
		else{
			printf("%d: is bigger\n",c);
		}
	}else{
		if(b>c){
			printf("%d: is bigger\n",b);
		}else{
			printf("%d: is bigger\n",c);
		}
	}
	printf("out of if\n");
	
	return 0;
}