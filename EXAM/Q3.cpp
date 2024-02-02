//Give an example which shows Exception handling of division by zero exception.
#include<iostream>
using namespace std;

int main()
{
	int a;
	int b,c;
	
	cout<<"enter A :- ";
	cin>>a;
	cout<<"enetr B :- ";
	cin>>b;
	
	try{
		if(b==0)
		{
			throw 1;
		}
		else
		{
			c=a/b;
			cout<<"ans :"<<c<<endl;	
		}
	}catch(int n){
		cout<<"EXITED...";
	}
	return 0;
}
