#include <stdio.h>
#include<string.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n+1];
	memset(arr,0,sizeof(arr));
	for(int i=2;i<=n;i++){
		arr[i] = 1;
	}
	for(int i=2;i*i<=n;i++){
		if(arr[i]==1){
			for(int j=i*i;j<=n;j+=i){
				arr[j]=0;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(arr[i]==1){
			printf("%d ",i );
		}
	}
	return 0;
}