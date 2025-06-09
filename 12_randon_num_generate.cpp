#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int countNum = 5;

    srand(time(0));

    for (int i = 0; i < countNum; i++)
        cout << (rand() % 10) + 1 << endl;

    return 0;
}