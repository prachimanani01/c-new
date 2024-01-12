#include <iostream>

using namespace std;

class Time 
{
    public:
        int hour;
    	int minute;
    	int second;
};

int main() 
{
	Time t;
	
	cout<<"Enter time -"<<endl;
    cout<<"Enter hour :- ";
    cin>>t.hour;
    cout<<"Enter minute :- ";
    cin>>t.minute;
    cout<<"Enter second :- ";
    cin>>t.second;
    
    cout<<endl<<"The time is= "<<t.hour<<":"<<t.minute<<":"<<t.second;
    return 0;
}