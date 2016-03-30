#include<iostream>
using namespace std;
class A
{
public:
	int x;

	A();
	A(int);
};
A::A()
{
	cout<<"Base Default Cons Called\n";
}
A::A(int i)
{
	cout<<"Base Para Cons Called\n";
	x = i;
}
class B:public A
{
	int x;
	public:
	B();
	B(int);
	void print();
};
B::B()
{
	cout<<"Derived Default Cons Called\n";
}
B::B(int i):A(i)
{
	cout<<"Derived Para Cons Called\n";
	x = i;
}
void B::print()
{
	cout<<x<<"\t"<<A::x<<endl;
}
int main()
{
B b;
B b1(2);
b1.print();
}

