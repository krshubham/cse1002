#include <iostream>
using namespace std;
//default constructors

class one
{
	int o;
	public:
	one();
	one(int);
	//void initialize();
	void print();
};
one::one()
{
	o=5;
}
one::one(int o1):o(o1)//professional way of writing.
{
//o=o1;
}
void one::print()
{
cout<<o<<endl;
}

int main()
{
	one o1;
	//o1.initialize();
	o1.print();
	return 0;
}
