/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{

    int *ptr;
    ptr = new int;
    *ptr = 4;
    cout << "enter you name here";
    cout << "\n"
         << *ptr;
}


*/

#include <iostream>
//#include <string>
#include <cstring>
//#include <sstream>
using namespace std;

int main()
{
    char *s;

    s = new (char[50]);
    cout << "enter the sentence ";

    // getline(cin, s);
    cin.getline(s, 50);
    s[5] = 'l';
    cout << s;
    cout << s[8];
    delete (s);
}