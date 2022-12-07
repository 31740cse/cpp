// #include <iostream>
// using namespace std;

// int main(){
//     cout<< "ravi prakash sahu";
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int ram(5);
    char ch;
    cout << "enter keys X tp stop. \n";
    do
    {
        cout << ": ";

        cin >> ch;
    } while (ch != 'x');
    cout << ram;
    return 0;
}