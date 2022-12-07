#include <iostream>
#include <array>
using namespace std;
int size;
bool is_full(int front, int back)
{
    if (back == size - 1)
        return true;
    return false;
}
bool is__empty(int front, int back)
{
    if (front == -1 && back == -1)
        return true;
    return false;
}
void print_q(int *v, int front, int back)
{
    while (front <= back)
    {
        cout << v[(front)++] << " ";
    }
    if (front == back)
    {
        front = back = -1;
    }
    return;
}
void enque(int *v, int data, int *front, int *back)
{
    if (is__empty(*front, *back))
    {
        *front = *back = 0;
        v[(*back)] = data;
        return;
    }
    if (is_full(*front, *back))
    {
        cout << "queue is full ";
        return;
    }
    else
    {
        (*back)++;
        v[*back] = data;
        return;
    }
}
void deque(int *v, int *front, int *back)
{
    if (is__empty(*front, *back))
    {
        cout << "queue is empty ";
        return;
    }
    if (*front == *back)
    {
        cout << (*front) + 1 << "th element which is " << v[*front] << " has been removed ";
        v[*front] = NULL;
        *front = *back = -1;
        return;
    }
    else
    {
        cout << (*front) + 1 << "th element which is " << v[*front] << " has been removed ";
        v[*front] = NULL;
        (*front)++;
    }
}
int main()
{
    cout << "enter the size of the queue: ";
    cin >> size;
    int array[size];
    int front = -1, back = -1;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        enque(array, temp, &front, &back);
    }
    print_q(array, front, back);
    cout << endl;
    deque(array, &front, &back);
    cout << endl;
    print_q(array, front, back);
    return 0;
}