#include<iostream>
using namespace std;

class A
{
    int a;
		public  :
	        void setData(char d)
			{
	            cout <<"Enter the "<< d <<" :- ";
	            cin  >>a;
	        }
	        void getData()
			{
	            cout << "A : "<< a << endl;
	        }
	        operator < (A&c)
			{
	            if (this -> a < c.a)
				{
	                return true;
	            }
	            else
				{
	                return false;
	            }
	        }
};
int main()
{

    A a,b;
    a.setData('A');
    b.setData('B');

    if(a < b)
	{
        cout <<"b is larger......."<<endl;
    }
    else
	{
        cout <<"a is larger........ "<<endl;
    }
}
