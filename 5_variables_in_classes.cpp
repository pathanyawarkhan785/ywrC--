#include <iostream>

using namespace std;

class classYawar
{
public:
    void setName(string s)
    {
        name = s;
    }

    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    classYawar classYawarObj;

    classYawarObj.setName("Pathan");
    cout << classYawarObj.getName();

    return 0;
}