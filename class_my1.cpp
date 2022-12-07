#include <iostream>
using namespace std;
class fun
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    fun complex(fun o1, fun o2)
    {
        fun c3;
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        return c3;
    }
    void print(void)
    {
        cout << "the number is " << a << " + " << b << " i" << endl;
    }
};
int main()
{
    fun c1, c2, c3;
    c1.setnumber(2, 3);
    c2.setnumber(6, 7);

    c3.complex(c1, c2);
    c3.print();
    // c3.complex(c1, c2);
    //  c3.print();
}