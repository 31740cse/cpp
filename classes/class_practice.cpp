#include <iostream>
using namespace std;
struct car
{
private:
    // char name[10];

    int price[10];

public:
    void setprice(int i)
    {
        // int p;
        // cin >> p;
        cin >> price[i];
    }
    void getprice(int i)
    {
        cout << price[i] << " ";
    }
};

int main()
{
    car alto;
    int i;
    for (i = 0; i < 10; i++)
        alto.setprice(i);
    for (i = 0; i < 10; i++)
        alto.getprice(i);

    // getline(cin, alto.name);
    // cin.getline(alto.name, 10);
}
