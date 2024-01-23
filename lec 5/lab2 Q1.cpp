#include<iostream>
using namespace std;

class RBI{
	public:
		void getRBI(){
		int principal;
	    static float rate=12.5;
		int tenure;
			cout<<"Enter Principal :- ";
			cin>>principal;
			cout<<"Enter tenure :- ";
			cin>>tenure;
			cout<<"Rate of interests is :- "<<principal*rate*tenure<<endl;	
		}
};

class SBI:public RBI
{
	public:
		void getSBI(){
			cout<<"_________"<<endl;
			cout<<"SBI BANK"<<endl;
			
		}	
};

class BOB : public RBI
{
	public:
		void getBOB(){
			cout<<"_________"<<endl;	
			cout<<"BOB BANK"<<endl;
			
		}	
};

class ICICI : public RBI
{
	public:
		void getICICI(){
			cout<<"_________"<<endl;
			cout<<"ICICI BANK"<<endl;
			
		}	
};
int main(){
	SBI s1;
	BOB b1;
	ICICI i1;
	
	s1.getSBI();
	s1.getRBI();
	b1.getBOB();
	b1.getRBI();
	i1.getICICI();
	i1.getRBI();
	return 0;
}
