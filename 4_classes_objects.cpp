#include <iostream>

using namespace std;

class newYawar
{
public:
    void func1()
    {
        cout << "Function 1\n";
    }
    void func7()
    {
        cout << "Function 7" << endl;
    }
};

int main()
{
    newYawar newYawarObj;
    newYawarObj.func1();
    newYawarObj.func7();

    return 0;
}