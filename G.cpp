#include <iostream>
using namespace std;
int main()
{
    long long height, weight;
    cin >> height >> weight;
    if (height >= 150 && weight <= 80)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}