#include <iostream>

using namespace std;

int num = 20;

int main()
{
    int num = 40;
    cout << num << endl;

    // The scope resolution operator (::) forces access to the global variable num
    cout << ::num << endl;

    return 0;
}