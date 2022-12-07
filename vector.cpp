#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> p{4, 5, 2, 1}; /*
        for (int i = 0; i < 6; i++)
            cin >> p[i];*/
    for (int i : p)
        cout << i << " ";
    p.push_back(78);
    p.push_back(100);
    for (int i : p)
        cout << i << " ";

    return 0;
}