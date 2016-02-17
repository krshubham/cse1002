#include <stdio.h>
#include <string.h>
/*struct ipdata ip
{
	int ipaddress;
	char name[50];
};




int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		
	}
	return 0;
}*/
int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your Name is: %s\n",name);
    printf("%d\n",strlen(name));
    return 0;
}