#include<iostream>
#include<string.h>

using namespace std;

class Employ
{
	public :
			int id;
			char name[100];
			int age;
			private :
			int salary;
			char city[100];
};

int main()
{

    int i;
    	Employ s1;
    	
    	cout<<"Enter Id :- ";
    	cin>>s1.id;
    	
    	cout<<"Enter Name :- ";
    	cin>>s1.name;
    	
    	cout<<"Enter Age :-  ";
    	cin>>s1.age;
    
    		
    	cout<<"Id :- "<<s1.id <<endl;
    	cout<<"Name :- "<<s1.name <<endl;
    	cout<<"Age :- "<<s1.age <<endl;
    
    
    		
	return 0;
}