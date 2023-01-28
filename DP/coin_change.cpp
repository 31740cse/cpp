#include <iostream>
#include <cstring>
using namespace std;
int fun(int coins[], int sum, int n)
{
    int table[sum + 1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= sum; j++)
        {
            table[j] = table[j] + table[j - coins[i]];
        }
        for (auto i : table)
            cout << i << " ";
        cout << endl;
    }
    return table[sum];
}
int main()
{
    int coins[] = {1, 2, 3};
    int sum = 4;
    cout << fun(coins, sum, 3);
}