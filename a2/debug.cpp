#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
class vector
{
    float ax,ay,az;
    public:
    void get();
    void print()const;
    float magnitude();
    float dot_Product(vector&);
    vector cross_Product(vector&);
};
void vector::get(){
cin>>ax;
cin>>ay;
cin>>az;
}
void vector::print() const
{
	cout<<ax<<endl;
	cout<<ay<<endl;
	cout<<az<<endl;
}
float vector::magnitude(){
 float a;
	a = sqrt(ax*ax + ay*ay + az*az);
}
float vector::dot_Product(vector& v2)
{
	float v3;
	v3 = ax*v2.ax + ay*v2.ay + az*v2.az;
	return v3;
}
vector vector::cross_Product(vector& v2)
{
vector v3;
v3.ax = ay*v2.az- az*v2.ay;
v3.ay = az*v2.ax - ax*v2.az;
v3.az = ax*v2.ay - ay*v2.ax;
return v3;
}
int main()
{
    vector v1,v2,v3;
    float dot,cross,mag;
    v1.get();
    v2.get();
    cout<<fixed<<setprecision(2)<<v1.magnitude()<<endl;
    cout<<fixed<<setprecision(2)<<v2.magnitude()<<endl;
    cout<<fixed<<setprecision(2)<<v1.dot_Product(v2)<<endl;
    v3 = v1.cross_Product(v2);
    v3.print();
}