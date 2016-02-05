#include <iostream>
#include <string>
using namespace std;

void printline(char ch,int n = 5){
	for (int i = 0; i < n; ++i)
	{
	     cout<<ch;
	}

}

int main()
{
	char ch;
	int n;
	cout<<"Enter a character"<<endl;
	cin>>ch;
	cout<<"Enter a number"<<endl;
	cin>>n;
	printline(ch,n);
	cout<<endl;
	return 0;
}