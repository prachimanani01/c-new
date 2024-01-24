#include <iostream>
#include <string>

using namespace std;

class Employee 
{
    protected:
        string emp_name;
        string emp_email;
        string emp_password;

    public:
        void getEmployeeInfo() 
        {
            cout << "Enter employee name: ";
            getline(cin, emp_name);

            cout << "Enter employee email: ";
            getline(cin, emp_email);

            cout << "Enter employee password: ";
            getline(cin, emp_password);
        }

        void displayEmployeeInfo() {
           cout << "Employee Information:" <<endl;
            cout<< "Name: " << emp_name <<endl;
            cout<< "Email: " << emp_email <<endl;
           cout << "Password: " << emp_password <<endl;
        }
};


class ContactInfo 
{
    protected:
        string emp_contact;
        string emp_city;

    public:
        void getContactInfo() 
        {
            cout << "Enter employee contact: ";
            getline(cin, emp_contact);

            cout << "Enter employee city: ";
            getline(cin, emp_city);
        }

        void displayContactInfo() {
            cout<< "Contact Information:" <<endl;
            cout<< "Contact: " << emp_contact <<endl;
            cout<< "City: " << emp_city <<endl;
        }
};



class EmployeeInfo : public Employee, public ContactInfo{
public:

    void getEmployeeDetails() {
        getEmployeeInfo();
        getContactInfo();
        
    }

    void displayEmployeeDetails() {
        displayEmployeeInfo();
        displayContactInfo();
    }
};

int main() {
    
    EmployeeInfo employee;

    employee.getEmployeeDetails();
    cout << "\nEmployee Details:\n";
    employee.displayEmployeeDetails();

    return 0;
}
