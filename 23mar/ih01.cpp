#include<iostream>
using namespace std;
//problem no1 on inheritance done in class
class prob{
protected:
int pnum;
int deadline;
int bonus;
public:
void getprob();	
};
class pset{
	prob arr[3];
	for(i=0	;i<3;i++){
		arr[i].getprob();
	}
};
class student:public pset{
	int roll;
	string name;
	void getstudent();
};
void prob::getprob(){
	int num,dl,b;
	cout<<"Enter num, dl and bonus"<<endl;
	cin>>num>>dl>>bonus;
	pnum = num;
	deadline = dl;
	bonus = b;
}
void student::getstudent(){
	string n;int r;
	pset ques[2];
	for(i=0;i<n;i++){
		ques[i].getprob();
	}
	cout<<"Enter roll and name"<<endl;
	cin>>r>>n;
	name = n;
	roll = r;

}

int main()
	int n;
	cin>>n;	
	student s1;
	s1.getstudent();
	return 0;
}
