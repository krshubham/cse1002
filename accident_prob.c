#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n,i;
	float a=0;
	float total=0;
	float average;
	printf("Enter the number of days you want to record: ");
	scanf("%d",&n);
	int accarray[n];
	for(i=0; i<n;i++){
		printf("Enter the number of accident(s) on day %d: ",i+1);
		scanf("%d",&accarray[i]);
	}
	for(i=0;i<n;i++){
		total+=accarray[i];
	}
	average = total/n;
	printf("The average is: %f\n",average);
	for(i=0;i<n;i++){
		a = fabsf(average - accarray[i]);
		printf("The difference on day %d is: %f\n",i+1,a);
		a=0;
	}
	return 0;
}
