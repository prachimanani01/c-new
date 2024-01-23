#include<iostream>

using  namespace std;

class A{
		
	public :
		int a;
		void input()
		{
			cout <<"Enter A :- ";
			cin>>a;
			
		}
};
class B : public A{
	
	public :
		int b;
		void getData()
		{
			cout<<"Enter B :- ";
			cin>>b;
		}
};
class C : public A{
	
	public :
		int c;
		void getD()
		
		{
			cout<<"Enter C :- ";
			cin>>c;
		}
};
class D : public B,public C {
	
	public :
		int d;
		void setter()
		{
			cout<<"Enter D :- ";
			cin>>d;
			cout<<"The sum of the all elements : "<<B::a+b+c+d;
		}
};

int main()
{
	D d4;
	d4.B::input();
	d4.getData();
	d4.getD();
	d4.setter();
	
}

