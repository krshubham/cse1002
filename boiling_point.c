#include <stdio.h>
int main(int argc, char const *argv[])
{
	float bp;

	printf("Enter the boiling point\n");
	scanf("%f",&bp);
	bplower=bp*.95;
	bpupper = bp*1.05;
	material(bplower,bpupper);
	return 0;
}
int material(float bpl, float bpu){
	
	if (bpu<=105 bpl>=95)
	{
		printf("The substance is water\n");
	}
	else if (bp)
	{
		/* code */
	}

}