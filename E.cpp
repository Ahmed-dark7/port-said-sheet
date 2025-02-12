#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
	cout << fixed << setprecision(9);
	double R , BIE = 3.141592653 , result;
	cin >> R;
	result = BIE * pow(R, 2);
	cout << result;

	return 0;
}