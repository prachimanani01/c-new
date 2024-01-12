#include<iostream>

using namespace std;

class House
{
	public:
		int housenumber;
		int room;
		char soc_name[100];
		char area[100];
		char city[100];
		char state[100];
};
int main()
{
	House h;
	
	cout<<"enter your house number :- ";
	cin>>h.housenumber;
	cout<<"enter number of rooms :- ";
	cin>>h.room;
	cout<<"enter your society name :- ";
	cin>>h.soc_name;
	cout<<"enter your area :- ";
	cin>>h.area;
	cout<<"enter your city name :- ";
	cin>>h.city;
	cout<<"enter your state name :- ";
	cin>>h.state;
	
	cout<<"House number is :- "<<h.housenumber<<endl;
	cout<<"Rooms :- "<<h.room<<endl;
	cout<<"Society name is :- "<<h.soc_name<<endl;
	cout<<"Area is :- "<<h.area<<endl;
	cout<<"City is :- "<<h.city<<endl;
	cout<<"State is :- "<<h.state;
	
	return 0;
}