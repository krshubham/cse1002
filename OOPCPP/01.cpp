#include<iostream>
using namespace std;
class rect{
 	int length;
 	int breadth;
 	public:
 		void get();
 		int area();
 		int perimeter; 		
 };
 void rect::get(){
 	cout<<"Enter the length"<<endl;
 	cin>>length;
 	cout<<"Enter the breadth"<<endl;
 	cin>>breadth;
 }
 int rect::area(){
 	return length*breadth;
 }
 int main(){
 	rect r1;
 	r1.get();
	cout<<"Hello"<<endl;
	r1.area();
	int a  = r1.area();
	cout<<a<<endl;
	return 0; 
}
