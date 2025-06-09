#include <iostream>

using namespace std;

int main()
{
    int num = 20;

    cout << "Enter input: ";
    cin >> num;

    switch (num)
    {

    case 10:
        cout << "you are minor." << endl;
        break;

    case 18:
        cout << "get your licence." << endl;
        break;

    case 40:
        cout << "you can drive." << endl;
        break;

    default:
        cout << "Enter correct input!" << endl;
    }

    return 0;
}