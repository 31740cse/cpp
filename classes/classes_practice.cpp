#include <iostream>
using namespace std;
class car
{
public:
    string owner;
    int price;
    void greet();
    int model;
};
void car::greet()
{
    cout << "hello sir how are you ";
}
int main()
{
    car tata;
    tata.greet();
    return 0;
}