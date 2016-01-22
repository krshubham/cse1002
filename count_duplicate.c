//huffman coding problem
/*Question:
Develop an algorithm to find the frequency of each character in C.
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str[30];
	int i;
    printf("Enter string: ");
    gets(str);     //Read string from user.
    printf("str: ");
    puts(str);
    for (i = 0; i < 30; i++)
    {
    	printf("%c ",str[i] );
    }
    printf("\n");
    return 0;
}