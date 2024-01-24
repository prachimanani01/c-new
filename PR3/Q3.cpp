#include<iostream>

using namespace std;

class animal
{
    public :
        string name;
        int age;

    public :
        void set_value(int a,string n)
        {
            age = a;
            name = n;
        }
};

class zebra : public animal
{
    public :
        void zebramessage()
        {
            cout<<"The zebra name is "<<name<<".The zebra is "<<age<<" years old"<<endl;

        }
};  

class dolphin : public animal
{
    public :
        void dolphinmessage()
        {
            cout<<"The dolphin name is "<<name<<".The dolphin is "<<age<<" years old";
        }
};

int main()
{
    zebra zebra;
    dolphin dolphin;

    zebra.set_value(5,"prachi");
    dolphin.set_value(2,"Ruhi");

    zebra.zebramessage();
    dolphin.dolphinmessage();    
}
