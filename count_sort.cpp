#include <iostream>
using namespace std;
void sort(int *arr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    int *count = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    for (int i = 1; i <= n; i++)
        count[i] += count[i - 1];
    int temp[n];
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    sort(arr, 5);
}