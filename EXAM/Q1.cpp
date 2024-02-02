// Write a C++ program to print factorial series using recursion.
#include<iostream>

using namespace std;

class Fect
{
	public:
		int a,b,i,j;
		int mul=1;
		
		void set()
		{
			cout<<"Enter number :- ";
			cin>>a;
		}
		void get()
		{
			for(i=1;i<=a;i++)
			{
				for(i=1;i<=a;i++)
				{
					mul=mul*i;
					cout<<"Factorial of "<<j<<"is :- "<<mul<<endl;
				}
			a--;
			}
		}
};

int main()
{
	Fect f1;
	f1.set();
	cout<<"Factorial series :- "<<endl;
	f1.get();
	
	return 0;
}
