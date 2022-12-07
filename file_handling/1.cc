#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // file writing

    /* fstream file;
     file.open("sahu.txt", ios::out);
     if (file.is_open())
     {
         file << "hello" << endl;
         file << "this is the second line";
         file.close();
     }*/

    // file reading
    /*
        fstream file;
        file.open("sahu.txt", ios::in);
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
        }
        */

    // file appneding

    fstream file;
    file.open("sahu.txt", ios::app);
    if (file.is_open())
    {
        file << "\nhey you stop there";
        file.close();
    }
    system("clear");
}
