#include <iostream>

using namespace std;

void printNum(int x)
{
    cout << "Printing Integer : " << x << endl;
}

void printNum(float x)
{
    cout << "Printing Float : " << x << endl;
}

int main()
{
    int a = 10;
    float b = 20.33;

    printNum(a);
    printNum(b);

    return 0;
}