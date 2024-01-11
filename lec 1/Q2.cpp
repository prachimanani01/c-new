#include<iostream>
#include<string.h>
using namespace std;

class Car{
    public:
        int id;
		char companyname[100];
		char color[100];
		char model[100];
		int release_year;
};

int main(){
    int i;
   	Car a[4];
    
    for(i=1;i<=4;i++)
	{
    	cout<<"Enter your id:";
    	cin>>a[i].id;
    	cout<<"Enter car companyname:";
    	cin>>a[i].companyname;
    	cout<<"Enter car color:";
    	cin>>a[i].color;
    	cout<<"Enter car model:";
    	cin>>a[i].model;
    	cout<<"Enter car release_year:";
    	cin>>a[i].release_year;

	}
    
    return 0;
}