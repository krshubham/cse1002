#include<iostream>
using namespace std;
class person
{
	protected:
	char name[20];
	int age;
	char dob[20];
	public:
	void getp();
	void printp();
};
void person::getp()
{
	cout<<"Person"<<endl;
	cin>>name>>age>>dob;
}
void person::printp()
{
	cout<<"Person"<<endl;
	cout<<name<<endl<<age<<endl<<dob<<endl;
}
class employee:virtual public person
{
	int empid;
	double salary;
	char dept[10];
	public:
	void gete();
	void printe();
};
void employee::gete()
{
	cout<<"Employee"<<endl;
	getp();
	//person::get();
//	cin>>name>>age>>dob;
	cin>>empid>>salary>>dept;
}
void employee::printe()
{
	cout<<"Employee"<<endl;
	printp();
	//person::print();
	//cout<<name<<endl<<age<<endl<<dob<<endl;
	cout<<empid<<endl<<salary<<endl<<dept<<endl;
}
class student:virtual public person{
  int roll;
  int marks;
  public:
  void get();
  void print();  
};
void student::get(){
    int r,m;
    cin>>r>>m;
    roll = r;
    marks = m;
}
void student::print(){
    cout<<roll<<endl<<marks<<endl;
}
class pte: public employee, public student{
    public:
        void get();
        void print();  
};
void pte::get(){
    getp();
    gete();
    get();
}
void pte::print(){
    printp();
    printe();
    print();
}
int main()
{
	//person p;
	//employee e;
	//p.getp();
	//e.gete();
	//e.getp();
	//p.printp();
	//e.printe();
    student s;
    s.getp();
    s.printp();
    s.get();
    s.print();
    return 0;
}




































