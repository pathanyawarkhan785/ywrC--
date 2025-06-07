#include <iostream>

// without using namespace std;
// you would have to write : std::cout << "Hello, World!" << std::endl;

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    /*
    endl is not mandatory. It simply moves the cursor to the next line in the console output. However, you can achieve the same effect using "\n" like this:

    cout << "Hello World!\n";
    */
    return 0;
}