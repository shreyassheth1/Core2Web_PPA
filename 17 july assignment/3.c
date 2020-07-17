#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	if(n%2==0){
		for (int i = n; i >= 1; --i)
		{
			printf("%d ",i);
		}
	}else{
		for (int i = n; i >= 1; i=i-2)
		{
			printf("%d ",i );
		}
	}


}