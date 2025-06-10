#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num < 0)
    {
        cout << "Enter correct input!" << endl;
        return -1;
    }

    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int num;

    cout << "Enter num: ";
    cin >> num;

    cout << factorial(num);

    return 0;
}