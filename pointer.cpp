
/*


// my first pointer
#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;
    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    return 0;
}





// more pointers
#include <iostream>
using namespace std;

int main()
{
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;
    p1 = &firstvalue;
    p2 = &secondvalue;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;

    // p1 = address of firstvalue
    // p2 = address of secondvalue
    // value pointed by p1 = 10
    // value pointed by p2 = value pointed by
    //  p1 = p2 (value of pointer is copied)
    //  value pointed by p1 = 20
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    return 0;
}





// more pointers
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";
    return 0;
}





// increaser
#include <iostream>
using namespace std;

void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}
int main()
{
    char a = 'x';
    int b = 1602;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));
    cout << a << ", " << b << endl;
    return 0;
}



*/

// pointer to functions
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return (a + b);
}
int subtraction(int a, int b)
{
    return (a - b);
}
int operation(int x, int y, int (*functocall)(int, int)) // or int operation(int x, int y, addition(int, int))
{
    int g;
    g = (*functocall)(x, y); // or   g = addition(x, y);
    return (g);
}
int main()
{
    int m, n;
    int (*minus)(int, int) = subtraction;
    m = operation(7, 5, addition);
    n = operation(20, m, minus);
    cout << n;
    return 0;
}