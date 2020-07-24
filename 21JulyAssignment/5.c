#include <stdio.h>
int main(int argc, char const *argv[])
{

	int k = 0;
	for (int i = 4; i > 0; --i)
	{	
		char a ='a';
		for(int space =0;space<=i-k;space++){
			printf(" ");
		}
		for(int j =i-k ;j<=i;j++){
			printf("%c ",a);
			a++;
		}
		k++;
		printf("\n");
	}
	return 0;
}