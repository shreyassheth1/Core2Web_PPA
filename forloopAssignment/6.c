#include<stdio.h>
void main() {

	for (int i = 65,j=97; i < 91; ++i,++j)
	{
		printf("%c=%c\n",i,j );
	}
}
// b is not integer constant hence illegal case