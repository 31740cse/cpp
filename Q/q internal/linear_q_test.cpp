#include <iostream>
using namespace std;
int size = 6;
bool is__full(int front, int rear)
{
    if (rear == size - 1)
        return true;
    return false;
}
bool is__empty(int front, int back)
{
    if (front == -1 && back == -1)
        return true;
    return false;
}
void enque(int *arr, int *front, int *rear, int data)
{
    if (is__full(*front, *rear))
    {
        cout << "q is already full";
        return;
    }
    if (is__empty(*front, *rear))
    {
        *front = *rear = 0;
        arr[*front] = data;
        return;
    }
    arr[++(*rear)] = data;
    return;
}
void deque(int *arr, int *front, int *rear)
{
    if (is__empty(*front, *rear))
    {
        cout << "queue is empty ";
        return;
    }
    if (*rear == 0)
    {
        cout << "poped element is " << arr[*rear];
        *rear = *front = -1;
        return;
    }
    cout << "poped element is " << arr[(*front)++];
}
int main()
{
    int arr[size];
    int front = -1, rear = -1;
    for (int i = 0; i < size; i++)
        enque(arr, &front, &rear, i + 5);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    deque(arr, &front, &rear);
}