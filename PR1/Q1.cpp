#include<iostream>

using namespace std;

class Distance
{

    public:
    
    int feet;
    int inch;
};

int main()
{

    Distance h;
    Distance h1;
    
    int sum=0,sum1=0;
    
    cout<<"enter feet :- ";
    cin>>h.feet;
    
    cout<<"enter inch :- ";
    cin>>h.inch;
    
    cout<<"enter feet 1:- ";
    cin>>h1.feet;
    
    cout<<"enter inch 1:- ";
    cin>>h1.inch;
    
    
    
    sum = h.feet+h1.feet;
    sum1 = h.inch+h1.inch;
    
    if(h.inch>=12)
    {
        h.feet++;
        h.inch=h.inch-12;
    }
    
    if(h1.inch>=12)
    {
        h1.feet++;
        h1.inch=h1.inch-12;
    }
    
    cout<<"ans feet = "<<sum<<endl;
    cout<<"ans inch  = "<<sum1<<endl;
    
    return 0;

}