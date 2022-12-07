// methods to access to any private member of any class

#include <iostream>
using namespace std;

class Employee
{
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}