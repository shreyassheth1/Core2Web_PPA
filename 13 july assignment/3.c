#include <stdio.h>
int main(int argc, char const *argv[])
{
    char hrs;

    scanf("%c",&hrs);
    if((hrs>='a'&&hrs<='z')||hrs>='A'&&hrs<='Z')
        if(hrs=='A'||hrs=='E'||hrs=='I'||hrs=='O'||hrs=='U'||hrs=='a'||hrs=='e'||hrs=='i'||hrs=='o'||hrs=='u')
            printf("%c is vowel\n",hrs );
        else{
            printf("consonant\n");
        }
    else{
        printf("not an alphabet\n");
    }
}
