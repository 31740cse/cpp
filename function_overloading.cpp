// overloaded function

#include <iostream>
using namespace std;
int operate(float a, float b)
{
    return (a * b);
}
float operate(int a, float b)
{
    return (a / b);
}
int main()
{
    int x = 5, y = 2;
    float n = 5.0, m = 2.0;
    cout << operate(x, y);
    cout << "\n";
    cout << operate(n, m);
    cout << "\n";
    return 0;
}

// Notice that a function cannot be overloaded only by its return type. At least one of its parameters must have a
//  different type.