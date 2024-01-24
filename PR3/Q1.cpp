#include<iostream>
using namespace std;

class area{
	protected :
		int  width,height;
	public :
		area()
		{
			cout << "Enter width :";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};
class triangle : public area {
	public :
		void trianglearea()
		{
			cout<<"Triangle area : "<< (width*height)/2<<endl;
		}
				
	
};
class Rectangle : public area {
	public :
		void Rectanglearea()
		{
			cout<<"Rectangle area : " <<width*height<<endl;
		}	
};

 main()
{
	Rectangle r2;
	r2.Rectanglearea();
	triangle t1;
	t1.trianglearea();
}
