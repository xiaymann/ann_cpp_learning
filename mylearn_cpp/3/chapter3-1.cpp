#include <iostream>

int main(void)
{
	using namespace std;

	cout << "Please input your height in inch(integer): ";
	int height;
	cin >> height;
	const int inch_to_foot = 12;
	int foot, inch;
	foot = height / inch_to_foot;
	inch = height % inch_to_foot;

	cout << "Your height is " << foot << " foot, " << inch << " inch." << endl;

	return 0;
}
