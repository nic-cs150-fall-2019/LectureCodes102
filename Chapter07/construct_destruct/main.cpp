#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
    Test(int d=30);
    ~Test();
    int getData();
    void setData(int d);

private:
    void doubleUpData();
    int m_data;
};

Test::Test(int d)
{
    m_data = d;
}

Test::~Test()
{
    cout << "I'm dying! Goodbye my friend.\n";
}

int Test::getData()
{
    doubleUpData();
    return m_data;
}

void Test::setData(int d)
{
    m_data = d;
}

void Test::doubleUpData()
{
    m_data *= 2;
}

void testFunction()
{
    Test t;
    cout << "Inside test function\n";
}

int main()
{
    Test ts[2];
    vector<Test> tsVector;

    Test t;
    t.setData(3);
    tsVector.push_back(t);
    cout << tsVector[0].getData() << '\n';

    ts[0].setData(15);
    ts[1].setData(4);

    testFunction();

    cout << ts[0].getData() << '\n';
    cout << ts[1].getData() << '\n';
    return 0;
}