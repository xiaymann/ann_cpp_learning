#include <iostream>

using namespace std;

const double k = 60.0;

int main(void)
{
	int degrees, minutes, seconds;
	double latitude;

	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	latitude = degrees + (minutes + seconds / k) / k;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees" << endl;

	return 0;
}
