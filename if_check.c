#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*if ((a=-1)&&(b=1))
	{
		printf("Hi\n");
	}
	printf("a is %d and b is %d\n",a,b );
	*/
	int big,a,b,c;
	big = (a>b?(a>c?3:4):(b>c?6:8));
	printf("%d\n",big );
	return 0;
}