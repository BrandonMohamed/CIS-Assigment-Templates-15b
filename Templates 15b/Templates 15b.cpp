//Brandon Mohamed
//CIS 1202.501

#include <cmath>
#include <iostream>

using namespace std;

template<class F>
F half(F num)
{
    return num /= 2.0f;
}

int half(int);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;

    cout << half(b) << endl;

    cout << half(c) << endl;

    return 0;

}

int half(int c)
{
    return round(static_cast<float>(c) / 2.0f);
}