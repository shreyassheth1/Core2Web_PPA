#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n =0;
	scanf("%d",&n);
	int i =0;
	int k =1;
	int spaces = n -1;
	 while(i < n)
	{
		int z =0;
		while(z<spaces){
				printf(" ");
				z++;
			}	
		int  j =0;
		while(j <= i)
		{	
			j++;
			printf("%d ",k );
			k++;
		}
		printf("\n");
		spaces --;
		i++;
	}
	return 0;
}