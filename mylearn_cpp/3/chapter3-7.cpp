#include <iostream>

using namespace std;

const float KM100_MILE = 62.14;
const float GAL_L = 3.785;

int main(void)
{
	cout << "Enter the oil consumption(L/100km): ";
	double europe;
	cin >> europe;

	double us;
	us = KM100_MILE * GAL_L / europe;
	cout << "The fuel consume is " << us << " in US." << endl;

	return 0;
}
