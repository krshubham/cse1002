#include<iostream>
using namespace std;
int f(int a, int b);
//float f(int a, int b);
float f(float a, float b);
int main()
{
	try{
//		throw 0;
//		f(5,0);
		f(5.0f,0.0f);		
	}catch(int exp)
	 {
		cout<<"Caught int";
         }
	 catch(float exp)
		{
		cout<<"Caught float";
		}
	return 0;
}

int f(int a, int b)
{
	if(b==0)
		throw 0;
	int c;
	c = a/b;
	return c;
}

float f(float a, float b)
{
	if(b==0)
		throw 0.0f;
	float c;
	c = a/b;
	return c;
}
//  ... are known as ellipses.
