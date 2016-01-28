#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int a[10];
	for (i = 0; i < 5; ++i)
	{
		scanf("%d",&a[i]); //scanf always requires the address of the variable 
	}
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n",*a+i);// Dereference the address so that printf gets the value 
	}
	return 0;
}				