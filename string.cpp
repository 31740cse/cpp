// cin with strings
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}


// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    string mystr;
    float price = 0;
    int quantity = 0;
    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;
    return 0;
}*/

/*



// this is used for take input of full sentence
//   cin.getline(s, 200);
// charecter array input
#include <iostream>

#include <cstring>

using namespace std;

int main()
{
    char s[200];

    cout << "enter the sentence ";

    cin.getline(s, 200);
    // s[5] = 'l';
    // cout << s;
    // cout << s[8];
    for (int i = 0; s[i] != '\0'; i++)
        cout << s[i];
}

*/

// string input

#include <iostream>

#include <cstring>

using namespace std;

int main()
{
    string s;
    // char *ptr;
    cout << "enter the sentence ";

    getline(cin, s);
    s[5] = 'l';
    // cout << s;
    // cout << s[8];
    for (int i = 0; s[i] != '\0'; i++)
        cout << s[i];
}
