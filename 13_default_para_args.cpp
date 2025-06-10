#include <iostream>

using namespace std;

int add(int a = 10, int b = 20);

int main()
{
    cout << add(20) << endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}