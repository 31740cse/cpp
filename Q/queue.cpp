#include <iostream>
#include <queue>
using namespace std;
void printq(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return;
}
int main()
{
    queue<int> r;
    r.push(1);
    r.push(2);
    r.push(3);
    cout << "size of " << r.size() << endl;
    cout << "size of " << r.front() << endl;
    cout << "size of " << r.back() << endl;
    printq(r);
    return 0;
}