#include <stdio.h>
int fact(int n){
	int sum =1;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n =0;
	scanf("%d",&n);
	int m =n;
	int sum = 0;
	while(n!=0){
		int temp = n%10;
		sum += fact(temp);
		n = n/10;
	}
	if(sum==m)
		printf("%d is a strong number\n",sum);
	return 0;
}