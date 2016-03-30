#include<iostream>
using namespace std;
class A
{
	int x_Pri;
protected:
	int x_Pro;

	public:
	int x_Pub;
	A();
	A(int,int,int);
};
A::A()
{
	cout<<"Default cons of A called\n";
	x_Pri = 0;
	x_Pro = 0;
	x_Pub = 0;
}
A::A(int x, int y, int z)
{
	cout<<"Para cons of A called\n";
	x_Pri = x;
	x_Pro = y;
	x_Pub = z;
}
class B:public A
{
public:
B(int,int,int);
void print();
};
B::B(int x,int y, int z):A(x,y,z)
{
	cout<<"Para cons of B called\n";
}
void B::print()
{
//	cout<<x_Pri;
	cout<<x_Pro;
	cout<<x_Pub;
}
class person{
     
};
class student{
  public:
    void get_s();
    void print_s();  
};

int main()
{
	A a(2,3,4);
	cout<<a.x_Pub<<endl;
//	cout<<a.x_Pri;
//	cout<<a.x_Pro;
	B b(3,4,5);
	cout<<b.x_Pub<<endl;
}

