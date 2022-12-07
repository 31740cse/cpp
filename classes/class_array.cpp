#include <iostream>
using namespace std;
class car
{

    int model[10];
};
int main()
{
    car arr;
    for (int i = 0; i < 5; i++)
        cin >> arr.model[i];
    for (int i = 0; i < 5; i++)
        cout << arr.model[i];
}