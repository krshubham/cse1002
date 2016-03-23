#include<iostream>
using namespace std;

class rect
{
	public:
	int length;
	int breadth;
	rect(int,int);
	void print();
	void area();
	rect dummy(rect);
};
rect rect::dummy(rect r1){
	cout<<"I am called"<<endl;
}
void rect::area(){
	cout<<length*breadth<<endl;	
}

rect::rect(int a, int b){
	length = a;
	breadth = b;
}

void rect::print()
{
	cout<<length<<endl;
	cout<<breadth<<endl;
}

int main()
{
	int l,b;
	cout<<"Enter the values of length and breadth"<<endl;
	cin>>l>>b;
	rect r1(l,b);
	r1.print();
	r1.area();
	r1.dummy(r1);
}
