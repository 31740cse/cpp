#include <stdio.h>
#include <iostream>

using namespace std;
struct student
{
    int roll_no;
    char name[20];
};
int main()
{
    student obj;
    cout << "enter roll number and name ";
    cin >> obj.roll_no;
    // cin >> obj.name;
    student *ptr;
    ptr = &obj;
    cin.getline((*ptr), 20);
    cout << "values are ";
    cout << ptr->name << endl;
    cout << ptr->roll_no;
}
