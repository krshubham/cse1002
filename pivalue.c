#include <stdio.h>
int main()
{
	int i=1;
	float p=5,q=3;
	float sum1=0,sum2=0;
	float finalsum;
	long int n;
	printf("Enter the value of n: ");
	scanf("%ld",&n);
	for(i;i<=n;i++){
		sum1 = sum1 + 1/p;
		p = p+4;
		sum2 = sum2 + 1/q;
		q += 4;
	}
	finalsum = 4 * (1 + (sum1 - sum2));
	printf("The final value till %ld terms is: %f\n",n,finalsum );
	return 0;
}