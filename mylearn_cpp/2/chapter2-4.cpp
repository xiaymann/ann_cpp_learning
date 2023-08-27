#include <iostream>

using namespace std;

int main(void)
{
	cout << "Please input your age: ";
	int age;
	int months;
	cin >> age;
	months = 12 * age;
	cout << "Your age in months is " << months << " ." << endl;
	return 0;
}

