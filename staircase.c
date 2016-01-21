#include <stdio.h>
int main()
{
	int n;
	int i,j;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (i = 1; i <=n; i++)
	{
		printf("#");
		for(j=1;j<i;j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}