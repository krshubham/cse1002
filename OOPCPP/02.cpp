#include<iostream>
using namespace std;
 class complex{
 	int real;
 	int img;
 	public:
 		static int count;
 		void get();
 		void print() const;
 		complex add (complex &);
 		static void print_s();
 };
 /*void complex::print_s(){
 	cout<<real<<endl;
 }
 */
 
 int complex::count = 0;
 void complex::get(){
 	cout<<"Enter the real part"<<endl;
 	cin>>real;
 	cout<<"Enter the imaginary part"<<endl;
 	cin>>img;
 	count++;
 }
 void complex::print() const{
 	real = 5;
 	cout<<"Real part: "<<real<<endl;
 	cout<<"Imaginary part: "<<img<<endl;
 }
 complex complex::add(complex& c1){
 	complex c3;
 	c3.real = real + c1.real;
 	c3.img = img + c1.img;
 	return c3;
 }
 int main(){
 complex c1;
complex c4;
 complex c2;
 complex c3;
	c1.get();
	c2.get();
	c3 = c2.add(c1);
	c3.print();
	cout<<complex::count<<endl;
 }
