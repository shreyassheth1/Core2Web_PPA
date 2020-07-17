#include <stdio.h>
int main(int argc, char const *argv[])
{
    char first;
    scanf("%c",&first);
   if(first>='A'&&first<='Z'){
    printf("upper case\n");
   }else if(first>='a'&&first<='z'){
    printf("lower case\n");
   }


     return 0;
}
