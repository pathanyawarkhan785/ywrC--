#include <iostream>

using namespace std;

// 1 2 3
// 4 5 6

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int rowSize = sizeof(arr) / sizeof(arr[0]);
    int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
            cout << arr[i][j] << endl;
    }

    return 0;
}