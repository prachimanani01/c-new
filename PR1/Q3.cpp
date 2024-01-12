#include<iostream>

using namespace std;

class Time
{
	public :
    	int sec;
    	int s;
    	int min;
    	int hour;
	
};

int main()
{
	Time t;
	
	cout<<"enter time in seconds :-";
	cin>>t.sec;
	t.hour=t.sec/3600;
	t.sec=t.sec%3600;
	t.min=t.sec/60;
	t.s=t.sec%60;
	cout<<"HH-MM-SS="<< t.hour<<" : "<<t.min<<" : "<<t.sec;
	
    return 0;
}