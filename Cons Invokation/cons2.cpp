#include<iostream>
using namespace std;
class A1
{
	int x;
	public:
	A1();
	A1(int);
};
A1::A1()
{
	cout<<"A1 Default Cons Called\n";
}
A1::A1(int i)
{
	cout<<"A1 Para Cons Called\n";
	x = i;
}
class A2
{
	int x;
	public:
	A2();
	A2(int);
};
A2::A2()
{
	cout<<"A2 Default Cons Called\n";
}
A2::A2(int i)
{
	cout<<"A2 Para Cons Called\n";
	x = i;
}
class B:public A1, public A2
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
B::B(int i)//:A2(i),A1(i)
{
	cout<<"Derived Para Cons Called\n";
	x = i;
}
void B::print()
{
	cout<<x<<endl;
}
int main()
{
B b;
B b1(2);
b1.print();
}

