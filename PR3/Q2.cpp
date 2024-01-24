#include<iostream>

using namespace std;

class mother 
{
	public :
		void diplay()
		{
			cout<<"I Am Your Motherrr..." << endl;	
		}
		
};
class daugther:public mother 
{
	public :
		void diplay()
		{
			cout<<"I Am Your Daughterrr..." << endl;	
		}
		
};

int main()
{
	daugther d;
	d.daugther::diplay();
	d.mother::diplay();
}
