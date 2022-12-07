#include "iostream"
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "enter the numbers" << endl;
    cin >> a >> b >> c >> d;
    if (a > b && a > c && a > d)
        cout << a << " is the greatest" << endl;
    else if (b > c && b > d)
        cout << b << " is the greatest number";
    else if (c > d)
        cout << c << " is the greatest" << endl;
    else
        cout << d << " is the greatest";
    return 0;
}
