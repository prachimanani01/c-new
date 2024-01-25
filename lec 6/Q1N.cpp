#include<iostream>

using namespace std;

class A
{
	int a,b;
	
	public :
		input()
		{
			cout<<"Enter input :- ";
			cin>>a;
		}
		
		A operator < (A z)
		{
			if(a<z.a)
			{
				cout<<"Object 2 is large :"<<z.a;		
			}
			else
			{
				cout<<"Object 1 is large :"<<a;
			}
		}
};

int main()
{
    A p;
    A q;
    A r;
    p.input();
    q.input();
    r=p<q;
}
