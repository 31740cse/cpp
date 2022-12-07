#include <iostream>
using namespace std;

/*


// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.
class MyClass
{       // The class
public: // Access specifier
    MyClass()
    { // Constructor
        cout << "Hello World!";
    }
};

int main()
{
    MyClass myObj; // Create an object of MyClass (this will call the constructor)
    return 0;
}








// constructors with parameter

class Car
{                 // The class
public:           // Access specifier
    string brand; // Attribute
    string model; // Attribute
    int year;     // Attribute
    Car(string x, string y, int z)
    { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}

*/

// constructor with outside defenition of function

class Car
{                                   // The class
public:                             // Access specifier
    string brand;                   // Attribute
    string model;                   // Attribute
    int year;                       // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}