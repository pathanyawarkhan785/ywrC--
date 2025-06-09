#include <iostream>

using namespace std;

class classYawar
{

public:
    classYawar(string s)
    {
        setName(s);
    }

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
    classYawar classYawarObj("james");
    cout << classYawarObj.getName();

    return 0;
}