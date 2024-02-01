#include<iostream>
using namespace std;

class Calculation{
	public:
		void Calculate(int a,int b){
			cout<<"The Answer of "<<a<<" / "<<b<<" is : "<<a/b<<endl;
		}
		void Calculate(int a,int b,int c){
			cout<<"The Answer of "<<a<<" - "<<b<<" - "<<c<<" is : "<<a-b-c<<endl;
		}
		void Calculate(int a,int b,int c,int d){
			cout<<"The Answer of "<<a<<" * "<<b<<" * "<<c<<" * "<<d<<" is : "<<a*b*c*d<<endl;
		}
		void Calculate(int a,int b,int c,int d,int e){
			cout<<"The Answer of "<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" + "<<e<<" is : "<<a+b+c+d+e<<endl;
		}
};
int main(){
	Calculation c;
	c.Calculate(3,1,1);
	return 0;
}
