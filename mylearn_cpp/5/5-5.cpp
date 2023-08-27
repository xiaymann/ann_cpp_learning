#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	const char * month[12] =
	{
		"Janurary",
		"Feburary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	int sales[12];
	int sum = 0;

	for(int i = 0; i < 12; i++)
	{
		cout << "Please enter the sales of " << month[i] << ":";
		cin >> sales[i];
		sum = sum + sales[i];
	}

	cout << "The sum is " << sum << "." << endl;
	return 0;
}

