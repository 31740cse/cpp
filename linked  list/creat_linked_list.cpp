#include <iostream>
using namespace std;
class node
{
public:
    int data;
    class node *next;
};
int main()
{
    node *head = new (node);
    head->next = NULL;
    head->data = 1;
    node *ptr = head;
    // ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}