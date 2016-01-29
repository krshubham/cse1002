#include <stdio.h>
	

	struct example 
	{
		int a;
		int b[3];
	};
	struct example e;

void f(struct example e){
	e.a = 10;
	e.b[0] = 1;
	e.b[1] = 1;
	e.b[2] = 1;
}

int main()
{
	struct example e;
	e.a  = 10;
	printf("%d\n",e.a);
	return 0;
}
	

