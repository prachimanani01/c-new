#include<iostream>

using namespace std ;

class A{
	
	string s1="Hello C++ language." ;
	
	public :
		
		A()
		{
			cout<<s1<<endl ;			
		}
		
		A(string s2)
		{
			cout<<s1;
			cout<<s2;
		}
};

main()
{
	string s;
	
	cout<<"Enter String :- "<<s; 
	cin>>s;
	
	A m ;
	A m2(s);
}
