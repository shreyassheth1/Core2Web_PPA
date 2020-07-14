#include <stdio.h>
int main(int argc, char const *argv[])
{
bool val=false, var=true;
if(val);{
printf("true");
}
if(var){
printf("false");
}
	return 0;
}
//error as bool is unknown type for c language