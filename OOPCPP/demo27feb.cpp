#include <iostream>
using namespace std;
class A
{
public:
	static int count;
	int v1;
	
};
int main(int argc, char const *argv[])
{
	A a1;
	a1.v1 = 5;
	a1.count = 0;
	cout<<a1.v1;
	return 0;
}