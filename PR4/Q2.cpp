#include<iostream>
using namespace std;

class dis{
	private :
		int feet;
		int inch;
	public : 
		void setData()
		{
			cout << "Enter feet :- ";
			cin >> feet ;
			cout << "Enter inch :- ";
			cin >> inch;
		}
		dis operator+ (dis d)
		{
			dis a;
			a.feet = feet + d.feet;
			a.inch = inch + d.inch;
			
			while(a.inch >= 12)
			{
				a.inch-=12;
				a.feet++;
			}
			return a;
		} 
		void getData()
		{
			cout<<"----------------"<<endl;
			cout<<"FEET :- "<< feet << endl;
			cout<<"INCH :- "<< inch << endl;
		}
};
main()
{
	dis d1,d2,d3;
	d1.setData();
	d2.setData();
	d3=d2+d1;
	d3.getData();	
}
