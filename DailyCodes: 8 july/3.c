#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ch ;
	int a,b ;
	printf("Enter 2 Number \n");
	scanf("%d %d",&a,&b);
	printf("Enter choice\n1.Add\n2.Sub\n3.Mul\n4.Div\n");
	scanf("%d",&ch);
	switch(ch) {
        case 1:
                printf("add = %d\n",a+b);
                break;
        case 2:
               printf("Sub = %d\n",a-b);
               break;
        case 3:
               printf("Mul = %d\n",a*b);
               break;
        case 4: 
        		printf("Div = %d\n",a/b);
        		break;
        default:
              printf("Default wrong choice\n");
              break;
	
	}
	return 0;
}