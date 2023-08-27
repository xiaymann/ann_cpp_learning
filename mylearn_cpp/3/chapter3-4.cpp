#include <iostream>

using namespace std;

const int k1 = 60;
const int k2 = 3600;
const int k3 = 3600 * 24;

int main(void)
{
	cout << "Enter the number of seconds: ";
	long long time;
	cin >> time;

	long days, hours, minutes, seconds;

	days = time / k3;
	hours = time % k3 / k2;
	minutes = time % k3 % k2 / k1;
	seconds = time % k3 % k2 % k1;

	cout << time << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
	return 0;
}
