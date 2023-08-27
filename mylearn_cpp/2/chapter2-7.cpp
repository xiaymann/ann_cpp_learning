#include <iostream>
#include <cmath>

using namespace std;
int hours(void);
int minutes(void);

int main(void)
{
	int hour = hours();
	int minute = minutes();
	cout << "Time: " << hour << ":" << minute << endl;
	return 0;
}

int hours(void)
{
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	return hour;
}
int minutes(void)
{
	cout << "Enter the number of minutes: ";
	int minute;
	cin >> minute;
	return minute;
}
