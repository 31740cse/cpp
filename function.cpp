/*

// function example
#include <iostream>
using namespace std;
int addition(int a, int b)
{
    int r;
    r = a + b;
    return (r);
}
int main()
{
    int z;
    z = addition(5, 3);
    cout << "The result is " << z;
    return 0;
}





// function example
#include <iostream>
using namespace std;

int subtraction(int a, int b)
{
    int r;
    r = a - b;
    return (r);
}
int main()
{
    int x = 5, y = 3, z;
    z = subtraction(7, 2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << subtraction(7, 2) << '\n';
    cout << "The third result is " << subtraction(x, y) << '\n';
    z = 4 + subtraction(x, y);
    cout << "The fourth result is " << z << '\n';
    return 0;
}



// passing parameters by reference





#include <iostream>
using namespace std;
void duplicate(int &a, int &b, int &c)
// void duplicate(int a, int b, int c)   //this is wrong way to take arguments
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    int x = 1, y = 3, z = 7;
    // duplicate(&x, &y, &z);  //this is wrong in c++
    duplicate(x, y, z); // this is right way to pass arguments
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    return 0;
}



// more than one returning value
#include <iostream>
using namespace std;

void prevnext(int x, int &prev, int &next)
{
    prev = x - 1;
    next = x + 1;
}
int main()
{
    int x = 100, y, z;
    prevnext(x, y, z);
    cout << "Previous=" << y << ", Next=" << z;
    return 0;
}



// default values in functions
#include <iostream>
using namespace std;

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}
int main()
{
    cout << divide(12);
    cout << endl;
    cout << divide(20, 4);
    return 0;
}

*/

// declaring functions prototypes
#include <iostream>
using namespace std;
void odd(int a);
void even(int a);
int main()
{
    int i;
    do
    {
        cout << "Type a number (0 to exit): ";
        cin >> i;
        odd(i);
    } while (i != 0);
    return 0;
}

void odd(int a)
{
    if ((a % 2) != 0)
        cout << "Number is odd.\n";
    else
        even(a);
}
void even(int a)
{
    if ((a % 2) == 0)
        cout << "Number is even.\n";
    else
        odd(a);
}