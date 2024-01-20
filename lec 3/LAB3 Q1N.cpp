#include<iostream>
#include<string.h>

using namespace std;

class daimonds
{

	private :
		int id;
		char name[100];
		int staff_quantity;
		int revenue;
		int import_raw_diamonds;
		int export_diamonds;
		char ceo[100];
	
	public :
		daimonds(int id,char name,int staff_quantity,int revenue,int import_raw_diamonds,int export_diamonds,char ceo)
		{
		
			this->id=id;
			this->name[100]=name;
			this->staff_quantity=staff_quantity;
			this->revenue=revenue;
			this->import_raw_diamonds=import_raw_diamonds;
			this->export_diamonds=export_diamonds ;
			this->ceo[100]=ceo;
			
			cout<<"Enter id :- "<<id<<endl;
			cout<< "Enter name :- " <<name<<endl;
			cout<< "Enter staff count :- "<<staff_quantity<<endl;
			cout<< "Enter revenue :- " <<revenue<<endl;
			cout<< "Enter import raw diamonds :- "<<import_raw_diamonds<<endl;
			cout<< "Enter Exported daoimonds :- "<<export_diamonds<<endl;
			cout<< "Enter the ceo name :- "<<ceo<<endl;
		}
};



int main()
{
	int i,a;
	
	cout<<"Enter N :- ";
	cin>>a;
	
	for(i=0;i<a;i++)
	{
		int id;
		char name[100];
		int staff_quantity;
		int revenue;
		int import_raw_diamonds;
		int export_diamonds;
		char ceo[100];
		
		cout<<"---------------------------"<<endl;
		cout<<"Enter id :- ";
		cin>>id;
		cout<<"Enter name :- ";
		cin>>name;
		cout<<"Enter staff_quantity :- ";
		cin>>staff_quantity;
		cout<<"Enter revenue of company :- ";
		cin>>revenue;
		cout<<"Enter import raw diamonds :- ";
		cin>>import_raw_diamonds;
		cout<<"Enter export_diamonds :- ";
		cin>>export_diamonds;
		cout<<"Enter name of ceo :- ";
		cin>>ceo;
		cout<<"-----------------------------"<<endl;
		
		daimonds d(id,name[100],staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo[100]);
	}
	

return 0;

}

