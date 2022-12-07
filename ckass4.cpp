#include <iostream>
int sum = 0;
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter the id of your item no one " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
        sum += itemprice[i];
    }
}
int main()
{
    shop store;
    store.initcounter();
    store.setprice();
    store.setprice();
    store.setprice();
    store.setprice();
    store.displayprice();
    cout << "the sum of items of your cart is " << sum << endl;
    return 0;
}