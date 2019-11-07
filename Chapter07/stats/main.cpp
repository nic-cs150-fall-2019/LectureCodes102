#include <iostream>
using namespace std;

const int NUM_DATA = 30;

// class Stats
// double data store 30
// functions: total, average, lowest, highest
// boolean storeValue (double) -> store it in array
class Stats
{
public:
    Stats();
    double computeTotal();
    double computeAverage();
    double getLowest();
    double getHighest();
    bool storeValue(double value);

private:
    double m_data[NUM_DATA];
    int m_numValues;
};

Stats::Stats()
{
    m_numValues = 0;
}

double Stats::computeTotal()
{
    double total = 0; // aggregation variable
    for (int i = 0; i < m_numValues; ++i)
    {
        total += m_data[i];
    }
    return total;
}

double Stats::computeAverage()
{
    return computeTotal() / m_numValues;
}

double Stats::getLowest()
{
    double lowest = m_data[0];
    for (int i = 1; i < m_numValues; ++i)
    {
        if (m_data[i] < lowest)
        {
            lowest = m_data[i];
        }
    }

    return lowest;
}

double Stats::getHighest()
{
    double highest = m_data[0];
    for (int i = 1; i < m_numValues; ++i)
    {
        if (m_data[i] > highest)
        {
            highest = m_data[i];
        }
    }

    return highest;
}

bool Stats::storeValue(double value)
{
    // stores value into the array
    // keep track of how many values are currently in the array
    // make sure that no more than 30 values are accepted
    bool success = false;  // flag variable to determine if array was updated
    if (m_numValues < NUM_DATA)
    {
        m_data[m_numValues] = value;
        ++m_numValues;
        success = true;
        //return true;
    }

    return success;
    // return false;
}

int main()
{
    Stats st;

    for (int i = 0; i < 3; ++i)
    {
        double val;
        cout << "Enter number: ";
        cin >> val;
        st.storeValue(val);
    }

    cout << "Total: " << st.computeTotal() << '\n';
    cout << "Average: " << st.computeAverage() << '\n';
    cout << "Highest: " << st.getHighest() << '\n';
    cout << "Lowest: " << st.getLowest() << '\n';

    return 0;
}