#include <stdio.h>
int main(int argc, char const *argv[])
{
	char a = 'A';
	int k =1;
	for(int i=5;i>0;i--){
		for(int j=1;j<=i;j++){
			if(j%2==0)
				printf("%d ",k);
			else
				printf("%c ",a);
			a++;
			k++;
		}
		printf("\n");
	}
	return 0;
}