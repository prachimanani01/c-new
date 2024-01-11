#include<iostream>
#include<string.h>
using namespace std;

class Employe
{
    public:
        int id;
 	    char name[100];
 	    char role[100];
 		int age;
 		int salary;
 		int experience;
 		char city[100];
		char companyname[100];
};

int main()
{
    int i;
    Employe a[5];
    
    for(i=1;i<=5;i++)
    {
    	cout<<"Enter your id:";
    	cin>>a[i].id;
    	cout<<"Enter your name:";
    	cin>>a[i].name;
    	cout<<"Enter your role:";
    	cin>>a[i].role;
    	cout<<"Enter your age:";
    	cin>>a[i].age;
    	cout<<"Enter your salary:";
    	cin>>a[i].salary;
    	cout<<"Enter your experience:";
    	cin>>a[i].experience;
    	cout<<"Enter your city:";
    	cin>>a[i].city;
    	cout<<"Enter your companyname:";
    	cin>>a[i].companyname;
	}
    
    return 0;
}