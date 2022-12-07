
/*




// arrays example
#include <iostream>
using namespace std;

int billy[] = {16, 2, 77, 40, 12071};
int n, result = 0;
int main()
{
    for (n = 0; n < 5; n++)
    {
        result += billy[n];
    }
    cout << result;
    return 0;
}



*/

// passing array by parameter

// arrays as parameters
#include <iostream>
using namespace std;

void printarray(int arg[], int length)
{
    for (int n = 0; n < length; n++)
        cout << arg[n] << " ";
    cout << "\n";
}
int main()
{
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray(firstarray, 3);
    printarray(secondarray, 5);
    cout << (sizeof(secondarray) / sizeof(int));
    return 0;
}